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
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
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
struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    char* attribute;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct tuple2$2sNodephsNodeph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2sNodephsNodephph
{
    struct tuple2$2sNodephsNodeph* item;
    struct list_item$1tuple2$2sNodephsNodephph* prev;
    struct list_item$1tuple2$2sNodephsNodephph* next;
};

struct list$1tuple2$2sNodephsNodephph
{
    struct list_item$1tuple2$2sNodephsNodephph* head;
    struct list_item$1tuple2$2sNodephsNodephph* tail;
    int len;
    struct list_item$1tuple2$2sNodephsNodephph* it;
};

struct sArrayInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2sNodephsNodephph* initializer;
};

struct tuple2$2voidpsNodeph
{
    void* v1;
    struct sNode* v2;
};

struct sStructInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* initializer;
};

struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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
static void buffer_finalize(struct buffer* self);
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
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
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile_v5(struct sInfo* info);
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
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarph_remove(struct map$2charphsVarph* self, char* key);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self);
static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item);
static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self);
static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self);
static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self);
static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self);
static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2);
static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static void sNewChannel_finalize(struct sNewChannel* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sNode* expression_node_v95(struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3643, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3650, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3659, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3666, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3673, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3680, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3687, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4015, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4020, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4025, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4030, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4035, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4068, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4070, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4075, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4077, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4082, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4084, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4089, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4091, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4096, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4098, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4103, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4105, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4110, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4112, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4117, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4122, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4127, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4132, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4137, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4142, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4147, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4152, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4157, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4162, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4167, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4172, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4177, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4182, "vector$1double")),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_185;
int i_186;
    result_185=(_Bool)0;
    for(    i_186=0;    i_186<len;    i_186++    ){
        if(        strncmp(self[i_186],str,strlen(self[i_186]))==0) {
            result_185=(_Bool)1;
            break;
        }
    }
    return result_185;
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
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result59__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result62__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result64__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result66__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result69__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result74__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result76__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_128;
struct list$1char* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_128=0;    i_128<num_value;    i_128++    ){
        list$1char_push_back(self,values[i_128]);
    }
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_129;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_131;
struct list$1char* __result78__;
    if(    self->len==0) {
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1154, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1164, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1174, "list_item$1char"))));
        litem_131->prev=self->tail;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail->next=litem_131;
        self->tail=litem_131;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_132;
