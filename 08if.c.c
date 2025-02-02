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

struct sIfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNodeph* mElifExpressionNodes;
    struct list$1sBlockph* mElifBlocks;
    int mElifNum;
    _Bool mGuard;
    struct sBlock* mElseBlock;
};

struct sMatchNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sIfMethodNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sOrStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sAndStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sMultipleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* multiple_node;
};

struct list$1sRightValueObjectph* gExceptionRightValueObjects=(void*)0;
struct sSaveRightValueObjects
{
    int sline;
    char* sname;
    int sline_real;
};

struct sRestoreRightValueObjects
{
    int sline;
    char* sname;
    int sline_real;
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct sVar* sVar_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
static struct list$1sVarph* list$1sVarph_initialize(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static struct list$1sVarph* list$1sVarph_add(struct list$1sVarph* self, struct sVar* item);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
char* sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
char* sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info);
_Bool sMultipleNode_terminated(struct sMultipleNode* self);
char* sMultipleNode_kind(struct sMultipleNode* self);
_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info);
static void sMultipleNode_finalize(struct sMultipleNode* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info);
_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self);
char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self);
_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info);
static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info);
_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self);
char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self);
_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info);
static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self);
static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value251 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value319 = (void*)0;
struct sBlock* __dec_obj96;
void* __right_value320 = (void*)0;
struct list$1sNodeph* __dec_obj97;
void* __right_value327 = (void*)0;
struct list$1sBlockph* __dec_obj102;
void* __right_value328 = (void*)0;
struct sBlock* __dec_obj103;
struct sBlock* __dec_obj104;
struct sIfNode* __result268__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj96=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj96,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, elif_expression_nodes));
    come_call_finalizer3(__dec_obj97,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj102=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, elif_blocks));
    come_call_finalizer3(__dec_obj102,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block) {
        __dec_obj103=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, else_block));
        come_call_finalizer3(__dec_obj103,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj104=self->mElseBlock;
        self->mElseBlock=((void*)0);
        come_call_finalizer3(__dec_obj104,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result268__;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
char* __result269__;
    __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value329=__builtin_string("sIfNode")));
    __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_364;