struct list_item$1char* prev_it_133;
    it_132=self->head;
    while(it_132!=((void*)0)) {
        prev_it_133=it_132;
        it_132=it_132->next;
        come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_134;
struct list$1charp* __result82__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1charp_push_back(self,values[i_134]);
    }
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_135;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_137;
struct list$1charp* __result81__;
    if(    self->len==0) {
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1154, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1164, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1174, "list_item$1charp"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_138;
struct list_item$1charp* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1short* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1short_push_back(self,values[i_140]);
    }
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_141;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_143;
struct list$1short* __result84__;
    if(    self->len==0) {
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1154, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1164, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1174, "list_item$1short"))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_144;
struct list_item$1short* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1int* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1int_push_back(self,values[i_146]);
    }
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_147;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_149;
struct list$1int* __result87__;
    if(    self->len==0) {
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1154, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1164, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1174, "list_item$1int"))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_150;
struct list_item$1int* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1long* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1long_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_153;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_155;
struct list$1long* __result90__;
    if(    self->len==0) {
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1154, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1164, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1174, "list_item$1long"))));
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

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_156;
struct list_item$1long* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1float* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1float_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_159;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_161;
struct list$1float* __result93__;
    if(    self->len==0) {
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1154, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1164, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1174, "list_item$1float"))));
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

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_162;
struct list_item$1float* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1double* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1double_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_165;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_167;
struct list$1double* __result96__;
    if(    self->len==0) {
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1154, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1164, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1174, "list_item$1double"))));
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

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_168;
struct list_item$1double* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result99__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1946, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_170;
    if(    0) {
        for(        i_170=0;        i_170<self->len;        i_170++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1946, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1946, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1946, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1946, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1946, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1946, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result149__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_208;
struct list_item$1charph* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_213;
char* __dec_obj29;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_214;
char* __dec_obj30;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_215;
char* __dec_obj31;
struct list$1charph* __result151__;
    if(    self->len==0) {
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1154, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1164, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1174, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj33;
void* __right_value290 = (void*)0;
struct sType* __dec_obj86;
struct sNode* __dec_obj87;
void* __right_value291 = (void*)0;
struct list$1charph* __dec_obj88;
void* __right_value302 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj111;
char* __dec_obj112;
struct sStoreNode* __result230__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj86=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj87=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    ((void*)0);
    __dec_obj88=self->multiple_assign;
    self->multiple_assign=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(multiple_assign));
    come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    ((void*)0);
    __dec_obj111=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare));
    come_call_finalizer3(__dec_obj111,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj112=self->attribute;
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sStoreNode")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value304 = (void*)0;
struct sVar* var__304;
void* __right_value305 = (void*)0;
struct sType* type_326;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_327;
struct tuple3$3sTypephcharphsNodeph* it_330;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1 = (void*)0;
struct sType* type_333=0;
char* var_name_334=0;
struct sNode* right_value_335=0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
_Bool __result247__;
void* __right_value308 = (void*)0;
struct sType* left_type_336;
_Bool Value_337;
_Bool __result248__;
void* __right_value309 = (void*)0;
struct CVALUE* come_value_338;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
_Bool Value_339;
void* __right_value313 = (void*)0;
struct CVALUE* right_value_340;
struct sType* right_type_341;
int i_342;
struct list$1charph* o2_saved_343;
char* it_346;
void* __right_value314 = (void*)0;
struct sVar* var__349;
void* __right_value315 = (void*)0;
struct sType* right_type2_350;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* multiple_var_name_355;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* __dec_obj127;
struct list$1charph* o2_saved_356;
char* it_357;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* right_type2_358;
struct sVar* var__359;
void* __right_value322 = (void*)0;
struct sType* var_type_360;
void* __right_value323 = (void*)0;
struct sType* left_type_361;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct CVALUE* right_value2_362;
void* __right_value326 = (void*)0;
char* __dec_obj128;
void* __right_value327 = (void*)0;
struct sType* __dec_obj129;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_363;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
char* __dec_obj130;
void* __right_value333 = (void*)0;
char* __dec_obj131;
void* __right_value334 = (void*)0;
struct sType* __dec_obj132;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sVar* var__364;
void* __right_value337 = (void*)0;
struct sType* type_365;
void* __right_value338 = (void*)0;
_Bool __result257__;
void* __right_value339 = (void*)0;
struct sType* left_type_366;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1sNodeph* o2_saved_367;
struct sNode* it_370;
_Bool Value_373;
void* __right_value342 = (void*)0;
struct CVALUE* come_value_374;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_375;
void* __right_value347 = (void*)0;
char* __dec_obj133;
void* __right_value348 = (void*)0;
struct sType* __dec_obj134;
void* __right_value352 = (void*)0;
struct sVar* var__379;
void* __right_value353 = (void*)0;
struct sType* type_380;
void* __right_value354 = (void*)0;
_Bool Value_381;
void* __right_value355 = (void*)0;
_Bool array_initializer_382;
void* __right_value356 = (void*)0;
_Bool struct_initializer_383;
void* __right_value357 = (void*)0;
_Bool new_channel_384;
void* __right_value358 = (void*)0;
struct CVALUE* right_value_385;
struct sType* right_type_386;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* var_type_387;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* left_type_388;
void* __right_value363 = (void*)0;
struct sVar* var__389;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value367 = (void*)0;
char* __dec_obj138;
void* __right_value368 = (void*)0;
struct sVar* var__391;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value372 = (void*)0;
char* __dec_obj139;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct CVALUE* come_value_393;
void* __right_value378 = (void*)0;
char* __dec_obj140;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value384 = (void*)0;
char* __dec_obj141;
void* __right_value385 = (void*)0;
struct sType* __dec_obj142;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value389 = (void*)0;
char* __dec_obj143;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* __dec_obj144;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct CVALUE* come_value_396;
void* __right_value397 = (void*)0;
char* __dec_obj145;
void* __right_value398 = (void*)0;
struct sType* __dec_obj146;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
_Bool __result265__;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value404 = (void*)0;
char* __dec_obj147;
void* __right_value405 = (void*)0;
struct sType* __dec_obj148;
_Bool Value_398;
void* __right_value406 = (void*)0;
_Bool new_channel_399;
void* __right_value407 = (void*)0;
struct CVALUE* right_value_400;
struct sType* right_type_401;
struct sClass* current_stack_frame_struct_402;
void* __right_value408 = (void*)0;
_Bool _if_conditional1;
struct sVar* parent_var_403;
struct sType* left_type_404;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
char* c_value_405;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct CVALUE* come_value_406;
void* __right_value414 = (void*)0;
char* __dec_obj149;
void* __right_value415 = (void*)0;
char* __dec_obj150;
void* __right_value416 = (void*)0;
struct sType* __dec_obj151;
_Bool __result266__;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
char* c_value_407;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct CVALUE* come_value_408;
void* __right_value422 = (void*)0;
char* __dec_obj152;
void* __right_value423 = (void*)0;
char* __dec_obj153;
void* __right_value424 = (void*)0;
struct sType* __dec_obj154;
_Bool __result267__;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
_Bool __result268__;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_409;
void* __right_value429 = (void*)0;
char* __dec_obj155;
void* __right_value430 = (void*)0;
char* __dec_obj156;
void* __right_value431 = (void*)0;
struct sType* __dec_obj157;
_Bool __result269__;
struct sVar* var__410;
_Bool __result270__;
void* __right_value432 = (void*)0;
struct sType* __dec_obj158;
void* __right_value433 = (void*)0;
struct sType* left_type_411;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value438 = (void*)0;
char* __dec_obj159;
void* __right_value439 = (void*)0;
struct sType* __dec_obj160;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value444 = (void*)0;
char* __dec_obj161;
void* __right_value445 = (void*)0;
struct sType* __dec_obj162;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value450 = (void*)0;
char* __dec_obj163;
void* __right_value451 = (void*)0;
struct sType* __dec_obj164;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct CVALUE* come_value_415;
void* __right_value454 = (void*)0;
char* __dec_obj165;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sType* __dec_obj166;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
_Bool __result271__;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct CVALUE* come_value_416;
void* __right_value461 = (void*)0;
char* __dec_obj167;
void* __right_value462 = (void*)0;
struct sType* __dec_obj168;
    if(    self->multiple_declare) {
        var__304=((struct sVar*)(__right_value304=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value304,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__304) {
            if(            var__304->mType->mHeap) {
                free_object(var__304->mType,var__304->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_326=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_326->mFunctionParam=(_Bool)0;
        for(        o2_saved_327=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_330=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_327));        !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_327));        it_330=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_327))        ){
            multiple_assign_var1=it_330;
            type_333=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_334=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_335=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var__304=((struct sVar*)(__right_value306=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,var_name_334)));
            come_call_finalizer3(__right_value306,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            var__304) {
                if(                var__304->mType->mHeap) {
                    free_object(var__304->mType,var__304->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                map$2charphsVarph_remove(info->lv_table->mVars,var_name_334);
            }
            add_variable_to_table(var_name_334,(struct sType*)come_increment_ref_count(sType_clone(type_333)),info);
            var__304=get_variable_from_table(info->lv_table,var_name_334);
            if(            var__304==((void*)0)) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_330);
                __result247__ = (_Bool)1;
                come_call_finalizer3(type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_334 = come_decrement_ref_count2(var_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_335) { right_value_335 = come_decrement_ref_count2(right_value_335, ((struct sNode*)right_value_335)->finalize, ((struct sNode*)right_value_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_327,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result247__;
            }
            left_type_336=(struct sType*)come_increment_ref_count(sType_clone(var__304->mType));
            if(            right_value_335) {
                Value_337=node_compile(right_value_335,info);
                if(                !Value_337) {
                    __result248__ = (_Bool)0;
                    come_call_finalizer3(type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_334 = come_decrement_ref_count2(var_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_335) { right_value_335 = come_decrement_ref_count2(right_value_335, ((struct sNode*)right_value_335)->finalize, ((struct sNode*)right_value_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_327,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result248__;
                }
                else {
                }
                come_value_338=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value310=make_define_var(left_type_336,var__304->mCValueName,(_Bool)0,info))),come_value_338->c_value);
                __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(come_value_338,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__304->mCValueName,((char*)(__right_value311=make_type_name_string(left_type_336,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value312=make_define_var(left_type_336,var__304->mCValueName,(_Bool)0,info))));
                __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_334 = come_decrement_ref_count2(var_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_value_335) { right_value_335 = come_decrement_ref_count2(right_value_335, ((struct sNode*)right_value_335)->finalize, ((struct sNode*)right_value_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_327,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_339=node_compile(self->right_value,info);
        if(        !Value_339) {
            return (_Bool)0;
        }
        else {
        }
        right_value_340=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_341=right_value_340->type;
        dec_stack_ptr(1,info);
        if(        right_type_341->mRefferenceOriginalType&&right_type_341->mRefferenceOriginalType->v1) {
            right_type_341=right_type_341->mRefferenceOriginalType->v1;
        }
        if(        right_type_341->mNoSolvedGenericsType->v1) {
            right_type_341=right_type_341->mNoSolvedGenericsType->v1;
        }
        i_342=0;
        for(        o2_saved_343=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_346=list$1charph_begin((o2_saved_343));        !list$1charph_end((o2_saved_343));        it_346=list$1charph_next((o2_saved_343))        ){
            if(            i_342<list$1sTypeph_length(right_type_341->mGenericsTypes)) {
                var__349=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_operator_load_element(info->lv_table->mVars,it_346));
                if(                var__349) {
                    if(                    var__349->mType->mHeap) {
                        free_object(var__349->mType,var__349->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    map$2charphsVarph_remove(info->lv_table->mVars,it_346);
                }
                right_type2_350=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(right_type_341->mGenericsTypes,i_342));
                right_type2_350->mFunctionParam=(_Bool)0;
                add_variable_to_table(it_346,(struct sType*)come_increment_ref_count(sType_clone(right_type2_350)),info);
                come_call_finalizer3(var__349,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_350,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_342++;
        }
        come_call_finalizer3(o2_saved_343,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        static int num_multiple_var_354=0;
        multiple_var_name_355=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_354));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value318=make_define_var(right_value_340->type,multiple_var_name_355,(_Bool)0,info))));
        __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_355,right_value_340->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_355,right_value_340->c_value);
        }
        __dec_obj127=right_value_340->c_value;
        right_value_340->c_value=(char*)come_increment_ref_count(string_clone(multiple_var_name_355));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        i_342=0;
        for(        o2_saved_356=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_357=list$1charph_begin((o2_saved_356));        !list$1charph_end((o2_saved_356));        it_357=list$1charph_next((o2_saved_356))        ){
            if(            i_342<list$1sTypeph_length(right_type_341->mGenericsTypes)) {
                right_type2_358=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value320=list$1sTypephp_operator_load_element(right_type_341->mGenericsTypes,i_342))), "07var.c", 135, 1))));
                come_call_finalizer3(__right_value320,sType_finalize, 0, 1, 0, 0, (void*)0);
                var__359=get_variable_from_table(info->lv_table,it_357);
                var_type_360=(struct sType*)come_increment_ref_count(sType_clone(var__359->mType));
                var_type_360->mStatic=(_Bool)0;
                left_type_361=(struct sType*)come_increment_ref_count(sType_clone(var__359->mType));
                right_value2_362=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 144, "CVALUE"))));
                __dec_obj128=right_value2_362->c_value;
                right_value2_362->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_340->c_value,i_342+1));
                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj129=right_value2_362->type;
                right_value2_362->type=(struct sType*)come_increment_ref_count(sType_clone(right_type2_358));
                come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
                right_value2_362->var=((void*)0);
                come_value_363=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 150, "CVALUE"))));
                check_assign_type(((char*)(__right_value331=xsprintf("\%s is assining to}",((char*)(__right_value330=string_to_string(self->name)))))),left_type_361,right_type2_358,come_value_363,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                right_type2_358->mHeap&&left_type_361->mHeap&&left_type_361->mPointerNum>0&&right_type2_358->mPointerNum>0) {
                    std_move(left_type_361,right_type2_358,right_value2_362,info,(_Bool)0);
                    __dec_obj130=come_value_363->c_value;
                    come_value_363->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__359->mCValueName,right_value2_362->c_value));
                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj131=come_value_363->c_value;
                    come_value_363->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__359->mCValueName,right_value2_362->c_value));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj132=come_value_363->type;
                come_value_363->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_361));
                come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_363->var=var__359;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value335=make_define_var(left_type_361,var__359->mCValueName,(_Bool)0,info))));
                __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_363->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_363->c_value);
                }
                come_call_finalizer3(right_type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value2_362,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_363,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_342++;
        }
        come_call_finalizer3(o2_saved_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        multiple_var_name_355 = come_decrement_ref_count2(multiple_var_name_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    self->right_value==((void*)0)) {
        var__364=((struct sVar*)(__right_value336=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value336,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__364) {
            if(            var__364->mType->mHeap) {
                free_object(var__364->mType,var__364->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_365=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_365->mFunctionParam=(_Bool)0;
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_365)),info);
        var__364=get_variable_from_table(info->lv_table,self->name);
        if(        var__364==((void*)0)) {
            var__364=get_variable_from_table(info->gv_table,self->name);
            if(            var__364==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                __result257__ = (_Bool)1;
                come_call_finalizer3(type_365,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result257__;
            }
        }
        left_type_366=(struct sType*)come_increment_ref_count(sType_clone(var__364->mType));
        if(        left_type_366->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__364->mCValueName);
        }
        else if(        list$1sNodeph_length(left_type_366->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value340=make_define_var(left_type_366,var__364->mCValueName,(_Bool)0,info))));
            __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__364->mCValueName,((char*)(__right_value341=make_type_name_string(left_type_366,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_367=(struct list$1sNodeph*)come_increment_ref_count((left_type_366->mArrayNum)),it_370=list$1sNodeph_begin((o2_saved_367));            !list$1sNodeph_end((o2_saved_367));            it_370=list$1sNodeph_next((o2_saved_367))            ){
                Value_373=node_compile(it_370,info);
                if(                !Value_373) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_374=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"*(%s)",come_value_374->c_value);
                come_call_finalizer3(come_value_374,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_367,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value343=make_define_var(left_type_366,var__364->mCValueName,(_Bool)0,info))));
            __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_366->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__364->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__364->mCValueName,((char*)(__right_value344=make_type_name_string(left_type_366,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_375=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 243, "CVALUE"))));
            __dec_obj133=come_value_375->c_value;
            come_value_375->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__364->mCValueName));
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj134=come_value_375->type;
            come_value_375->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_366));
            come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_375->var=var__364;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_375));
            come_call_finalizer3(come_value_375,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !left_type_366->mClass->mNumber&&left_type_366->mPointerNum==0) {
            var__364->mType->mAllocaValue=(_Bool)1;
        }
        come_call_finalizer3(type_365,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc) {
        var__379=((struct sVar*)(__right_value352=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value352,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__379) {
            if(            var__379->mType->mHeap) {
                free_object(var__379->mType,var__379->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_380=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            type_380->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_380)),info);
            come_call_finalizer3(type_380,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        Value_381=node_compile(self->right_value,info);
        if(        !Value_381) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_382=string_operator_equals(((char*)(__right_value355=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        struct_initializer_383=string_operator_equals(((char*)(__right_value356=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        new_channel_384=string_operator_equals(((char*)(__right_value357=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_385=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_386=right_value_385->type;
        dec_stack_ptr(1,info);
        if(        self->type==((void*)0)) {
            right_type_386->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(right_type_386)),info);
        }
        else {
        }
        var__379=get_variable_from_table(info->lv_table,self->name);
        var_type_387=(struct sType*)come_increment_ref_count(sType_clone(var__379->mType));
        var_type_387->mStatic=(_Bool)0;
        if(        !array_initializer_382&&!struct_initializer_383&&!var__379->mType->mStatic&&!var_type_387->mConstant&&list$1sNodeph_length(var_type_387->mArrayNum)==0) {
            if(            var_type_387->mClass->mNumber) {
            }
            else if(            (var_type_387->mClass->mStruct||var_type_387->mClass->mUnion||var_type_387->mClass->mEnum)||var_type_387->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__379->mCValueName,((char*)(__right_value361=make_type_name_string(var_type_387,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        left_type_388=(struct sType*)come_increment_ref_count(sType_clone(var__379->mType));
        if(        array_initializer_382) {
            var__389=((struct sVar*)(__right_value363=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value363,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value364=make_define_var(var__389->mType,var__389->mCValueName,(_Bool)0,info))),right_value_385->c_value);
            __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_390=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 315, "CVALUE"))));
            __dec_obj138=come_value_390->c_value;
            come_value_390->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_390));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        struct_initializer_383) {
            var__391=((struct sVar*)(__right_value368=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value368,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value369=make_define_var(var__391->mType,var__391->mCValueName,(_Bool)0,info))),right_value_385->c_value);
            __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 325, "CVALUE"))));
            __dec_obj139=come_value_392->c_value;
            come_value_392->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        var__379->mType->mStatic||var__379->mType->mConstant) {
            check_assign_type(((char*)(__right_value374=xsprintf("\%s is assining to",((char*)(__right_value373=string_to_string(self->name)))))),left_type_388,right_type_386,right_value_385,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value375=make_define_var(left_type_388,var__379->mCValueName,(_Bool)0,info))),right_value_385->c_value);
            __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_393=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 336, "CVALUE"))));
            __dec_obj140=come_value_393->c_value;
            come_value_393->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_393));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_386->mHeap&&left_type_388->mHeap&&left_type_388->mPointerNum>0&&right_type_386->mPointerNum>0) {
            check_assign_type(((char*)(__right_value380=xsprintf("\%s is assining to",((char*)(__right_value379=string_to_string(self->name)))))),left_type_388,right_type_386,right_value_385,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            std_move(left_type_388,right_type_386,right_value_385,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value381=make_define_var(left_type_388,var__379->mCValueName,(_Bool)0,info))));
            __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 350, "CVALUE"))));
            __dec_obj141=come_value_394->c_value;
            come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__379->mCValueName,right_value_385->c_value));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj142=come_value_394->type;
            come_value_394->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_388));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_394->var=var__379;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
            add_come_last_code(info,"%s",come_value_394->c_value);
            come_call_finalizer3(come_value_394,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_388->mChannel&&new_channel_384) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value386=make_define_var(left_type_388,var__379->mCValueName,(_Bool)0,info))));
            __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__379->mCValueName);
            come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 364, "CVALUE"))));
            __dec_obj143=come_value_395->c_value;
            come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__379->mCValueName));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj144=come_value_395->type;
            come_value_395->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 366, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_395->type->mPointerNum=1;
            come_value_395->var=var__379;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
            add_come_last_code(info,"%s",come_value_395->c_value);
            come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_388->mPointerNum>0&&left_type_388->mHeap&&string_operator_equals(right_type_386->mClass->mName,"void")&&right_type_386->mPointerNum>0) {
            check_assign_type(((char*)(__right_value393=xsprintf("\%s is assining to",((char*)(__right_value392=string_to_string(self->name)))))),left_type_388,right_type_386,right_value_385,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value394=make_define_var(left_type_388,var__379->mCValueName,(_Bool)0,info))));
            __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 382, "CVALUE"))));
            __dec_obj145=come_value_396->c_value;
            come_value_396->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__379->mCValueName,right_value_385->c_value));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj146=come_value_396->type;
            come_value_396->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_388));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_396->var=var__379;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_396));
            add_come_last_code(info,"%s",come_value_396->c_value);
            come_call_finalizer3(come_value_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value400=xsprintf("\%s is assining to",((char*)(__right_value399=string_to_string(self->name)))))),left_type_388,right_type_386,right_value_385,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            right_type_386->mHeap&&left_type_388->mHeap&&left_type_388->mPointerNum>0&&right_type_386->mPointerNum>0) {
                std_move(left_type_388,right_type_386,right_value_385,info,(_Bool)0);
            }
            if(            left_type_388->mHeap&&!right_value_385->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result265__ = (_Bool)0;
                come_call_finalizer3(right_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result265__;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value401=make_define_var(left_type_388,var__379->mCValueName,(_Bool)0,info))));
            __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 407, "CVALUE"))));
            __dec_obj147=come_value_397->c_value;
            come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__379->mCValueName,right_value_385->c_value));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj148=come_value_397->type;
            come_value_397->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_388));
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_397->var=var__379;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
            add_come_last_code(info,"%s",come_value_397->c_value);
            come_call_finalizer3(come_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_387,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_398=node_compile(self->right_value,info);
        if(        !Value_398) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_399=string_operator_equals(((char*)(__right_value406=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_400=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_401=right_value_400->type;
        dec_stack_ptr(1,info);
        current_stack_frame_struct_402=info->current_stack_frame_struct;
        if(        (_if_conditional1=(current_stack_frame_struct_402&&((struct sVar*)(__right_value408=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),        come_call_finalizer3(__right_value408,sVar_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            parent_var_403=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_403!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_403->mFunName,info->come_fun->mName)) {
                    left_type_404=parent_var_403->mType;
                    if(                    left_type_404->mPointerNum>0&&right_type_401->mPointerNum>0&&right_type_401->mHeap&&left_type_404->mHeap) {
                        check_assign_type(((char*)(__right_value410=xsprintf("\%s is assigning to",((char*)(__right_value409=string_to_string(self->name)))))),left_type_404,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_405=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_403->mCValueName));
                        decrement_ref_count_object(parent_var_403->mType,c_value_405,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_404,right_type_401,right_value_400,info,(_Bool)0);
                        come_value_406=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 446, "CVALUE"))));
                        if(                        parent_var_403->mType->mOriginIsArray) {
                            __dec_obj149=come_value_406->c_value;
                            come_value_406->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj150=come_value_406->c_value;
                            come_value_406->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj151=come_value_406->type;
                        come_value_406->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_404));
                        come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_406->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_406->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_406));
                        __result266__ = (_Bool)1;
                        c_value_405 = come_decrement_ref_count2(c_value_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result266__;
                        c_value_405 = come_decrement_ref_count2(c_value_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else if(                    left_type_404->mPointerNum>0&&right_type_401->mPointerNum>0&&string_operator_equals(right_type_401->mClass->mName,"void")&&left_type_404->mHeap) {
                        check_assign_type(((char*)(__right_value418=xsprintf("\%s is assigning to",((char*)(__right_value417=string_to_string(self->name)))))),left_type_404,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_407=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_403->mCValueName));
                        decrement_ref_count_object(parent_var_403->mType,c_value_407,info,(_Bool)0,(_Bool)0);
                        come_value_408=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 470, "CVALUE"))));
                        if(                        parent_var_403->mType->mOriginIsArray) {
                            __dec_obj152=come_value_408->c_value;
                            come_value_408->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj153=come_value_408->c_value;
                            come_value_408->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj154=come_value_408->type;
                        come_value_408->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_404));
                        come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_408->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_408->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_408));
                        __result267__ = (_Bool)1;
                        c_value_407 = come_decrement_ref_count2(c_value_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result267__;
                        c_value_407 = come_decrement_ref_count2(c_value_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value426=xsprintf("\%s is assigning to",((char*)(__right_value425=string_to_string(self->name)))))),left_type_404,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        left_type_404->mHeap&&!right_value_400->type->mHeap) {
                            err_msg(info,"require right value as heap object(%s)",self->name);
                            __result268__ = (_Bool)0;
                            come_call_finalizer3(right_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result268__;
                        }
                        come_value_409=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 495, "CVALUE"))));
                        if(                        parent_var_403->mType->mOriginIsArray) {
                            __dec_obj155=come_value_409->c_value;
                            come_value_409->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj156=come_value_409->c_value;
                            come_value_409->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj157=come_value_409->type;
                        come_value_409->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_404));
                        come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_409->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_409->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_409));
                        __result269__ = (_Bool)1;
                        come_call_finalizer3(come_value_409,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result269__;
                        come_call_finalizer3(come_value_409,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__410=get_variable_from_table(info->lv_table,self->name);
        if(        var__410==((void*)0)) {
            var__410=get_variable_from_table(info->gv_table,self->name);
            if(            var__410==((void*)0)) {
                err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                __result270__ = (_Bool)1;
                come_call_finalizer3(right_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result270__;
            }
        }
        if(        var__410->mType==((void*)0)) {
            __dec_obj158=var__410->mType;
            var__410->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_401));
            come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_411=(struct sType*)come_increment_ref_count(sType_clone(var__410->mType));
        if(        (var__410->mType->mStatic||var__410->mType->mConstant)&&!var__410->mGlobal) {
            check_assign_type(((char*)(__right_value435=xsprintf("\%s is assining to",((char*)(__right_value434=string_to_string(self->name)))))),left_type_411,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 536, "CVALUE"))));
            __dec_obj159=come_value_412->c_value;
            come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__410->mCValueName,right_value_400->c_value));
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj160=come_value_412->type;
            come_value_412->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_411));
            come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_412->var=var__410;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
            add_come_last_code(info,"%s",come_value_412->c_value);
            come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_401->mHeap&&left_type_411->mHeap&&left_type_411->mPointerNum>0&&right_type_401->mPointerNum>0) {
            check_assign_type(((char*)(__right_value441=xsprintf("\%s is assining to",((char*)(__right_value440=string_to_string(self->name)))))),left_type_411,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_411,var__410->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_411,right_type_401,right_value_400,info,(_Bool)0);
            come_value_413=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 553, "CVALUE"))));
            __dec_obj161=come_value_413->c_value;
            come_value_413->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__410->mCValueName,right_value_400->c_value));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj162=come_value_413->type;
            come_value_413->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_411));
            come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_413->var=var__410;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_413));
            add_come_last_code(info,"%s",come_value_413->c_value);
            come_call_finalizer3(come_value_413,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_411->mPointerNum>0&&left_type_411->mHeap&&string_operator_equals(right_type_401->mClass->mName,"void")&&right_type_401->mPointerNum>0) {
            check_assign_type(((char*)(__right_value447=xsprintf("\%s is assining to",((char*)(__right_value446=string_to_string(self->name)))))),left_type_411,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_411,var__410->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 569, "CVALUE"))));
            __dec_obj163=come_value_414->c_value;
            come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__410->mCValueName,right_value_400->c_value));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj164=come_value_414->type;
            come_value_414->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_411));
            come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_414->var=var__410;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
            add_come_last_code(info,"%s",come_value_414->c_value);
            come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_411->mChannel&&new_channel_399) {
            come_value_415=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 580, "CVALUE"))));
            __dec_obj165=come_value_415->c_value;
            come_value_415->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__410->mCValueName));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj166=come_value_415->type;
            come_value_415->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 582, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_415->type->mPointerNum=1;
            come_value_415->var=var__410;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_415));
            add_come_last_code(info,"%s",come_value_415->c_value);
            come_call_finalizer3(come_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value458=xsprintf("\%s is assining to",((char*)(__right_value457=string_to_string(self->name)))))),left_type_411,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_411->mHeap&&!right_value_400->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result271__ = (_Bool)0;
                come_call_finalizer3(right_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result271__;
            }
            come_value_416=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 598, "CVALUE"))));
            __dec_obj167=come_value_416->c_value;
            come_value_416->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__410->mCValueName,right_value_400->c_value));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj168=come_value_416->type;
            come_value_416->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_411));
            come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_416->var=var__410;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_416));
            add_come_last_code(info,"%s",come_value_416->c_value);
            come_call_finalizer3(come_value_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result207__;
void* __right_value251 = (void*)0;
struct sType* result_266;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj62;
void* __right_value257 = (void*)0;
char* __dec_obj63;
void* __right_value258 = (void*)0;
char* __dec_obj64;
void* __right_value265 = (void*)0;
struct list$1sTypeph* __dec_obj68;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __dec_obj72;
void* __right_value274 = (void*)0;
struct list$1sTypeph* __dec_obj73;
void* __right_value281 = (void*)0;
struct list$1charph* __dec_obj77;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj78;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* __dec_obj80;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value286 = (void*)0;
char* __dec_obj82;
void* __right_value287 = (void*)0;
char* __dec_obj83;
void* __right_value288 = (void*)0;
char* __dec_obj84;
void* __right_value289 = (void*)0;
char* __dec_obj85;
struct sType* __result223__;
    if(    self==(void*)0) {
        __result207__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_266=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_266->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_266->mNoSolvedGenericsType;
        result_266->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_266->mOriginalLoadVarType;
        result_266->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj62=result_266->mRefferenceOriginalType;
        result_266->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj63=result_266->mInterfaceName;
        result_266->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj64=result_266->mGenericsName;
        result_266->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj68=result_266->mGenericsTypes;
        result_266->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj68,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj72=result_266->mArrayNum;
        result_266->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj72,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj73=result_266->mParamTypes;
        result_266->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj77=result_266->mParamNames;
        result_266->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj77,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj78=result_266->mResultType;
        result_266->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj79=result_266->mAlignas;
        result_266->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj80=result_266->mChannelType;
        result_266->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj80,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_266->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_266->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_266->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_266->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_266->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_266->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_266->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_266->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_266->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_266->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_266->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_266->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_266->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_266->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_266->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_266->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_266->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_266->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_266->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_266->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_266->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_266->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj81=result_266->mSizeNum;
        result_266->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_266->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj82=result_266->mOriginalTypeName;
        result_266->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_266->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_266->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_266->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_266->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_266->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_266->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj83=result_266->mAsmName;
        result_266->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_266->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_266->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_266->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_266->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_266->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj84=result_266->mTupleName;
        result_266->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj85=result_266->mAttribute;
        result_266->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_266;
    come_call_finalizer3(result_266,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result208__;
void* __right_value252 = (void*)0;
struct tuple1$1sTypeph* result_267;
void* __right_value253 = (void*)0;
struct sType* __dec_obj34;
struct tuple1$1sTypeph* __result209__;
    if(    self==(void*)0) {
        __result208__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    result_267=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj34=result_267->v1;
        result_267->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result209__ = gComeFunResultObject = __result_obj__ = result_267;
    come_call_finalizer3(result_267,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj37;
struct tuple1$1sTypeph* __dec_obj39;
char* __dec_obj41;
char* __dec_obj42;
struct list$1sTypeph* __dec_obj43;
struct list$1sNodeph* __dec_obj45;
struct list$1sTypeph* __dec_obj47;
struct list$1charph* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj51;
struct tuple1$1sTypeph* __dec_obj52;
struct sNode* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj35=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj41=self->mInterfaceName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj42=self->mGenericsName;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj43=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj45=self->mArrayNum;
            come_call_finalizer3(__dec_obj45,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj47=self->mParamTypes;
            come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj48=self->mParamNames;
            come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj49=self->mResultType;
            come_call_finalizer3(__dec_obj49,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_268;
struct list_item$1sTypeph* prev_it_269;
    it_268=self->head;
    while(it_268!=((void*)0)) {
        prev_it_269=it_268;
        it_268=it_268->next;
        come_call_finalizer3(prev_it_269,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_270;
struct list_item$1sTypeph* prev_it_271;
    it_270=self->head;
    while(it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        come_call_finalizer3(prev_it_271,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_272;
struct list_item$1sNodeph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        come_call_finalizer3(prev_it_273,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj46;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj46=self->item;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_274;
struct list_item$1sNodeph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer3(prev_it_275,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_276;
struct list_item$1charph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
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
struct list$1sTypeph* __result210__;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1sTypeph* result_278;
struct list_item$1sTypeph* it_279;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __result213__;
    if(    self==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_278=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1070, "list$1sTypeph"))));
    it_279=self->head;
    while(it_279!=((void*)0)) {
        list$1sTypeph_add(result_278,(struct sType*)come_increment_ref_count(sType_clone(it_279->item)));
        it_279=it_279->next;
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_278;
    come_call_finalizer3(result_278,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result211__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_280;
struct sType* __dec_obj65;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_281;
struct sType* __dec_obj66;
void* __right_value263 = (void*)0;
struct list_item$1sTypeph* litem_282;
struct sType* __dec_obj67;
struct list$1sTypeph* __result212__;
    if(    self->len==0) {
        litem_280=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1084, "list_item$1sTypeph"))));
        litem_280->prev=((void*)0);
        litem_280->next=((void*)0);
        __dec_obj65=litem_280->item;
        litem_280->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_280;
        self->head=litem_280;
    }
    else if(    self->len==1) {
        litem_281=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1094, "list_item$1sTypeph"))));
        litem_281->prev=self->head;
        litem_281->next=((void*)0);
        __dec_obj66=litem_281->item;
        litem_281->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_281;
        self->head->next=litem_281;
    }
    else {
        litem_282=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value263=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1104, "list_item$1sTypeph"))));
        litem_282->prev=self->tail;
        litem_282->next=((void*)0);
        __dec_obj67=litem_282->item;
        litem_282->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_282;
        self->tail=litem_282;
    }
    self->len++;
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result214__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1sNodeph* result_283;
struct list_item$1sNodeph* it_284;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __result219__;
    if(    self==((void*)0)) {
        __result214__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_283=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1070, "list$1sNodeph"))));
    it_284=self->head;
    while(it_284!=((void*)0)) {
        list$1sNodeph_add(result_283,(struct sNode*)come_increment_ref_count(sNode_clone(it_284->item)));
        it_284=it_284->next;
    }
    __result219__ = gComeFunResultObject = __result_obj__ = result_283;
    come_call_finalizer3(result_283,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result215__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_285;
struct sNode* __dec_obj69;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_286;
struct sNode* __dec_obj70;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_287;
struct sNode* __dec_obj71;
struct list$1sNodeph* __result216__;
    if(    self->len==0) {
        litem_285=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1084, "list_item$1sNodeph"))));
        litem_285->prev=((void*)0);
        litem_285->next=((void*)0);
        __dec_obj69=litem_285->item;
        litem_285->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_285;
        self->head=litem_285;
    }
    else if(    self->len==1) {
        litem_286=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1094, "list_item$1sNodeph"))));
        litem_286->prev=self->head;
        litem_286->next=((void*)0);
        __dec_obj70=litem_286->item;
        litem_286->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_286;
        self->head->next=litem_286;
    }
    else {
        litem_287=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1104, "list_item$1sNodeph"))));
        litem_287->prev=self->tail;
        litem_287->next=((void*)0);
        __dec_obj71=litem_287->item;
        litem_287->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_287;
        self->tail=litem_287;
    }
    self->len++;
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result217__;
void* __right_value271 = (void*)0;
struct sNode* result_288;
struct sNode* __result218__;
    if(    self==(void*)0) {
        __result217__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_288=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_288->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_288->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_288->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_288->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_288->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_288->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_288->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_288->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_288->kind=self->kind;
    }
    __result218__ = gComeFunResultObject = __result_obj__ = result_288;
    if(result_288) { result_288 = come_decrement_ref_count2(result_288, ((struct sNode*)result_288)->finalize, ((struct sNode*)result_288)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result220__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1charph* result_289;
struct list_item$1charph* it_290;
void* __right_value280 = (void*)0;
struct list$1charph* __result222__;
    if(    self==((void*)0)) {
        __result220__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_289=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1070, "list$1charph"))));
    it_290=self->head;
    while(it_290!=((void*)0)) {
        list$1charph_add(result_289,(char*)come_increment_ref_count(string_clone(it_290->item)));
        it_290=it_290->next;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_289;
    come_call_finalizer3(result_289,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_291;
char* __dec_obj74;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_292;
char* __dec_obj75;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_293;
char* __dec_obj76;
struct list$1charph* __result221__;
    if(    self->len==0) {
        litem_291=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1084, "list_item$1charph"))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj74=litem_291->item;
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1094, "list_item$1charph"))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj75=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1104, "list_item$1charph"))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj76=litem_293->item;
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result224__;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* result_296;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_297;
void* __right_value301 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result229__;
    if(    self==((void*)0)) {
        __result224__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_296=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1070, "list$1tuple3$3sTypephcharphsNodephph"))));
    it_297=self->head;
    while(it_297!=((void*)0)) {
        list$1tuple3$3sTypephcharphsNodephph_add(result_296,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodephp_clone(it_297->item)));
        it_297=it_297->next;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_296;
    come_call_finalizer3(result_296,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result225__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_294;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
struct tuple3$3sTypephcharphsNodeph* __dec_obj89;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj89=self->item;
            come_call_finalizer3(__dec_obj89,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_298;
struct tuple3$3sTypephcharphsNodeph* __dec_obj93;
void* __right_value295 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_299;
struct tuple3$3sTypephcharphsNodeph* __dec_obj97;
void* __right_value296 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_300;
struct tuple3$3sTypephcharphsNodeph* __dec_obj101;
struct list$1tuple3$3sTypephcharphsNodephph* __result226__;
    if(    self->len==0) {
        litem_298=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value294=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1084, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_298->prev=((void*)0);
        litem_298->next=((void*)0);
        __dec_obj93=litem_298->item;
        litem_298->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_298;
        self->head=litem_298;
    }
    else if(    self->len==1) {
        litem_299=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value295=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1094, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_299->prev=self->head;
        litem_299->next=((void*)0);
        __dec_obj97=litem_299->item;
        litem_299->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_299;
        self->head->next=litem_299;
    }
    else {
        litem_300=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value296=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1104, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_300->prev=self->tail;
        litem_300->next=((void*)0);
        __dec_obj101=litem_300->item;
        litem_300->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_300;
        self->tail=litem_300;
    }
    self->len++;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj102;
char* __dec_obj103;
struct sNode* __dec_obj104;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj102=self->v1;
            come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj103=self->v2;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj104=self->v3;
            if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* __result227__;
void* __right_value297 = (void*)0;
struct tuple3$3sTypephcharphsNodeph* result_301;
void* __right_value298 = (void*)0;
struct sType* __dec_obj105;
void* __right_value299 = (void*)0;
char* __dec_obj106;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj107;
struct tuple3$3sTypephcharphsNodeph* __result228__;
    if(    self==(void*)0) {
        __result227__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_301=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj105=result_301->v1;
        result_301->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj106=result_301->v2;
        result_301->v2=(char*)come_increment_ref_count(string_clone(self->v2));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj107=result_301->v3;
        result_301->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_301;
    come_call_finalizer3(result_301,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj108;
char* __dec_obj109;
struct sNode* __dec_obj110;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj108=self->v1;
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj109=self->v2;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj110=self->v3;
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_302;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_305;
unsigned int hash_306;
unsigned int it_307;
struct sVar* __result232__;
struct sVar* __result233__;
struct sVar* __result234__;
struct sVar* __result235__;
default_value_305 = (void*)0;
    memset(&default_value_305,0,sizeof(struct sVar*));
    hash_306=charp_get_hash_key(((char*)key))%self->size;
    it_307=hash_306;
    while((_Bool)1) {
        if(        self->item_existance[it_307]) {
            if(            charp_equals(self->keys[it_307],key)) {
                __result232__ = gComeFunResultObject = __result_obj__ = self->items[it_307];
                come_call_finalizer3(default_value_305,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result232__;
            }
            it_307++;
            if(            it_307>=self->size) {
                it_307=0;
            }
            else if(            it_307==hash_306) {
                __result233__ = gComeFunResultObject = __result_obj__ = default_value_305;
                come_call_finalizer3(default_value_305,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result233__;
            }
        }
        else {
            __result234__ = gComeFunResultObject = __result_obj__ = default_value_305;
            come_call_finalizer3(default_value_305,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result234__;
        }
    }
    __result235__ = gComeFunResultObject = __result_obj__ = default_value_305;
    come_call_finalizer3(default_value_305,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj120;
char* __dec_obj121;
struct sType* __dec_obj122;
char* __dec_obj123;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj120=self->mName;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj121=self->mCValueName;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj122=self->mType;
            come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj123=self->mFunName;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsVarph* map$2charphsVarph_remove(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_308;
unsigned int it_309;
struct map$2charphsVarph* __result240__;
    hash_308=charp_get_hash_key(((char*)key))%self->size;
    it_309=hash_308;
    while((_Bool)1) {
        if(        self->item_existance[it_309]) {
            if(            charp_equals(self->keys[it_309],key)) {
                list$1charp_remove(self->key_list,self->keys[it_309]);
                self->item_existance[it_309]=(_Bool)0;
                if(                1) {
                    self->keys[it_309] = come_decrement_ref_count2(self->keys[it_309], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_309]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_309],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_309]=((void*)0);
                self->len--;
                break;
            }
            it_309++;
            if(            it_309>=self->size) {
                it_309=0;
            }
            else if(            it_309==hash_308) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_310;
struct list_item$1charp* it_311;
struct list$1charp* __result239__;
    it2_310=0;
    it_311=self->head;
    while(it_311!=((void*)0)) {
        if(        charp_equals(it_311->item,item)) {
            list$1charp_delete(self,it2_310,it2_310+1);
            break;
        }
        it2_310++;
        it_311=it_311->next;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_312;
struct list$1charp* __result236__;
struct list_item$1charp* it_315;
int i_316;
struct list_item$1charp* prev_it_317;
struct list_item$1charp* it_318;
int i_319;
struct list_item$1charp* prev_it_320;
struct list_item$1charp* it_321;
struct list_item$1charp* head_prev_it_322;
struct list_item$1charp* tail_it_323;
int i_324;
struct list_item$1charp* prev_it_325;
struct list$1charp* __result238__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_312=tail;
        tail=head;
        head=tmp_312;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result236__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_315=self->head;
        i_316=0;
        while(it_315!=((void*)0)) {
            if(            i_316<tail) {
                prev_it_317=it_315;
                it_315=it_315->next;
                i_316++;
                come_call_finalizer3(prev_it_317,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_316==tail) {
                self->head=it_315;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_315=it_315->next;
                i_316++;
            }
        }
    }
    else if(    tail==self->len) {
        it_318=self->head;
        i_319=0;
        while(it_318!=((void*)0)) {
            if(            i_319==head) {
                self->tail=it_318->prev;
                self->tail->next=((void*)0);
            }
            if(            i_319>=head) {
                prev_it_320=it_318;
                it_318=it_318->next;
                i_319++;
                come_call_finalizer3(prev_it_320,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_318=it_318->next;
                i_319++;
            }
        }
    }
    else {
        it_321=self->head;
        head_prev_it_322=((void*)0);
        tail_it_323=((void*)0);
        i_324=0;
        while(it_321!=((void*)0)) {
            if(            i_324==head) {
                head_prev_it_322=it_321->prev;
            }
            if(            i_324==tail) {
                tail_it_323=it_321;
            }
            if(            i_324>=head&&i_324<tail) {
                prev_it_325=it_321;
                it_321=it_321->next;
                i_324++;
                come_call_finalizer3(prev_it_325,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_321=it_321->next;
                i_324++;
            }
        }
        if(        head_prev_it_322!=((void*)0)) {
            head_prev_it_322->next=tail_it_323;
        }
        if(        tail_it_323!=((void*)0)) {
            tail_it_323->prev=head_prev_it_322;
        }
    }
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_313;
struct list_item$1charp* prev_it_314;
struct list$1charp* __result237__;
    it_313=self->head;
    while(it_313!=((void*)0)) {
        prev_it_314=it_313;
        it_313=it_313->next;
        come_call_finalizer3(prev_it_314,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_328;
struct tuple3$3sTypephcharphsNodeph* __result241__;
struct tuple3$3sTypephcharphsNodeph* __result242__;
struct tuple3$3sTypephcharphsNodeph* result_329;
struct tuple3$3sTypephcharphsNodeph* __result243__;
result_328 = (void*)0;
result_329 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_328,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result241__ = gComeFunResultObject = __result_obj__ = result_328;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    self->it=self->head;
    if(    self->it) {
        __result242__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    memset(&result_329,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result243__ = gComeFunResultObject = __result_obj__ = result_329;
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_331;
struct tuple3$3sTypephcharphsNodeph* __result244__;
struct tuple3$3sTypephcharphsNodeph* __result245__;
struct tuple3$3sTypephcharphsNodeph* result_332;
struct tuple3$3sTypephcharphsNodeph* __result246__;
result_331 = (void*)0;
result_332 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_331,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result244__ = gComeFunResultObject = __result_obj__ = result_331;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result245__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    memset(&result_332,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result246__ = gComeFunResultObject = __result_obj__ = result_332;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj124;
struct sType* __dec_obj125;
char* __dec_obj126;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj124=self->c_value;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj125=self->type;
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj126=self->c_value_without_right_value_objects;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_344;
char* __result249__;
char* __result250__;
char* result_345;
char* __result251__;
result_344 = (void*)0;
result_345 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_344,0,sizeof(char*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_344;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->it=self->head;
    if(    self->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_345,0,sizeof(char*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_347;
char* __result252__;
char* __result253__;
char* result_348;
char* __result254__;
result_347 = (void*)0;
result_348 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_347,0,sizeof(char*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_347;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_348,0,sizeof(char*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_348;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_351;
int i_352;
struct sType* __result255__;
struct sType* default_value_353;
struct sType* __result256__;
default_value_353 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_351=self->head;
    i_352=0;
    while(it_351!=((void*)0)) {
        if(        position==i_352) {
            __result255__ = gComeFunResultObject = __result_obj__ = it_351->item;
            gComeFunResultObject = (void*)0;
            return __result255__;
        }
        it_351=it_351->next;
        i_352++;
    }
    memset(&default_value_353,0,sizeof(struct sType*));
    __result256__ = gComeFunResultObject = __result_obj__ = default_value_353;
    come_call_finalizer3(default_value_353,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_368;
struct sNode* __result258__;
struct sNode* __result259__;
struct sNode* result_369;
struct sNode* __result260__;
result_368 = (void*)0;
result_369 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_368,0,sizeof(struct sNode*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_368;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->head;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_369,0,sizeof(struct sNode*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_369;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_371;
struct sNode* __result261__;
struct sNode* __result262__;
struct sNode* result_372;
struct sNode* __result263__;
result_371 = (void*)0;
result_372 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_371,0,sizeof(struct sNode*));
        __result261__ = gComeFunResultObject = __result_obj__ = result_371;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result262__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    memset(&result_372,0,sizeof(struct sNode*));
    __result263__ = gComeFunResultObject = __result_obj__ = result_372;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
struct list_item$1CVALUEph* litem_376;
struct CVALUE* __dec_obj135;
void* __right_value350 = (void*)0;
struct list_item$1CVALUEph* litem_377;
struct CVALUE* __dec_obj136;
void* __right_value351 = (void*)0;
struct list_item$1CVALUEph* litem_378;
struct CVALUE* __dec_obj137;
struct list$1CVALUEph* __result264__;
    if(    self->len==0) {
        litem_376=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value349=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_376->prev=((void*)0);
        litem_376->next=((void*)0);
        __dec_obj135=litem_376->item;
        litem_376->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_376;
        self->head=litem_376;
    }
    else if(    self->len==1) {
        litem_377=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value350=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_377->prev=self->head;
        litem_377->next=((void*)0);
        __dec_obj136=litem_377->item;
        litem_377->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_377;
        self->head->next=litem_377;
    }
    else {
        litem_378=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value351=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_378->prev=self->tail;
        litem_378->next=((void*)0);
        __dec_obj137=litem_378->item;
        litem_378->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj137,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_378;
        self->tail=litem_378;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value463 = (void*)0;
struct sNewChannel* __result272__;
    ((struct sNodeBase*)(__right_value463=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value463,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
char* __result273__;
    __result273__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value464=__builtin_string("sNewChannel")));
    __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value465 = (void*)0;
struct sNode* node_417;
_Bool Value_418;
_Bool __result274__;
_Bool __result275__;
    node_417=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_418=node_compile(node_417,info);
    if(    !Value_418) {
        __result274__ = (_Bool)0;
        if(node_417) { node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result274__;
    }
    else {
    }
    __result275__ = (_Bool)1;
    if(node_417) { node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result275__;
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
struct sNode* __dec_obj170;
struct sNode* __dec_obj171;
struct sWriteChannelNode* __result276__;
    ((struct sNodeBase*)(__right_value466=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value466,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj170=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj171=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value467 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value467=__builtin_string("sWriteChannelNode")));
    __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_419;
void* __right_value468 = (void*)0;
struct CVALUE* come_value_420;
_Bool Value_421;
_Bool __result278__;
void* __right_value469 = (void*)0;
struct CVALUE* right_value_422;
struct sType* right_type_423;
void* __right_value470 = (void*)0;
struct sType* left_type_424;
struct sType* channel_type_425;
_Bool __result279__;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct buffer* buf_427;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct CVALUE* come_value2_428;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
char* __dec_obj175;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* __dec_obj176;
_Bool __result280__;
    Value_419=node_compile(self->exp,info);
    if(    !Value_419) {
        return (_Bool)0;
    }
    else {
    }
    come_value_420=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    Value_421=node_compile(self->right_value,info);
    if(    !Value_421) {
        __result278__ = (_Bool)0;
        come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result278__;
    }
    else {
    }
    right_value_422=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_423=right_value_422->type;
    dec_stack_ptr(1,info);
    left_type_424=(struct sType*)come_increment_ref_count(sType_clone(come_value_420->type));
    channel_type_425=(struct sType*)come_increment_ref_count(left_type_424->mChannelType->v1);
    static int var_num_426=0;
    var_num_426++;
    if(    right_value_422->type->mHeap) {
        err_msg(info,"channel can't get heap type");
        __result279__ = (_Bool)0;
        come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_424,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(channel_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result279__;
    }
    buf_427=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 683, "buffer"))));
    buffer_append_format(buf_427,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_426,((char*)(__right_value473=make_type_name_string(channel_type_425,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_427,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value474=make_type_name_string(channel_type_425,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_426,var_num_426);
    __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_427,"*__channel_p%d = %s;\n",var_num_426,right_value_422->c_value);
    add_come_code(info,((char*)(__right_value475=buffer_to_string(buf_427))));
    __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_428=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 691, "CVALUE"))));
    __dec_obj175=come_value2_428->c_value;
    come_value2_428->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_420->c_value,var_num_426,((char*)(__right_value478=make_type_name_string(channel_type_425,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj176=come_value2_428->type;
    come_value2_428->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 695, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_428->type->mPointerNum=1;
    come_value2_428->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_428));
    add_come_last_code(info,"%s",come_value2_428->c_value);
    __result280__ = (_Bool)1;
    come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_424,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_427,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value482 = (void*)0;
struct sNode* __dec_obj177;
struct sReadChannelNode* __result281__;
    ((struct sNodeBase*)(__right_value482=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value482,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj177=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); };
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value483 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value483=__builtin_string("sReadChannelNode")));
    __right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_429;
_Bool Value_430;
_Bool __result283__;
void* __right_value484 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value485 = (void*)0;
struct sType* var_type_432;
_Bool __result284__;
struct sType* channel_type_433;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct CVALUE* come_value2_435;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
char* __dec_obj180;
void* __right_value492 = (void*)0;
struct sType* __dec_obj181;
_Bool __result285__;
    exp_429=(struct sNode*)come_increment_ref_count(self->exp);
    Value_430=node_compile(exp_429,info);
    if(    !Value_430) {
        __result283__ = (_Bool)0;
        if(exp_429) { exp_429 = come_decrement_ref_count2(exp_429, ((struct sNode*)exp_429)->finalize, ((struct sNode*)exp_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result283__;
    }
    else {
    }
    come_value_431=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    var_type_432=(struct sType*)come_increment_ref_count(sType_clone(come_value_431->type));
    if(    !var_type_432->mChannel) {
        err_msg(info,"require right type is channel");
        __result284__ = (_Bool)0;
        if(exp_429) { exp_429 = come_decrement_ref_count2(exp_429, ((struct sNode*)exp_429)->finalize, ((struct sNode*)exp_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result284__;
    }
    channel_type_433=(struct sType*)come_increment_ref_count(var_type_432->mChannelType->v1);
    static int var_num_434=0;
    var_num_434++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_434,((char*)(__right_value486=make_type_name_string(channel_type_433,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_435=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 747, "CVALUE"))));
    __dec_obj180=come_value2_435->c_value;
    come_value2_435->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_431->c_value,var_num_434,((char*)(__right_value489=make_type_name_string(channel_type_433,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value490=make_type_name_string(channel_type_433,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_434));
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj181=come_value2_435->type;
    come_value2_435->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type_433));
    come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_435->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_435));
    add_come_last_code(info,"%s",come_value2_435->c_value);
    __result285__ = (_Bool)1;
    if(exp_429) { exp_429 = come_decrement_ref_count2(exp_429, ((struct sNode*)exp_429)->finalize, ((struct sNode*)exp_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(var_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_433,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result285__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value504 = (void*)0;
struct sNode* __result288__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 764, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value495=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 764, "sStoreNode")),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result288__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value504=_inf_value1));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value495,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value504) { __right_value504 = come_decrement_ref_count2(__right_value504, ((struct sNode*)__right_value504)->finalize, ((struct sNode*)__right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result288__;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
char* __dec_obj196;
struct sLoadNode* __result289__;
    ((struct sNodeBase*)(__right_value505=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value505,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj196=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value507 = (void*)0;
char* __result290__;
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value507=__builtin_string("sLoadNode")));
    __right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_437;
void* __right_value508 = (void*)0;
_Bool _if_conditional2;
struct sVar* parent_var_438;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct CVALUE* come_value_439;
struct sType* type_440;
void* __right_value511 = (void*)0;
char* __dec_obj199;
void* __right_value512 = (void*)0;
char* __dec_obj200;
void* __right_value513 = (void*)0;
struct sType* __dec_obj201;
_Bool __result291__;
struct sVar* var__441;
void* __right_value514 = (void*)0;
struct sFun* fun_442;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_446;
void* __right_value517 = (void*)0;
char* __dec_obj219;
struct sType* __dec_obj220;
_Bool __result296__;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct CVALUE* come_value_447;
void* __right_value520 = (void*)0;
char* __dec_obj221;
void* __right_value521 = (void*)0;
struct sType* __dec_obj222;
void* __right_value522 = (void*)0;
struct sType* __dec_obj223;
_Bool __result298__;
    current_stack_frame_struct_437=info->current_stack_frame_struct;
    if(    (_if_conditional2=(current_stack_frame_struct_437&&((struct sVar*)(__right_value508=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),    come_call_finalizer3(__right_value508,sVar_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        parent_var_438=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_438!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_438->mFunName,info->come_fun->mName)) {
                come_value_439=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 794, "CVALUE"))));
                type_440=parent_var_438->mType;
                if(                parent_var_438->mType->mOriginIsArray) {
                    __dec_obj199=come_value_439->c_value;
                    come_value_439->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_438->mCValueName));
                    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj200=come_value_439->c_value;
                    come_value_439->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_438->mCValueName));
                    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj201=come_value_439->type;
                come_value_439->type=(struct sType*)come_increment_ref_count(sType_clone(type_440));
                come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_439->var=((void*)0);
                add_come_last_code(info,"%s",come_value_439->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_439));
                __result291__ = (_Bool)1;
                come_call_finalizer3(come_value_439,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result291__;
                come_call_finalizer3(come_value_439,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__441=get_variable_from_table(info->lv_table,self->name);
    if(    var__441==((void*)0)) {
        var__441=get_variable_from_table(info->gv_table,self->name);
        if(        var__441==((void*)0)) {
            fun_442=((struct sFun*)(__right_value514=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
            come_call_finalizer3(__right_value514,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            fun_442) {
                come_value_446=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 826, "CVALUE"))));
                __dec_obj219=come_value_446->c_value;
                come_value_446->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_442->mName));
                __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj220=come_value_446->type;
                come_value_446->type=(struct sType*)come_increment_ref_count(fun_442->mLambdaType);
                come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_446->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_446));
                __result296__ = (_Bool)1;
                come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result296__;
                come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_447=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 843, "CVALUE"))));
    __dec_obj221=come_value_447->c_value;
    come_value_447->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__441->mCValueName));
    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj222=come_value_447->type;
    come_value_447->type=(struct sType*)come_increment_ref_count(sType_clone(var__441->mType));
    come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_447->var=var__441;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_447));
    if(    list$1sNodeph_length(come_value_447->type->mArrayNum)==1) {
        __dec_obj223=come_value_447->type->mOriginalLoadVarType->v1;
        come_value_447->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(sType_clone(come_value_447->type));
        come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_447->type->mArrayNum);
        come_value_447->type->mPointerNum++;
        come_value_447->type->mOriginalTypeNamePointerNum=come_value_447->type->mPointerNum;
    }
    __result298__ = (_Bool)1;
    come_call_finalizer3(come_value_447,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result298__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_443;
unsigned int hash_444;
unsigned int it_445;
struct sFun* __result292__;
struct sFun* __result293__;
struct sFun* __result294__;
struct sFun* __result295__;
default_value_443 = (void*)0;
    memset(&default_value_443,0,sizeof(struct sFun*));
    hash_444=charp_get_hash_key(((char*)key))%self->size;
    it_445=hash_444;
    while((_Bool)1) {
        if(        self->item_existance[it_445]) {
            if(            charp_equals(self->keys[it_445],key)) {
                __result292__ = gComeFunResultObject = __result_obj__ = self->items[it_445];
                come_call_finalizer3(default_value_443,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result292__;
            }
            it_445++;
            if(            it_445>=self->size) {
                it_445=0;
            }
            else if(            it_445==hash_444) {
                __result293__ = gComeFunResultObject = __result_obj__ = default_value_443;
                come_call_finalizer3(default_value_443,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
        }
        else {
            __result294__ = gComeFunResultObject = __result_obj__ = default_value_443;
            come_call_finalizer3(default_value_443,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result294__;
        }
    }
    __result295__ = gComeFunResultObject = __result_obj__ = default_value_443;
    come_call_finalizer3(default_value_443,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj202;
struct sType* __dec_obj203;
struct list$1sTypeph* __dec_obj204;
struct list$1charph* __dec_obj205;
struct list$1charph* __dec_obj206;
struct sType* __dec_obj207;
struct sBlock* __dec_obj208;
struct buffer* __dec_obj211;
struct buffer* __dec_obj212;
struct buffer* __dec_obj213;
struct buffer* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj202=self->mName;
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj203=self->mResultType;
            come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj204=self->mParamTypes;
            come_call_finalizer3(__dec_obj204,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj205=self->mParamNames;
            come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj206=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj206,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj207=self->mLambdaType;
            come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj208=self->mBlock;
            come_call_finalizer3(__dec_obj208,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj211=self->mSource;
            come_call_finalizer3(__dec_obj211,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj212=self->mSourceHead;
            come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj213=self->mSourceHead2;
            come_call_finalizer3(__dec_obj213,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj214=self->mSourceDefer;
            come_call_finalizer3(__dec_obj214,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj215=self->mComeHeader;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj216=self->mDeclareSName;
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj217=self->mAttribute;
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj218=self->mFunAttribute;
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj209;
struct sVarTable* __dec_obj210;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj209=self->mNodes;
            come_call_finalizer3(__dec_obj209,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj210=self->mVarTable;
            come_call_finalizer3(__dec_obj210,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_448;
struct list_item$1sNodeph* prev_it_449;
struct list$1sNodeph* __result297__;
    it_448=self->head;
    while(it_448!=((void*)0)) {
        prev_it_449=it_448;
        it_448=it_448->next;
        come_call_finalizer3(prev_it_449,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value523 = (void*)0;
_Bool _if_conditional3;
struct sLoadNode* load_node_450;
    if(    (_if_conditional3=(string_operator_equals(((char*)(__right_value523=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional3) {
        load_node_450=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_450->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value530 = (void*)0;
struct sNode* __result301__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 876, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value526=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 876, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result301__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value530=_inf_value2));
    come_call_finalizer3(__right_value526,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value530) { __right_value530 = come_decrement_ref_count2(__right_value530, ((struct sNode*)__right_value530)->finalize, ((struct sNode*)__right_value530)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result301__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
char* __dec_obj228;
struct sFunLoadNode* __result302__;
    ((struct sNodeBase*)(__right_value531=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value531,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj228=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value533 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value533=__builtin_string("sFunLoadNode")));
    __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value534 = (void*)0;
struct sFun* fun_452;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct CVALUE* come_value_453;
void* __right_value537 = (void*)0;
char* __dec_obj231;
struct sType* __dec_obj232;
    fun_452=((struct sFun*)(__right_value534=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
    come_call_finalizer3(__right_value534,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_452==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        return (_Bool)0;
    }
    else {
        come_value_453=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 902, "CVALUE"))));
        __dec_obj231=come_value_453->c_value;
        come_value_453->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_452->mName));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj232=come_value_453->type;
        come_value_453->type=(struct sType*)come_increment_ref_count(fun_452->mLambdaType);
        come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_453->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_453));
        come_call_finalizer3(come_value_453,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __dec_obj229;
char* __dec_obj230;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj229=self->sname;
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj230=self->name;
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value538 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj249;
struct sArrayInitializer* __result310__;
    ((struct sNodeBase*)(__right_value538=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value538,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj249=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_clone(initializer));
    come_call_finalizer3(__dec_obj249,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value549 = (void*)0;
char* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value549=__builtin_string("sArrayInitializer")));
    __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_464;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct buffer* buf_465;
int i_466;
struct sType* element_type_467;
struct list$1tuple2$2sNodephsNodephph* o2_saved_468;
struct tuple2$2sNodephsNodeph* it_471;
struct tuple2$2sNodephsNodeph* multiple_assign_var2 = (void*)0;
struct sNode* index_474=0;
struct sNode* value_475=0;
struct CVALUE* come_value_476;
_Bool Value_477;
_Bool __result318__;
void* __right_value552 = (void*)0;
struct CVALUE* __dec_obj252;
_Bool Value_478;
_Bool __result319__;
void* __right_value553 = (void*)0;
struct CVALUE* come_value2_479;
void* __right_value554 = (void*)0;
struct sType* __dec_obj253;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct CVALUE* come_value_480;
void* __right_value557 = (void*)0;
char* __dec_obj254;
void* __right_value558 = (void*)0;
struct sType* __dec_obj255;
_Bool __result320__;
    initializer_464=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_465=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 933, "buffer"))));
    buffer_append_str(buf_465,"{");
    i_466=0;
    element_type_467=((void*)0);
    for(    o2_saved_468=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_464)),it_471=list$1tuple2$2sNodephsNodephph_begin((o2_saved_468));    !list$1tuple2$2sNodephsNodephph_end((o2_saved_468));    it_471=list$1tuple2$2sNodephsNodephph_next((o2_saved_468))    ){
        multiple_assign_var2=it_471;
        index_474=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_475=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        come_value_476=((void*)0);
        if(        index_474) {
            Value_477=node_compile(index_474,info);
            if(            !Value_477) {
                __result318__ = (_Bool)0;
                if(index_474) { index_474 = come_decrement_ref_count2(index_474, ((struct sNode*)index_474)->finalize, ((struct sNode*)index_474)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(value_475) { value_475 = come_decrement_ref_count2(value_475, ((struct sNode*)value_475)->finalize, ((struct sNode*)value_475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_476,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_468,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_464,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_465,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result318__;
            }
            else {
            }
            __dec_obj252=come_value_476;
            come_value_476=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
        Value_478=node_compile(value_475,info);
        if(        !Value_478) {
            __result319__ = (_Bool)0;
            if(index_474) { index_474 = come_decrement_ref_count2(index_474, ((struct sNode*)index_474)->finalize, ((struct sNode*)index_474)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value_475) { value_475 = come_decrement_ref_count2(value_475, ((struct sNode*)value_475)->finalize, ((struct sNode*)value_475)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_476,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_468,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_464,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_465,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result319__;
        }
        else {
        }
        come_value2_479=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj253=element_type_467;
        element_type_467=(struct sType*)come_increment_ref_count(sType_clone(come_value2_479->type));
        come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        come_value_476) {
            buffer_append_format(buf_465,"[%s] = %s",come_value_476->c_value,come_value2_479->c_value);
        }
        else {
            buffer_append_str(buf_465,come_value2_479->c_value);
        }
        i_466++;
        if(        i_466!=list$1tuple2$2sNodephsNodephph_length(initializer_464)) {
            buffer_append_str(buf_465,",");
        }
        if(index_474) { index_474 = come_decrement_ref_count2(index_474, ((struct sNode*)index_474)->finalize, ((struct sNode*)index_474)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(value_475) { value_475 = come_decrement_ref_count2(value_475, ((struct sNode*)value_475)->finalize, ((struct sNode*)value_475)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_476,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_479,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_468,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_465,"}");
    come_value_480=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 972, "CVALUE"))));
    __dec_obj254=come_value_480->c_value;
    come_value_480->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_465));
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj255=come_value_480->type;
    come_value_480->type=(struct sType*)come_increment_ref_count(sType_clone(element_type_467));
    come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_480->type->mPointerNum++;
    come_value_480->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_480));
    __result320__ = (_Bool)1;
    come_call_finalizer3(initializer_464,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_465,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result304__;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* result_456;
struct list_item$1tuple2$2sNodephsNodephph* it_457;
void* __right_value547 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __result309__;
    if(    self==((void*)0)) {
        __result304__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    result_456=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1070, "list$1tuple2$2sNodephsNodephph"))));
    it_457=self->head;
    while(it_457!=((void*)0)) {
        list$1tuple2$2sNodephsNodephph_add(result_456,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodephp_clone(it_457->item)));
        it_457=it_457->next;
    }
    __result309__ = gComeFunResultObject = __result_obj__ = result_456;
    come_call_finalizer3(result_456,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result305__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_454;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_455;
    it_454=self->head;
    while(it_454!=((void*)0)) {
        prev_it_455=it_454;
        it_454=it_454->next;
        come_call_finalizer3(prev_it_455,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self){
struct tuple2$2sNodephsNodeph* __dec_obj233;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj233=self->item;
            come_call_finalizer3(__dec_obj233,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_458;
struct tuple2$2sNodephsNodeph* __dec_obj236;
void* __right_value542 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_459;
struct tuple2$2sNodephsNodeph* __dec_obj239;
void* __right_value543 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_460;
struct tuple2$2sNodephsNodeph* __dec_obj242;
struct list$1tuple2$2sNodephsNodephph* __result306__;
    if(    self->len==0) {
        litem_458=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value541=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1084, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_458->prev=((void*)0);
        litem_458->next=((void*)0);
        __dec_obj236=litem_458->item;
        litem_458->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj236,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_458;
        self->head=litem_458;
    }
    else if(    self->len==1) {
        litem_459=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value542=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1094, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_459->prev=self->head;
        litem_459->next=((void*)0);
        __dec_obj239=litem_459->item;
        litem_459->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj239,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_459;
        self->head->next=litem_459;
    }
    else {
        litem_460=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value543=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1104, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_460->prev=self->tail;
        litem_460->next=((void*)0);
        __dec_obj242=litem_460->item;
        litem_460->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj242,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_460;
        self->tail=litem_460;
    }
    self->len++;
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj243;
struct sNode* __dec_obj244;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj243=self->v1;
            if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj244=self->v2;
            if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* __result307__;
void* __right_value544 = (void*)0;
struct tuple2$2sNodephsNodeph* result_461;
void* __right_value545 = (void*)0;
struct sNode* __dec_obj245;
void* __right_value546 = (void*)0;
struct sNode* __dec_obj246;
struct tuple2$2sNodephsNodeph* __result308__;
    if(    self==(void*)0) {
        __result307__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    result_461=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodephp_clone", 3, "tuple2$2sNodephsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj245=result_461->v1;
        result_461->v1=(struct sNode*)come_increment_ref_count(sNode_clone(self->v1));
        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj246=result_461->v2;
        result_461->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result308__ = gComeFunResultObject = __result_obj__ = result_461;
    come_call_finalizer3(result_461,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj247;
struct sNode* __dec_obj248;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj247=self->v1;
            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj248=self->v2;
            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_462;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_463;
    it_462=self->head;
    while(it_462!=((void*)0)) {
        prev_it_463=it_462;
        it_462=it_462->next;
        come_call_finalizer3(prev_it_463,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_469;
struct tuple2$2sNodephsNodeph* __result312__;
struct tuple2$2sNodephsNodeph* __result313__;
struct tuple2$2sNodephsNodeph* result_470;
struct tuple2$2sNodephsNodeph* __result314__;
result_469 = (void*)0;
result_470 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_469,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result312__ = gComeFunResultObject = __result_obj__ = result_469;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    self->it=self->head;
    if(    self->it) {
        __result313__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    memset(&result_470,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result314__ = gComeFunResultObject = __result_obj__ = result_470;
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_472;
struct tuple2$2sNodephsNodeph* __result315__;
struct tuple2$2sNodephsNodeph* __result316__;
struct tuple2$2sNodephsNodeph* result_473;
struct tuple2$2sNodephsNodeph* __result317__;
result_472 = (void*)0;
result_473 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_472,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_472;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_473,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_473;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* initializer_481;
void* __right_value561 = (void*)0;
struct sNode* index_482;
_Bool no_comma_483;
void* __right_value562 = (void*)0;
struct sNode* exp_484;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
_Bool no_comma_485;
void* __right_value565 = (void*)0;
struct sNode* exp_486;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sNode* index_487;
_Bool no_comma_488;
void* __right_value569 = (void*)0;
struct sNode* exp_489;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
_Bool no_comma_490;
void* __right_value572 = (void*)0;
struct sNode* exp_491;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value580 = (void*)0;
struct sNode* __result325__;
    expected_next_character(123,info);
    initializer_481=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 990, "list$1tuple2$2sNodephsNodephph"))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_482=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_483=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_484=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_483;
        list$1tuple2$2sNodephsNodephph_add(initializer_481,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1006, "struct tuple2$2sNodephsNodeph")),(struct sNode*)come_increment_ref_count(index_482),(struct sNode*)come_increment_ref_count(exp_484))));
        if(index_482) { index_482 = come_decrement_ref_count2(index_482, ((struct sNode*)index_482)->finalize, ((struct sNode*)index_482)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(exp_484) { exp_484 = come_decrement_ref_count2(exp_484, ((struct sNode*)exp_484)->finalize, ((struct sNode*)exp_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_485=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_486=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_485;
        list$1tuple2$2sNodephsNodephph_add(initializer_481,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1014, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_486))));
        if(exp_486) { exp_486 = come_decrement_ref_count2(exp_486, ((struct sNode*)exp_486)->finalize, ((struct sNode*)exp_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_487=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_488=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_489=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_488;
            list$1tuple2$2sNodephsNodephph_add(initializer_481,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1041, "struct tuple2$2sNodephsNodeph")),(struct sNode*)come_increment_ref_count(index_487),(struct sNode*)come_increment_ref_count(exp_489))));
            if(index_487) { index_487 = come_decrement_ref_count2(index_487, ((struct sNode*)index_487)->finalize, ((struct sNode*)index_487)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_489) { exp_489 = come_decrement_ref_count2(exp_489, ((struct sNode*)exp_489)->finalize, ((struct sNode*)exp_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_490=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_491=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_490;
            list$1tuple2$2sNodephsNodephph_add(initializer_481,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1049, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_491))));
            if(exp_491) { exp_491 = come_decrement_ref_count2(exp_491, ((struct sNode*)exp_491)->finalize, ((struct sNode*)exp_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1055, "struct sNode");
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value576=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1055, "sArrayInitializer")),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_481),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result325__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value580=_inf_value3));
    come_call_finalizer3(initializer_481,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value576,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value580) { __right_value580 = come_decrement_ref_count2(__right_value580, ((struct sNode*)__right_value580)->finalize, ((struct sNode*)__right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj256;
struct sNode* __dec_obj257;
struct tuple2$2sNodephsNodeph* __result321__;
    __dec_obj256=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj257=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v1) { v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj258;
struct tuple2$2voidpsNodeph* __result322__;
    self->v1=v1;
    __dec_obj258=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self){
struct sNode* __dec_obj259;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj259=self->v2;
            if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
char* __dec_obj260;
struct list$1tuple2$2sNodephsNodephph* __dec_obj261;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj260=self->sname;
            __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj261=self->initializer;
            come_call_finalizer3(__dec_obj261,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
struct sArrayInitializer* __result323__;
void* __right_value577 = (void*)0;
struct sArrayInitializer* result_492;
void* __right_value578 = (void*)0;
char* __dec_obj262;
void* __right_value579 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj263;
struct sArrayInitializer* __result324__;
    if(    self==(void*)0) {
        __result323__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    result_492=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "sArrayInitializer"));
    if(    self!=((void*)0)) {
        result_492->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj262=result_492->sname;
        result_492->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_492->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj263=result_492->initializer;
        result_492->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_clone(self->initializer));
        come_call_finalizer3(__dec_obj263,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result324__ = gComeFunResultObject = __result_obj__ = result_492;
    come_call_finalizer3(result_492,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value581 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj280;
struct sStructInitializer* __result332__;
    ((struct sNodeBase*)(__right_value581=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value581,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj280=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(initializer));
    come_call_finalizer3(__dec_obj280,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
char* __result333__;
    __result333__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value592=__builtin_string("sStructInitializer")));
    __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* initializer_503;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct buffer* buf_504;
int i_505;
struct list$1tuple2$2charphsNodephph* o2_saved_506;
struct tuple2$2charphsNodeph* it_509;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* name_512=0;
struct sNode* value_513=0;
_Bool Value_514;
_Bool __result340__;
void* __right_value595 = (void*)0;
struct CVALUE* come_value2_515;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_516;
void* __right_value598 = (void*)0;
char* __dec_obj283;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sType* __dec_obj284;
_Bool __result341__;
    initializer_503=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    buf_504=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1076, "buffer"))));
    buffer_append_str(buf_504,"{");
    i_505=0;
    for(    o2_saved_506=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_503)),it_509=list$1tuple2$2charphsNodephph_begin((o2_saved_506));    !list$1tuple2$2charphsNodephph_end((o2_saved_506));    it_509=list$1tuple2$2charphsNodephph_next((o2_saved_506))    ){
        multiple_assign_var3=it_509;
        name_512=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        value_513=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        Value_514=node_compile(value_513,info);
        if(        !Value_514) {
            __result340__ = (_Bool)0;
            name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(value_513) { value_513 = come_decrement_ref_count2(value_513, ((struct sNode*)value_513)->finalize, ((struct sNode*)value_513)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(o2_saved_506,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_503,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result340__;
        }
        else {
        }
        come_value2_515=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        name_512) {
            buffer_append_format(buf_504,".%s = %s",name_512,come_value2_515->c_value);
        }
        else {
            buffer_append_format(buf_504,"%s",come_value2_515->c_value);
        }
        i_505++;
        if(        i_505!=list$1tuple2$2charphsNodephph_length(initializer_503)) {
            buffer_append_str(buf_504,",");
        }
        name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_513) { value_513 = come_decrement_ref_count2(value_513, ((struct sNode*)value_513)->finalize, ((struct sNode*)value_513)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value2_515,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_506,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_504,"}");
    come_value_516=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1103, "CVALUE"))));
    __dec_obj283=come_value_516->c_value;
    come_value_516->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_504));
    __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj284=come_value_516->type;
    come_value_516->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1106, "sType")),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_516->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_516));
    __result341__ = (_Bool)1;
    come_call_finalizer3(initializer_503,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result341__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result326__;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_495;
struct list_item$1tuple2$2charphsNodephph* it_496;
void* __right_value590 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result331__;
    if(    self==((void*)0)) {
        __result326__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_495=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1070, "list$1tuple2$2charphsNodephph"))));
    it_496=self->head;
    while(it_496!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_495,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_496->item)));
        it_496=it_496->next;
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_495;
    come_call_finalizer3(result_495,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result327__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_493;
struct list_item$1tuple2$2charphsNodephph* prev_it_494;
    it_493=self->head;
    while(it_493!=((void*)0)) {
        prev_it_494=it_493;
        it_493=it_493->next;
        come_call_finalizer3(prev_it_494,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj264;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj264=self->item;
            come_call_finalizer3(__dec_obj264,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value584 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_497;
struct tuple2$2charphsNodeph* __dec_obj267;
void* __right_value585 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_498;
struct tuple2$2charphsNodeph* __dec_obj270;
void* __right_value586 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_499;
struct tuple2$2charphsNodeph* __dec_obj273;
struct list$1tuple2$2charphsNodephph* __result328__;
    if(    self->len==0) {
        litem_497=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value584=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1084, "list_item$1tuple2$2charphsNodephph"))));
        litem_497->prev=((void*)0);
        litem_497->next=((void*)0);
        __dec_obj267=litem_497->item;
        litem_497->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj267,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_497;
        self->head=litem_497;
    }
    else if(    self->len==1) {
        litem_498=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value585=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1094, "list_item$1tuple2$2charphsNodephph"))));
        litem_498->prev=self->head;
        litem_498->next=((void*)0);
        __dec_obj270=litem_498->item;
        litem_498->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj270,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_498;
        self->head->next=litem_498;
    }
    else {
        litem_499=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value586=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1104, "list_item$1tuple2$2charphsNodephph"))));
        litem_499->prev=self->tail;
        litem_499->next=((void*)0);
        __dec_obj273=litem_499->item;
        litem_499->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj273,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_499;
        self->tail=litem_499;
    }
    self->len++;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj274;
struct sNode* __dec_obj275;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj274=self->v1;
            __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj275=self->v2;
            if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result329__;
void* __right_value587 = (void*)0;
struct tuple2$2charphsNodeph* result_500;
void* __right_value588 = (void*)0;
char* __dec_obj276;
void* __right_value589 = (void*)0;
struct sNode* __dec_obj277;
struct tuple2$2charphsNodeph* __result330__;
    if(    self==(void*)0) {
        __result329__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    result_500=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj276=result_500->v1;
        result_500->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj277=result_500->v2;
        result_500->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result330__ = gComeFunResultObject = __result_obj__ = result_500;
    come_call_finalizer3(result_500,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj278;
struct sNode* __dec_obj279;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj278=self->v1;
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj279=self->v2;
            if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_501;
struct list_item$1tuple2$2charphsNodephph* prev_it_502;
    it_501=self->head;
    while(it_501!=((void*)0)) {
        prev_it_502=it_501;
        it_501=it_501->next;
        come_call_finalizer3(prev_it_502,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_507;
struct tuple2$2charphsNodeph* __result334__;
struct tuple2$2charphsNodeph* __result335__;
struct tuple2$2charphsNodeph* result_508;
struct tuple2$2charphsNodeph* __result336__;
result_507 = (void*)0;
result_508 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_507,0,sizeof(struct tuple2$2charphsNodeph*));
        __result334__ = gComeFunResultObject = __result_obj__ = result_507;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    self->it=self->head;
    if(    self->it) {
        __result335__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    memset(&result_508,0,sizeof(struct tuple2$2charphsNodeph*));
    __result336__ = gComeFunResultObject = __result_obj__ = result_508;
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_510;
struct tuple2$2charphsNodeph* __result337__;
struct tuple2$2charphsNodeph* __result338__;
struct tuple2$2charphsNodeph* result_511;
struct tuple2$2charphsNodeph* __result339__;
result_510 = (void*)0;
result_511 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_510,0,sizeof(struct tuple2$2charphsNodeph*));
        __result337__ = gComeFunResultObject = __result_obj__ = result_510;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result338__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    memset(&result_511,0,sizeof(struct tuple2$2charphsNodeph*));
    __result339__ = gComeFunResultObject = __result_obj__ = result_511;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_517;
void* __right_value603 = (void*)0;
char* name_518;
_Bool no_comma_519;
void* __right_value604 = (void*)0;
struct sNode* exp_520;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
_Bool no_comma_521;
void* __right_value607 = (void*)0;
struct sNode* exp_522;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
char* name_523;
_Bool no_comma_524;
void* __right_value611 = (void*)0;
struct sNode* exp_525;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
_Bool no_comma_526;
void* __right_value614 = (void*)0;
struct sNode* exp_527;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value622 = (void*)0;
struct sNode* __result345__;
    expected_next_character(123,info);
    initializer_517=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "07var.c", 1119, "list$1tuple2$2charphsNodephph"))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_518=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_519=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_520=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_519;
        list$1tuple2$2charphsNodephph_add(initializer_517,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1134, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(name_518),(struct sNode*)come_increment_ref_count(exp_520))));
        name_518 = come_decrement_ref_count2(name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_520) { exp_520 = come_decrement_ref_count2(exp_520, ((struct sNode*)exp_520)->finalize, ((struct sNode*)exp_520)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_521=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_522=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_521;
        list$1tuple2$2charphsNodephph_add(initializer_517,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1142, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_522))));
        if(exp_522) { exp_522 = come_decrement_ref_count2(exp_522, ((struct sNode*)exp_522)->finalize, ((struct sNode*)exp_522)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==46) {
            info->p++;
            skip_spaces_and_lf(info);
            name_523=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_524=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_525=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_524;
            list$1tuple2$2charphsNodephph_add(initializer_517,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1168, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(name_523),(struct sNode*)come_increment_ref_count(exp_525))));
            name_523 = come_decrement_ref_count2(name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_525) { exp_525 = come_decrement_ref_count2(exp_525, ((struct sNode*)exp_525)->finalize, ((struct sNode*)exp_525)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_526=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_527=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_526;
            list$1tuple2$2charphsNodephph_add(initializer_517,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1176, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_527))));
            if(exp_527) { exp_527 = come_decrement_ref_count2(exp_527, ((struct sNode*)exp_527)->finalize, ((struct sNode*)exp_527)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1182, "struct sNode");
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value618=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1182, "sStructInitializer")),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_517),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result345__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value622=_inf_value4));
    come_call_finalizer3(initializer_517,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value618,sStructInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value622) { __right_value622 = come_decrement_ref_count2(__right_value622, ((struct sNode*)__right_value622)->finalize, ((struct sNode*)__right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj285;
struct sNode* __dec_obj286;
struct tuple2$2charphsNodeph* __result342__;
    __dec_obj285=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj286=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
char* __dec_obj287;
struct list$1tuple2$2charphsNodephph* __dec_obj288;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj287=self->sname;
            __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj288=self->initializer;
            come_call_finalizer3(__dec_obj288,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
struct sStructInitializer* __result343__;
void* __right_value619 = (void*)0;
struct sStructInitializer* result_528;
void* __right_value620 = (void*)0;
char* __dec_obj289;
void* __right_value621 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj290;
struct sStructInitializer* __result344__;
    if(    self==(void*)0) {
        __result343__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    result_528=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "sStructInitializer"));
    if(    self!=((void*)0)) {
        result_528->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj289=result_528->sname;
        result_528->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_528->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj290=result_528->initializer;
        result_528->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->initializer));
        come_call_finalizer3(__dec_obj290,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result344__ = gComeFunResultObject = __result_obj__ = result_528;
    come_call_finalizer3(result_528,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value623 = (void*)0;
struct sVar* self_529;
void* __right_value624 = (void*)0;
char* __dec_obj291;
void* __right_value625 = (void*)0;
struct sType* __dec_obj292;
void* __right_value626 = (void*)0;
char* __dec_obj293;
void* __right_value627 = (void*)0;
char* __dec_obj294;
void* __right_value628 = (void*)0;
char* __dec_obj295;
char* __dec_obj296;
void* __right_value634 = (void*)0;
    self_529=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1187, "sVar"));
    __dec_obj291=self_529->mName;
    self_529->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj292=self_529->mType;
    self_529->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj292,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mFunctionParam) {
        __dec_obj293=self_529->mCValueName;
        self_529->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_530=0;
        __dec_obj294=self_529->mCValueName;
        self_529->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_530++));
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_529->mBlockLevel=info->block_level;
    self_529->mAllocaValue=(_Bool)0;
    self_529->mFunctionParam=(_Bool)0;
    self_529->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj295=self_529->mFunName;
        self_529->mFunName=(char*)come_increment_ref_count(string_clone(info->come_fun->mName));
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj296=self_529->mFunName;
        self_529->mFunName=((void*)0);
        __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_529));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_529,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_548;
unsigned int it_549;
_Bool same_key_exist_550;
char* it2_553;
struct map$2charphsVarph* __result362__;
    if(    self->len*10>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_548=charp_get_hash_key(key)%self->size;
    it_549=hash_548;
    while((_Bool)1) {
        if(        self->item_existance[it_549]) {
            if(            charp_equals(self->keys[it_549],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_549]);
                    self->keys[it_549] = come_decrement_ref_count2(self->keys[it_549], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_549]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_549]);
                    self->keys[it_549]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_549],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_549]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_549]=item;
                }
                break;
            }
            it_549++;
            if(            it_549>=self->size) {
                it_549=0;
            }
            else if(            it_549==hash_548) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_549]=(_Bool)1;
            if(            1) {
                self->keys[it_549]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_549]=key;
            }
            if(            1) {
                self->items[it_549]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_549]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_550=(_Bool)0;
    for(    it2_553=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_553=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_553,key)) {
            same_key_exist_550=(_Bool)1;
        }
    }
    if(    !same_key_exist_550) {
        list$1charp_push_back(self->key_list,key);
    }
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_531;
void* __right_value629 = (void*)0;
char** keys_532;
void* __right_value630 = (void*)0;
struct sVar** items_533;
void* __right_value631 = (void*)0;
_Bool* item_existance_534;
int len_535;
char* it_538;
struct sVar* default_value_541;
void* __right_value632 = (void*)0;
struct sVar* it2_542;
unsigned int hash_545;
int n_546;
struct sVar* default_value_547;
void* __right_value633 = (void*)0;
default_value_541 = (void*)0;
default_value_547 = (void*)0;
    size_531=self->size*10;
    keys_532=(char**)come_increment_ref_count(((char**)(__right_value629=(char**)come_calloc(1, sizeof(char*)*(1*(size_531)), "./comelang.h", 2557, "char*%"))));
    items_533=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value630=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_531)), "./comelang.h", 2558, "sVar*%"))));
    item_existance_534=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value631=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_531)), "./comelang.h", 2559, "bool"))));
    len_535=0;
    for(    it_538=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_538=map$2charphsVarph_next(self)    ){
        memset(&default_value_541,0,sizeof(struct sVar*));
        it2_542=((struct sVar*)(__right_value632=map$2charphsVarph_at(self,it_538,default_value_541)));
        come_call_finalizer3(__right_value632,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_545=charp_get_hash_key(it_538)%size_531;
        n_546=hash_545;
        while((_Bool)1) {
            if(            item_existance_534[n_546]) {
                n_546++;
                if(                n_546>=size_531) {
                    n_546=0;
                }
                else if(                n_546==hash_545) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_534[n_546]=(_Bool)1;
                keys_532[n_546]=it_538;
                items_533[n_546]=((struct sVar*)(__right_value633=map$2charphsVarph_at(self,it_538,default_value_547)));
                come_call_finalizer3(__right_value633,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_535++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_532;
    self->items=items_533;
    self->item_existance=item_existance_534;
    self->size=size_531;
    self->len=len_535;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_536;
char* __result346__;
char* __result347__;
char* result_537;
char* __result348__;
result_536 = (void*)0;
result_537 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_536,0,sizeof(char*));
        __result346__ = gComeFunResultObject = __result_obj__ = result_536;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result347__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    memset(&result_537,0,sizeof(char*));
    __result348__ = gComeFunResultObject = __result_obj__ = result_537;
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_539;
char* __result349__;
char* __result350__;
char* result_540;
char* __result351__;
result_539 = (void*)0;
result_540 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_539,0,sizeof(char*));
        __result349__ = gComeFunResultObject = __result_obj__ = result_539;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result350__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    memset(&result_540,0,sizeof(char*));
    __result351__ = gComeFunResultObject = __result_obj__ = result_540;
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_543;
unsigned int it_544;
struct sVar* __result352__;
struct sVar* __result353__;
struct sVar* __result354__;
struct sVar* __result355__;
    hash_543=charp_get_hash_key(((char*)key))%self->size;
    it_544=hash_543;
    while((_Bool)1) {
        if(        self->item_existance[it_544]) {
            if(            charp_equals(self->keys[it_544],key)) {
                __result352__ = gComeFunResultObject = __result_obj__ = self->items[it_544];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result352__;
            }
            it_544++;
            if(            it_544>=self->size) {
                it_544=0;
            }
            else if(            it_544==hash_543) {
                __result353__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result353__;
            }
        }
        else {
            __result354__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result354__;
        }
    }
    __result355__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_551;
char* __result356__;
char* __result357__;
char* result_552;
char* __result358__;
result_551 = (void*)0;
result_552 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_551,0,sizeof(char*));
        __result356__ = gComeFunResultObject = __result_obj__ = result_551;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    self->it=self->head;
    if(    self->it) {
        __result357__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    memset(&result_552,0,sizeof(char*));
    __result358__ = gComeFunResultObject = __result_obj__ = result_552;
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_554;
char* __result359__;
char* __result360__;
char* result_555;
char* __result361__;
result_554 = (void*)0;
result_555 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_554,0,sizeof(char*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_554;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_555,0,sizeof(char*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_555;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value635 = (void*)0;
struct sVar* self_556;
void* __right_value636 = (void*)0;
char* __dec_obj297;
void* __right_value637 = (void*)0;
struct sType* __dec_obj298;
void* __right_value638 = (void*)0;
char* __dec_obj299;
void* __right_value639 = (void*)0;
    self_556=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1216, "sVar"));
    __dec_obj297=self_556->mName;
    self_556->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj298=self_556->mType;
    self_556->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj298,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_556->mGlobal=(_Bool)1;
    __dec_obj299=self_556->mCValueName;
    self_556->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_556->mBlockLevel=info->block_level;
    self_556->mAllocaValue=(_Bool)0;
    self_556->mFunctionParam=(_Bool)0;
    self_556->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_556));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_556,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value640 = (void*)0;
struct sVar* self_557;
void* __right_value641 = (void*)0;
char* __dec_obj300;
void* __right_value642 = (void*)0;
struct sType* __dec_obj301;
void* __right_value643 = (void*)0;
char* __dec_obj302;
void* __right_value644 = (void*)0;
    self_557=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1235, "sVar"));
    __dec_obj300=self_557->mName;
    self_557->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj301=self_557->mType;
    self_557->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj301,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_557->mGlobal=(_Bool)1;
    __dec_obj302=self_557->mCValueName;
    self_557->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_557->mBlockLevel=info->block_level;
    self_557->mAllocaValue=(_Bool)0;
    self_557->mFunctionParam=(_Bool)0;
    self_557->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_557));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_557,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_558;