int i_365;
void* __right_value330 = (void*)0;
_Bool _if_conditional1;
struct sBlock* else_block_369;
int elif_num_370;
_Bool guard__371;
char* if_result_var_name_372;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* if_result_type_373;
void* __right_value333 = (void*)0;
char* __dec_obj111;
void* __right_value334 = (void*)0;
struct sVar* var__375;
void* __right_value335 = (void*)0;
struct sNode* expression_node_376;
int sline_377;
char* sname_378;
_Bool comma_instead_of_semicolon_before_379;
_Bool Value_380;
_Bool __result272__;
struct sBlock* if_block_381;
_Bool normal_if_382;
void* __right_value336 = (void*)0;
struct CVALUE* conditional_value_383;
struct sVar* var__384;
int num_if_conditional_stack_386;
void* __right_value337 = (void*)0;
struct CVALUE* conditional_value_387;
struct sVar* var__388;
int i_389;
void* __right_value338 = (void*)0;
struct sNode* expression_node2_390;
_Bool comma_instead_of_semicolon_before_394;
_Bool Value_395;
_Bool __result275__;
void* __right_value339 = (void*)0;
struct sBlock* elif_node_block_396;
_Bool normal_if_397;
void* __right_value340 = (void*)0;
struct CVALUE* conditional_value_398;
void* __right_value341 = (void*)0;
struct CVALUE* conditional_value_399;
int num_elif_conditional_stack_401;
struct sVar* var__402;
int __exception_result_var_b1;
void* __right_value342 = (void*)0;
struct sNode* result_node_403;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sNode* __dec_obj115;
_Bool Value_404;
_Bool __result276__;
void* __right_value345 = (void*)0;
struct CVALUE* come_value2_405;
void* __right_value346 = (void*)0;
struct sType* __dec_obj116;
char* __dec_obj120;
_Bool __result278__;
    existance_of_result_value_364=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon) {
            existance_of_result_value_364=(_Bool)0;
        }
        for(        i_365=0;        i_365<self->mElifNum;        i_365++        ){
            if(            (_if_conditional1=(!((struct sBlock*)(__right_value330=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_365)))->mOmitSemicolon)),            come_call_finalizer3(__right_value330,sBlock_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                existance_of_result_value_364=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon) {
            existance_of_result_value_364=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"In conditional operator comelang can't use if statment");
        return (_Bool)0;
    }
    else_block_369=self->mElseBlock;
    elif_num_370=self->mElifNum;
    guard__371=self->mGuard;
    if_result_var_name_372=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_364) {
        if_result_type_373=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "08if.c", 69, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        static int var_num_374=0;
        __dec_obj111=info->if_result_var_name;
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_374++));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, if_result_type_373)),info);
        var__375=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value335=make_define_var(var__375->mType,var__375->mCValueName,(_Bool)0,info))));
        __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(if_result_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    expression_node_376=self->mExpressionNode;
    sline_377=info->sline;
    sname_378=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_379=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    Value_380=node_compile(expression_node_376,info);
    if(    !Value_380) {
        __result272__ = (_Bool)0;
        if_result_var_name_372 = come_decrement_ref_count2(if_result_var_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result272__;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_379;
    if_block_381=self->mIfBlock;
    normal_if_382=(_Bool)1;
    if(    existance_free_right_value_objects(info)) {
        normal_if_382=(_Bool)0;
    }
    if(    normal_if_382) {
        conditional_value_383=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__371) {
            var__384=conditional_value_383->var;
            if(            var__384) {
                var__384->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"%s) {\n",conditional_value_383->c_value);
        come_call_finalizer3(conditional_value_383,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        static int num_if_conditional_385=0;
        add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_385);
        num_if_conditional_stack_386=num_if_conditional_385;
        conditional_value_387=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__371) {
            var__388=conditional_value_387->var;
            if(            var__388) {
                var__388->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"(_if_conditional%d=(%s)),",num_if_conditional_385,conditional_value_387->c_value);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_386);
        come_call_finalizer3(conditional_value_387,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_block(if_block_381,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_364);
    add_come_code(info,"}\n");
    if(    elif_num_370>0) {
        for(        i_389=0;        i_389<elif_num_370;        i_389++        ){
            expression_node2_390=((struct sNode*)come_null_check(((struct sNode*)(__right_value338=list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_389))), "08if.c", 147, 0));
            if(__right_value338) { __right_value338 = come_decrement_ref_count2(__right_value338, ((struct sNode*)__right_value338)->finalize, ((struct sNode*)__right_value338)->_protocol_obj, 1, 0, 0, (void*)0); } 
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_394=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            Value_395=node_compile(expression_node2_390,info);
            if(            !Value_395) {
                __result275__ = (_Bool)0;
                if_result_var_name_372 = come_decrement_ref_count2(if_result_var_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result275__;
            }
            else {
            }
            info->without_semicolon=(_Bool)0;
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_394;
            elif_node_block_396=((struct sBlock*)come_null_check(((struct sBlock*)(__right_value339=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_389))), "08if.c", 160, 1));
            come_call_finalizer3(__right_value339,sBlock_finalize, 0, 1, 0, 0, (void*)0);
            normal_if_397=(_Bool)1;
            if(            existance_free_right_value_objects(info)) {
                normal_if_397=(_Bool)0;
            }
            if(            normal_if_397) {
                conditional_value_398=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s) {\n",conditional_value_398->c_value);
                come_call_finalizer3(conditional_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                conditional_value_399=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                static int num_elif_conditional_400=0;
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_400);
                num_elif_conditional_stack_401=num_elif_conditional_400;
                add_come_code(info,"(_elif_conditional%d=(%s)),",num_elif_conditional_400,conditional_value_399->c_value);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_401);
                come_call_finalizer3(conditional_value_399,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            transpile_block(elif_node_block_396,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_364);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_369) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_369,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_364);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_364) {
        var__402=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 207, 2),__exception_result_var_b1=assert_v2(var__402!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_403=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj115=result_node_403;
        result_node_403=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__402->mType)),(struct sNode*)come_increment_ref_count(result_node_403),info));
        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
        Value_404=node_compile(result_node_403,info);
        if(        !Value_404) {
            __result276__ = (_Bool)0;
            if(result_node_403) { result_node_403 = come_decrement_ref_count2(result_node_403, ((struct sNode*)result_node_403)->finalize, ((struct sNode*)result_node_403)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if_result_var_name_372 = come_decrement_ref_count2(if_result_var_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result276__;
        }
        else {
        }
        come_value2_405=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj116=come_value2_405->type;
        come_value2_405->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__402->mType));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_405));
        if(result_node_403) { result_node_403 = come_decrement_ref_count2(result_node_403, ((struct sNode*)result_node_403)->finalize, ((struct sNode*)result_node_403)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value2_405,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj120=info->if_result_var_name;
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_372);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result278__ = (_Bool)1;
    if_result_var_name_372 = come_decrement_ref_count2(if_result_var_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result278__;
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

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result214__;
void* __right_value250 = (void*)0;
struct sNode* result_272;
struct sNode* __result215__;
    if(    self==(void*)0) {
        __result214__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_272=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_272->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_272->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_272->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_272->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_272->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_272->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_272->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_272->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_272->kind=self->kind;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_272;
    if(result_272) { result_272 = come_decrement_ref_count2(result_272, ((struct sNode*)result_272)->finalize, ((struct sNode*)result_272)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result216__;
void* __right_value252 = (void*)0;
struct sBlock* result_273;
void* __right_value259 = (void*)0;
struct list$1sNodeph* __dec_obj37;
void* __right_value318 = (void*)0;
struct sVarTable* __dec_obj93;
struct sBlock* __result263__;
    if(    self==(void*)0) {
        __result216__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    result_273=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj37=result_273->mNodes;
        result_273->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj37,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj93=result_273->mVarTable;
        result_273->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj93,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_273;
    come_call_finalizer3(result_273,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result217__;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct list$1sNodeph* result_276;
struct list_item$1sNodeph* it_277;
void* __right_value258 = (void*)0;
struct list$1sNodeph* __result220__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_276=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_277=self->head;
    while(it_277!=((void*)0)) {
        list$1sNodeph_add(result_276,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_277->item)));
        it_277=it_277->next;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_276;
    come_call_finalizer3(result_276,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result218__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
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

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj33;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
struct list_item$1sNodeph* litem_278;
struct sNode* __dec_obj34;
void* __right_value256 = (void*)0;
struct list_item$1sNodeph* litem_279;
struct sNode* __dec_obj35;
void* __right_value257 = (void*)0;
struct list_item$1sNodeph* litem_280;
struct sNode* __dec_obj36;
struct list$1sNodeph* __result219__;
    if(    self->len==0) {
        litem_278=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value255=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_278->prev=((void*)0);
        litem_278->next=((void*)0);
        __dec_obj34=litem_278->item;
        litem_278->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_278;
        self->head=litem_278;
    }
    else if(    self->len==1) {
        litem_279=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value256=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_279->prev=self->head;
        litem_279->next=((void*)0);
        __dec_obj35=litem_279->item;
        litem_279->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_279;
        self->head->next=litem_279;
    }
    else {
        litem_280=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value257=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_280->prev=self->tail;
        litem_280->next=((void*)0);
        __dec_obj36=litem_280->item;
        litem_280->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_280;
        self->tail=litem_280;
    }
    self->len++;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_281;
struct list_item$1sNodeph* prev_it_282;
    it_281=self->head;
    while(it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        come_call_finalizer3(prev_it_282,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result221__;
void* __right_value260 = (void*)0;
struct sVarTable* result_283;
void* __right_value317 = (void*)0;
struct map$2charphsVarph* __dec_obj92;
struct sVarTable* __result262__;
    if(    self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_283=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj92=result_283->mVars;
        result_283->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj92,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_283->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_283->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_283->mID=self->mID;
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_283;
    come_call_finalizer3(result_283,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result222__;
void* __right_value261 = (void*)0;
void* __right_value267 = (void*)0;
struct map$2charphsVarph* result_293;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1charp* __dec_obj62;
char* it_296;
struct sVar* default_value_299;
void* __right_value270 = (void*)0;
struct sVar* it2_302;
void* __right_value316 = (void*)0;
struct map$2charphsVarph* __result261__;
default_value_299 = (void*)0;
    if(    self==((void*)0)) {
        __result222__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_293=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2551, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj62=result_293->key_list;
    result_293->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2553, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj62,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_296=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_296=map$2charphsVarph_next(self)    ){
        memset(&default_value_299,0,sizeof(struct sVar*));
        it2_302=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_296,default_value_299));
        map$2charphsVarph_put(result_293,it_296,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_302)));
        come_call_finalizer3(it2_302,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_293;
    come_call_finalizer3(result_293,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
int i_284;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1charp* __dec_obj38;
struct map$2charphsVarph* __result224__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value262=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2480, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value263=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2481, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value264=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2482, "_Bool*", (void*)0, (void*)0))));
    for(    i_284=0;    i_284<128;    i_284++    ){
        self->item_existance[i_284]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj38=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2492, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj38,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result223__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_285;
int i_292;
    for(    i_285=0;    i_285<self->size;    i_285++    ){
        if(        self->item_existance[i_285]) {
            if(            1) {
                come_call_finalizer3(self->items[i_285],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_292=0;    i_292<self->size;    i_292++    ){
        if(        self->item_existance[i_292]) {
            if(            1) {
                self->keys[i_292] = come_decrement_ref_count2(self->keys[i_292], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj39;
char* __dec_obj40;
struct sType* __dec_obj41;
char* __dec_obj61;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj39=self->mName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj40=self->mCValueName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj41=self->mType;
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj61=self->mFunName;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj42;
struct tuple1$1sTypeph* __dec_obj44;
struct tuple1$1sTypeph* __dec_obj45;
char* __dec_obj46;
char* __dec_obj47;
struct list$1sTypeph* __dec_obj48;
struct list$1sNodeph* __dec_obj50;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj52;
struct tuple1$1sTypeph* __dec_obj53;
struct sNode* __dec_obj54;
struct tuple1$1sTypeph* __dec_obj55;
struct sNode* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj42=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj42,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj44=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj44,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj45=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj45,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj46=self->mInterfaceName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj47=self->mGenericsName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj48=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj50=self->mArrayNum;
            come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj51=self->mParamTypes;
            come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj52=self->mParamNames;
            come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj53=self->mResultType;
            come_call_finalizer3(__dec_obj53,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj54=self->mAlignas;
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj55=self->mChannelType;
            come_call_finalizer3(__dec_obj55,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj56=self->mSizeNum;
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj57=self->mOriginalTypeName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj58=self->mAsmName;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj59=self->mTupleName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj60=self->mAttribute;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj43;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj43=self->v1;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_286;
struct list_item$1sTypeph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer3(prev_it_287,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj49;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj49=self->item;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_288;
struct list_item$1sTypeph* prev_it_289;
    it_288=self->head;
    while(it_288!=((void*)0)) {
        prev_it_289=it_288;
        it_288=it_288->next;
        come_call_finalizer3(prev_it_289,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_290;
struct list_item$1charph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_294;
char* __result225__;
char* __result226__;
char* result_295;
char* __result227__;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_294,0,sizeof(char*));
        __result225__ = gComeFunResultObject = __result_obj__ = result_294;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result226__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    memset(&result_295,0,sizeof(char*));
    __result227__ = gComeFunResultObject = __result_obj__ = result_295;
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_297;
char* __result228__;
char* __result229__;
char* result_298;
char* __result230__;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_297,0,sizeof(char*));
        __result228__ = gComeFunResultObject = __result_obj__ = result_297;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result229__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    memset(&result_298,0,sizeof(char*));
    __result230__ = gComeFunResultObject = __result_obj__ = result_298;
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_300;
unsigned int it_301;
struct sVar* __result231__;
struct sVar* __result232__;
struct sVar* __result233__;
struct sVar* __result234__;
    hash_300=charp_get_hash_key(((char*)key))%self->size;
    it_301=hash_300;
    while((_Bool)1) {
        if(        self->item_existance[it_301]) {
            if(            charp_equals(self->keys[it_301],key)) {
                __result231__ = gComeFunResultObject = __result_obj__ = self->items[it_301];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
            it_301++;
            if(            it_301>=self->size) {
                it_301=0;
            }
            else if(            it_301==hash_300) {
                __result232__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result232__;
            }
        }
        else {
            __result233__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result233__;
        }
    }
    __result234__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_314;
int it_315;
_Bool same_key_exist_332;
char* it2_335;
struct map$2charphsVarph* __result245__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_314=charp_get_hash_key(key)%self->size;
    it_315=hash_314;
    while((_Bool)1) {
        if(        self->item_existance[it_315]) {
            if(            charp_equals(self->keys[it_315],key)) {
                if(                1) {
                    self->keys[it_315] = come_decrement_ref_count2(self->keys[it_315], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_315]);
                    self->keys[it_315]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_315]);
                    self->keys[it_315]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_315],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_315]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_315]=item;
                }
                break;
            }
            it_315++;
            if(            it_315>=self->size) {
                it_315=0;
            }
            else if(            it_315==hash_314) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_315]=(_Bool)1;
            if(            1) {
                self->keys[it_315]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_315]=key;
            }
            if(            1) {
                self->items[it_315]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_315]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_332=(_Bool)0;
    for(    it2_335=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_335=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_335,key)) {
            same_key_exist_332=(_Bool)1;
        }
    }
    if(    !same_key_exist_332) {
        list$1charp_push_back(self->key_list,key);
    }
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_303;
void* __right_value271 = (void*)0;
char** keys_304;
void* __right_value272 = (void*)0;
struct sVar** items_305;
void* __right_value273 = (void*)0;
_Bool* item_existance_306;
int len_307;
char* it_308;
struct sVar* default_value_309;
void* __right_value274 = (void*)0;
struct sVar* it2_310;
unsigned int hash_311;
int n_312;
struct sVar* default_value_313;
void* __right_value275 = (void*)0;
default_value_309 = (void*)0;
default_value_313 = (void*)0;
    size_303=self->size*10;
    keys_304=(char**)come_increment_ref_count(((char**)(__right_value271=(char**)come_calloc(1, sizeof(char*)*(1*(size_303)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_305=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value272=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_303)), "./comelang.h", 2709, "struct sVar**", (void*)0, (void*)0))));
    item_existance_306=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value273=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_303)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_307=0;
    for(    it_308=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_308=map$2charphsVarph_next(self)    ){
        memset(&default_value_309,0,sizeof(struct sVar*));
        it2_310=((struct sVar*)(__right_value274=map$2charphsVarph_at(self,it_308,default_value_309)));
        come_call_finalizer3(__right_value274,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_311=charp_get_hash_key(it_308)%size_303;
        n_312=hash_311;
        while((_Bool)1) {
            if(            item_existance_306[n_312]) {
                n_312++;
                if(                n_312>=size_303) {
                    n_312=0;
                }
                else if(                n_312==hash_311) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_306[n_312]=(_Bool)1;
                keys_304[n_312]=it_308;
                items_305[n_312]=((struct sVar*)(__right_value275=map$2charphsVarph_at(self,it_308,default_value_313)));
                come_call_finalizer3(__right_value275,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_307++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_304;
    self->items=items_305;
    self->item_existance=item_existance_306;
    self->size=size_303;
    self->len=len_307;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_316;
struct list_item$1charp* it_317;
struct list$1charp* __result238__;
    it2_316=0;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        if(        charp_equals(it_317->item,item)) {
            list$1charp_delete(self,it2_316,it2_316+1);
            break;
        }
        it2_316++;
        it_317=it_317->next;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_318;
struct list$1charp* __result235__;
struct list_item$1charp* it_321;
int i_322;
struct list_item$1charp* prev_it_323;
struct list_item$1charp* it_324;
int i_325;
struct list_item$1charp* prev_it_326;
struct list_item$1charp* it_327;
struct list_item$1charp* head_prev_it_328;
struct list_item$1charp* tail_it_329;
int i_330;
struct list_item$1charp* prev_it_331;
struct list$1charp* __result237__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_318=tail;
        tail=head;
        head=tmp_318;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result235__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_321=self->head;
        i_322=0;
        while(it_321!=((void*)0)) {
            if(            i_322<tail) {
                prev_it_323=it_321;
                it_321=it_321->next;
                i_322++;
                come_call_finalizer3(prev_it_323,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_322==tail) {
                self->head=it_321;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_321=it_321->next;
                i_322++;
            }
        }
    }
    else if(    tail==self->len) {
        it_324=self->head;
        i_325=0;
        while(it_324!=((void*)0)) {
            if(            i_325==head) {
                self->tail=it_324->prev;
                self->tail->next=((void*)0);
            }
            if(            i_325>=head) {
                prev_it_326=it_324;
                it_324=it_324->next;
                i_325++;
                come_call_finalizer3(prev_it_326,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_324=it_324->next;
                i_325++;
            }
        }
    }
    else {
        it_327=self->head;
        head_prev_it_328=((void*)0);
        tail_it_329=((void*)0);
        i_330=0;
        while(it_327!=((void*)0)) {
            if(            i_330==head) {
                head_prev_it_328=it_327->prev;
            }
            if(            i_330==tail) {
                tail_it_329=it_327;
            }
            if(            i_330>=head&&i_330<tail) {
                prev_it_331=it_327;
                it_327=it_327->next;
                i_330++;
                come_call_finalizer3(prev_it_331,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_327=it_327->next;
                i_330++;
            }
        }
        if(        head_prev_it_328!=((void*)0)) {
            head_prev_it_328->next=tail_it_329;
        }
        if(        tail_it_329!=((void*)0)) {
            tail_it_329->prev=head_prev_it_328;
        }
    }
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_319;
struct list_item$1charp* prev_it_320;
struct list$1charp* __result236__;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        come_call_finalizer3(prev_it_320,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_333;
char* __result239__;
char* __result240__;
char* result_334;
char* __result241__;
result_333 = (void*)0;
result_334 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_333,0,sizeof(char*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_333;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->it=self->head;
    if(    self->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_334,0,sizeof(char*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_334;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_336;
char* __result242__;
char* __result243__;
char* result_337;
char* __result244__;
result_336 = (void*)0;
result_337 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_336,0,sizeof(char*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_336;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_337,0,sizeof(char*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_337;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result246__;
void* __right_value276 = (void*)0;
struct sVar* result_338;
void* __right_value277 = (void*)0;
char* __dec_obj63;
void* __right_value278 = (void*)0;
char* __dec_obj64;
void* __right_value314 = (void*)0;
struct sType* __dec_obj90;
void* __right_value315 = (void*)0;
char* __dec_obj91;
struct sVar* __result260__;
    if(    self==(void*)0) {
        __result246__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    result_338=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj63=result_338->mName;
        result_338->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj64=result_338->mCValueName;
        result_338->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj90=result_338->mType;
        result_338->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_338->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_338->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_338->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_338->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_338->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj91=result_338->mFunName;
        result_338->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result260__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer3(result_338,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result247__;
void* __right_value279 = (void*)0;
struct sType* result_339;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj67;
void* __right_value283 = (void*)0;
struct tuple1$1sTypeph* __dec_obj68;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* __dec_obj69;
void* __right_value285 = (void*)0;
char* __dec_obj70;
void* __right_value286 = (void*)0;
char* __dec_obj71;
void* __right_value293 = (void*)0;
struct list$1sTypeph* __dec_obj75;
void* __right_value297 = (void*)0;
struct list$1sNodeph* __dec_obj76;
void* __right_value298 = (void*)0;
struct list$1sTypeph* __dec_obj77;
void* __right_value305 = (void*)0;
struct list$1charph* __dec_obj81;
void* __right_value306 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value307 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value308 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
void* __right_value309 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value310 = (void*)0;
char* __dec_obj86;
void* __right_value311 = (void*)0;
char* __dec_obj87;
void* __right_value312 = (void*)0;
char* __dec_obj88;
void* __right_value313 = (void*)0;
char* __dec_obj89;
struct sType* __result259__;
    if(    self==(void*)0) {
        __result247__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    result_339=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_339->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj67=result_339->mNoSolvedGenericsType;
        result_339->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj67,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj68=result_339->mOriginalLoadVarType;
        result_339->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj68,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj69=result_339->mRefferenceOriginalType;
        result_339->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj69,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj70=result_339->mInterfaceName;
        result_339->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj71=result_339->mGenericsName;
        result_339->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj75=result_339->mGenericsTypes;
        result_339->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypeph_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj75,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj76=result_339->mArrayNum;
        result_339->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodeph_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj76,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj77=result_339->mParamTypes;
        result_339->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypeph_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj77,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj81=result_339->mParamNames;
        result_339->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charph_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj82=result_339->mResultType;
        result_339->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj83=result_339->mAlignas;
        result_339->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj84=result_339->mChannelType;
        result_339->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_339->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_339->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_339->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_339->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_339->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_339->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_339->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_339->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_339->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_339->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_339->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_339->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_339->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_339->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_339->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_339->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_339->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_339->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_339->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_339->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_339->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_339->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_339->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_339->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_339->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj85=result_339->mSizeNum;
        result_339->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_339->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj86=result_339->mOriginalTypeName;
        result_339->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_339->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_339->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_339->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_339->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_339->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_339->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_339->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj87=result_339->mAsmName;
        result_339->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_339->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_339->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_339->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_339->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_339->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj88=result_339->mTupleName;
        result_339->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj89=result_339->mAttribute;
        result_339->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_339;
    come_call_finalizer3(result_339,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result248__;
void* __right_value280 = (void*)0;
struct tuple1$1sTypeph* result_340;
void* __right_value281 = (void*)0;
struct sType* __dec_obj65;
struct tuple1$1sTypeph* __result249__;
    if(    self==(void*)0) {
        __result248__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_340=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj65=result_340->v1;
        result_340->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_340;
    come_call_finalizer3(result_340,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj66;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj66=self->v1;
            come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result250__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1sTypeph* result_341;
struct list_item$1sTypeph* it_342;
void* __right_value292 = (void*)0;
struct list$1sTypeph* __result253__;
    if(    self==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    result_341=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_342=self->head;
    while(it_342!=((void*)0)) {
        list$1sTypeph_add(result_341,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_342->item)));
        it_342=it_342->next;
    }
    __result253__ = gComeFunResultObject = __result_obj__ = result_341;
    come_call_finalizer3(result_341,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result251__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1sTypeph* litem_343;
struct sType* __dec_obj72;
void* __right_value290 = (void*)0;
struct list_item$1sTypeph* litem_344;
struct sType* __dec_obj73;
void* __right_value291 = (void*)0;
struct list_item$1sTypeph* litem_345;
struct sType* __dec_obj74;
struct list$1sTypeph* __result252__;
    if(    self->len==0) {
        litem_343=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value289=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_343->prev=((void*)0);
        litem_343->next=((void*)0);
        __dec_obj72=litem_343->item;
        litem_343->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_343;
        self->head=litem_343;
    }
    else if(    self->len==1) {
        litem_344=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value290=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_344->prev=self->head;
        litem_344->next=((void*)0);
        __dec_obj73=litem_344->item;
        litem_344->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_344;
        self->head->next=litem_344;
    }
    else {
        litem_345=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value291=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_345->prev=self->tail;
        litem_345->next=((void*)0);
        __dec_obj74=litem_345->item;
        litem_345->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_345;
        self->tail=litem_345;
    }
    self->len++;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result254__;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sNodeph* result_346;
struct list_item$1sNodeph* it_347;
void* __right_value296 = (void*)0;
struct list$1sNodeph* __result255__;
    if(    self==((void*)0)) {
        __result254__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_346=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_347=self->head;
    while(it_347!=((void*)0)) {
        list$1sNodeph_add(result_346,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_347->item)));
        it_347=it_347->next;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_346;
    come_call_finalizer3(result_346,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result256__;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1charph* result_348;
struct list_item$1charph* it_349;
void* __right_value304 = (void*)0;
struct list$1charph* __result258__;
    if(    self==((void*)0)) {
        __result256__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    result_348=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_349=self->head;
    while(it_349!=((void*)0)) {
        list$1charph_add(result_348,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_349->item)));
        it_349=it_349->next;
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_348;
    come_call_finalizer3(result_348,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct list_item$1charph* litem_350;
char* __dec_obj78;
void* __right_value302 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj79;
void* __right_value303 = (void*)0;
struct list_item$1charph* litem_352;
char* __dec_obj80;
struct list$1charph* __result257__;
    if(    self->len==0) {
        litem_350=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value301=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_350->prev=((void*)0);
        litem_350->next=((void*)0);
        __dec_obj78=litem_350->item;
        litem_350->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_350;
        self->head=litem_350;
    }
    else if(    self->len==1) {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value302=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_351->prev=self->head;
        litem_351->next=((void*)0);
        __dec_obj79=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_351;
        self->head->next=litem_351;
    }
    else {
        litem_352=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value303=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_352->prev=self->tail;
        litem_352->next=((void*)0);
        __dec_obj80=litem_352->item;
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_352;
        self->tail=litem_352;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_353;
int i_354;
    for(    i_353=0;    i_353<self->size;    i_353++    ){
        if(        self->item_existance[i_353]) {
            if(            1) {
                come_call_finalizer3(self->items[i_353],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_354=0;    i_354<self->size;    i_354++    ){
        if(        self->item_existance[i_354]) {
            if(            1) {
                self->keys[i_354] = come_decrement_ref_count2(self->keys[i_354], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj94;
struct sVarTable* __dec_obj95;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj94=self->mNodes;
            come_call_finalizer3(__dec_obj94,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj95=self->mVarTable;
            come_call_finalizer3(__dec_obj95,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result264__;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1sBlockph* result_357;
struct list_item$1sBlockph* it_358;
void* __right_value326 = (void*)0;
struct list$1sBlockph* __result267__;
    if(    self==((void*)0)) {
        __result264__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_357=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1221, "struct list$1sBlockph*", (void*)0, (void*)0))));
    it_358=self->head;
    while(it_358!=((void*)0)) {
        list$1sBlockph_add(result_357,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_358->item)));
        it_358=it_358->next;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_357;
    come_call_finalizer3(result_357,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result265__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_355;
struct list_item$1sBlockph* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj98;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj98=self->item;
            come_call_finalizer3(__dec_obj98,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
struct list_item$1sBlockph* litem_359;
struct sBlock* __dec_obj99;
void* __right_value324 = (void*)0;
struct list_item$1sBlockph* litem_360;
struct sBlock* __dec_obj100;
void* __right_value325 = (void*)0;
struct list_item$1sBlockph* litem_361;
struct sBlock* __dec_obj101;
struct list$1sBlockph* __result266__;
    if(    self->len==0) {
        litem_359=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value323=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1235, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_359->prev=((void*)0);
        litem_359->next=((void*)0);
        __dec_obj99=litem_359->item;
        litem_359->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_359;
        self->head=litem_359;
    }
    else if(    self->len==1) {
        litem_360=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value324=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1245, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_360->prev=self->head;
        litem_360->next=((void*)0);
        __dec_obj100=litem_360->item;
        litem_360->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_360;
        self->head->next=litem_360;
    }
    else {
        litem_361=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value325=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1255, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_361->prev=self->tail;
        litem_361->next=((void*)0);
        __dec_obj101=litem_361->item;
        litem_361->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_361;
        self->tail=litem_361;
    }
    self->len++;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_362;
struct list_item$1sBlockph* prev_it_363;
    it_362=self->head;
    while(it_362!=((void*)0)) {
        prev_it_363=it_362;
        it_362=it_362->next;
        come_call_finalizer3(prev_it_363,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sIfNode_finalize(struct sIfNode* self){
char* __dec_obj105;
struct sNode* __dec_obj106;
struct sBlock* __dec_obj107;
struct list$1sNodeph* __dec_obj108;
struct list$1sBlockph* __dec_obj109;
struct sBlock* __dec_obj110;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj105=self->sname;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj106=self->mExpressionNode;
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj107=self->mIfBlock;
            come_call_finalizer3(__dec_obj107,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        if(        self->mElifExpressionNodes==gComeFunResultObject) {
            __dec_obj108=self->mElifExpressionNodes;
            come_call_finalizer3(__dec_obj108,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mElifExpressionNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        if(        self->mElifBlocks==gComeFunResultObject) {
            __dec_obj109=self->mElifBlocks;
            come_call_finalizer3(__dec_obj109,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mElifBlocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        if(        self->mElseBlock==gComeFunResultObject) {
            __dec_obj110=self->mElseBlock;
            come_call_finalizer3(__dec_obj110,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mElseBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_366;
int i_367;
struct sBlock* __result270__;
struct sBlock* default_value_368;
struct sBlock* __result271__;
default_value_368 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_366=self->head;
    i_367=0;
    while(it_366!=((void*)0)) {
        if(        position==i_367) {
            __result270__ = gComeFunResultObject = __result_obj__ = it_366->item;
            gComeFunResultObject = (void*)0;
            return __result270__;
        }
        it_366=it_366->next;
        i_367++;
    }
    memset(&default_value_368,0,sizeof(struct sBlock*));
    __result271__ = gComeFunResultObject = __result_obj__ = default_value_368;
    come_call_finalizer3(default_value_368,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj112;
struct sType* __dec_obj113;
char* __dec_obj114;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj112=self->c_value;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj113=self->type;
            come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj114=self->c_value_without_right_value_objects;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_391;
int i_392;
struct sNode* __result273__;
struct sNode* default_value_393;
struct sNode* __result274__;
default_value_393 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_391=self->head;
    i_392=0;
    while(it_391!=((void*)0)) {
        if(        position==i_392) {
            __result273__ = gComeFunResultObject = __result_obj__ = it_391->item;
            gComeFunResultObject = (void*)0;
            return __result273__;
        }
        it_391=it_391->next;
        i_392++;
    }
    memset(&default_value_393,0,sizeof(struct sNode*));
    __result274__ = gComeFunResultObject = __result_obj__ = default_value_393;
    if(default_value_393) { default_value_393 = come_decrement_ref_count2(default_value_393, ((struct sNode*)default_value_393)->finalize, ((struct sNode*)default_value_393)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
struct list_item$1CVALUEph* litem_406;
struct CVALUE* __dec_obj117;
void* __right_value348 = (void*)0;
struct list_item$1CVALUEph* litem_407;
struct CVALUE* __dec_obj118;
void* __right_value349 = (void*)0;
struct list_item$1CVALUEph* litem_408;
struct CVALUE* __dec_obj119;
struct list$1CVALUEph* __result277__;
    if(    self->len==0) {
        litem_406=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value347=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1305, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_406->prev=((void*)0);
        litem_406->next=((void*)0);
        __dec_obj117=litem_406->item;
        litem_406->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_406;
        self->head=litem_406;
    }
    else if(    self->len==1) {
        litem_407=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value348=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1315, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_407->prev=self->head;
        litem_407->next=((void*)0);
        __dec_obj118=litem_407->item;
        litem_407->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_407;
        self->head->next=litem_407;
    }
    else {
        litem_408=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value349=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1325, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_408->prev=self->tail;
        litem_408->next=((void*)0);
        __dec_obj119=litem_408->item;
        litem_408->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_408;
        self->tail=litem_408;
    }
    self->len++;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj121;
void* __right_value352 = (void*)0;
struct sNode* __dec_obj122;
struct sMatchNode* __result279__;
    ((struct sNodeBase*)(__right_value350=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value350,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj121=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj122=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); };
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result279__;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value353=__builtin_string("sMatch")));
    __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_409;
struct sNode* match_node_410;
_Bool Value_411;
_Bool __result281__;
void* __right_value354 = (void*)0;
struct CVALUE* come_value_412;
_Bool Value_413;
_Bool __result282__;
struct sVar* var__414;
int __exception_result_var_b2;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct list$1sVarph* __dec_obj127;
void* __right_value360 = (void*)0;
_Bool __result285__;
    it_node_409=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_410=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_411=node_compile(it_node_409,info);
    if(    !Value_411) {
        __result281__ = (_Bool)0;
        if(it_node_409) { it_node_409 = come_decrement_ref_count2(it_node_409, ((struct sNode*)it_node_409)->finalize, ((struct sNode*)it_node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_410) { match_node_410 = come_decrement_ref_count2(match_node_410, ((struct sNode*)match_node_410)->finalize, ((struct sNode*)match_node_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result281__;
    }
    else {
    }
    come_value_412=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_412->c_value);
    dec_stack_ptr(1,info);
    Value_413=node_compile(match_node_410,info);
    if(    !Value_413) {
        __result282__ = (_Bool)0;
        if(it_node_409) { it_node_409 = come_decrement_ref_count2(it_node_409, ((struct sNode*)it_node_409)->finalize, ((struct sNode*)it_node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_410) { match_node_410 = come_decrement_ref_count2(match_node_410, ((struct sNode*)match_node_410)->finalize, ((struct sNode*)match_node_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result282__;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__414=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 268, 3),__exception_result_var_b2=assert_v2(var__414!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj127=info->match_it_var;
            info->match_it_var=(struct list$1sVarph*)come_increment_ref_count(list$1sVarph_initialize((struct list$1sVarph*)come_increment_ref_count((struct list$1sVarph*)come_calloc(1, sizeof(struct list$1sVarph)*(1), "08if.c", 271, "struct list$1sVarph*", (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj127,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sVarph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__414)));
    }
    __result285__ = (_Bool)1;
    if(it_node_409) { it_node_409 = come_decrement_ref_count2(it_node_409, ((struct sNode*)it_node_409)->finalize, ((struct sNode*)it_node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_410) { match_node_410 = come_decrement_ref_count2(match_node_410, ((struct sNode*)match_node_410)->finalize, ((struct sNode*)match_node_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result285__;
}

static void sMatchNode_finalize(struct sMatchNode* self){
char* __dec_obj123;
struct sNode* __dec_obj124;
struct sNode* __dec_obj125;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj123=self->sname;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj124=self->it_node;
            if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj125=self->match_node;
            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1sVarph* list$1sVarph_initialize(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct list$1sVarph* __result283__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_415;
struct list_item$1sVarph* prev_it_416;
    it_415=self->head;
    while(it_415!=((void*)0)) {
        prev_it_416=it_415;
        it_415=it_415->next;
        come_call_finalizer3(prev_it_416,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj126;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj126=self->item;
            come_call_finalizer3(__dec_obj126,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_417;
struct list_item$1sVarph* prev_it_418;
    it_417=self->head;
    while(it_417!=((void*)0)) {
        prev_it_418=it_417;
        it_417=it_417->next;
        come_call_finalizer3(prev_it_418,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sVarph* list$1sVarph_add(struct list$1sVarph* self, struct sVar* item){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
struct list_item$1sVarph* litem_419;
struct sVar* __dec_obj128;
void* __right_value358 = (void*)0;
struct list_item$1sVarph* litem_420;
struct sVar* __dec_obj129;
void* __right_value359 = (void*)0;
struct list_item$1sVarph* litem_421;
struct sVar* __dec_obj130;
struct list$1sVarph* __result284__;
    if(    self->len==0) {
        litem_419=(struct list_item$1sVarph*)come_increment_ref_count(((struct list_item$1sVarph*)(__right_value357=(struct list_item$1sVarph*)come_calloc(1, sizeof(struct list_item$1sVarph)*(1), "./comelang.h", 1235, "struct list_item$1sVarph*", (void*)0, (void*)0))));
        litem_419->prev=((void*)0);
        litem_419->next=((void*)0);
        __dec_obj128=litem_419->item;
        litem_419->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj128,sVar_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_419;
        self->head=litem_419;
    }
    else if(    self->len==1) {
        litem_420=(struct list_item$1sVarph*)come_increment_ref_count(((struct list_item$1sVarph*)(__right_value358=(struct list_item$1sVarph*)come_calloc(1, sizeof(struct list_item$1sVarph)*(1), "./comelang.h", 1245, "struct list_item$1sVarph*", (void*)0, (void*)0))));
        litem_420->prev=self->head;
        litem_420->next=((void*)0);
        __dec_obj129=litem_420->item;
        litem_420->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj129,sVar_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_420;
        self->head->next=litem_420;
    }
    else {
        litem_421=(struct list_item$1sVarph*)come_increment_ref_count(((struct list_item$1sVarph*)(__right_value359=(struct list_item$1sVarph*)come_calloc(1, sizeof(struct list_item$1sVarph)*(1), "./comelang.h", 1255, "struct list_item$1sVarph*", (void*)0, (void*)0))));
        litem_421->prev=self->tail;
        litem_421->next=((void*)0);
        __dec_obj130=litem_421->item;
        litem_421->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj130,sVar_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_421;
        self->tail=litem_421;
    }
    self->len++;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value363 = (void*)0;
struct sNode* __dec_obj132;
struct sIfMethodNode* __result286__;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value361,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj131=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj132=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
char* __result287__;
    __result287__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value364=__builtin_string("sMatch")));
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_422;
struct sNode* match_node_423;
_Bool Value_424;
_Bool __result288__;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_425;
_Bool Value_426;
_Bool __result289__;
struct sVar* var__427;
int __exception_result_var_b3;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1sVarph* __dec_obj136;
void* __right_value368 = (void*)0;
_Bool __result290__;
    it_node_422=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_423=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_424=node_compile(it_node_422,info);
    if(    !Value_424) {
        __result288__ = (_Bool)0;
        if(it_node_422) { it_node_422 = come_decrement_ref_count2(it_node_422, ((struct sNode*)it_node_422)->finalize, ((struct sNode*)it_node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_423) { match_node_423 = come_decrement_ref_count2(match_node_423, ((struct sNode*)match_node_423)->finalize, ((struct sNode*)match_node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result288__;
    }
    else {
    }
    come_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_425->c_value);
    dec_stack_ptr(1,info);
    Value_426=node_compile(match_node_423,info);
    if(    !Value_426) {
        __result289__ = (_Bool)0;
        if(it_node_422) { it_node_422 = come_decrement_ref_count2(it_node_422, ((struct sNode*)it_node_422)->finalize, ((struct sNode*)it_node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_423) { match_node_423 = come_decrement_ref_count2(match_node_423, ((struct sNode*)match_node_423)->finalize, ((struct sNode*)match_node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result289__;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__427=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 320, 4),__exception_result_var_b3=assert_v2(var__427!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj136=info->match_it_var;
            info->match_it_var=(struct list$1sVarph*)come_increment_ref_count(list$1sVarph_initialize((struct list$1sVarph*)come_increment_ref_count((struct list$1sVarph*)come_calloc(1, sizeof(struct list$1sVarph)*(1), "08if.c", 323, "struct list$1sVarph*", (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj136,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sVarph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__427)));
    }
    __result290__ = (_Bool)1;
    if(it_node_422) { it_node_422 = come_decrement_ref_count2(it_node_422, ((struct sNode*)it_node_422)->finalize, ((struct sNode*)it_node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_423) { match_node_423 = come_decrement_ref_count2(match_node_423, ((struct sNode*)match_node_423)->finalize, ((struct sNode*)match_node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result290__;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
char* __dec_obj133;
struct sNode* __dec_obj134;
struct sNode* __dec_obj135;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj133=self->sname;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj134=self->it_node;
            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj135=self->match_node;
            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj137;
void* __right_value371 = (void*)0;
struct sBlock* __dec_obj138;
struct sOrStatmentNode* __result291__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj137=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj138=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj138,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
char* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value372=__builtin_string("sOrStatmentNode")));
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_428;
_Bool Value_429;
void* __right_value373 = (void*)0;
struct CVALUE* conditional_value_430;
struct sBlock* if_block_431;
int num_or_conditional_stack_433;
_Bool __result293__;
    expression_node_428=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_429=node_compile(expression_node_428,info);
    if(    !Value_429) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_431=self->mIfBlock;
    static int num_or_conditional_432=0;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_432);
    add_come_code(info,"if((_or_conditional%d=(%s)),",num_or_conditional_432,conditional_value_430->c_value);
    num_or_conditional_stack_433=num_or_conditional_432;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d == 0) {\n",num_or_conditional_stack_433);
    transpile_block(if_block_431,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result293__ = (_Bool)1;
    come_call_finalizer3(conditional_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result293__;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
char* __dec_obj139;
struct sNode* __dec_obj140;
struct sBlock* __dec_obj141;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj139=self->sname;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj140=self->mExpressionNode;
            if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj141=self->mIfBlock;
            come_call_finalizer3(__dec_obj141,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value376 = (void*)0;
struct sBlock* __dec_obj143;
struct sAndStatmentNode* __result294__;
    ((struct sNodeBase*)(__right_value374=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value374,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj142=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj143=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj143,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
char* __result295__;
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value377=__builtin_string("sAndStatmentNode")));
    __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_434;
_Bool Value_435;
void* __right_value378 = (void*)0;
struct CVALUE* conditional_value_436;
struct sBlock* if_block_437;
int num_and_conditional_stack_439;
_Bool __result296__;
    expression_node_434=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_435=node_compile(expression_node_434,info);
    if(    !Value_435) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_436=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_437=self->mIfBlock;
    static int num_and_conditional_438=0;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_438);
    add_come_code(info,"if((_and_conditional%d=(%s)),",num_and_conditional_438,conditional_value_436->c_value);
    num_and_conditional_stack_439=num_and_conditional_438;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d != 0) {\n",num_and_conditional_stack_439);
    transpile_block(if_block_437,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result296__ = (_Bool)1;
    come_call_finalizer3(conditional_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
char* __dec_obj144;
struct sNode* __dec_obj145;
struct sBlock* __dec_obj146;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj144=self->sname;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj145=self->mExpressionNode;
            if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj146=self->mIfBlock;
            come_call_finalizer3(__dec_obj146,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1sNodeph* __dec_obj147;
struct sMultipleNode* __result297__;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value379,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj147=self->multiple_node;
    self->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, multiple_node));
    come_call_finalizer3(__dec_obj147,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool sMultipleNode_terminated(struct sMultipleNode* self){
    return (_Bool)1;
}

char* sMultipleNode_kind(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
char* __result298__;
    __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value381=__builtin_string("sMultipleNode")));
    __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info){
struct list$1sNodeph* multiple_node_440;
struct CVALUE* come_value_441;
struct list$1sNodeph* o2_saved_442;
struct sNode* it_445;
_Bool Value_448;
_Bool __result305__;
void* __right_value382 = (void*)0;
struct CVALUE* __dec_obj150;
_Bool __result306__;
    multiple_node_440=(struct list$1sNodeph*)come_increment_ref_count(self->multiple_node);
    come_value_441=((void*)0);
    for(    o2_saved_442=(struct list$1sNodeph*)come_increment_ref_count((multiple_node_440)),it_445=list$1sNodeph_begin((o2_saved_442));    !list$1sNodeph_end((o2_saved_442));    it_445=list$1sNodeph_next((o2_saved_442))    ){
        Value_448=node_compile(it_445,info);
        if(        !Value_448) {
            __result305__ = (_Bool)0;
            come_call_finalizer3(o2_saved_442,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_node_440,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result305__;
        }
        else {
        }
        add_last_code_to_source(info);
        if(        list$1CVALUEph_length(info->stack)>0) {
            __dec_obj150=come_value_441;
            come_value_441=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
    }
    come_call_finalizer3(o2_saved_442,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    come_value_441) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_441));
    }
    __result306__ = (_Bool)1;
    come_call_finalizer3(multiple_node_440,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result306__;
}

static void sMultipleNode_finalize(struct sMultipleNode* self){
char* __dec_obj148;
struct list$1sNodeph* __dec_obj149;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj148=self->sname;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        if(        self->multiple_node==gComeFunResultObject) {
            __dec_obj149=self->multiple_node;
            come_call_finalizer3(__dec_obj149,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_443;
struct sNode* __result299__;
struct sNode* __result300__;
struct sNode* result_444;
struct sNode* __result301__;
result_443 = (void*)0;
result_444 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_443,0,sizeof(struct sNode*));
        __result299__ = gComeFunResultObject = __result_obj__ = result_443;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    self->it=self->head;
    if(    self->it) {
        __result300__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    memset(&result_444,0,sizeof(struct sNode*));
    __result301__ = gComeFunResultObject = __result_obj__ = result_444;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_446;
struct sNode* __result302__;
struct sNode* __result303__;
struct sNode* result_447;
struct sNode* __result304__;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_446,0,sizeof(struct sNode*));
        __result302__ = gComeFunResultObject = __result_obj__ = result_446;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result303__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    memset(&result_447,0,sizeof(struct sNode*));
    __result304__ = gComeFunResultObject = __result_obj__ = result_447;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value383 = (void*)0;
struct sSaveRightValueObjects* __result307__;
    ((struct sNodeBase*)(__right_value383=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value383,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self){
    return (_Bool)0;
}

char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
char* __result308__;
    __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value384=__builtin_string("sSaveRightValueObjects")));
    __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObjectph* __dec_obj152;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj157;
    __dec_obj152=gExceptionRightValueObjects;
    gExceptionRightValueObjects=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    come_call_finalizer3(__dec_obj152,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj157=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "08if.c", 512, "struct list$1sRightValueObjectph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj157,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self){
char* __dec_obj151;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj151=self->sname;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_449;
struct list_item$1sRightValueObjectph* prev_it_450;
    it_449=self->head;
    while(it_449!=((void*)0)) {
        prev_it_450=it_449;
        it_449=it_449->next;
        come_call_finalizer3(prev_it_450,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj153;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj153=self->item;
            come_call_finalizer3(__dec_obj153,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj154=self->mType;
            come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj155=self->mVarName;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj156=self->mFunName;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result309__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_451;
struct list_item$1sRightValueObjectph* prev_it_452;
    it_451=self->head;
    while(it_451!=((void*)0)) {
        prev_it_452=it_451;
        it_451=it_451->next;
        come_call_finalizer3(prev_it_452,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
struct sRestoreRightValueObjects* __result310__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self){
    return (_Bool)0;
}

char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
char* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string("sRestoreRightValueObjects")));
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObjectph* __dec_obj159;
struct list$1sRightValueObjectph* __dec_obj160;
    free_right_value_objects(info,(_Bool)0);
    __dec_obj159=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(gExceptionRightValueObjects);
    come_call_finalizer3(__dec_obj159,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj160=gExceptionRightValueObjects;
    gExceptionRightValueObjects=((void*)0);
    come_call_finalizer3(__dec_obj160,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self){
char* __dec_obj158;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj158=self->sname;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
char* sname_453;
int sline_454;
int var_num_stack_456;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* __list_values1___457[2];
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1charph* multiple_assign_459;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sNode* get_return_value_460;
void* __right_value397 = (void*)0;
struct sBlock* if_block_461;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_462;
int elif_num_463;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct list$1sBlockph* elif_blocks_464;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sBlock* else_block_465;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sNode* expression_node2_469;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value421 = (void*)0;
struct sNode* if_node_470;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sNode* _inf_value2;
struct sSaveRightValueObjects* _inf_obj_value2;
void* __right_value426 = (void*)0;
struct sNode* save_right_value_objects_472;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sNode* _inf_value3;
struct sRestoreRightValueObjects* _inf_obj_value3;
void* __right_value431 = (void*)0;
struct sNode* restore_right_value_objects_474;
struct sNode* __list_values2___477[2];
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1sNodeph* multiple_node_476;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* _inf_value4;
struct sMultipleNode* _inf_obj_value4;
void* __right_value439 = (void*)0;
struct sNode* __result323__;
    sname_453=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_454=info->sline;
    parse_sharp_v5(info);
    static int var_num_455=0;
    var_num_455++;
    var_num_stack_456=var_num_455;
    multiple_assign_459=(struct list$1charph*)come_increment_ref_count((__list_values1___457[0]=(char*)come_increment_ref_count(((char*)(__right_value391=xsprintf("come_exception_var_\%s",((char*)(__right_value390=int_to_string(var_num_stack_456))))))),
__list_values1___457[1]=(char*)come_increment_ref_count(((char*)(__right_value392=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 557, "struct list$1charph", (void*)0, (void*)0)),2,__list_values1___457)));
    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_460=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_459),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    if_block_461=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_462=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 564, "struct list$1sNodeph*", (void*)0, (void*)0))));
    elif_num_463=0;
    elif_blocks_464=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 567, "struct list$1sBlockph*", (void*)0, (void*)0))));
    else_block_465=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 569, "struct sBlock*", (void*)0, (void*)0)),info));
    else_block_465->mOmitSemicolon=(_Bool)1;
    list$1sNodeph_push_back(else_block_465->mNodes,(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value408=xsprintf("come_exception_var_\%s",((char*)(__right_value407=int_to_string(var_num_stack_456)))))),info)));
    __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    expression_node2_469=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value410=xsprintf("Err"))),info));
    __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 575, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value413=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 575, "struct sIfNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node2_469),if_block_461,elif_expression_nodes_462,elif_blocks_464,elif_num_463,else_block_465,(_Bool)0,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    if_node_470=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value413,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 577, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value423=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 577, "struct sSaveRightValueObjects*", (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value2->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value2->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value2->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_472=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value423,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 578, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value428=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 578, "struct sRestoreRightValueObjects*", (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value3->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value3->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value3->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_474=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value428,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_476=(struct list$1sNodeph*)come_increment_ref_count((__list_values2___477[0]=(struct sNode*)come_increment_ref_count(get_return_value_460),
__list_values2___477[1]=(struct sNode*)come_increment_ref_count(if_node_470),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 580, "struct list$1sNodeph", (void*)0, (void*)0)),2,__list_values2___477)));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 582, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value435=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 582, "struct sMultipleNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_476),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMultipleNode_finalize;
    _inf_value4->clone=(void*)sMultipleNode_clone;
    _inf_value4->compile=(void*)sMultipleNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMultipleNode_terminated;
    _inf_value4->kind=(void*)sMultipleNode_kind;
    __result323__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value439=_inf_value4));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_453 = come_decrement_ref_count2(sname_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign_459,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_460) { get_return_value_460 = come_decrement_ref_count2(get_return_value_460, ((struct sNode*)get_return_value_460)->finalize, ((struct sNode*)get_return_value_460)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_461,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_462,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_464,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_465,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_469) { expression_node2_469 = come_decrement_ref_count2(expression_node2_469, ((struct sNode*)expression_node2_469)->finalize, ((struct sNode*)expression_node2_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_470) { if_node_470 = come_decrement_ref_count2(if_node_470, ((struct sNode*)if_node_470)->finalize, ((struct sNode*)if_node_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_472) { save_right_value_objects_472 = come_decrement_ref_count2(save_right_value_objects_472, ((struct sNode*)save_right_value_objects_472)->finalize, ((struct sNode*)save_right_value_objects_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_474) { restore_right_value_objects_474 = come_decrement_ref_count2(restore_right_value_objects_474, ((struct sNode*)restore_right_value_objects_474)->finalize, ((struct sNode*)restore_right_value_objects_474)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(multiple_node_476,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value435,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value439) { __right_value439 = come_decrement_ref_count2(__right_value439, ((struct sNode*)__right_value439)->finalize, ((struct sNode*)__right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_458;
struct list$1charph* __result312__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_458=0;    i_458<num_value;    i_458++    ){
        list$1charph_push_back(self,values[i_458]);
    }
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
struct list_item$1sNodeph* litem_466;
struct sNode* __dec_obj161;
void* __right_value405 = (void*)0;
struct list_item$1sNodeph* litem_467;
struct sNode* __dec_obj162;
void* __right_value406 = (void*)0;
struct list_item$1sNodeph* litem_468;
struct sNode* __dec_obj163;
struct list$1sNodeph* __result313__;
    if(    self->len==0) {
        litem_466=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value404=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1305, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_466->prev=((void*)0);
        litem_466->next=((void*)0);
        __dec_obj161=litem_466->item;
        litem_466->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_466;
        self->head=litem_466;
    }
    else if(    self->len==1) {
        litem_467=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value405=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1315, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_467->prev=self->head;
        litem_467->next=((void*)0);
        __dec_obj162=litem_467->item;
        litem_467->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_467;
        self->head->next=litem_467;
    }
    else {
        litem_468=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value406=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1325, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_468->prev=self->tail;
        litem_468->next=((void*)0);
        __dec_obj163=litem_468->item;
        litem_468->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_468;
        self->tail=litem_468;
    }
    self->len++;
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
void* __result_obj__=(void*)0;
struct sIfNode* __result314__;
void* __right_value414 = (void*)0;
struct sIfNode* result_471;
void* __right_value415 = (void*)0;
char* __dec_obj164;
void* __right_value416 = (void*)0;
struct sNode* __dec_obj165;
void* __right_value417 = (void*)0;
struct sBlock* __dec_obj166;
void* __right_value418 = (void*)0;
struct list$1sNodeph* __dec_obj167;
void* __right_value419 = (void*)0;
struct list$1sBlockph* __dec_obj168;
void* __right_value420 = (void*)0;
struct sBlock* __dec_obj169;
struct sIfNode* __result315__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_471=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_471->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_471->sname;
        result_471->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_471->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj165=result_471->mExpressionNode;
        result_471->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj166=result_471->mIfBlock;
        result_471->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj166,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        __dec_obj167=result_471->mElifExpressionNodes;
        result_471->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mElifExpressionNodes));
        come_call_finalizer3(__dec_obj167,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        __dec_obj168=result_471->mElifBlocks;
        result_471->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, self->mElifBlocks));
        come_call_finalizer3(__dec_obj168,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_471->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)) {
        result_471->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        __dec_obj169=result_471->mElseBlock;
        result_471->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mElseBlock));
        come_call_finalizer3(__dec_obj169,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_471;
    come_call_finalizer3(result_471,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sSaveRightValueObjects* __result316__;
void* __right_value424 = (void*)0;
struct sSaveRightValueObjects* result_473;
void* __right_value425 = (void*)0;
char* __dec_obj170;
struct sSaveRightValueObjects* __result317__;
    if(    self==(void*)0) {
        __result316__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_473=(struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "sSaveRightValueObjects_clone", 3, "struct sSaveRightValueObjects*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_473->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj170=result_473->sname;
        result_473->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_473->sline_real=self->sline_real;
    }
    __result317__ = gComeFunResultObject = __result_obj__ = result_473;
    come_call_finalizer3(result_473,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sRestoreRightValueObjects* __result318__;
void* __right_value429 = (void*)0;
struct sRestoreRightValueObjects* result_475;
void* __right_value430 = (void*)0;
char* __dec_obj171;
struct sRestoreRightValueObjects* __result319__;
    if(    self==(void*)0) {
        __result318__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_475=(struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "sRestoreRightValueObjects_clone", 3, "struct sRestoreRightValueObjects*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_475->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj171=result_475->sname;
        result_475->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_475->sline_real=self->sline_real;
    }
    __result319__ = gComeFunResultObject = __result_obj__ = result_475;
    come_call_finalizer3(result_475,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_478;
struct list$1sNodeph* __result320__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_478=0;    i_478<num_value;    i_478++    ){
        list$1sNodeph_push_back(self,values[i_478]);
    }
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
struct sMultipleNode* __result321__;
void* __right_value436 = (void*)0;
struct sMultipleNode* result_479;
void* __right_value437 = (void*)0;
char* __dec_obj172;
void* __right_value438 = (void*)0;
struct list$1sNodeph* __dec_obj173;
struct sMultipleNode* __result322__;
    if(    self==(void*)0) {
        __result321__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    result_479=(struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "sMultipleNode_clone", 3, "struct sMultipleNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_479->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj172=result_479->sname;
        result_479->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_479->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        __dec_obj173=result_479->multiple_node;
        result_479->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->multiple_node));
        come_call_finalizer3(__dec_obj173,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_479;
    come_call_finalizer3(result_479,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value440 = (void*)0;
char* sname_480;
int sline_481;
int var_num_stack_483;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
char* __list_values3___484[2];
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1charph* multiple_assign_485;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* get_return_value_486;
struct buffer* source_487;
char* p_488;
char* head_489;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct buffer* buf_490;
struct buffer* __dec_obj174;
void* __right_value450 = (void*)0;
struct sBlock* if_block_491;
struct buffer* __dec_obj175;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_492;
int elif_num_493;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1sBlockph* elif_blocks_494;
struct sBlock* else_block_495;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sNode* expression_node2_496;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sNode* _inf_value5;
struct sIfNode* _inf_obj_value5;
void* __right_value459 = (void*)0;
struct sNode* if_node_497;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* load_var_498;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sNode* _inf_value6;
struct sSaveRightValueObjects* _inf_obj_value6;
void* __right_value465 = (void*)0;
struct sNode* save_right_value_objects_499;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sNode* _inf_value7;
struct sRestoreRightValueObjects* _inf_obj_value7;
void* __right_value468 = (void*)0;
struct sNode* restore_right_value_objects_500;
struct sNode* __list_values4___502[5];
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1sNodeph* multiple_node_501;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sNode* _inf_value8;
struct sMultipleNode* _inf_obj_value8;
void* __right_value473 = (void*)0;
struct sNode* __result324__;
    sname_480=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_481=info->sline;
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"can't be called exception_throw in conditional expression");
        exit(1);
    }
    parse_sharp_v5(info);
    static int var_num_482=0;
    var_num_482++;
    var_num_stack_483=var_num_482;
    multiple_assign_485=(struct list$1charph*)come_increment_ref_count((__list_values3___484[0]=(char*)come_increment_ref_count(((char*)(__right_value442=xsprintf("come_exception_var_b\%s",((char*)(__right_value441=int_to_string(var_num_stack_483))))))),
__list_values3___484[1]=(char*)come_increment_ref_count(((char*)(__right_value443=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 602, "struct list$1charph", (void*)0, (void*)0)),2,__list_values3___484)));
    __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_486=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_485),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_487=(struct buffer*)come_increment_ref_count(info->source);
    p_488=info->p;
    head_489=info->head;
    buf_490=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 611, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_format(buf_490,"{ return none(Err); }");
    __dec_obj174=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_490);
    come_call_finalizer3(__dec_obj174,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_481;
    if_block_491=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj175=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_487);
    come_call_finalizer3(__dec_obj175,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_488;
    info->head=head_489;
    info->sline=sline_481;
    elif_expression_nodes_492=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 627, "struct list$1sNodeph*", (void*)0, (void*)0))));
    elif_num_493=0;
    elif_blocks_494=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 630, "struct list$1sBlockph*", (void*)0, (void*)0))));
    else_block_495=((void*)0);
    expression_node2_496=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value455=xsprintf("Err"))),info));
    __right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 636, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value5=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value458=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 636, "struct sIfNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node2_496),if_block_491,elif_expression_nodes_492,elif_blocks_494,elif_num_493,else_block_495,(_Bool)0,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sIfNode_finalize;
    _inf_value5->clone=(void*)sIfNode_clone;
    _inf_value5->compile=(void*)sIfNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sIfNode_terminated;
    _inf_value5->kind=(void*)sIfNode_kind;
    if_node_497=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value458,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    load_var_498=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value461=xsprintf("come_exception_var_b\%s",((char*)(__right_value460=int_to_string(var_num_stack_483)))))),info));
    __right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 639, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value6=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value464=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 639, "struct sSaveRightValueObjects*", (void*)0, (void*)0)),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value6->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value6->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value6->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_499=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value464,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 640, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value7=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value467=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 640, "struct sRestoreRightValueObjects*", (void*)0, (void*)0)),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value7->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value7->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value7->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_500=(struct sNode*)come_increment_ref_count(_inf_value7);
    come_call_finalizer3(__right_value467,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_501=(struct list$1sNodeph*)come_increment_ref_count((__list_values4___502[0]=(struct sNode*)come_increment_ref_count(save_right_value_objects_499),
__list_values4___502[1]=(struct sNode*)come_increment_ref_count(get_return_value_486),
__list_values4___502[2]=(struct sNode*)come_increment_ref_count(if_node_497),
__list_values4___502[3]=(struct sNode*)come_increment_ref_count(restore_right_value_objects_500),
__list_values4___502[4]=(struct sNode*)come_increment_ref_count(load_var_498),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 642, "struct list$1sNodeph", (void*)0, (void*)0)),5,__list_values4___502)));
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 644, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value8=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value472=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 644, "struct sMultipleNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_501),info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sMultipleNode_finalize;
    _inf_value8->clone=(void*)sMultipleNode_clone;
    _inf_value8->compile=(void*)sMultipleNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sMultipleNode_terminated;
    _inf_value8->kind=(void*)sMultipleNode_kind;
    __result324__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value473=_inf_value8));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_480 = come_decrement_ref_count2(sname_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_486) { get_return_value_486 = come_decrement_ref_count2(get_return_value_486, ((struct sNode*)get_return_value_486)->finalize, ((struct sNode*)get_return_value_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(source_487,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_491,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_492,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_494,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_495,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_496) { expression_node2_496 = come_decrement_ref_count2(expression_node2_496, ((struct sNode*)expression_node2_496)->finalize, ((struct sNode*)expression_node2_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_497) { if_node_497 = come_decrement_ref_count2(if_node_497, ((struct sNode*)if_node_497)->finalize, ((struct sNode*)if_node_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_498) { load_var_498 = come_decrement_ref_count2(load_var_498, ((struct sNode*)load_var_498)->finalize, ((struct sNode*)load_var_498)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_499) { save_right_value_objects_499 = come_decrement_ref_count2(save_right_value_objects_499, ((struct sNode*)save_right_value_objects_499)->finalize, ((struct sNode*)save_right_value_objects_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_500) { restore_right_value_objects_500 = come_decrement_ref_count2(restore_right_value_objects_500, ((struct sNode*)restore_right_value_objects_500)->finalize, ((struct sNode*)restore_right_value_objects_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(multiple_node_501,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value472,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value473) { __right_value473 = come_decrement_ref_count2(__right_value473, ((struct sNode*)__right_value473)->finalize, ((struct sNode*)__right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result324__;
}

struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
char* sname_503;
int sline_504;
int var_num_stack_506;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* __list_values5___507[2];
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1charph* multiple_assign_508;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* get_return_value_509;
struct buffer* source_510;
char* p_511;
char* head_512;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct buffer* buf_513;
struct buffer* __dec_obj176;
_Bool no_comma_514;
void* __right_value484 = (void*)0;
struct sNode* exp_515;
struct buffer* __dec_obj177;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* expression_node2_516;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sNode* cond_517;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* load_var_518;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sNode* _inf_value9;
struct sSaveRightValueObjects* _inf_obj_value9;
void* __right_value494 = (void*)0;
struct sNode* save_right_value_objects_519;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sNode* _inf_value10;
struct sRestoreRightValueObjects* _inf_obj_value10;
void* __right_value497 = (void*)0;
struct sNode* restore_right_value_objects_520;
struct sNode* __list_values6___522[5];
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct list$1sNodeph* multiple_node_521;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sNode* _inf_value11;
struct sMultipleNode* _inf_obj_value11;
void* __right_value502 = (void*)0;
struct sNode* __result325__;
    sname_503=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_504=info->sline;
    parse_sharp_v5(info);
    static int var_num_505=0;
    var_num_505++;
    var_num_stack_506=var_num_505;
    multiple_assign_508=(struct list$1charph*)come_increment_ref_count((__list_values5___507[0]=(char*)come_increment_ref_count(((char*)(__right_value476=xsprintf("come_exception_var_c\%s",((char*)(__right_value475=int_to_string(var_num_stack_506))))))),
__list_values5___507[1]=(char*)come_increment_ref_count(((char*)(__right_value477=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 659, "struct list$1charph", (void*)0, (void*)0)),2,__list_values5___507)));
    __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_509=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_508),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_510=(struct buffer*)come_increment_ref_count(info->source);
    p_511=info->p;
    head_512=info->head;
    buf_513=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 668, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_513,"puts(Err), exit(0)");
    __dec_obj176=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_513);
    come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_504;
    no_comma_514=info->no_comma;
    info->no_comma=(_Bool)0;
    exp_515=(struct sNode*)come_increment_ref_count(expression_v13(info));
    info->no_comma=no_comma_514;
    __dec_obj177=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_510);
    come_call_finalizer3(__dec_obj177,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_511;
    info->head=head_512;
    info->sline=sline_504;
    expression_node2_516=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value485=xsprintf("Err"))),info));
    __right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cond_517=(struct sNode*)come_increment_ref_count(conditional_node((struct sNode*)come_increment_ref_count(expression_node2_516),(struct sNode*)come_increment_ref_count(exp_515),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    load_var_518=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value490=xsprintf("come_exception_var_c\%s",((char*)(__right_value489=int_to_string(var_num_stack_506)))))),info));
    __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 692, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value9=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value493=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 692, "struct sSaveRightValueObjects*", (void*)0, (void*)0)),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value9->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value9->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value9->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_519=(struct sNode*)come_increment_ref_count(_inf_value9);
    come_call_finalizer3(__right_value493,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 693, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value10=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value496=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 693, "struct sRestoreRightValueObjects*", (void*)0, (void*)0)),info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value10->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value10->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value10->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_520=(struct sNode*)come_increment_ref_count(_inf_value10);
    come_call_finalizer3(__right_value496,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_521=(struct list$1sNodeph*)come_increment_ref_count((__list_values6___522[0]=(struct sNode*)come_increment_ref_count(save_right_value_objects_519),
__list_values6___522[1]=(struct sNode*)come_increment_ref_count(get_return_value_509),
__list_values6___522[2]=(struct sNode*)come_increment_ref_count(cond_517),
__list_values6___522[3]=(struct sNode*)come_increment_ref_count(restore_right_value_objects_520),
__list_values6___522[4]=(struct sNode*)come_increment_ref_count(load_var_518),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 695, "struct list$1sNodeph", (void*)0, (void*)0)),5,__list_values6___522)));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 697, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value11=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value501=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 697, "struct sMultipleNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_521),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sMultipleNode_finalize;
    _inf_value11->clone=(void*)sMultipleNode_clone;
    _inf_value11->compile=(void*)sMultipleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sMultipleNode_terminated;
    _inf_value11->kind=(void*)sMultipleNode_kind;
    __result325__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value502=_inf_value11));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_503 = come_decrement_ref_count2(sname_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign_508,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_509) { get_return_value_509 = come_decrement_ref_count2(get_return_value_509, ((struct sNode*)get_return_value_509)->finalize, ((struct sNode*)get_return_value_509)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(source_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_513,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(exp_515) { exp_515 = come_decrement_ref_count2(exp_515, ((struct sNode*)exp_515)->finalize, ((struct sNode*)exp_515)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(expression_node2_516) { expression_node2_516 = come_decrement_ref_count2(expression_node2_516, ((struct sNode*)expression_node2_516)->finalize, ((struct sNode*)expression_node2_516)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(cond_517) { cond_517 = come_decrement_ref_count2(cond_517, ((struct sNode*)cond_517)->finalize, ((struct sNode*)cond_517)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_518) { load_var_518 = come_decrement_ref_count2(load_var_518, ((struct sNode*)load_var_518)->finalize, ((struct sNode*)load_var_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_519) { save_right_value_objects_519 = come_decrement_ref_count2(save_right_value_objects_519, ((struct sNode*)save_right_value_objects_519)->finalize, ((struct sNode*)save_right_value_objects_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_520) { restore_right_value_objects_520 = come_decrement_ref_count2(restore_right_value_objects_520, ((struct sNode*)restore_right_value_objects_520)->finalize, ((struct sNode*)restore_right_value_objects_520)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(multiple_node_521,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value501,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value502) { __right_value502 = come_decrement_ref_count2(__right_value502, ((struct sNode*)__right_value502)->finalize, ((struct sNode*)__right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result325__;
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value503 = (void*)0;
char* sname_523;
int sline_524;
int sline_real_525;
void* __right_value504 = (void*)0;
struct sNode* expression_node_526;
void* __right_value505 = (void*)0;
struct sBlock* if_block_527;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_528;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1sBlockph* elif_blocks_529;
int elif_num_530;
struct sBlock* else_block_531;
char* saved_p_532;
int saved_sline_533;
void* __right_value510 = (void*)0;
char* buf_534;
int sline_real_535;
void* __right_value511 = (void*)0;
struct sNode* expression_node_536;
void* __right_value512 = (void*)0;
struct sBlock* elif_block_537;
void* __right_value516 = (void*)0;
struct sBlock* __dec_obj181;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sNode* _inf_value12;
struct sIfNode* _inf_obj_value12;
void* __right_value519 = (void*)0;
struct sNode* result_541;
struct sNode* __result327__;
void* __right_value520 = (void*)0;
struct sNode* __result328__;
    if(    charp_operator_equals(buf,"if")) {
        sname_523=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        sline_524=info->sline;
        sline_real_525=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_526=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_527=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_528=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 720, "struct list$1sNodeph*", (void*)0, (void*)0))));
        elif_blocks_529=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 722, "struct list$1sBlockph*", (void*)0, (void*)0))));
        elif_num_530=0;
        else_block_531=((void*)0);
        while(1) {
            saved_p_532=info->p;
            saved_sline_533=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !xisalpha(*info->p)) {
                break;
            }
            parse_sharp_v5(info);
            buf_534=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_534,"else")) {
                sline_real_535=info->sline_real;
                info->sline_real=info->sline;
                if(                parsecmp("if",info)) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_536=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_push_back(elif_expression_nodes_528,(struct sNode*)come_increment_ref_count(expression_node_536));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_537=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlockph_push_back(elif_blocks_529,(struct sBlock*)come_increment_ref_count(elif_block_537));
                    elif_num_530++;
                    if(expression_node_536) { expression_node_536 = come_decrement_ref_count2(expression_node_536, ((struct sNode*)expression_node_536)->finalize, ((struct sNode*)expression_node_536)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(elif_block_537,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj181=else_block_531;
                    else_block_531=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj181,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    buf_534 = come_decrement_ref_count2(buf_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                info->sline_real=sline_real_535;
            }
            else {
                info->p=saved_p_532;
                info->sline=saved_sline_533;
                buf_534 = come_decrement_ref_count2(buf_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            buf_534 = come_decrement_ref_count2(buf_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 785, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value518=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 785, "struct sIfNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node_526),if_block_527,elif_expression_nodes_528,elif_blocks_529,elif_num_530,else_block_531,(_Bool)0,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sIfNode_finalize;
        _inf_value12->clone=(void*)sIfNode_clone;
        _inf_value12->compile=(void*)sIfNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sIfNode_terminated;
        _inf_value12->kind=(void*)sIfNode_kind;
        result_541=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer3(__right_value518,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_525;
        __result327__ = gComeFunResultObject = __result_obj__ = result_541;
        sname_523 = come_decrement_ref_count2(sname_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_526) { expression_node_526 = come_decrement_ref_count2(expression_node_526, ((struct sNode*)expression_node_526)->finalize, ((struct sNode*)expression_node_526)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(if_block_527,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_expression_nodes_528,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_blocks_529,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(else_block_531,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_541) { result_541 = come_decrement_ref_count2(result_541, ((struct sNode*)result_541)->finalize, ((struct sNode*)result_541)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result327__;
        sname_523 = come_decrement_ref_count2(sname_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_526) { expression_node_526 = come_decrement_ref_count2(expression_node_526, ((struct sNode*)expression_node_526)->finalize, ((struct sNode*)expression_node_526)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(if_block_527,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_expression_nodes_528,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_blocks_529,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(else_block_531,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_541) { result_541 = come_decrement_ref_count2(result_541, ((struct sNode*)result_541)->finalize, ((struct sNode*)result_541)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value520=string_node_v7(buf,head,head_sline,info)));
    if(__right_value520) { __right_value520 = come_decrement_ref_count2(__right_value520, ((struct sNode*)__right_value520)->finalize, ((struct sNode*)__right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value513 = (void*)0;
struct list_item$1sBlockph* litem_538;
struct sBlock* __dec_obj178;
void* __right_value514 = (void*)0;
struct list_item$1sBlockph* litem_539;
struct sBlock* __dec_obj179;
void* __right_value515 = (void*)0;
struct list_item$1sBlockph* litem_540;
struct sBlock* __dec_obj180;
struct list$1sBlockph* __result326__;
    if(    self->len==0) {
        litem_538=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value513=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1305, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_538->prev=((void*)0);
        litem_538->next=((void*)0);
        __dec_obj178=litem_538->item;
        litem_538->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj178,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_538;
        self->head=litem_538;
    }
    else if(    self->len==1) {
        litem_539=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value514=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1315, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_539->prev=self->head;
        litem_539->next=((void*)0);
        __dec_obj179=litem_539->item;
        litem_539->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj179,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_539;
        self->head->next=litem_539;
    }
    else {
        litem_540=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value515=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1325, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_540->prev=self->tail;
        litem_540->next=((void*)0);
        __dec_obj180=litem_540->item;
        litem_540->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_540;
        self->tail=litem_540;
    }
    self->len++;
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value521 = (void*)0;
char* sname_542;
int sline_543;
void* __right_value522 = (void*)0;
struct sBlock* if_block_544;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sNode* _inf_value13;
struct sOrStatmentNode* _inf_obj_value13;
void* __right_value529 = (void*)0;
struct sNode* __result331__;
    sname_542=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_543=info->sline;
    parse_sharp_v5(info);
    if_block_544=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 803, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value13=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value524=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 803, "struct sOrStatmentNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node),if_block_544,info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value13->clone=(void*)sOrStatmentNode_clone;
    _inf_value13->compile=(void*)sOrStatmentNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value13->kind=(void*)sOrStatmentNode_kind;
    __result331__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value529=_inf_value13));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_542 = come_decrement_ref_count2(sname_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_544,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value524,sOrStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value529) { __right_value529 = come_decrement_ref_count2(__right_value529, ((struct sNode*)__right_value529)->finalize, ((struct sNode*)__right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
struct sOrStatmentNode* __result329__;
void* __right_value525 = (void*)0;
struct sOrStatmentNode* result_545;
void* __right_value526 = (void*)0;
char* __dec_obj182;
void* __right_value527 = (void*)0;
struct sNode* __dec_obj183;
void* __right_value528 = (void*)0;
struct sBlock* __dec_obj184;
struct sOrStatmentNode* __result330__;
    if(    self==(void*)0) {
        __result329__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    result_545=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_545->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_545->sname;
        result_545->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_545->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj183=result_545->mExpressionNode;
        result_545->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj184=result_545->mIfBlock;
        result_545->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj184,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result330__ = gComeFunResultObject = __result_obj__ = result_545;
    come_call_finalizer3(result_545,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value530 = (void*)0;
char* sname_546;
int sline_547;
void* __right_value531 = (void*)0;
struct sBlock* if_block_548;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sNode* _inf_value14;
struct sAndStatmentNode* _inf_obj_value14;
void* __right_value538 = (void*)0;
struct sNode* __result334__;
    sname_546=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_547=info->sline;
    parse_sharp_v5(info);
    if_block_548=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 815, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value14=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value533=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 815, "struct sAndStatmentNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node),if_block_548,info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value14->clone=(void*)sAndStatmentNode_clone;
    _inf_value14->compile=(void*)sAndStatmentNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value14->kind=(void*)sAndStatmentNode_kind;
    __result334__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value538=_inf_value14));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_546 = come_decrement_ref_count2(sname_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_548,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value533,sAndStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value538) { __right_value538 = come_decrement_ref_count2(__right_value538, ((struct sNode*)__right_value538)->finalize, ((struct sNode*)__right_value538)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
struct sAndStatmentNode* __result332__;
void* __right_value534 = (void*)0;
struct sAndStatmentNode* result_549;
void* __right_value535 = (void*)0;
char* __dec_obj185;
void* __right_value536 = (void*)0;
struct sNode* __dec_obj186;
void* __right_value537 = (void*)0;
struct sBlock* __dec_obj187;
struct sAndStatmentNode* __result333__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_549=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_549->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj185=result_549->sname;
        result_549->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_549->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj186=result_549->mExpressionNode;
        result_549->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj187=result_549->mIfBlock;
        result_549->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj187,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_549;
    come_call_finalizer3(result_549,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value539 = (void*)0;
char* sname_550;
int sline_551;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sNode* it_node_552;
void* __right_value542 = (void*)0;
struct sNode* conditional_value_553;
void* __right_value543 = (void*)0;
struct sBlock* if_block_554;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_555;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1sBlockph* elif_blocks_556;
int elif_num_557;
struct sBlock* else_block_558;
void* __right_value548 = (void*)0;
struct sBlock* __dec_obj188;
void* __right_value549 = (void*)0;
struct sNode* conditional_value_559;
void* __right_value550 = (void*)0;
struct sBlock* elif_block_560;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sBlock* __dec_obj189;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value15;
struct sIfNode* _inf_obj_value15;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sNode* _inf_value16;
struct sMatchNode* _inf_obj_value16;
void* __right_value563 = (void*)0;
struct sNode* __result337__;
    sname_550=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_551=info->sline;
    expected_next_character(123,info);
    it_node_552=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    expected_next_character(40,info);
    conditional_value_553=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_554=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_555=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 836, "struct list$1sNodeph*", (void*)0, (void*)0))));
    elif_blocks_556=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 837, "struct list$1sBlockph*", (void*)0, (void*)0))));
    elif_num_557=0;
    else_block_558=((void*)0);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        strncmp(info->p,"else",strlen("else"))==0) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj188=else_block_558;
            else_block_558=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            come_call_finalizer3(__dec_obj188,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_559=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_add(elif_expression_nodes_555,(struct sNode*)come_increment_ref_count(conditional_value_559));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_560=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlockph_add(elif_blocks_556,(struct sBlock*)come_increment_ref_count(elif_block_560));
            elif_num_557++;
            if(conditional_value_559) { conditional_value_559 = come_decrement_ref_count2(conditional_value_559, ((struct sNode*)conditional_value_559)->finalize, ((struct sNode*)conditional_value_559)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(elif_block_560,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_558==((void*)0)) {
        __dec_obj189=else_block_558;
        else_block_558=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 875, "struct sBlock*", (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj189,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_558->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_558->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 881, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value15=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value556=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 881, "struct sIfNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_value_553),if_block_554,elif_expression_nodes_555,elif_blocks_556,elif_num_557,else_block_558,(_Bool)0,info))));
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sIfNode_finalize;
    _inf_value15->clone=(void*)sIfNode_clone;
    _inf_value15->compile=(void*)sIfNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sIfNode_terminated;
    _inf_value15->kind=(void*)sIfNode_kind;
    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 881, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value16=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value558=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "08if.c", 881, "struct sMatchNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_552),(struct sNode*)come_increment_ref_count(_inf_value15),info))));
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sMatchNode_finalize;
    _inf_value16->clone=(void*)sMatchNode_clone;
    _inf_value16->compile=(void*)sMatchNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sline_real=(void*)sNodeBase_sline_real;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sMatchNode_terminated;
    _inf_value16->kind=(void*)sMatchNode_kind;
    __result337__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value563=_inf_value16));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_550 = come_decrement_ref_count2(sname_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_552) { it_node_552 = come_decrement_ref_count2(it_node_552, ((struct sNode*)it_node_552)->finalize, ((struct sNode*)it_node_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_value_553) { conditional_value_553 = come_decrement_ref_count2(conditional_value_553, ((struct sNode*)conditional_value_553)->finalize, ((struct sNode*)conditional_value_553)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_554,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_555,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_556,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_558,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value556,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value558,sMatchNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value563) { __right_value563 = come_decrement_ref_count2(__right_value563, ((struct sNode*)__right_value563)->finalize, ((struct sNode*)__right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
void* __result_obj__=(void*)0;
struct sMatchNode* __result335__;
void* __right_value559 = (void*)0;
struct sMatchNode* result_561;
void* __right_value560 = (void*)0;
char* __dec_obj190;
void* __right_value561 = (void*)0;
struct sNode* __dec_obj191;
void* __right_value562 = (void*)0;
struct sNode* __dec_obj192;
struct sMatchNode* __result336__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_561=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "struct sMatchNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_561->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj190=result_561->sname;
        result_561->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_561->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj191=result_561->it_node;
        result_561->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj192=result_561->match_node;
        result_561->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result336__ = gComeFunResultObject = __result_obj__ = result_561;
    come_call_finalizer3(result_561,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value564 = (void*)0;
char* sname_562;
int sline_563;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* it_node_564;
void* __right_value567 = (void*)0;
struct sNode* conditional_node_565;
void* __right_value568 = (void*)0;
struct sBlock* if_block_566;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_567;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct list$1sBlockph* elif_blocks_568;
int elif_num_569;
struct sBlock* else_block_570;
char* saved_p_571;
int saved_sline_572;
void* __right_value573 = (void*)0;
char* buf_573;
void* __right_value574 = (void*)0;
struct sNode* expression_node_574;
void* __right_value575 = (void*)0;
struct sBlock* elif_block_575;
void* __right_value576 = (void*)0;
struct sBlock* __dec_obj193;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sBlock* __dec_obj194;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value17;
struct sIfNode* _inf_obj_value17;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sNode* _inf_value18;
struct sIfMethodNode* _inf_obj_value18;
void* __right_value589 = (void*)0;
struct sNode* result_576;
struct sNode* __result340__;
    sname_562=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_563=info->sline;
    it_node_564=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_565=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_566=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_567=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 897, "struct list$1sNodeph*", (void*)0, (void*)0))));
    elif_blocks_568=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 899, "struct list$1sBlockph*", (void*)0, (void*)0))));
    elif_num_569=0;
    else_block_570=((void*)0);
    while(1) {
        saved_p_571=info->p;
        saved_sline_572=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_573=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_573,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_574=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(elif_expression_nodes_567,(struct sNode*)come_increment_ref_count(expression_node_574));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_575=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockph_push_back(elif_blocks_568,(struct sBlock*)come_increment_ref_count(elif_block_575));
                elif_num_569++;
                if(expression_node_574) { expression_node_574 = come_decrement_ref_count2(expression_node_574, ((struct sNode*)expression_node_574)->finalize, ((struct sNode*)expression_node_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(elif_block_575,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj193=else_block_570;
                else_block_570=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj193,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                buf_573 = come_decrement_ref_count2(buf_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_571;
            info->sline=saved_sline_572;
            buf_573 = come_decrement_ref_count2(buf_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_573 = come_decrement_ref_count2(buf_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_570==((void*)0)) {
        __dec_obj194=else_block_570;
        else_block_570=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 960, "struct sBlock*", (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj194,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_570->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_570->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 966, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value17=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value582=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 966, "struct sIfNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node_565),if_block_566,elif_expression_nodes_567,elif_blocks_568,elif_num_569,else_block_570,(_Bool)0,info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sIfNode_finalize;
    _inf_value17->clone=(void*)sIfNode_clone;
    _inf_value17->compile=(void*)sIfNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sIfNode_terminated;
    _inf_value17->kind=(void*)sIfNode_kind;
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 966, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value18=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value584=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 966, "struct sIfMethodNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_564),(struct sNode*)come_increment_ref_count(_inf_value17),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sIfMethodNode_finalize;
    _inf_value18->clone=(void*)sIfMethodNode_clone;
    _inf_value18->compile=(void*)sIfMethodNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sIfMethodNode_terminated;
    _inf_value18->kind=(void*)sIfMethodNode_kind;
    result_576=(struct sNode*)come_increment_ref_count(_inf_value18);
    come_call_finalizer3(__right_value582,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value584,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result340__ = gComeFunResultObject = __result_obj__ = result_576;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_562 = come_decrement_ref_count2(sname_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_564) { it_node_564 = come_decrement_ref_count2(it_node_564, ((struct sNode*)it_node_564)->finalize, ((struct sNode*)it_node_564)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_565) { conditional_node_565 = come_decrement_ref_count2(conditional_node_565, ((struct sNode*)conditional_node_565)->finalize, ((struct sNode*)conditional_node_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_566,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_567,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_568,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_570,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_576) { result_576 = come_decrement_ref_count2(result_576, ((struct sNode*)result_576)->finalize, ((struct sNode*)result_576)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
struct sIfMethodNode* __result338__;
void* __right_value585 = (void*)0;
struct sIfMethodNode* result_577;
void* __right_value586 = (void*)0;
char* __dec_obj195;
void* __right_value587 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value588 = (void*)0;
struct sNode* __dec_obj197;
struct sIfMethodNode* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_577=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "struct sIfMethodNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_577->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj195=result_577->sname;
        result_577->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_577->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj196=result_577->it_node;
        result_577->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj197=result_577->match_node;
        result_577->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_577;
    come_call_finalizer3(result_577,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value590 = (void*)0;
char* sname_578;
int sline_579;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sNode* it_node_580;
void* __right_value593 = (void*)0;
struct sNode* conditional_node_581;
void* __right_value594 = (void*)0;
struct sNode* conditional_node2_582;
void* __right_value595 = (void*)0;
struct sBlock* if_block_583;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_584;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct list$1sBlockph* elif_blocks_585;
int elif_num_586;
struct sBlock* else_block_587;
char* saved_p_588;
int saved_sline_589;
void* __right_value600 = (void*)0;
char* buf_590;
void* __right_value601 = (void*)0;
struct sNode* expression_node_591;
void* __right_value602 = (void*)0;
struct sBlock* elif_block_592;
void* __right_value603 = (void*)0;
struct sBlock* __dec_obj198;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sBlock* __dec_obj199;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* _inf_value19;
struct sIfNode* _inf_obj_value19;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* _inf_value20;
struct sIfMethodNode* _inf_obj_value20;
void* __right_value612 = (void*)0;
struct sNode* result_593;
struct sNode* __result341__;
    sname_578=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_579=info->sline;
    it_node_580=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_581=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_582=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_581),info));
    parse_sharp_v5(info);
    if_block_583=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_584=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 985, "struct list$1sNodeph*", (void*)0, (void*)0))));
    elif_blocks_585=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 987, "struct list$1sBlockph*", (void*)0, (void*)0))));
    elif_num_586=0;
    else_block_587=((void*)0);
    while(1) {
        saved_p_588=info->p;
        saved_sline_589=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_590=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_590,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_591=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(elif_expression_nodes_584,(struct sNode*)come_increment_ref_count(expression_node_591));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_592=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockph_push_back(elif_blocks_585,(struct sBlock*)come_increment_ref_count(elif_block_592));
                elif_num_586++;
                if(expression_node_591) { expression_node_591 = come_decrement_ref_count2(expression_node_591, ((struct sNode*)expression_node_591)->finalize, ((struct sNode*)expression_node_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(elif_block_592,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj198=else_block_587;
                else_block_587=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj198,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                buf_590 = come_decrement_ref_count2(buf_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_588;
            info->sline=saved_sline_589;
            buf_590 = come_decrement_ref_count2(buf_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_590 = come_decrement_ref_count2(buf_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_587==((void*)0)) {
        __dec_obj199=else_block_587;
        else_block_587=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1048, "struct sBlock*", (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj199,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_587->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_587->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1054, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value19=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value609=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1054, "struct sIfNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node2_582),if_block_583,elif_expression_nodes_584,elif_blocks_585,elif_num_586,else_block_587,(_Bool)0,info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sIfNode_finalize;
    _inf_value19->clone=(void*)sIfNode_clone;
    _inf_value19->compile=(void*)sIfNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sIfNode_terminated;
    _inf_value19->kind=(void*)sIfNode_kind;
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1054, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value20=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value611=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1054, "struct sIfMethodNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_580),(struct sNode*)come_increment_ref_count(_inf_value19),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sIfMethodNode_finalize;
    _inf_value20->clone=(void*)sIfMethodNode_clone;
    _inf_value20->compile=(void*)sIfMethodNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sIfMethodNode_terminated;
    _inf_value20->kind=(void*)sIfMethodNode_kind;
    result_593=(struct sNode*)come_increment_ref_count(_inf_value20);
    come_call_finalizer3(__right_value609,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value611,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result341__ = gComeFunResultObject = __result_obj__ = result_593;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_578 = come_decrement_ref_count2(sname_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_580) { it_node_580 = come_decrement_ref_count2(it_node_580, ((struct sNode*)it_node_580)->finalize, ((struct sNode*)it_node_580)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_581) { conditional_node_581 = come_decrement_ref_count2(conditional_node_581, ((struct sNode*)conditional_node_581)->finalize, ((struct sNode*)conditional_node_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_582) { conditional_node2_582 = come_decrement_ref_count2(conditional_node2_582, ((struct sNode*)conditional_node2_582)->finalize, ((struct sNode*)conditional_node2_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_583,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_584,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_585,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_587,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_593) { result_593 = come_decrement_ref_count2(result_593, ((struct sNode*)result_593)->finalize, ((struct sNode*)result_593)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result341__;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value613 = (void*)0;
char* sname_594;
int sline_595;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* it_node_596;
void* __right_value616 = (void*)0;
struct sNode* conditional_node_597;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* conditional_node2_598;
void* __right_value619 = (void*)0;
struct sBlock* if_block_599;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_600;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1sBlockph* elif_blocks_601;
int elif_num_602;
struct sBlock* else_block_603;
char* saved_p_604;
int saved_sline_605;
void* __right_value624 = (void*)0;
char* buf_606;
void* __right_value625 = (void*)0;
struct sNode* expression_node_607;
void* __right_value626 = (void*)0;
struct sBlock* elif_block_608;
void* __right_value627 = (void*)0;
struct sBlock* __dec_obj200;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sBlock* __dec_obj201;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sNode* _inf_value21;
struct sIfNode* _inf_obj_value21;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sNode* _inf_value22;
struct sIfMethodNode* _inf_obj_value22;
void* __right_value636 = (void*)0;
struct sNode* result_609;
struct sNode* __result342__;
    sname_594=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_595=info->sline;
    it_node_596=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_597=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_598=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_597),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_599=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_600=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 1073, "struct list$1sNodeph*", (void*)0, (void*)0))));
    elif_blocks_601=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 1075, "struct list$1sBlockph*", (void*)0, (void*)0))));
    elif_num_602=0;
    else_block_603=((void*)0);
    while(1) {
        saved_p_604=info->p;
        saved_sline_605=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_606=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_606,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_607=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(elif_expression_nodes_600,(struct sNode*)come_increment_ref_count(expression_node_607));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_608=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockph_push_back(elif_blocks_601,(struct sBlock*)come_increment_ref_count(elif_block_608));
                elif_num_602++;
                if(expression_node_607) { expression_node_607 = come_decrement_ref_count2(expression_node_607, ((struct sNode*)expression_node_607)->finalize, ((struct sNode*)expression_node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(elif_block_608,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj200=else_block_603;
                else_block_603=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj200,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                buf_606 = come_decrement_ref_count2(buf_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_604;
            info->sline=saved_sline_605;
            buf_606 = come_decrement_ref_count2(buf_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_606 = come_decrement_ref_count2(buf_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_603==((void*)0)) {
        __dec_obj201=else_block_603;
        else_block_603=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1136, "struct sBlock*", (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj201,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_603->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_603->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1142, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value21=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value633=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1142, "struct sIfNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node2_598),if_block_599,elif_expression_nodes_600,elif_blocks_601,elif_num_602,else_block_603,(_Bool)0,info))));
    _inf_value21->_protocol_obj=_inf_obj_value21;
    _inf_value21->finalize=(void*)sIfNode_finalize;
    _inf_value21->clone=(void*)sIfNode_clone;
    _inf_value21->compile=(void*)sIfNode_compile;
    _inf_value21->sline=(void*)sNodeBase_sline;
    _inf_value21->sline_real=(void*)sNodeBase_sline_real;
    _inf_value21->sname=(void*)sNodeBase_sname;
    _inf_value21->terminated=(void*)sIfNode_terminated;
    _inf_value21->kind=(void*)sIfNode_kind;
    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1142, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value22=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value635=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1142, "struct sIfMethodNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_596),(struct sNode*)come_increment_ref_count(_inf_value21),info))));
    _inf_value22->_protocol_obj=_inf_obj_value22;
    _inf_value22->finalize=(void*)sIfMethodNode_finalize;
    _inf_value22->clone=(void*)sIfMethodNode_clone;
    _inf_value22->compile=(void*)sIfMethodNode_compile;
    _inf_value22->sline=(void*)sNodeBase_sline;
    _inf_value22->sline_real=(void*)sNodeBase_sline_real;
    _inf_value22->sname=(void*)sNodeBase_sname;
    _inf_value22->terminated=(void*)sIfMethodNode_terminated;
    _inf_value22->kind=(void*)sIfMethodNode_kind;
    result_609=(struct sNode*)come_increment_ref_count(_inf_value22);
    come_call_finalizer3(__right_value633,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value635,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result342__ = gComeFunResultObject = __result_obj__ = result_609;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_594 = come_decrement_ref_count2(sname_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_596) { it_node_596 = come_decrement_ref_count2(it_node_596, ((struct sNode*)it_node_596)->finalize, ((struct sNode*)it_node_596)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_597) { conditional_node_597 = come_decrement_ref_count2(conditional_node_597, ((struct sNode*)conditional_node_597)->finalize, ((struct sNode*)conditional_node_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_598) { conditional_node2_598 = come_decrement_ref_count2(conditional_node2_598, ((struct sNode*)conditional_node2_598)->finalize, ((struct sNode*)conditional_node2_598)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_599,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_600,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_601,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_603,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_609) { result_609 = come_decrement_ref_count2(result_609, ((struct sNode*)result_609)->finalize, ((struct sNode*)result_609)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result342__;
}