_Bool is_type_name_flag_559;
_Bool multiple_declare_560;
char* p_561;
int sline_562;
void* __right_value645 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_563=0;
char* name_564=0;
_Bool err_565=0;
void* __right_value646 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var5 = (void*)0;
struct sType* type_566=0;
char* name_567=0;
void* __right_value647 = (void*)0;
_Bool no_output_err_568;
_Bool no_comma_569;
_Bool no_output_come_code_570;
void* __right_value648 = (void*)0;
struct sNode* exp_571;
_Bool attr_define_572;
char* p_573;
int sline_574;
void* __right_value649 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* type_575=0;
char* name_576=0;
_Bool err_577=0;
void* __right_value650 = (void*)0;
struct sFun* fun_578;
void* __right_value651 = (void*)0;
char* buf2_579;
struct list$1charph* multiple_assign_580;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1charph* __dec_obj307;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
char* buf3_581;
void* __right_value656 = (void*)0;
_Bool no_comma_582;
void* __right_value657 = (void*)0;
struct sNode* right_value_583;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj308;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value671 = (void*)0;
struct sNode* node_584;
struct sNode* __result365__;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value676 = (void*)0;
struct sNode* node_586;
struct sNode* __result368__;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_588;
void* __right_value679 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* base_type_589=0;
char* name_590=0;
_Bool err_591=0;
void* __right_value680 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8 = (void*)0;
struct sType* type2_592=0;
char* var_name_593=0;
_Bool no_comma_594;
void* __right_value681 = (void*)0;
struct sNode* exp_595;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
_Bool no_comma_599;
void* __right_value687 = (void*)0;
struct sNode* exp_600;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var9 = (void*)0;
struct sType* type2_601=0;
char* var_name_602=0;
_Bool no_comma_603;
void* __right_value693 = (void*)0;
struct sNode* exp_604;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
_Bool no_comma_605;
void* __right_value696 = (void*)0;
struct sNode* exp_606;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sNode* right_node_607;
void* __right_value701 = (void*)0;
char* var_name2_608;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value714 = (void*)0;
struct sNode* node_609;
struct sNode* __result374__;
void* __right_value715 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_611=0;
char* name_612=0;
_Bool err_613=0;
void* __right_value716 = (void*)0;
char* __dec_obj349;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value728 = (void*)0;
struct sNode* self_node_617;
void* __right_value729 = (void*)0;
struct sNode* right_node_619;
void* __right_value730 = (void*)0;
struct sNode* node_620;
struct sNode* __result379__;
void* __right_value731 = (void*)0;
struct sNode* __result380__;
void* __right_value732 = (void*)0;
struct sNode* right_value_621;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj365;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value746 = (void*)0;
struct sNode* node_622;
struct sNode* __result383__;
void* __right_value747 = (void*)0;
_Bool _elif_conditional1;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value754 = (void*)0;
struct sNode* node_624;
void* __right_value755 = (void*)0;
struct sNode* __dec_obj384;
struct sNode* __result386__;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value762 = (void*)0;
struct sNode* node_626;
void* __right_value763 = (void*)0;
struct sNode* __dec_obj389;
struct sNode* __result389__;
char* word_628;
void* __right_value764 = (void*)0;
char* __dec_obj390;
void* __right_value765 = (void*)0;
char* __dec_obj391;
_Bool is_type_name_flag_629;
void* __right_value766 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* type_630=0;
char* name_631=0;
_Bool err_632=0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value772 = (void*)0;
struct sNode* node_633;
struct sNode* __result392__;
struct sNode* right_value_635;
_Bool no_comma_636;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj396;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj397;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj398;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value787 = (void*)0;
struct sNode* node_637;
struct sNode* __result395__;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value799 = (void*)0;
struct sNode* node_639;
struct sNode* __result398__;
word_628 = (void*)0;
    sline_real_558=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_559=is_type_name(buf,info);
    multiple_declare_560=(_Bool)0;
    if(    is_type_name_flag_559) {
        p_561=info->p;
        sline_562=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value645=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_563=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_564=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_565=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value645,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            err_565) {
                parse_sharp_v5(info);
                multiple_assign_var5=((struct tuple2$2sTypephcharph*)(__right_value646=parse_variable_name((struct sType*)come_increment_ref_count(type_563),(_Bool)1,info)));
                type_566=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_567=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value646,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value647=skip_block(info)));
                        __right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_568=info->no_output_err;
                        no_comma_569=info->no_comma;
                        no_output_come_code_570=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_571=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_569;
                        info->no_output_err=no_output_err_568;
                        info->no_output_come_code=no_output_come_code_570;
                        if(exp_571) { exp_571 = come_decrement_ref_count2(exp_571, ((struct sNode*)exp_571)->finalize, ((struct sNode*)exp_571)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(                !is_type_name(name_567,info)&&*info->p==44) {
                    multiple_declare_560=(_Bool)1;
                }
                come_call_finalizer3(type_566,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_567 = come_decrement_ref_count2(name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_564 = come_decrement_ref_count2(name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_561;
        info->sline=sline_562;
    }
    attr_define_572=(_Bool)0;
    if(    is_type_name_flag_559&&info->defining_class) {
        p_573=info->p;
        sline_574=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value649=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_575=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_576=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_577=multiple_assign_var6->v3;
        come_call_finalizer3(__right_value649,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        err_577&&strmemcmp(info->p,"self")) {
            attr_define_572=(_Bool)1;
        }
        info->p=p_573;
        info->sline=sline_574;
        come_call_finalizer3(type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_576 = come_decrement_ref_count2(name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_578=((struct sFun*)(__right_value650=map$2charphsFunphp_operator_load_element(info->funcs,buf)));
    come_call_finalizer3(__right_value650,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_579=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_580=((void*)0);
        if(        *info->p==44) {
            __dec_obj307=multiple_assign_580;
            multiple_assign_580=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1346, "list$1charph"))));
            come_call_finalizer3(__dec_obj307,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            list$1charph_push_back(multiple_assign_580,(char*)come_increment_ref_count(string_clone(buf2_579)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_581=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_580,(char*)come_increment_ref_count(string_clone(buf3_581)));
                buf3_581 = come_decrement_ref_count2(buf3_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_582=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_583=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_582;
            parse_sharp_v5(info);
            __dec_obj308=right_value_583;
            right_value_583=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_583),info));
            if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1376, "struct sNode");
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value662=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1376, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf2_579)),(struct list$1charph*)come_increment_ref_count(multiple_assign_580),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_583),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_584=(struct sNode*)come_increment_ref_count(_inf_value5);
            come_call_finalizer3(__right_value662,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_558;
            __result365__ = gComeFunResultObject = __result_obj__ = node_584;
            if(right_value_583) { right_value_583 = come_decrement_ref_count2(right_value_583, ((struct sNode*)right_value_583)->finalize, ((struct sNode*)right_value_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_584) { node_584 = come_decrement_ref_count2(node_584, ((struct sNode*)node_584)->finalize, ((struct sNode*)node_584)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_579 = come_decrement_ref_count2(buf2_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_580,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result365__;
            if(right_value_583) { right_value_583 = come_decrement_ref_count2(right_value_583, ((struct sNode*)right_value_583)->finalize, ((struct sNode*)right_value_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_584) { node_584 = come_decrement_ref_count2(node_584, ((struct sNode*)node_584)->finalize, ((struct sNode*)node_584)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_579 = come_decrement_ref_count2(buf2_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_580,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1386, "struct sNode");
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value673=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1386, "sNewChannel")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_586=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value673,sNewChannel_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_558;
        __result368__ = gComeFunResultObject = __result_obj__ = node_586;
        if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result368__;
        if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    multiple_declare_560) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_588=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1394, "list$1tuple3$3sTypephcharphsNodephph"))));
        parse_sharp_v5(info);
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value679=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_589=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_590=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_591=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value679,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_591) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value680=parse_variable_name((struct sType*)come_increment_ref_count(base_type_589),(_Bool)1,info)));
        type2_592=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_593=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value680,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_592->mClass->mStruct&&list$1sNodeph_length(type2_592->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_594=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_595=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_594;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_588,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1421, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_592),(char*)come_increment_ref_count(var_name_593),(struct sNode*)come_increment_ref_count(exp_595))));
                if(exp_595) { exp_595 = come_decrement_ref_count2(exp_595, ((struct sNode*)exp_595)->finalize, ((struct sNode*)exp_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_599=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_600=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_599;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_588,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1431, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_592),(char*)come_increment_ref_count(var_name_593),(struct sNode*)come_increment_ref_count(exp_600))));
                if(exp_600) { exp_600 = come_decrement_ref_count2(exp_600, ((struct sNode*)exp_600)->finalize, ((struct sNode*)exp_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_588,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1435, "struct tuple3$3sTypephcharphvoidp")),(struct sType*)come_increment_ref_count(type2_592),(char*)come_increment_ref_count(var_name_593),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple2$2sTypephcharph*)(__right_value692=parse_variable_name((struct sType*)come_increment_ref_count(base_type_589),(_Bool)0,info)));
            type2_601=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            var_name_602=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            come_call_finalizer3(__right_value692,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_601->mClass->mStruct&&list$1sNodeph_length(type2_601->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_603=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_604=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_603;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_588,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1457, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_601),(char*)come_increment_ref_count(var_name_602),(struct sNode*)come_increment_ref_count(exp_604))));
                    if(exp_604) { exp_604 = come_decrement_ref_count2(exp_604, ((struct sNode*)exp_604)->finalize, ((struct sNode*)exp_604)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    no_comma_605=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_606=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_605;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_588,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1469, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_601),(char*)come_increment_ref_count(var_name_602),(struct sNode*)come_increment_ref_count(exp_606))));
                    if(exp_606) { exp_606 = come_decrement_ref_count2(exp_606, ((struct sNode*)exp_606)->finalize, ((struct sNode*)exp_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
            else {
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_588,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1473, "struct tuple3$3sTypephcharphvoidp")),(struct sType*)come_increment_ref_count(type2_601),(char*)come_increment_ref_count(var_name_602),((void*)0))));
            }
            come_call_finalizer3(type2_601,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_602 = come_decrement_ref_count2(var_name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_607=((void*)0);
        var_name2_608=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1480, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value705=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1480, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_588),(struct sType*)come_increment_ref_count(base_type_589),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_609=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer3(__right_value705,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_558;
        __result374__ = gComeFunResultObject = __result_obj__ = node_609;
        come_call_finalizer3(multiple_declare_588,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_589,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_590 = come_decrement_ref_count2(name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_592,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_593 = come_decrement_ref_count2(var_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_607) { right_node_607 = come_decrement_ref_count2(right_node_607, ((struct sNode*)right_node_607)->finalize, ((struct sNode*)right_node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_608 = come_decrement_ref_count2(var_name2_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_609) { node_609 = come_decrement_ref_count2(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result374__;
        come_call_finalizer3(multiple_declare_588,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_589,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_590 = come_decrement_ref_count2(name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_592,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_593 = come_decrement_ref_count2(var_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_607) { right_node_607 = come_decrement_ref_count2(right_node_607, ((struct sNode*)right_node_607)->finalize, ((struct sNode*)right_node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_608 = come_decrement_ref_count2(var_name2_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_609) { node_609 = come_decrement_ref_count2(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    attr_define_572) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value715=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_611=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name_612=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_613=multiple_assign_var10->v3;
        come_call_finalizer3(__right_value715,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_613) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj349=name_612;
        name_612=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2charphsTypephph_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1503, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_612),(struct sType*)come_increment_ref_count(type_611))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1511, "struct sNode");
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value724=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1511, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_617=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value724,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_node_619=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_620=(struct sNode*)come_increment_ref_count(store_field(self_node_617,(struct sNode*)come_increment_ref_count(right_node_619),(char*)come_increment_ref_count(name_612),info));
            info->sline_real=sline_real_558;
            __result379__ = gComeFunResultObject = __result_obj__ = node_620;
            if(self_node_617) { self_node_617 = come_decrement_ref_count2(self_node_617, ((struct sNode*)self_node_617)->finalize, ((struct sNode*)self_node_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_619) { right_node_619 = come_decrement_ref_count2(right_node_619, ((struct sNode*)right_node_619)->finalize, ((struct sNode*)right_node_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_620) { node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer3(type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_612 = come_decrement_ref_count2(name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result379__;
            if(self_node_617) { self_node_617 = come_decrement_ref_count2(self_node_617, ((struct sNode*)self_node_617)->finalize, ((struct sNode*)self_node_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_619) { right_node_619 = come_decrement_ref_count2(right_node_619, ((struct sNode*)right_node_619)->finalize, ((struct sNode*)right_node_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_620) { node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            info->sline_real=sline_real_558;
            __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value731=create_null_node(info)));
            come_call_finalizer3(type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_612 = come_decrement_ref_count2(name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value731) { __right_value731 = come_decrement_ref_count2(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result380__;
        }
        come_call_finalizer3(type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_612 = come_decrement_ref_count2(name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !is_type_name_flag_559&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_621=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj365=right_value_621;
        right_value_621=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_621),info));
        if(__dec_obj365) { __dec_obj365 = come_decrement_ref_count2(__dec_obj365, ((struct sNode*)__dec_obj365)->finalize, ((struct sNode*)__dec_obj365)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1536, "struct sNode");
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value737=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1536, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_621),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_622=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value737,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_558;
        __result383__ = gComeFunResultObject = __result_obj__ = node_622;
        if(right_value_621) { right_value_621 = come_decrement_ref_count2(right_value_621, ((struct sNode*)right_value_621)->finalize, ((struct sNode*)right_value_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_622) { node_622 = come_decrement_ref_count2(node_622, ((struct sNode*)node_622)->finalize, ((struct sNode*)node_622)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result383__;
        if(right_value_621) { right_value_621 = come_decrement_ref_count2(right_value_621, ((struct sNode*)right_value_621)->finalize, ((struct sNode*)right_value_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_622) { node_622 = come_decrement_ref_count2(node_622, ((struct sNode*)node_622)->finalize, ((struct sNode*)node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_559||((struct sFun*)(__right_value747=map$2charphsFunphp_operator_load_element(info->funcs,buf))))),    come_call_finalizer3(__right_value747,sFun_finalize, 0, 1, 0, 0, __result_obj__),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1541, "struct sNode");
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value750=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1541, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_624=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value750,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj384=node_624;
        node_624=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_624),info));
        if(__dec_obj384) { __dec_obj384 = come_decrement_ref_count2(__dec_obj384, ((struct sNode*)__dec_obj384)->finalize, ((struct sNode*)__dec_obj384)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_558;
        __result386__ = gComeFunResultObject = __result_obj__ = node_624;
        if(node_624) { node_624 = come_decrement_ref_count2(node_624, ((struct sNode*)node_624)->finalize, ((struct sNode*)node_624)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result386__;
        if(node_624) { node_624 = come_decrement_ref_count2(node_624, ((struct sNode*)node_624)->finalize, ((struct sNode*)node_624)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !is_type_name_flag_559) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1549, "struct sNode");
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value758=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1549, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_626=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value758,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj389=node_626;
        node_626=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_626),info));
        if(__dec_obj389) { __dec_obj389 = come_decrement_ref_count2(__dec_obj389, ((struct sNode*)__dec_obj389)->finalize, ((struct sNode*)__dec_obj389)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_558;
        __result389__ = gComeFunResultObject = __result_obj__ = node_626;
        if(node_626) { node_626 = come_decrement_ref_count2(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result389__;
        if(node_626) { node_626 = come_decrement_ref_count2(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj390=word_628;
            word_628=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj390 = come_decrement_ref_count2(__dec_obj390, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj391=word_628;
            word_628=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj391 = come_decrement_ref_count2(__dec_obj391, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        is_type_name_flag_629=is_type_name(word_628,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_629) {
            parse_sharp_v5(info);
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value766=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_630=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_631=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_632=multiple_assign_var11->v3;
            come_call_finalizer3(__right_value766,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            !err_632) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1586, "struct sNode");
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value768=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1586, "sLoadNode")),(char*)come_increment_ref_count(name_631),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_633=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer3(__right_value768,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_558;
                __result392__ = gComeFunResultObject = __result_obj__ = node_633;
                if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_628 = come_decrement_ref_count2(word_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result392__;
                if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_635=((void*)0);
                if(                type_630->mClass->mStruct&&list$1sNodeph_length(type_630->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_636=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj396=right_value_635;
                    right_value_635=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj396) { __dec_obj396 = come_decrement_ref_count2(__dec_obj396, ((struct sNode*)__dec_obj396)->finalize, ((struct sNode*)__dec_obj396)->_protocol_obj, 0,0,0, (void*)0); };
                    info->no_comma=no_comma_636;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj397=right_value_635;
                    right_value_635=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj397) { __dec_obj397 = come_decrement_ref_count2(__dec_obj397, ((struct sNode*)__dec_obj397)->finalize, ((struct sNode*)__dec_obj397)->_protocol_obj, 0,0,0, (void*)0); };
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj398=right_value_635;
                right_value_635=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_635),info));
                if(__dec_obj398) { __dec_obj398 = come_decrement_ref_count2(__dec_obj398, ((struct sNode*)__dec_obj398)->finalize, ((struct sNode*)__dec_obj398)->_protocol_obj, 0,0,0, (void*)0); };
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1615, "struct sNode");
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value778=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1615, "sStoreNode")),(char*)come_increment_ref_count(name_631),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_630),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_635),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_637=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer3(__right_value778,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_558;
                __result395__ = gComeFunResultObject = __result_obj__ = node_637;
                if(right_value_635) { right_value_635 = come_decrement_ref_count2(right_value_635, ((struct sNode*)right_value_635)->finalize, ((struct sNode*)right_value_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_628 = come_decrement_ref_count2(word_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result395__;
                if(right_value_635) { right_value_635 = come_decrement_ref_count2(right_value_635, ((struct sNode*)right_value_635)->finalize, ((struct sNode*)right_value_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1620, "struct sNode");
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value790=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1620, "sStoreNode")),(char*)come_increment_ref_count(name_631),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_630),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_639=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer3(__right_value790,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_558;
                __result398__ = gComeFunResultObject = __result_obj__ = node_639;
                if(node_639) { node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_628 = come_decrement_ref_count2(word_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result398__;
                if(node_639) { node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            come_call_finalizer3(type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        word_628 = come_decrement_ref_count2(word_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj303;
char* __dec_obj304;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj303=self->v1;
            come_call_finalizer3(__dec_obj303,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj304=self->v2;
            __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj305;
char* __dec_obj306;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj305=self->v1;
            come_call_finalizer3(__dec_obj305,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj306=self->v2;
            __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sNewChannel_finalize(struct sNewChannel* self){
char* __dec_obj323;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj323=self->sname;
            __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
void* __result_obj__=(void*)0;
struct sNewChannel* __result366__;
void* __right_value674 = (void*)0;
struct sNewChannel* result_587;
void* __right_value675 = (void*)0;
char* __dec_obj324;
struct sNewChannel* __result367__;
    if(    self==(void*)0) {
        __result366__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    result_587=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "sNewChannel"));
    if(    self!=((void*)0)) {
        result_587->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj324=result_587->sname;
        result_587->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->sline_real=self->sline_real;
    }
    __result367__ = gComeFunResultObject = __result_obj__ = result_587;
    come_call_finalizer3(result_587,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value682 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_596;
struct tuple3$3sTypephcharphsNodeph* __dec_obj325;
void* __right_value683 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_597;
struct tuple3$3sTypephcharphsNodeph* __dec_obj326;
void* __right_value684 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_598;
struct tuple3$3sTypephcharphsNodeph* __dec_obj327;
struct list$1tuple3$3sTypephcharphsNodephph* __result369__;
    if(    self->len==0) {
        litem_596=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value682=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1154, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_596->prev=((void*)0);
        litem_596->next=((void*)0);
        __dec_obj325=litem_596->item;
        litem_596->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj325,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_596;
        self->head=litem_596;
    }
    else if(    self->len==1) {
        litem_597=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value683=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1164, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_597->prev=self->head;
        litem_597->next=((void*)0);
        __dec_obj326=litem_597->item;
        litem_597->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj326,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_597;
        self->head->next=litem_597;
    }
    else {
        litem_598=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value684=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1174, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_598->prev=self->tail;
        litem_598->next=((void*)0);
        __dec_obj327=litem_598->item;
        litem_598->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj327,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_598;
        self->tail=litem_598;
    }
    self->len++;
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj328;
char* __dec_obj329;
struct sNode* __dec_obj330;
struct tuple3$3sTypephcharphsNodeph* __result370__;
    __dec_obj328=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj328,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj329=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj330=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj330) { __dec_obj330 = come_decrement_ref_count2(__dec_obj330, ((struct sNode*)__dec_obj330)->finalize, ((struct sNode*)__dec_obj330)->_protocol_obj, 0,0,0, (void*)0); };
    __result370__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj331;
char* __dec_obj332;
struct tuple3$3sTypephcharphvoidp* __result371__;
    __dec_obj331=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj331,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj332=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result371__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj333;
char* __dec_obj334;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj333=self->v1;
            come_call_finalizer3(__dec_obj333,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj334=self->v2;
            __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value717 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_614;
struct tuple2$2charphsTypeph* __dec_obj350;
void* __right_value718 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_615;
struct tuple2$2charphsTypeph* __dec_obj353;
void* __right_value719 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_616;
struct tuple2$2charphsTypeph* __dec_obj356;
struct list$1tuple2$2charphsTypephph* __result375__;
    if(    self->len==0) {
        litem_614=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value717=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1084, "list_item$1tuple2$2charphsTypephph"))));
        litem_614->prev=((void*)0);
        litem_614->next=((void*)0);
        __dec_obj350=litem_614->item;
        litem_614->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj350,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_614;
        self->head=litem_614;
    }
    else if(    self->len==1) {
        litem_615=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value718=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1094, "list_item$1tuple2$2charphsTypephph"))));
        litem_615->prev=self->head;
        litem_615->next=((void*)0);
        __dec_obj353=litem_615->item;
        litem_615->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj353,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_615;
        self->head->next=litem_615;
    }
    else {
        litem_616=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value719=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1104, "list_item$1tuple2$2charphsTypephph"))));
        litem_616->prev=self->tail;
        litem_616->next=((void*)0);
        __dec_obj356=litem_616->item;
        litem_616->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj356,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_616;
        self->tail=litem_616;
    }
    self->len++;
    __result375__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj357;
struct sType* __dec_obj358;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj357=self->v1;
            __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj358=self->v2;
            come_call_finalizer3(__dec_obj358,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj359;
struct sType* __dec_obj360;
struct tuple2$2charphsTypeph* __result376__;
    __dec_obj359=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj360=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj360,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result376__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __dec_obj392;
char* __dec_obj393;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj392=self->sname;
            __dec_obj392 = come_decrement_ref_count2(__dec_obj392, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj393=self->name;
            __dec_obj393 = come_decrement_ref_count2(__dec_obj393, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__=(void*)0;
struct sLoadNode* __result390__;
void* __right_value769 = (void*)0;
struct sLoadNode* result_634;
void* __right_value770 = (void*)0;
char* __dec_obj394;
void* __right_value771 = (void*)0;
char* __dec_obj395;
struct sLoadNode* __result391__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_634=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"));
    if(    self!=((void*)0)) {
        result_634->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj394=result_634->sname;
        result_634->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj394 = come_decrement_ref_count2(__dec_obj394, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_634->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj395=result_634->name;
        result_634->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result391__ = gComeFunResultObject = __result_obj__ = result_634;
    come_call_finalizer3(result_634,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __dec_obj413;
char* __dec_obj414;
struct sType* __dec_obj415;
struct sNode* __dec_obj416;
struct list$1charph* __dec_obj417;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj418;
char* __dec_obj419;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj413=self->sname;
            __dec_obj413 = come_decrement_ref_count2(__dec_obj413, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj414=self->name;
            __dec_obj414 = come_decrement_ref_count2(__dec_obj414, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj415=self->type;
            come_call_finalizer3(__dec_obj415,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj416=self->right_value;
            if(__dec_obj416) { __dec_obj416 = come_decrement_ref_count2(__dec_obj416, ((struct sNode*)__dec_obj416)->finalize, ((struct sNode*)__dec_obj416)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        if(        self->multiple_assign==gComeFunResultObject) {
            __dec_obj417=self->multiple_assign;
            come_call_finalizer3(__dec_obj417,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj418=self->multiple_declare;
            come_call_finalizer3(__dec_obj418,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        if(        self->attribute==gComeFunResultObject) {
            __dec_obj419=self->attribute;
            __dec_obj419 = come_decrement_ref_count2(__dec_obj419, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->attribute = come_decrement_ref_count2(self->attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__=(void*)0;
struct sStoreNode* __result396__;
void* __right_value791 = (void*)0;
struct sStoreNode* result_640;
void* __right_value792 = (void*)0;
char* __dec_obj420;
void* __right_value793 = (void*)0;
char* __dec_obj421;
void* __right_value794 = (void*)0;
struct sType* __dec_obj422;
void* __right_value795 = (void*)0;
struct sNode* __dec_obj423;
void* __right_value796 = (void*)0;
struct list$1charph* __dec_obj424;
void* __right_value797 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj425;
void* __right_value798 = (void*)0;
char* __dec_obj426;
struct sStoreNode* __result397__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_640=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj420=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj420 = come_decrement_ref_count2(__dec_obj420, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj421=result_640->name;
        result_640->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj421 = come_decrement_ref_count2(__dec_obj421, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj422=result_640->type;
        result_640->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj422,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj423=result_640->right_value;
        result_640->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        if(__dec_obj423) { __dec_obj423 = come_decrement_ref_count2(__dec_obj423, ((struct sNode*)__dec_obj423)->finalize, ((struct sNode*)__dec_obj423)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj424=result_640->multiple_assign;
        result_640->multiple_assign=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->multiple_assign));
        come_call_finalizer3(__dec_obj424,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj425=result_640->multiple_declare;
        result_640->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare));
        come_call_finalizer3(__dec_obj425,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj426=result_640->attribute;
        result_640->attribute=(char*)come_increment_ref_count(string_clone(self->attribute));
        __dec_obj426 = come_decrement_ref_count2(__dec_obj426, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

struct sNode* expression_node_v95(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* node_641;
void* __right_value800 = (void*)0;
struct sNode* exp_642;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value806 = (void*)0;
struct sNode* __result401__;
void* __right_value807 = (void*)0;
struct sNode* __dec_obj431;
struct sNode* __result402__;
node_641 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_642=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1646, "struct sNode");
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value802=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1646, "sReadChannelNode")),(struct sNode*)come_increment_ref_count(exp_642),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result401__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value806=_inf_value15));
        if(exp_642) { exp_642 = come_decrement_ref_count2(exp_642, ((struct sNode*)exp_642)->finalize, ((struct sNode*)exp_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_641) { node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value802,sReadChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value806) { __right_value806 = come_decrement_ref_count2(__right_value806, ((struct sNode*)__right_value806)->finalize, ((struct sNode*)__right_value806)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result401__;
        if(exp_642) { exp_642 = come_decrement_ref_count2(exp_642, ((struct sNode*)exp_642)->finalize, ((struct sNode*)exp_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        __dec_obj431=node_641;
        node_641=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        if(__dec_obj431) { __dec_obj431 = come_decrement_ref_count2(__dec_obj431, ((struct sNode*)__dec_obj431)->finalize, ((struct sNode*)__dec_obj431)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result402__ = gComeFunResultObject = __result_obj__ = node_641;
    if(node_641) { node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
char* __dec_obj427;
struct sNode* __dec_obj428;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj427=self->sname;
            __dec_obj427 = come_decrement_ref_count2(__dec_obj427, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj428=self->exp;
            if(__dec_obj428) { __dec_obj428 = come_decrement_ref_count2(__dec_obj428, ((struct sNode*)__dec_obj428)->finalize, ((struct sNode*)__dec_obj428)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
struct sReadChannelNode* __result399__;
void* __right_value803 = (void*)0;
struct sReadChannelNode* result_643;
void* __right_value804 = (void*)0;
char* __dec_obj429;
void* __right_value805 = (void*)0;
struct sNode* __dec_obj430;
struct sReadChannelNode* __result400__;
    if(    self==(void*)0) {
        __result399__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    result_643=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "sReadChannelNode"));
    if(    self!=((void*)0)) {
        result_643->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj429=result_643->sname;
        result_643->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj429 = come_decrement_ref_count2(__dec_obj429, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_643->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj430=result_643->exp;
        result_643->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj430) { __dec_obj430 = come_decrement_ref_count2(__dec_obj430, ((struct sNode*)__dec_obj430)->finalize, ((struct sNode*)__dec_obj430)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result400__ = gComeFunResultObject = __result_obj__ = result_643;
    come_call_finalizer3(result_643,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value808 = (void*)0;
struct sNode* right_value_644;
void* __right_value809 = (void*)0;
struct sNode* __dec_obj432;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value816 = (void*)0;
struct sNode* __result405__;
void* __right_value817 = (void*)0;
struct sNode* __result406__;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_644=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj432=right_value_644;
        right_value_644=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_644),info));
        if(__dec_obj432) { __dec_obj432 = come_decrement_ref_count2(__dec_obj432, ((struct sNode*)__dec_obj432)->finalize, ((struct sNode*)__dec_obj432)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1669, "struct sNode");
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value811=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1669, "sWriteChannelNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_644),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result405__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value816=_inf_value16));
        if(right_value_644) { right_value_644 = come_decrement_ref_count2(right_value_644, ((struct sNode*)right_value_644)->finalize, ((struct sNode*)right_value_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value811,sWriteChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value816) { __right_value816 = come_decrement_ref_count2(__right_value816, ((struct sNode*)__right_value816)->finalize, ((struct sNode*)__right_value816)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result405__;
        if(right_value_644) { right_value_644 = come_decrement_ref_count2(right_value_644, ((struct sNode*)right_value_644)->finalize, ((struct sNode*)right_value_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result406__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value817=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value817) { __right_value817 = come_decrement_ref_count2(__right_value817, ((struct sNode*)__right_value817)->finalize, ((struct sNode*)__right_value817)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
char* __dec_obj433;
struct sNode* __dec_obj434;
struct sNode* __dec_obj435;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj433=self->sname;
            __dec_obj433 = come_decrement_ref_count2(__dec_obj433, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj434=self->exp;
            if(__dec_obj434) { __dec_obj434 = come_decrement_ref_count2(__dec_obj434, ((struct sNode*)__dec_obj434)->finalize, ((struct sNode*)__dec_obj434)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj435=self->right_value;
            if(__dec_obj435) { __dec_obj435 = come_decrement_ref_count2(__dec_obj435, ((struct sNode*)__dec_obj435)->finalize, ((struct sNode*)__dec_obj435)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
struct sWriteChannelNode* __result403__;
void* __right_value812 = (void*)0;
struct sWriteChannelNode* result_645;
void* __right_value813 = (void*)0;
char* __dec_obj436;
void* __right_value814 = (void*)0;
struct sNode* __dec_obj437;
void* __right_value815 = (void*)0;
struct sNode* __dec_obj438;
struct sWriteChannelNode* __result404__;
    if(    self==(void*)0) {
        __result403__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    result_645=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "sWriteChannelNode"));
    if(    self!=((void*)0)) {
        result_645->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj436=result_645->sname;
        result_645->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj436 = come_decrement_ref_count2(__dec_obj436, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_645->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj437=result_645->exp;
        result_645->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj437) { __dec_obj437 = come_decrement_ref_count2(__dec_obj437, ((struct sNode*)__dec_obj437)->finalize, ((struct sNode*)__dec_obj437)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj438=result_645->right_value;
        result_645->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        if(__dec_obj438) { __dec_obj438 = come_decrement_ref_count2(__dec_obj438, ((struct sNode*)__dec_obj438)->finalize, ((struct sNode*)__dec_obj438)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result404__ = gComeFunResultObject = __result_obj__ = result_645;
    come_call_finalizer3(result_645,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

