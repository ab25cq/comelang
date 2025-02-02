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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
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
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
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
static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self);
static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self);
static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self);
static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self);
static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2);
static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
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
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
struct sNode* expression_node_v95(struct sInfo* info);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj32;
void* __right_value290 = (void*)0;
struct sType* __dec_obj81;
struct sNode* __dec_obj82;
void* __right_value291 = (void*)0;
struct list$1charph* __dec_obj83;
void* __right_value302 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj97;
char* __dec_obj98;
struct sStoreNode* __result237__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj81=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj82=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
    ((void*)0);
    __dec_obj83=self->multiple_assign;
    self->multiple_assign=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, multiple_assign));
    come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    ((void*)0);
    __dec_obj97=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphsNodephphp_clone, multiple_declare));
    come_call_finalizer3(__dec_obj97,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=self->attribute;
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sStoreNode")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value304 = (void*)0;
struct sVar* var__310;
void* __right_value305 = (void*)0;
struct sType* type_332;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_333;
struct tuple3$3sTypephcharphsNodeph* it_336;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1 = (void*)0;
struct sType* type_339=0;
char* var_name_340=0;
struct sNode* right_value_341=0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
_Bool __result254__;
void* __right_value308 = (void*)0;
struct sType* left_type_342;
_Bool Value_343;
_Bool __result255__;
void* __right_value309 = (void*)0;
struct CVALUE* come_value_344;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
_Bool Value_345;
void* __right_value313 = (void*)0;
struct CVALUE* right_value_346;
struct sType* right_type_347;
int i_348;
struct list$1charph* o2_saved_349;
char* it_352;
void* __right_value314 = (void*)0;
struct sVar* var__355;
void* __right_value315 = (void*)0;
struct sType* right_type2_356;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* multiple_var_name_361;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* __dec_obj113;
struct list$1charph* o2_saved_362;
char* it_363;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* right_type2_364;
struct sVar* var__365;
void* __right_value322 = (void*)0;
struct sType* var_type_366;
void* __right_value323 = (void*)0;
struct sType* left_type_367;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct CVALUE* right_value2_368;
void* __right_value326 = (void*)0;
char* __dec_obj114;
void* __right_value327 = (void*)0;
struct sType* __dec_obj115;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_369;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
char* __dec_obj116;
void* __right_value333 = (void*)0;
char* __dec_obj117;
void* __right_value334 = (void*)0;
struct sType* __dec_obj118;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sVar* var__370;
void* __right_value337 = (void*)0;
struct sType* type_371;
void* __right_value338 = (void*)0;
_Bool __result264__;
void* __right_value339 = (void*)0;
struct sType* left_type_372;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1sNodeph* o2_saved_373;
struct sNode* it_376;
_Bool Value_379;
void* __right_value342 = (void*)0;
struct CVALUE* come_value_380;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_381;
void* __right_value347 = (void*)0;
char* __dec_obj119;
void* __right_value348 = (void*)0;
struct sType* __dec_obj120;
void* __right_value352 = (void*)0;
struct sVar* var__385;
void* __right_value353 = (void*)0;
struct sType* type_386;
void* __right_value354 = (void*)0;
_Bool Value_387;
void* __right_value355 = (void*)0;
_Bool array_initializer_388;
void* __right_value356 = (void*)0;
_Bool struct_initializer_389;
void* __right_value357 = (void*)0;
_Bool new_channel_390;
void* __right_value358 = (void*)0;
struct CVALUE* right_value_391;
struct sType* right_type_392;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* var_type_393;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* left_type_394;
void* __right_value363 = (void*)0;
struct sVar* var__395;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct CVALUE* come_value_396;
void* __right_value367 = (void*)0;
char* __dec_obj124;
void* __right_value368 = (void*)0;
struct sVar* var__397;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value372 = (void*)0;
char* __dec_obj125;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct CVALUE* come_value_399;
void* __right_value378 = (void*)0;
char* __dec_obj126;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_400;
void* __right_value384 = (void*)0;
char* __dec_obj127;
void* __right_value385 = (void*)0;
struct sType* __dec_obj128;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_401;
void* __right_value389 = (void*)0;
char* __dec_obj129;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* __dec_obj130;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value397 = (void*)0;
char* __dec_obj131;
void* __right_value398 = (void*)0;
struct sType* __dec_obj132;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
_Bool __result272__;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct CVALUE* come_value_403;
void* __right_value404 = (void*)0;
char* __dec_obj133;
void* __right_value405 = (void*)0;
struct sType* __dec_obj134;
_Bool Value_404;
void* __right_value406 = (void*)0;
_Bool new_channel_405;
void* __right_value407 = (void*)0;
struct CVALUE* right_value_406;
struct sType* right_type_407;
struct sClass* current_stack_frame_struct_408;
void* __right_value408 = (void*)0;
_Bool _if_conditional1;
struct sVar* parent_var_409;
struct sType* left_type_410;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
char* c_value_411;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value414 = (void*)0;
char* __dec_obj135;
void* __right_value415 = (void*)0;
char* __dec_obj136;
void* __right_value416 = (void*)0;
struct sType* __dec_obj137;
_Bool __result273__;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
char* c_value_413;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value422 = (void*)0;
char* __dec_obj138;
void* __right_value423 = (void*)0;
char* __dec_obj139;
void* __right_value424 = (void*)0;
struct sType* __dec_obj140;
_Bool __result274__;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
_Bool __result275__;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_415;
void* __right_value429 = (void*)0;
char* __dec_obj141;
void* __right_value430 = (void*)0;
char* __dec_obj142;
void* __right_value431 = (void*)0;
struct sType* __dec_obj143;
_Bool __result276__;
struct sVar* var__416;
_Bool __result277__;
void* __right_value432 = (void*)0;
struct sType* __dec_obj144;
void* __right_value433 = (void*)0;
struct sType* left_type_417;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value438 = (void*)0;
char* __dec_obj145;
void* __right_value439 = (void*)0;
struct sType* __dec_obj146;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value444 = (void*)0;
char* __dec_obj147;
void* __right_value445 = (void*)0;
struct sType* __dec_obj148;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct CVALUE* come_value_420;
void* __right_value450 = (void*)0;
char* __dec_obj149;
void* __right_value451 = (void*)0;
struct sType* __dec_obj150;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct CVALUE* come_value_421;
void* __right_value454 = (void*)0;
char* __dec_obj151;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sType* __dec_obj152;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
_Bool __result278__;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value461 = (void*)0;
char* __dec_obj153;
void* __right_value462 = (void*)0;
struct sType* __dec_obj154;
    if(    self->multiple_declare) {
        var__310=((struct sVar*)(__right_value304=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value304,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__310) {
            if(            var__310->mType->mHeap) {
                free_object(var__310->mType,var__310->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_332=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_332->mFunctionParam=(_Bool)0;
        for(        o2_saved_333=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_336=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_333));        !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_333));        it_336=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_333))        ){
            multiple_assign_var1=it_336;
            type_339=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_340=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_341=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var__310=((struct sVar*)(__right_value306=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,var_name_340)));
            come_call_finalizer3(__right_value306,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            var__310) {
                if(                var__310->mType->mHeap) {
                    free_object(var__310->mType,var__310->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                map$2charphsVarph_remove(info->lv_table->mVars,var_name_340);
            }
            add_variable_to_table(var_name_340,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_339)),info);
            var__310=get_variable_from_table(info->lv_table,var_name_340);
            if(            var__310==((void*)0)) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_336);
                __result254__ = (_Bool)1;
                come_call_finalizer3(type_339,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_340 = come_decrement_ref_count2(var_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_341) { right_value_341 = come_decrement_ref_count2(right_value_341, ((struct sNode*)right_value_341)->finalize, ((struct sNode*)right_value_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_333,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_332,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result254__;
            }
            left_type_342=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__310->mType));
            if(            right_value_341) {
                Value_343=node_compile(right_value_341,info);
                if(                !Value_343) {
                    __result255__ = (_Bool)0;
                    come_call_finalizer3(type_339,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_340 = come_decrement_ref_count2(var_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_341) { right_value_341 = come_decrement_ref_count2(right_value_341, ((struct sNode*)right_value_341)->finalize, ((struct sNode*)right_value_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_342,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_333,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_332,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result255__;
                }
                else {
                }
                come_value_344=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value310=make_define_var(left_type_342,var__310->mCValueName,(_Bool)0,info))),come_value_344->c_value);
                __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(come_value_344,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__310->mCValueName,((char*)(__right_value311=make_type_name_string(left_type_342,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value312=make_define_var(left_type_342,var__310->mCValueName,(_Bool)0,info))));
                __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_339,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_340 = come_decrement_ref_count2(var_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_value_341) { right_value_341 = come_decrement_ref_count2(right_value_341, ((struct sNode*)right_value_341)->finalize, ((struct sNode*)right_value_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_type_342,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_333,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_332,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_345=node_compile(self->right_value,info);
        if(        !Value_345) {
            return (_Bool)0;
        }
        else {
        }
        right_value_346=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_347=right_value_346->type;
        dec_stack_ptr(1,info);
        if(        right_type_347->mRefferenceOriginalType&&right_type_347->mRefferenceOriginalType->v1) {
            right_type_347=right_type_347->mRefferenceOriginalType->v1;
        }
        if(        right_type_347->mNoSolvedGenericsType->v1) {
            right_type_347=right_type_347->mNoSolvedGenericsType->v1;
        }
        i_348=0;
        for(        o2_saved_349=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_352=list$1charph_begin((o2_saved_349));        !list$1charph_end((o2_saved_349));        it_352=list$1charph_next((o2_saved_349))        ){
            if(            i_348<list$1sTypeph_length(right_type_347->mGenericsTypes)) {
                var__355=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_operator_load_element(info->lv_table->mVars,it_352));
                if(                var__355) {
                    if(                    var__355->mType->mHeap) {
                        free_object(var__355->mType,var__355->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    map$2charphsVarph_remove(info->lv_table->mVars,it_352);
                }
                right_type2_356=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(right_type_347->mGenericsTypes,i_348));
                right_type2_356->mFunctionParam=(_Bool)0;
                add_variable_to_table(it_352,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_356)),info);
                come_call_finalizer3(var__355,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_356,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_348++;
        }
        come_call_finalizer3(o2_saved_349,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        static int num_multiple_var_360=0;
        multiple_var_name_361=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_360));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value318=make_define_var(right_value_346->type,multiple_var_name_361,(_Bool)0,info))));
        __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_361,right_value_346->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_361,right_value_346->c_value);
        }
        __dec_obj113=right_value_346->c_value;
        right_value_346->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, multiple_var_name_361));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        i_348=0;
        for(        o2_saved_362=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_363=list$1charph_begin((o2_saved_362));        !list$1charph_end((o2_saved_362));        it_363=list$1charph_next((o2_saved_362))        ){
            if(            i_348<list$1sTypeph_length(right_type_347->mGenericsTypes)) {
                right_type2_364=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value320=list$1sTypephp_operator_load_element(right_type_347->mGenericsTypes,i_348))), "07var.c", 135, 1))));
                come_call_finalizer3(__right_value320,sType_finalize, 0, 1, 0, 0, (void*)0);
                var__365=get_variable_from_table(info->lv_table,it_363);
                var_type_366=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__365->mType));
                var_type_366->mStatic=(_Bool)0;
                left_type_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__365->mType));
                right_value2_368=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 144, "struct CVALUE*", (void*)0, (void*)0))));
                __dec_obj114=right_value2_368->c_value;
                right_value2_368->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_346->c_value,i_348+1));
                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj115=right_value2_368->type;
                right_value2_368->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_364));
                come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
                right_value2_368->var=((void*)0);
                come_value_369=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 150, "struct CVALUE*", (void*)0, (void*)0))));
                check_assign_type(((char*)(__right_value331=xsprintf("\%s is assining to}",((char*)(__right_value330=string_to_string(self->name)))))),left_type_367,right_type2_364,come_value_369,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                right_type2_364->mHeap&&left_type_367->mHeap&&left_type_367->mPointerNum>0&&right_type2_364->mPointerNum>0) {
                    std_move(left_type_367,right_type2_364,right_value2_368,info,(_Bool)0);
                    __dec_obj116=come_value_369->c_value;
                    come_value_369->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__365->mCValueName,right_value2_368->c_value));
                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj117=come_value_369->c_value;
                    come_value_369->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__365->mCValueName,right_value2_368->c_value));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj118=come_value_369->type;
                come_value_369->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_367));
                come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_369->var=var__365;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value335=make_define_var(left_type_367,var__365->mCValueName,(_Bool)0,info))));
                __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_369->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_369->c_value);
                }
                come_call_finalizer3(right_type2_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value2_368,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_369,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_348++;
        }
        come_call_finalizer3(o2_saved_362,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_346,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        multiple_var_name_361 = come_decrement_ref_count2(multiple_var_name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    self->right_value==((void*)0)) {
        var__370=((struct sVar*)(__right_value336=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value336,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__370) {
            if(            var__370->mType->mHeap) {
                free_object(var__370->mType,var__370->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_371=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_371->mFunctionParam=(_Bool)0;
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_371)),info);
        var__370=get_variable_from_table(info->lv_table,self->name);
        if(        var__370==((void*)0)) {
            var__370=get_variable_from_table(info->gv_table,self->name);
            if(            var__370==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                __result264__ = (_Bool)1;
                come_call_finalizer3(type_371,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result264__;
            }
        }
        left_type_372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__370->mType));
        if(        left_type_372->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__370->mCValueName);
        }
        else if(        list$1sNodeph_length(left_type_372->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value340=make_define_var(left_type_372,var__370->mCValueName,(_Bool)0,info))));
            __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__370->mCValueName,((char*)(__right_value341=make_type_name_string(left_type_372,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_373=(struct list$1sNodeph*)come_increment_ref_count((left_type_372->mArrayNum)),it_376=list$1sNodeph_begin((o2_saved_373));            !list$1sNodeph_end((o2_saved_373));            it_376=list$1sNodeph_next((o2_saved_373))            ){
                Value_379=node_compile(it_376,info);
                if(                !Value_379) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_380=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"*(%s)",come_value_380->c_value);
                come_call_finalizer3(come_value_380,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_373,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value343=make_define_var(left_type_372,var__370->mCValueName,(_Bool)0,info))));
            __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_372->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__370->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__370->mCValueName,((char*)(__right_value344=make_type_name_string(left_type_372,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_381=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 243, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj119=come_value_381->c_value;
            come_value_381->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__370->mCValueName));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj120=come_value_381->type;
            come_value_381->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_372));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_381->var=var__370;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_381));
            come_call_finalizer3(come_value_381,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !left_type_372->mClass->mNumber&&left_type_372->mPointerNum==0) {
            var__370->mType->mAllocaValue=(_Bool)1;
        }
        come_call_finalizer3(type_371,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc) {
        var__385=((struct sVar*)(__right_value352=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value352,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__385) {
            if(            var__385->mType->mHeap) {
                free_object(var__385->mType,var__385->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_386=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            type_386->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_386)),info);
            come_call_finalizer3(type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        Value_387=node_compile(self->right_value,info);
        if(        !Value_387) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_388=string_operator_equals(((char*)(__right_value355=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        struct_initializer_389=string_operator_equals(((char*)(__right_value356=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        new_channel_390=string_operator_equals(((char*)(__right_value357=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_391=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_392=right_value_391->type;
        dec_stack_ptr(1,info);
        if(        self->type==((void*)0)) {
            right_type_392->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_392)),info);
        }
        else {
        }
        var__385=get_variable_from_table(info->lv_table,self->name);
        var_type_393=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__385->mType));
        var_type_393->mStatic=(_Bool)0;
        if(        !array_initializer_388&&!struct_initializer_389&&!var__385->mType->mStatic&&!var_type_393->mConstant&&list$1sNodeph_length(var_type_393->mArrayNum)==0) {
            if(            var_type_393->mClass->mNumber) {
            }
            else if(            (var_type_393->mClass->mStruct||var_type_393->mClass->mUnion||var_type_393->mClass->mEnum)||var_type_393->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__385->mCValueName,((char*)(__right_value361=make_type_name_string(var_type_393,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        left_type_394=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__385->mType));
        if(        array_initializer_388) {
            var__395=((struct sVar*)(__right_value363=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value363,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value364=make_define_var(var__395->mType,var__395->mCValueName,(_Bool)0,info))),right_value_391->c_value);
            __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 315, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj124=come_value_396->c_value;
            come_value_396->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_396));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        struct_initializer_389) {
            var__397=((struct sVar*)(__right_value368=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value368,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value369=make_define_var(var__397->mType,var__397->mCValueName,(_Bool)0,info))),right_value_391->c_value);
            __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_398=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 325, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj125=come_value_398->c_value;
            come_value_398->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_398));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        var__385->mType->mStatic||var__385->mType->mConstant) {
            check_assign_type(((char*)(__right_value374=xsprintf("\%s is assining to",((char*)(__right_value373=string_to_string(self->name)))))),left_type_394,right_type_392,right_value_391,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value375=make_define_var(left_type_394,var__385->mCValueName,(_Bool)0,info))),right_value_391->c_value);
            __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_399=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 336, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj126=come_value_399->c_value;
            come_value_399->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_399));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_399,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_392->mHeap&&left_type_394->mHeap&&left_type_394->mPointerNum>0&&right_type_392->mPointerNum>0) {
            check_assign_type(((char*)(__right_value380=xsprintf("\%s is assining to",((char*)(__right_value379=string_to_string(self->name)))))),left_type_394,right_type_392,right_value_391,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            std_move(left_type_394,right_type_392,right_value_391,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value381=make_define_var(left_type_394,var__385->mCValueName,(_Bool)0,info))));
            __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_400=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 350, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj127=come_value_400->c_value;
            come_value_400->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__385->mCValueName,right_value_391->c_value));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj128=come_value_400->type;
            come_value_400->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_394));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_400->var=var__385;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_400));
            add_come_last_code(info,"%s",come_value_400->c_value);
            come_call_finalizer3(come_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_394->mChannel&&new_channel_390) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value386=make_define_var(left_type_394,var__385->mCValueName,(_Bool)0,info))));
            __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__385->mCValueName);
            come_value_401=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 364, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj129=come_value_401->c_value;
            come_value_401->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__385->mCValueName));
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=come_value_401->type;
            come_value_401->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 366, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_401->type->mPointerNum=1;
            come_value_401->var=var__385;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_401));
            add_come_last_code(info,"%s",come_value_401->c_value);
            come_call_finalizer3(come_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_394->mPointerNum>0&&left_type_394->mHeap&&string_operator_equals(right_type_392->mClass->mName,"void")&&right_type_392->mPointerNum>0) {
            check_assign_type(((char*)(__right_value393=xsprintf("\%s is assining to",((char*)(__right_value392=string_to_string(self->name)))))),left_type_394,right_type_392,right_value_391,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value394=make_define_var(left_type_394,var__385->mCValueName,(_Bool)0,info))));
            __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 382, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj131=come_value_402->c_value;
            come_value_402->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__385->mCValueName,right_value_391->c_value));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj132=come_value_402->type;
            come_value_402->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_394));
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_402->var=var__385;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
            add_come_last_code(info,"%s",come_value_402->c_value);
            come_call_finalizer3(come_value_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value400=xsprintf("\%s is assining to",((char*)(__right_value399=string_to_string(self->name)))))),left_type_394,right_type_392,right_value_391,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            right_type_392->mHeap&&left_type_394->mHeap&&left_type_394->mPointerNum>0&&right_type_392->mPointerNum>0) {
                std_move(left_type_394,right_type_392,right_value_391,info,(_Bool)0);
            }
            if(            left_type_394->mHeap&&!right_value_391->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result272__ = (_Bool)0;
                come_call_finalizer3(right_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result272__;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value401=make_define_var(left_type_394,var__385->mCValueName,(_Bool)0,info))));
            __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_403=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 407, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj133=come_value_403->c_value;
            come_value_403->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__385->mCValueName,right_value_391->c_value));
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj134=come_value_403->type;
            come_value_403->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_394));
            come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_403->var=var__385;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_403));
            add_come_last_code(info,"%s",come_value_403->c_value);
            come_call_finalizer3(come_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_404=node_compile(self->right_value,info);
        if(        !Value_404) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_405=string_operator_equals(((char*)(__right_value406=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_406=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_407=right_value_406->type;
        dec_stack_ptr(1,info);
        current_stack_frame_struct_408=info->current_stack_frame_struct;
        if(        (_if_conditional1=(current_stack_frame_struct_408&&((struct sVar*)(__right_value408=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),        come_call_finalizer3(__right_value408,sVar_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            parent_var_409=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_409!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_409->mFunName,info->come_fun->mName)) {
                    left_type_410=parent_var_409->mType;
                    if(                    left_type_410->mPointerNum>0&&right_type_407->mPointerNum>0&&right_type_407->mHeap&&left_type_410->mHeap) {
                        check_assign_type(((char*)(__right_value410=xsprintf("\%s is assigning to",((char*)(__right_value409=string_to_string(self->name)))))),left_type_410,right_type_407,right_value_406,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_411=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_409->mCValueName));
                        decrement_ref_count_object(parent_var_409->mType,c_value_411,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_410,right_type_407,right_value_406,info,(_Bool)0);
                        come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 446, "struct CVALUE*", (void*)0, (void*)0))));
                        if(                        parent_var_409->mType->mOriginIsArray) {
                            __dec_obj135=come_value_412->c_value;
                            come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_409->mCValueName,right_value_406->c_value));
                            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj136=come_value_412->c_value;
                            come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_409->mCValueName,right_value_406->c_value));
                            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj137=come_value_412->type;
                        come_value_412->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_410));
                        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_412->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_412->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
                        __result273__ = (_Bool)1;
                        c_value_411 = come_decrement_ref_count2(c_value_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result273__;
                        c_value_411 = come_decrement_ref_count2(c_value_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else if(                    left_type_410->mPointerNum>0&&right_type_407->mPointerNum>0&&string_operator_equals(right_type_407->mClass->mName,"void")&&left_type_410->mHeap) {
                        check_assign_type(((char*)(__right_value418=xsprintf("\%s is assigning to",((char*)(__right_value417=string_to_string(self->name)))))),left_type_410,right_type_407,right_value_406,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_413=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_409->mCValueName));
                        decrement_ref_count_object(parent_var_409->mType,c_value_413,info,(_Bool)0,(_Bool)0);
                        come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 470, "struct CVALUE*", (void*)0, (void*)0))));
                        if(                        parent_var_409->mType->mOriginIsArray) {
                            __dec_obj138=come_value_414->c_value;
                            come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_409->mCValueName,right_value_406->c_value));
                            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj139=come_value_414->c_value;
                            come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_409->mCValueName,right_value_406->c_value));
                            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj140=come_value_414->type;
                        come_value_414->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_410));
                        come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_414->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_414->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
                        __result274__ = (_Bool)1;
                        c_value_413 = come_decrement_ref_count2(c_value_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result274__;
                        c_value_413 = come_decrement_ref_count2(c_value_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value426=xsprintf("\%s is assigning to",((char*)(__right_value425=string_to_string(self->name)))))),left_type_410,right_type_407,right_value_406,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        left_type_410->mHeap&&!right_value_406->type->mHeap) {
                            err_msg(info,"require right value as heap object(%s)",self->name);
                            __result275__ = (_Bool)0;
                            come_call_finalizer3(right_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result275__;
                        }
                        come_value_415=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 495, "struct CVALUE*", (void*)0, (void*)0))));
                        if(                        parent_var_409->mType->mOriginIsArray) {
                            __dec_obj141=come_value_415->c_value;
                            come_value_415->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_409->mCValueName,right_value_406->c_value));
                            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj142=come_value_415->c_value;
                            come_value_415->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_409->mCValueName,right_value_406->c_value));
                            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj143=come_value_415->type;
                        come_value_415->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_410));
                        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_415->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_415->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_415));
                        __result276__ = (_Bool)1;
                        come_call_finalizer3(come_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result276__;
                        come_call_finalizer3(come_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__416=get_variable_from_table(info->lv_table,self->name);
        if(        var__416==((void*)0)) {
            var__416=get_variable_from_table(info->gv_table,self->name);
            if(            var__416==((void*)0)) {
                err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                __result277__ = (_Bool)1;
                come_call_finalizer3(right_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result277__;
            }
        }
        if(        var__416->mType==((void*)0)) {
            __dec_obj144=var__416->mType;
            var__416->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_407));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_417=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__416->mType));
        if(        (var__416->mType->mStatic||var__416->mType->mConstant)&&!var__416->mGlobal) {
            check_assign_type(((char*)(__right_value435=xsprintf("\%s is assining to",((char*)(__right_value434=string_to_string(self->name)))))),left_type_417,right_type_407,right_value_406,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 536, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj145=come_value_418->c_value;
            come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__416->mCValueName,right_value_406->c_value));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj146=come_value_418->type;
            come_value_418->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_417));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_418->var=var__416;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_418));
            add_come_last_code(info,"%s",come_value_418->c_value);
            come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_407->mHeap&&left_type_417->mHeap&&left_type_417->mPointerNum>0&&right_type_407->mPointerNum>0) {
            check_assign_type(((char*)(__right_value441=xsprintf("\%s is assining to",((char*)(__right_value440=string_to_string(self->name)))))),left_type_417,right_type_407,right_value_406,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_417,var__416->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_417,right_type_407,right_value_406,info,(_Bool)0);
            come_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 553, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj147=come_value_419->c_value;
            come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__416->mCValueName,right_value_406->c_value));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj148=come_value_419->type;
            come_value_419->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_417));
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_419->var=var__416;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
            add_come_last_code(info,"%s",come_value_419->c_value);
            come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_417->mPointerNum>0&&left_type_417->mHeap&&string_operator_equals(right_type_407->mClass->mName,"void")&&right_type_407->mPointerNum>0) {
            check_assign_type(((char*)(__right_value447=xsprintf("\%s is assining to",((char*)(__right_value446=string_to_string(self->name)))))),left_type_417,right_type_407,right_value_406,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_417,var__416->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 569, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj149=come_value_420->c_value;
            come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__416->mCValueName,right_value_406->c_value));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj150=come_value_420->type;
            come_value_420->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_417));
            come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_420->var=var__416;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_420));
            add_come_last_code(info,"%s",come_value_420->c_value);
            come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_417->mChannel&&new_channel_405) {
            come_value_421=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 580, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj151=come_value_421->c_value;
            come_value_421->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__416->mCValueName));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj152=come_value_421->type;
            come_value_421->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 582, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_421->type->mPointerNum=1;
            come_value_421->var=var__416;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_421));
            add_come_last_code(info,"%s",come_value_421->c_value);
            come_call_finalizer3(come_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value458=xsprintf("\%s is assining to",((char*)(__right_value457=string_to_string(self->name)))))),left_type_417,right_type_407,right_value_406,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_417->mHeap&&!right_value_406->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result278__ = (_Bool)0;
                come_call_finalizer3(right_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_417,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result278__;
            }
            come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 598, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj153=come_value_422->c_value;
            come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__416->mCValueName,right_value_406->c_value));
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj154=come_value_422->type;
            come_value_422->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_417));
            come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_422->var=var__416;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
            add_come_last_code(info,"%s",come_value_422->c_value);
            come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_417,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result214__;
void* __right_value251 = (void*)0;
struct sType* result_272;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj55;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj56;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value257 = (void*)0;
char* __dec_obj58;
void* __right_value258 = (void*)0;
char* __dec_obj59;
void* __right_value265 = (void*)0;
struct list$1sTypeph* __dec_obj63;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __dec_obj67;
void* __right_value274 = (void*)0;
struct list$1sTypeph* __dec_obj68;
void* __right_value281 = (void*)0;
struct list$1charph* __dec_obj72;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj73;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* __dec_obj75;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value286 = (void*)0;
char* __dec_obj77;
void* __right_value287 = (void*)0;
char* __dec_obj78;
void* __right_value288 = (void*)0;
char* __dec_obj79;
void* __right_value289 = (void*)0;
char* __dec_obj80;
struct sType* __result230__;
    if(    self==(void*)0) {
        __result214__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_272=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_272->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj55=result_272->mNoSolvedGenericsType;
        result_272->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj56=result_272->mOriginalLoadVarType;
        result_272->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj57=result_272->mRefferenceOriginalType;
        result_272->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj58=result_272->mInterfaceName;
        result_272->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj59=result_272->mGenericsName;
        result_272->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj63=result_272->mGenericsTypes;
        result_272->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj63,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj67=result_272->mArrayNum;
        result_272->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj67,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj68=result_272->mParamTypes;
        result_272->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj68,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj72=result_272->mParamNames;
        result_272->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj73=result_272->mResultType;
        result_272->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj73,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj74=result_272->mAlignas;
        result_272->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj75=result_272->mChannelType;
        result_272->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj75,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_272->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_272->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_272->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_272->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_272->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_272->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_272->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_272->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_272->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_272->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_272->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_272->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_272->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_272->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_272->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_272->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_272->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_272->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_272->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_272->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_272->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_272->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj76=result_272->mSizeNum;
        result_272->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_272->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj77=result_272->mOriginalTypeName;
        result_272->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_272->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_272->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_272->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_272->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_272->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_272->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj78=result_272->mAsmName;
        result_272->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_272->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_272->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_272->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_272->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_272->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj79=result_272->mTupleName;
        result_272->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj80=result_272->mAttribute;
        result_272->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_272;
    come_call_finalizer3(result_272,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result215__;
void* __right_value252 = (void*)0;
struct tuple1$1sTypeph* result_273;
void* __right_value253 = (void*)0;
struct sType* __dec_obj33;
struct tuple1$1sTypeph* __result216__;
    if(    self==(void*)0) {
        __result215__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    result_273=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj33=result_273->v1;
        result_273->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_273;
    come_call_finalizer3(result_273,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj34;
struct tuple1$1sTypeph* __dec_obj36;
struct tuple1$1sTypeph* __dec_obj37;
char* __dec_obj38;
char* __dec_obj39;
struct list$1sTypeph* __dec_obj40;
struct list$1sNodeph* __dec_obj42;
struct list$1sTypeph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct tuple1$1sTypeph* __dec_obj46;
struct sNode* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj34=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj36=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj37=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj38=self->mInterfaceName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj39=self->mGenericsName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj40=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj40,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj42=self->mArrayNum;
            come_call_finalizer3(__dec_obj42,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj44=self->mParamTypes;
            come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj45=self->mParamNames;
            come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj46=self->mResultType;
            come_call_finalizer3(__dec_obj46,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj47=self->mAlignas;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj48=self->mChannelType;
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj49=self->mSizeNum;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj50=self->mOriginalTypeName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj51=self->mAsmName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj52=self->mTupleName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj53=self->mAttribute;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj35;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_274;
struct list_item$1sTypeph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer3(prev_it_275,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_276;
struct list_item$1sTypeph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_278;
struct list_item$1sNodeph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_280;
struct list_item$1sNodeph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer3(prev_it_281,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_282;
struct list_item$1charph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer3(prev_it_283,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj54;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj54=self->v1;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result217__;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1sTypeph* result_284;
struct list_item$1sTypeph* it_285;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __result220__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_284=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_285=self->head;
    while(it_285!=((void*)0)) {
        list$1sTypeph_add(result_284,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_285->item)));
        it_285=it_285->next;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_284;
    come_call_finalizer3(result_284,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result218__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_286;
struct sType* __dec_obj60;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_287;
struct sType* __dec_obj61;
void* __right_value263 = (void*)0;
struct list_item$1sTypeph* litem_288;
struct sType* __dec_obj62;
struct list$1sTypeph* __result219__;
    if(    self->len==0) {
        litem_286=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj60=litem_286->item;
        litem_286->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj61=litem_287->item;
        litem_287->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value263=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj62=litem_288->item;
        litem_288->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result221__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1sNodeph* result_289;
struct list_item$1sNodeph* it_290;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __result226__;
    if(    self==((void*)0)) {
        __result221__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_289=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_290=self->head;
    while(it_290!=((void*)0)) {
        list$1sNodeph_add(result_289,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_290->item)));
        it_290=it_290->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_289;
    come_call_finalizer3(result_289,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result222__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_291;
struct sNode* __dec_obj64;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_292;
struct sNode* __dec_obj65;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_293;
struct sNode* __dec_obj66;
struct list$1sNodeph* __result223__;
    if(    self->len==0) {
        litem_291=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj64=litem_291->item;
        litem_291->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj65=litem_292->item;
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj66=litem_293->item;
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result224__;
void* __right_value271 = (void*)0;
struct sNode* result_294;
struct sNode* __result225__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_294=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_294->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_294->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_294->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_294->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_294->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_294->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_294->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_294->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_294->kind=self->kind;
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_294;
    if(result_294) { result_294 = come_decrement_ref_count2(result_294, ((struct sNode*)result_294)->finalize, ((struct sNode*)result_294)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result227__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1charph* result_295;
struct list_item$1charph* it_296;
void* __right_value280 = (void*)0;
struct list$1charph* __result229__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_295=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_296=self->head;
    while(it_296!=((void*)0)) {
        list$1charph_add(result_295,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_296->item)));
        it_296=it_296->next;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_295;
    come_call_finalizer3(result_295,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_297;
char* __dec_obj69;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_298;
char* __dec_obj70;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_299;
char* __dec_obj71;
struct list$1charph* __result228__;
    if(    self->len==0) {
        litem_297=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_297->prev=((void*)0);
        litem_297->next=((void*)0);
        __dec_obj69=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_297;
        self->head=litem_297;
    }
    else if(    self->len==1) {
        litem_298=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_298->prev=self->head;
        litem_298->next=((void*)0);
        __dec_obj70=litem_298->item;
        litem_298->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_298;
        self->head->next=litem_298;
    }
    else {
        litem_299=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_299->prev=self->tail;
        litem_299->next=((void*)0);
        __dec_obj71=litem_299->item;
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_299;
        self->tail=litem_299;
    }
    self->len++;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result231__;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* result_302;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_303;
void* __right_value301 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result236__;
    if(    self==((void*)0)) {
        __result231__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_302=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1221, "struct list$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
    it_303=self->head;
    while(it_303!=((void*)0)) {
        list$1tuple3$3sTypephcharphsNodephph_add(result_302,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(come_call_cloner(tuple3$3sTypephcharphsNodephp_clone, it_303->item)));
        it_303=it_303->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_302;
    come_call_finalizer3(result_302,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result232__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_300;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
struct tuple3$3sTypephcharphsNodeph* __dec_obj84;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj84=self->item;
            come_call_finalizer3(__dec_obj84,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj85;
char* __dec_obj86;
struct sNode* __dec_obj87;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj85=self->v1;
            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj86=self->v2;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj87=self->v3;
            if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_304;
struct tuple3$3sTypephcharphsNodeph* __dec_obj88;
void* __right_value295 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_305;
struct tuple3$3sTypephcharphsNodeph* __dec_obj89;
void* __right_value296 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_306;
struct tuple3$3sTypephcharphsNodeph* __dec_obj90;
struct list$1tuple3$3sTypephcharphsNodephph* __result233__;
    if(    self->len==0) {
        litem_304=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value294=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1235, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj88=litem_304->item;
        litem_304->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value295=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1245, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj89=litem_305->item;
        litem_305->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value296=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1255, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj90=litem_306->item;
        litem_306->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* __result234__;
void* __right_value297 = (void*)0;
struct tuple3$3sTypephcharphsNodeph* result_307;
void* __right_value298 = (void*)0;
struct sType* __dec_obj91;
void* __right_value299 = (void*)0;
char* __dec_obj92;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj93;
struct tuple3$3sTypephcharphsNodeph* __result235__;
    if(    self==(void*)0) {
        __result234__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_307=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "struct tuple3$3sTypephcharphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj91=result_307->v1;
        result_307->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj92=result_307->v2;
        result_307->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj93=result_307->v3;
        result_307->v3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v3));
        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_307;
    come_call_finalizer3(result_307,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj94;
char* __dec_obj95;
struct sNode* __dec_obj96;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj94=self->v1;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj95=self->v2;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj96=self->v3;
            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_308;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        come_call_finalizer3(prev_it_309,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __dec_obj99;
char* __dec_obj100;
struct sType* __dec_obj101;
struct sNode* __dec_obj102;
struct list$1charph* __dec_obj103;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj104;
char* __dec_obj105;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj99=self->sname;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj100=self->name;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj101=self->type;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj102=self->right_value;
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        if(        self->multiple_assign==gComeFunResultObject) {
            __dec_obj103=self->multiple_assign;
            come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj104=self->multiple_declare;
            come_call_finalizer3(__dec_obj104,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        if(        self->attribute==gComeFunResultObject) {
            __dec_obj105=self->attribute;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->attribute = come_decrement_ref_count2(self->attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_311;
unsigned int hash_312;
unsigned int it_313;
struct sVar* __result239__;
struct sVar* __result240__;
struct sVar* __result241__;
struct sVar* __result242__;
default_value_311 = (void*)0;
    memset(&default_value_311,0,sizeof(struct sVar*));
    hash_312=charp_get_hash_key(((char*)key))%self->size;
    it_313=hash_312;
    while((_Bool)1) {
        if(        self->item_existance[it_313]) {
            if(            charp_equals(self->keys[it_313],key)) {
                __result239__ = gComeFunResultObject = __result_obj__ = self->items[it_313];
                come_call_finalizer3(default_value_311,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result239__;
            }
            it_313++;
            if(            it_313>=self->size) {
                it_313=0;
            }
            else if(            it_313==hash_312) {
                __result240__ = gComeFunResultObject = __result_obj__ = default_value_311;
                come_call_finalizer3(default_value_311,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result240__;
            }
        }
        else {
            __result241__ = gComeFunResultObject = __result_obj__ = default_value_311;
            come_call_finalizer3(default_value_311,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result241__;
        }
    }
    __result242__ = gComeFunResultObject = __result_obj__ = default_value_311;
    come_call_finalizer3(default_value_311,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj106;
char* __dec_obj107;
struct sType* __dec_obj108;
char* __dec_obj109;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj106=self->mName;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj107=self->mCValueName;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj108=self->mType;
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj109=self->mFunName;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsVarph* map$2charphsVarph_remove(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_314;
unsigned int it_315;
struct map$2charphsVarph* __result247__;
    hash_314=charp_get_hash_key(((char*)key))%self->size;
    it_315=hash_314;
    while((_Bool)1) {
        if(        self->item_existance[it_315]) {
            if(            charp_equals(self->keys[it_315],key)) {
                list$1charp_remove(self->key_list,self->keys[it_315]);
                self->item_existance[it_315]=(_Bool)0;
                if(                1) {
                    self->keys[it_315] = come_decrement_ref_count2(self->keys[it_315], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_315]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_315],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_315]=((void*)0);
                self->len--;
                break;
            }
            it_315++;
            if(            it_315>=self->size) {
                it_315=0;
            }
            else if(            it_315==hash_314) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_316;
struct list_item$1charp* it_317;
struct list$1charp* __result246__;
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
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_318;
struct list$1charp* __result243__;
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
struct list$1charp* __result245__;
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
        __result243__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result243__;
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
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_319;
struct list_item$1charp* prev_it_320;
struct list$1charp* __result244__;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        come_call_finalizer3(prev_it_320,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_334;
struct tuple3$3sTypephcharphsNodeph* __result248__;
struct tuple3$3sTypephcharphsNodeph* __result249__;
struct tuple3$3sTypephcharphsNodeph* result_335;
struct tuple3$3sTypephcharphsNodeph* __result250__;
result_334 = (void*)0;
result_335 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_334,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_334;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->head;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_335,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_335;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_337;
struct tuple3$3sTypephcharphsNodeph* __result251__;
struct tuple3$3sTypephcharphsNodeph* __result252__;
struct tuple3$3sTypephcharphsNodeph* result_338;
struct tuple3$3sTypephcharphsNodeph* __result253__;
result_337 = (void*)0;
result_338 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_337,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_337;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_338,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_338;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj110;
struct sType* __dec_obj111;
char* __dec_obj112;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj110=self->c_value;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj111=self->type;
            come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj112=self->c_value_without_right_value_objects;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_350;
char* __result256__;
char* __result257__;
char* result_351;
char* __result258__;
result_350 = (void*)0;
result_351 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_350,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_350;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->it=self->head;
    if(    self->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_351,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_351;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_353;
char* __result259__;
char* __result260__;
char* result_354;
char* __result261__;
result_353 = (void*)0;
result_354 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_353,0,sizeof(char*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_353;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_354,0,sizeof(char*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_354;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_357;
int i_358;
struct sType* __result262__;
struct sType* default_value_359;
struct sType* __result263__;
default_value_359 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_357=self->head;
    i_358=0;
    while(it_357!=((void*)0)) {
        if(        position==i_358) {
            __result262__ = gComeFunResultObject = __result_obj__ = it_357->item;
            gComeFunResultObject = (void*)0;
            return __result262__;
        }
        it_357=it_357->next;
        i_358++;
    }
    memset(&default_value_359,0,sizeof(struct sType*));
    __result263__ = gComeFunResultObject = __result_obj__ = default_value_359;
    come_call_finalizer3(default_value_359,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_374;
struct sNode* __result265__;
struct sNode* __result266__;
struct sNode* result_375;
struct sNode* __result267__;
result_374 = (void*)0;
result_375 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_374,0,sizeof(struct sNode*));
        __result265__ = gComeFunResultObject = __result_obj__ = result_374;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    self->it=self->head;
    if(    self->it) {
        __result266__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    memset(&result_375,0,sizeof(struct sNode*));
    __result267__ = gComeFunResultObject = __result_obj__ = result_375;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_377;
struct sNode* __result268__;
struct sNode* __result269__;
struct sNode* result_378;
struct sNode* __result270__;
result_377 = (void*)0;
result_378 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_377,0,sizeof(struct sNode*));
        __result268__ = gComeFunResultObject = __result_obj__ = result_377;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result269__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    memset(&result_378,0,sizeof(struct sNode*));
    __result270__ = gComeFunResultObject = __result_obj__ = result_378;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
struct list_item$1CVALUEph* litem_382;
struct CVALUE* __dec_obj121;
void* __right_value350 = (void*)0;
struct list_item$1CVALUEph* litem_383;
struct CVALUE* __dec_obj122;
void* __right_value351 = (void*)0;
struct list_item$1CVALUEph* litem_384;
struct CVALUE* __dec_obj123;
struct list$1CVALUEph* __result271__;
    if(    self->len==0) {
        litem_382=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value349=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1305, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_382->prev=((void*)0);
        litem_382->next=((void*)0);
        __dec_obj121=litem_382->item;
        litem_382->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_382;
        self->head=litem_382;
    }
    else if(    self->len==1) {
        litem_383=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value350=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1315, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_383->prev=self->head;
        litem_383->next=((void*)0);
        __dec_obj122=litem_383->item;
        litem_383->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_383;
        self->head->next=litem_383;
    }
    else {
        litem_384=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value351=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1325, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_384->prev=self->tail;
        litem_384->next=((void*)0);
        __dec_obj123=litem_384->item;
        litem_384->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_384;
        self->tail=litem_384;
    }
    self->len++;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value463 = (void*)0;
struct sNewChannel* __result279__;
    ((struct sNodeBase*)(__right_value463=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value463,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value464=__builtin_string("sNewChannel")));
    __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value465 = (void*)0;
struct sNode* node_423;
_Bool Value_424;
_Bool __result281__;
_Bool __result282__;
    node_423=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_424=node_compile(node_423,info);
    if(    !Value_424) {
        __result281__ = (_Bool)0;
        if(node_423) { node_423 = come_decrement_ref_count2(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result281__;
    }
    else {
    }
    __result282__ = (_Bool)1;
    if(node_423) { node_423 = come_decrement_ref_count2(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result282__;
}

static void sNewChannel_finalize(struct sNewChannel* self){
char* __dec_obj155;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj155=self->sname;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
struct sNode* __dec_obj156;
struct sNode* __dec_obj157;
struct sWriteChannelNode* __result283__;
    ((struct sNodeBase*)(__right_value466=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value466,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj156=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj157=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result283__;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value467 = (void*)0;
char* __result284__;
    __result284__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value467=__builtin_string("sWriteChannelNode")));
    __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_425;
void* __right_value468 = (void*)0;
struct CVALUE* come_value_426;
_Bool Value_427;
_Bool __result285__;
void* __right_value469 = (void*)0;
struct CVALUE* right_value_428;
struct sType* right_type_429;
void* __right_value470 = (void*)0;
struct sType* left_type_430;
struct sType* channel_type_431;
_Bool __result286__;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct buffer* buf_433;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct CVALUE* come_value2_434;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
char* __dec_obj161;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* __dec_obj162;
_Bool __result287__;
    Value_425=node_compile(self->exp,info);
    if(    !Value_425) {
        return (_Bool)0;
    }
    else {
    }
    come_value_426=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    Value_427=node_compile(self->right_value,info);
    if(    !Value_427) {
        __result285__ = (_Bool)0;
        come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result285__;
    }
    else {
    }
    right_value_428=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_429=right_value_428->type;
    dec_stack_ptr(1,info);
    left_type_430=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_426->type));
    channel_type_431=(struct sType*)come_increment_ref_count(left_type_430->mChannelType->v1);
    static int var_num_432=0;
    var_num_432++;
    if(    right_value_428->type->mHeap) {
        err_msg(info,"channel can't get heap type");
        __result286__ = (_Bool)0;
        come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(channel_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result286__;
    }
    buf_433=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 683, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_format(buf_433,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_432,((char*)(__right_value473=make_type_name_string(channel_type_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_433,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value474=make_type_name_string(channel_type_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_432,var_num_432);
    __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_433,"*__channel_p%d = %s;\n",var_num_432,right_value_428->c_value);
    add_come_code(info,((char*)(__right_value475=buffer_to_string(buf_433))));
    __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_434=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 691, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj161=come_value2_434->c_value;
    come_value2_434->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_426->c_value,var_num_432,((char*)(__right_value478=make_type_name_string(channel_type_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj162=come_value2_434->type;
    come_value2_434->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 695, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_434->type->mPointerNum=1;
    come_value2_434->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_434));
    add_come_last_code(info,"%s",come_value2_434->c_value);
    __result287__ = (_Bool)1;
    come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_433,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result287__;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
char* __dec_obj158;
struct sNode* __dec_obj159;
struct sNode* __dec_obj160;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj158=self->sname;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj159=self->exp;
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj160=self->right_value;
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value482 = (void*)0;
struct sNode* __dec_obj163;
struct sReadChannelNode* __result288__;
    ((struct sNodeBase*)(__right_value482=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value482,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj163=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result288__;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value483 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value483=__builtin_string("sReadChannelNode")));
    __right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_435;
_Bool Value_436;
_Bool __result290__;
void* __right_value484 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value485 = (void*)0;
struct sType* var_type_438;
_Bool __result291__;
struct sType* channel_type_439;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct CVALUE* come_value2_441;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
char* __dec_obj166;
void* __right_value492 = (void*)0;
struct sType* __dec_obj167;
_Bool __result292__;
    exp_435=(struct sNode*)come_increment_ref_count(self->exp);
    Value_436=node_compile(exp_435,info);
    if(    !Value_436) {
        __result290__ = (_Bool)0;
        if(exp_435) { exp_435 = come_decrement_ref_count2(exp_435, ((struct sNode*)exp_435)->finalize, ((struct sNode*)exp_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result290__;
    }
    else {
    }
    come_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    var_type_438=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_437->type));
    if(    !var_type_438->mChannel) {
        err_msg(info,"require right type is channel");
        __result291__ = (_Bool)0;
        if(exp_435) { exp_435 = come_decrement_ref_count2(exp_435, ((struct sNode*)exp_435)->finalize, ((struct sNode*)exp_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result291__;
    }
    channel_type_439=(struct sType*)come_increment_ref_count(var_type_438->mChannelType->v1);
    static int var_num_440=0;
    var_num_440++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_440,((char*)(__right_value486=make_type_name_string(channel_type_439,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_441=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 747, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj166=come_value2_441->c_value;
    come_value2_441->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_437->c_value,var_num_440,((char*)(__right_value489=make_type_name_string(channel_type_439,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value490=make_type_name_string(channel_type_439,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_440));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj167=come_value2_441->type;
    come_value2_441->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, channel_type_439));
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_441->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_441));
    add_come_last_code(info,"%s",come_value2_441->c_value);
    __result292__ = (_Bool)1;
    if(exp_435) { exp_435 = come_decrement_ref_count2(exp_435, ((struct sNode*)exp_435)->finalize, ((struct sNode*)exp_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(var_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
char* __dec_obj164;
struct sNode* __dec_obj165;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj164=self->sname;
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj165=self->exp;
            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value504 = (void*)0;
struct sNode* __result295__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 764, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value495=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 764, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result295__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value504=_inf_value1));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value495,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value504) { __right_value504 = come_decrement_ref_count2(__right_value504, ((struct sNode*)__right_value504)->finalize, ((struct sNode*)__right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__=(void*)0;
struct sStoreNode* __result293__;
void* __right_value496 = (void*)0;
struct sStoreNode* result_442;
void* __right_value497 = (void*)0;
char* __dec_obj168;
void* __right_value498 = (void*)0;
char* __dec_obj169;
void* __right_value499 = (void*)0;
struct sType* __dec_obj170;
void* __right_value500 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value501 = (void*)0;
struct list$1charph* __dec_obj172;
void* __right_value502 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj173;
void* __right_value503 = (void*)0;
char* __dec_obj174;
struct sStoreNode* __result294__;
    if(    self==(void*)0) {
        __result293__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_442=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_442->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_442->sname;
        result_442->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj169=result_442->name;
        result_442->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj170=result_442->type;
        result_442->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj171=result_442->right_value;
        result_442->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj172=result_442->multiple_assign;
        result_442->multiple_assign=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->multiple_assign));
        come_call_finalizer3(__dec_obj172,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj173=result_442->multiple_declare;
        result_442->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphsNodephphp_clone, self->multiple_declare));
        come_call_finalizer3(__dec_obj173,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj174=result_442->attribute;
        result_442->attribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->attribute));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_442;
    come_call_finalizer3(result_442,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
char* __dec_obj175;
struct sLoadNode* __result296__;
    ((struct sNodeBase*)(__right_value505=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value505,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj175=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value507 = (void*)0;
char* __result297__;
    __result297__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value507=__builtin_string("sLoadNode")));
    __right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_443;
void* __right_value508 = (void*)0;
_Bool _if_conditional2;
struct sVar* parent_var_444;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct CVALUE* come_value_445;
struct sType* type_446;
void* __right_value511 = (void*)0;
char* __dec_obj178;
void* __right_value512 = (void*)0;
char* __dec_obj179;
void* __right_value513 = (void*)0;
struct sType* __dec_obj180;
_Bool __result298__;
struct sVar* var__447;
void* __right_value514 = (void*)0;
struct sFun* fun_448;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_452;
void* __right_value517 = (void*)0;
char* __dec_obj198;
struct sType* __dec_obj199;
_Bool __result303__;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct CVALUE* come_value_453;
void* __right_value520 = (void*)0;
char* __dec_obj200;
void* __right_value521 = (void*)0;
struct sType* __dec_obj201;
void* __right_value522 = (void*)0;
struct sType* __dec_obj202;
_Bool __result305__;
    current_stack_frame_struct_443=info->current_stack_frame_struct;
    if(    (_if_conditional2=(current_stack_frame_struct_443&&((struct sVar*)(__right_value508=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),    come_call_finalizer3(__right_value508,sVar_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        parent_var_444=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_444!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_444->mFunName,info->come_fun->mName)) {
                come_value_445=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 794, "struct CVALUE*", (void*)0, (void*)0))));
                type_446=parent_var_444->mType;
                if(                parent_var_444->mType->mOriginIsArray) {
                    __dec_obj178=come_value_445->c_value;
                    come_value_445->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_444->mCValueName));
                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj179=come_value_445->c_value;
                    come_value_445->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_444->mCValueName));
                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj180=come_value_445->type;
                come_value_445->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_446));
                come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_445->var=((void*)0);
                add_come_last_code(info,"%s",come_value_445->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_445));
                __result298__ = (_Bool)1;
                come_call_finalizer3(come_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result298__;
                come_call_finalizer3(come_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__447=get_variable_from_table(info->lv_table,self->name);
    if(    var__447==((void*)0)) {
        var__447=get_variable_from_table(info->gv_table,self->name);
        if(        var__447==((void*)0)) {
            fun_448=((struct sFun*)(__right_value514=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
            come_call_finalizer3(__right_value514,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            fun_448) {
                come_value_452=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 826, "struct CVALUE*", (void*)0, (void*)0))));
                __dec_obj198=come_value_452->c_value;
                come_value_452->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_448->mName));
                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj199=come_value_452->type;
                come_value_452->type=(struct sType*)come_increment_ref_count(fun_448->mLambdaType);
                come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_452->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_452));
                __result303__ = (_Bool)1;
                come_call_finalizer3(come_value_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result303__;
                come_call_finalizer3(come_value_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_453=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 843, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj200=come_value_453->c_value;
    come_value_453->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__447->mCValueName));
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj201=come_value_453->type;
    come_value_453->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__447->mType));
    come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_453->var=var__447;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_453));
    if(    list$1sNodeph_length(come_value_453->type->mArrayNum)==1) {
        __dec_obj202=come_value_453->type->mOriginalLoadVarType->v1;
        come_value_453->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_453->type));
        come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_453->type->mArrayNum);
        come_value_453->type->mPointerNum++;
        come_value_453->type->mOriginalTypeNamePointerNum=come_value_453->type->mPointerNum;
    }
    __result305__ = (_Bool)1;
    come_call_finalizer3(come_value_453,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result305__;
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __dec_obj176;
char* __dec_obj177;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj176=self->sname;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj177=self->name;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_449;
unsigned int hash_450;
unsigned int it_451;
struct sFun* __result299__;
struct sFun* __result300__;
struct sFun* __result301__;
struct sFun* __result302__;
default_value_449 = (void*)0;
    memset(&default_value_449,0,sizeof(struct sFun*));
    hash_450=charp_get_hash_key(((char*)key))%self->size;
    it_451=hash_450;
    while((_Bool)1) {
        if(        self->item_existance[it_451]) {
            if(            charp_equals(self->keys[it_451],key)) {
                __result299__ = gComeFunResultObject = __result_obj__ = self->items[it_451];
                come_call_finalizer3(default_value_449,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result299__;
            }
            it_451++;
            if(            it_451>=self->size) {
                it_451=0;
            }
            else if(            it_451==hash_450) {
                __result300__ = gComeFunResultObject = __result_obj__ = default_value_449;
                come_call_finalizer3(default_value_449,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result300__;
            }
        }
        else {
            __result301__ = gComeFunResultObject = __result_obj__ = default_value_449;
            come_call_finalizer3(default_value_449,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result301__;
        }
    }
    __result302__ = gComeFunResultObject = __result_obj__ = default_value_449;
    come_call_finalizer3(default_value_449,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj181;
struct sType* __dec_obj182;
struct list$1sTypeph* __dec_obj183;
struct list$1charph* __dec_obj184;
struct list$1charph* __dec_obj185;
struct sType* __dec_obj186;
struct sBlock* __dec_obj187;
struct buffer* __dec_obj190;
struct buffer* __dec_obj191;
struct buffer* __dec_obj192;
struct buffer* __dec_obj193;
char* __dec_obj194;
char* __dec_obj195;
char* __dec_obj196;
char* __dec_obj197;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj181=self->mName;
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj182=self->mResultType;
            come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj183=self->mParamTypes;
            come_call_finalizer3(__dec_obj183,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj184=self->mParamNames;
            come_call_finalizer3(__dec_obj184,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj185=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj185,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj186=self->mLambdaType;
            come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj187=self->mBlock;
            come_call_finalizer3(__dec_obj187,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj190=self->mSource;
            come_call_finalizer3(__dec_obj190,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj191=self->mSourceHead;
            come_call_finalizer3(__dec_obj191,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj192=self->mSourceHead2;
            come_call_finalizer3(__dec_obj192,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj193=self->mSourceDefer;
            come_call_finalizer3(__dec_obj193,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj194=self->mComeHeader;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj195=self->mDeclareSName;
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj196=self->mAttribute;
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj197=self->mFunAttribute;
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj188;
struct sVarTable* __dec_obj189;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj188=self->mNodes;
            come_call_finalizer3(__dec_obj188,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj189=self->mVarTable;
            come_call_finalizer3(__dec_obj189,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_454;
struct list_item$1sNodeph* prev_it_455;
struct list$1sNodeph* __result304__;
    it_454=self->head;
    while(it_454!=((void*)0)) {
        prev_it_455=it_454;
        it_454=it_454->next;
        come_call_finalizer3(prev_it_455,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value523 = (void*)0;
_Bool _if_conditional3;
struct sLoadNode* load_node_456;
    if(    (_if_conditional3=(string_operator_equals(((char*)(__right_value523=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional3) {
        load_node_456=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_456->name,"self")) {
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
struct sNode* __result308__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 876, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value526=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 876, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result308__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value530=_inf_value2));
    come_call_finalizer3(__right_value526,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value530) { __right_value530 = come_decrement_ref_count2(__right_value530, ((struct sNode*)__right_value530)->finalize, ((struct sNode*)__right_value530)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__=(void*)0;
struct sLoadNode* __result306__;
void* __right_value527 = (void*)0;
struct sLoadNode* result_457;
void* __right_value528 = (void*)0;
char* __dec_obj203;
void* __right_value529 = (void*)0;
char* __dec_obj204;
struct sLoadNode* __result307__;
    if(    self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_457=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_457->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj203=result_457->sname;
        result_457->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_457->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj204=result_457->name;
        result_457->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result307__ = gComeFunResultObject = __result_obj__ = result_457;
    come_call_finalizer3(result_457,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
char* __dec_obj205;
struct sFunLoadNode* __result309__;
    ((struct sNodeBase*)(__right_value531=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value531,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj205=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value533 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value533=__builtin_string("sFunLoadNode")));
    __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value534 = (void*)0;
struct sFun* fun_458;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct CVALUE* come_value_459;
void* __right_value537 = (void*)0;
char* __dec_obj208;
struct sType* __dec_obj209;
    fun_458=((struct sFun*)(__right_value534=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
    come_call_finalizer3(__right_value534,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_458==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        return (_Bool)0;
    }
    else {
        come_value_459=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 902, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj208=come_value_459->c_value;
        come_value_459->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_458->mName));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj209=come_value_459->type;
        come_value_459->type=(struct sType*)come_increment_ref_count(fun_458->mLambdaType);
        come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_459->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_459));
        come_call_finalizer3(come_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __dec_obj206;
char* __dec_obj207;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj206=self->sname;
            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj207=self->name;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct list$1tuple2$2sNodephsNodephph* __dec_obj220;
struct sArrayInitializer* __result317__;
    ((struct sNodeBase*)(__right_value538=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value538,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj220=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNodephsNodephphp_clone, initializer));
    come_call_finalizer3(__dec_obj220,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value549 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value549=__builtin_string("sArrayInitializer")));
    __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_470;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct buffer* buf_471;
int i_472;
struct sType* element_type_473;
struct list$1tuple2$2sNodephsNodephph* o2_saved_474;
struct tuple2$2sNodephsNodeph* it_477;
struct tuple2$2sNodephsNodeph* multiple_assign_var2 = (void*)0;
struct sNode* index_480=0;
struct sNode* value_481=0;
struct CVALUE* come_value_482;
_Bool Value_483;
_Bool __result325__;
void* __right_value552 = (void*)0;
struct CVALUE* __dec_obj223;
_Bool Value_484;
_Bool __result326__;
void* __right_value553 = (void*)0;
struct CVALUE* come_value2_485;
void* __right_value554 = (void*)0;
struct sType* __dec_obj224;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct CVALUE* come_value_486;
void* __right_value557 = (void*)0;
char* __dec_obj225;
void* __right_value558 = (void*)0;
struct sType* __dec_obj226;
_Bool __result327__;
    initializer_470=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_471=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 933, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_471,"{");
    i_472=0;
    element_type_473=((void*)0);
    for(    o2_saved_474=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_470)),it_477=list$1tuple2$2sNodephsNodephph_begin((o2_saved_474));    !list$1tuple2$2sNodephsNodephph_end((o2_saved_474));    it_477=list$1tuple2$2sNodephsNodephph_next((o2_saved_474))    ){
        multiple_assign_var2=it_477;
        index_480=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_481=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        come_value_482=((void*)0);
        if(        index_480) {
            Value_483=node_compile(index_480,info);
            if(            !Value_483) {
                __result325__ = (_Bool)0;
                if(index_480) { index_480 = come_decrement_ref_count2(index_480, ((struct sNode*)index_480)->finalize, ((struct sNode*)index_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(value_481) { value_481 = come_decrement_ref_count2(value_481, ((struct sNode*)value_481)->finalize, ((struct sNode*)value_481)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_482,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_474,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_470,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result325__;
            }
            else {
            }
            __dec_obj223=come_value_482;
            come_value_482=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
        Value_484=node_compile(value_481,info);
        if(        !Value_484) {
            __result326__ = (_Bool)0;
            if(index_480) { index_480 = come_decrement_ref_count2(index_480, ((struct sNode*)index_480)->finalize, ((struct sNode*)index_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value_481) { value_481 = come_decrement_ref_count2(value_481, ((struct sNode*)value_481)->finalize, ((struct sNode*)value_481)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_482,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_474,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_470,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result326__;
        }
        else {
        }
        come_value2_485=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj224=element_type_473;
        element_type_473=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_485->type));
        come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        come_value_482) {
            buffer_append_format(buf_471,"[%s] = %s",come_value_482->c_value,come_value2_485->c_value);
        }
        else {
            buffer_append_str(buf_471,come_value2_485->c_value);
        }
        i_472++;
        if(        i_472!=list$1tuple2$2sNodephsNodephph_length(initializer_470)) {
            buffer_append_str(buf_471,",");
        }
        if(index_480) { index_480 = come_decrement_ref_count2(index_480, ((struct sNode*)index_480)->finalize, ((struct sNode*)index_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(value_481) { value_481 = come_decrement_ref_count2(value_481, ((struct sNode*)value_481)->finalize, ((struct sNode*)value_481)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_482,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_474,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_471,"}");
    come_value_486=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 972, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj225=come_value_486->c_value;
    come_value_486->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_471));
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj226=come_value_486->type;
    come_value_486->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_473));
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_486->type->mPointerNum++;
    come_value_486->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_486));
    __result327__ = (_Bool)1;
    come_call_finalizer3(initializer_470,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result327__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result311__;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* result_462;
struct list_item$1tuple2$2sNodephsNodephph* it_463;
void* __right_value547 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __result316__;
    if(    self==((void*)0)) {
        __result311__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    result_462=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1221, "struct list$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
    it_463=self->head;
    while(it_463!=((void*)0)) {
        list$1tuple2$2sNodephsNodephph_add(result_462,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2sNodephsNodephp_clone, it_463->item)));
        it_463=it_463->next;
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_462;
    come_call_finalizer3(result_462,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result312__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_460;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_461;
    it_460=self->head;
    while(it_460!=((void*)0)) {
        prev_it_461=it_460;
        it_460=it_460->next;
        come_call_finalizer3(prev_it_461,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self){
struct tuple2$2sNodephsNodeph* __dec_obj210;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj210=self->item;
            come_call_finalizer3(__dec_obj210,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj211;
struct sNode* __dec_obj212;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj211=self->v1;
            if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj212=self->v2;
            if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_464;
struct tuple2$2sNodephsNodeph* __dec_obj213;
void* __right_value542 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_465;
struct tuple2$2sNodephsNodeph* __dec_obj214;
void* __right_value543 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_466;
struct tuple2$2sNodephsNodeph* __dec_obj215;
struct list$1tuple2$2sNodephsNodephph* __result313__;
    if(    self->len==0) {
        litem_464=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value541=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1235, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
        litem_464->prev=((void*)0);
        litem_464->next=((void*)0);
        __dec_obj213=litem_464->item;
        litem_464->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj213,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_464;
        self->head=litem_464;
    }
    else if(    self->len==1) {
        litem_465=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value542=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1245, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
        litem_465->prev=self->head;
        litem_465->next=((void*)0);
        __dec_obj214=litem_465->item;
        litem_465->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj214,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_465;
        self->head->next=litem_465;
    }
    else {
        litem_466=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value543=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1255, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
        litem_466->prev=self->tail;
        litem_466->next=((void*)0);
        __dec_obj215=litem_466->item;
        litem_466->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj215,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_466;
        self->tail=litem_466;
    }
    self->len++;
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* __result314__;
void* __right_value544 = (void*)0;
struct tuple2$2sNodephsNodeph* result_467;
void* __right_value545 = (void*)0;
struct sNode* __dec_obj216;
void* __right_value546 = (void*)0;
struct sNode* __dec_obj217;
struct tuple2$2sNodephsNodeph* __result315__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_467=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodephp_clone", 3, "struct tuple2$2sNodephsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj216=result_467->v1;
        result_467->v1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v1));
        if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj217=result_467->v2;
        result_467->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_467;
    come_call_finalizer3(result_467,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj218;
struct sNode* __dec_obj219;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj218=self->v1;
            if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj219=self->v2;
            if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_468;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_469;
    it_468=self->head;
    while(it_468!=((void*)0)) {
        prev_it_469=it_468;
        it_468=it_468->next;
        come_call_finalizer3(prev_it_469,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
char* __dec_obj221;
struct list$1tuple2$2sNodephsNodephph* __dec_obj222;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj221=self->sname;
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj222=self->initializer;
            come_call_finalizer3(__dec_obj222,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_475;
struct tuple2$2sNodephsNodeph* __result319__;
struct tuple2$2sNodephsNodeph* __result320__;
struct tuple2$2sNodephsNodeph* result_476;
struct tuple2$2sNodephsNodeph* __result321__;
result_475 = (void*)0;
result_476 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_475,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result319__ = gComeFunResultObject = __result_obj__ = result_475;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    self->it=self->head;
    if(    self->it) {
        __result320__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    memset(&result_476,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result321__ = gComeFunResultObject = __result_obj__ = result_476;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_478;
struct tuple2$2sNodephsNodeph* __result322__;
struct tuple2$2sNodephsNodeph* __result323__;
struct tuple2$2sNodephsNodeph* result_479;
struct tuple2$2sNodephsNodeph* __result324__;
result_478 = (void*)0;
result_479 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_478,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result322__ = gComeFunResultObject = __result_obj__ = result_478;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result323__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    memset(&result_479,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result324__ = gComeFunResultObject = __result_obj__ = result_479;
    gComeFunResultObject = (void*)0;
    return __result324__;
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
struct list$1tuple2$2sNodephsNodephph* initializer_487;
void* __right_value561 = (void*)0;
struct sNode* index_488;
_Bool no_comma_489;
void* __right_value562 = (void*)0;
struct sNode* exp_490;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
_Bool no_comma_491;
void* __right_value565 = (void*)0;
struct sNode* exp_492;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sNode* index_493;
_Bool no_comma_494;
void* __right_value569 = (void*)0;
struct sNode* exp_495;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
_Bool no_comma_496;
void* __right_value572 = (void*)0;
struct sNode* exp_497;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value580 = (void*)0;
struct sNode* __result332__;
    expected_next_character(123,info);
    initializer_487=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 990, "struct list$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_488=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_489=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_490=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_489;
        list$1tuple2$2sNodephsNodephph_add(initializer_487,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1006, "struct tuple2$2sNodephsNodeph", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(index_488),(struct sNode*)come_increment_ref_count(exp_490))));
        if(index_488) { index_488 = come_decrement_ref_count2(index_488, ((struct sNode*)index_488)->finalize, ((struct sNode*)index_488)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(exp_490) { exp_490 = come_decrement_ref_count2(exp_490, ((struct sNode*)exp_490)->finalize, ((struct sNode*)exp_490)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_491=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_492=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_491;
        list$1tuple2$2sNodephsNodephph_add(initializer_487,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1014, "struct tuple2$2voidpsNodeph", (void*)0, (void*)0)),((void*)0),(struct sNode*)come_increment_ref_count(exp_492))));
        if(exp_492) { exp_492 = come_decrement_ref_count2(exp_492, ((struct sNode*)exp_492)->finalize, ((struct sNode*)exp_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            index_493=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_494=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_495=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_494;
            list$1tuple2$2sNodephsNodephph_add(initializer_487,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1041, "struct tuple2$2sNodephsNodeph", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(index_493),(struct sNode*)come_increment_ref_count(exp_495))));
            if(index_493) { index_493 = come_decrement_ref_count2(index_493, ((struct sNode*)index_493)->finalize, ((struct sNode*)index_493)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_495) { exp_495 = come_decrement_ref_count2(exp_495, ((struct sNode*)exp_495)->finalize, ((struct sNode*)exp_495)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_496=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_497=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_496;
            list$1tuple2$2sNodephsNodephph_add(initializer_487,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1049, "struct tuple2$2voidpsNodeph", (void*)0, (void*)0)),((void*)0),(struct sNode*)come_increment_ref_count(exp_497))));
            if(exp_497) { exp_497 = come_decrement_ref_count2(exp_497, ((struct sNode*)exp_497)->finalize, ((struct sNode*)exp_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1055, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value576=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1055, "struct sArrayInitializer*", (void*)0, (void*)0)),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_487),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result332__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value580=_inf_value3));
    come_call_finalizer3(initializer_487,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value576,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value580) { __right_value580 = come_decrement_ref_count2(__right_value580, ((struct sNode*)__right_value580)->finalize, ((struct sNode*)__right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj227;
struct sNode* __dec_obj228;
struct tuple2$2sNodephsNodeph* __result328__;
    __dec_obj227=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj228=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v1) { v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj229;
struct tuple2$2voidpsNodeph* __result329__;
    self->v1=v1;
    __dec_obj229=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self){
struct sNode* __dec_obj230;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj230=self->v2;
            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
struct sArrayInitializer* __result330__;
void* __right_value577 = (void*)0;
struct sArrayInitializer* result_498;
void* __right_value578 = (void*)0;
char* __dec_obj231;
void* __right_value579 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj232;
struct sArrayInitializer* __result331__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_498=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_498->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj231=result_498->sname;
        result_498->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_498->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj232=result_498->initializer;
        result_498->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNodephsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj232,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_498;
    come_call_finalizer3(result_498,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value581 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj243;
struct sStructInitializer* __result339__;
    ((struct sNodeBase*)(__right_value581=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value581,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj243=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, initializer));
    come_call_finalizer3(__dec_obj243,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
char* __result340__;
    __result340__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value592=__builtin_string("sStructInitializer")));
    __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* initializer_509;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct buffer* buf_510;
int i_511;
struct list$1tuple2$2charphsNodephph* o2_saved_512;
struct tuple2$2charphsNodeph* it_515;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* name_518=0;
struct sNode* value_519=0;
_Bool Value_520;
_Bool __result347__;
void* __right_value595 = (void*)0;
struct CVALUE* come_value2_521;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value598 = (void*)0;
char* __dec_obj246;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sType* __dec_obj247;
_Bool __result348__;
    initializer_509=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    buf_510=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1076, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_510,"{");
    i_511=0;
    for(    o2_saved_512=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_509)),it_515=list$1tuple2$2charphsNodephph_begin((o2_saved_512));    !list$1tuple2$2charphsNodephph_end((o2_saved_512));    it_515=list$1tuple2$2charphsNodephph_next((o2_saved_512))    ){
        multiple_assign_var3=it_515;
        name_518=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        value_519=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        Value_520=node_compile(value_519,info);
        if(        !Value_520) {
            __result347__ = (_Bool)0;
            name_518 = come_decrement_ref_count2(name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(value_519) { value_519 = come_decrement_ref_count2(value_519, ((struct sNode*)value_519)->finalize, ((struct sNode*)value_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(o2_saved_512,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_509,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result347__;
        }
        else {
        }
        come_value2_521=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        name_518) {
            buffer_append_format(buf_510,".%s = %s",name_518,come_value2_521->c_value);
        }
        else {
            buffer_append_format(buf_510,"%s",come_value2_521->c_value);
        }
        i_511++;
        if(        i_511!=list$1tuple2$2charphsNodephph_length(initializer_509)) {
            buffer_append_str(buf_510,",");
        }
        name_518 = come_decrement_ref_count2(name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_519) { value_519 = come_decrement_ref_count2(value_519, ((struct sNode*)value_519)->finalize, ((struct sNode*)value_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value2_521,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_512,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_510,"}");
    come_value_522=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1103, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj246=come_value_522->c_value;
    come_value_522->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_510));
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj247=come_value_522->type;
    come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1106, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_522->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_522));
    __result348__ = (_Bool)1;
    come_call_finalizer3(initializer_509,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result348__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result333__;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_501;
struct list_item$1tuple2$2charphsNodephph* it_502;
void* __right_value590 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result338__;
    if(    self==((void*)0)) {
        __result333__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_501=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1221, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_502=self->head;
    while(it_502!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_501,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodephp_clone, it_502->item)));
        it_502=it_502->next;
    }
    __result338__ = gComeFunResultObject = __result_obj__ = result_501;
    come_call_finalizer3(result_501,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result334__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_499;
struct list_item$1tuple2$2charphsNodephph* prev_it_500;
    it_499=self->head;
    while(it_499!=((void*)0)) {
        prev_it_500=it_499;
        it_499=it_499->next;
        come_call_finalizer3(prev_it_500,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj233;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj233=self->item;
            come_call_finalizer3(__dec_obj233,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj234;
struct sNode* __dec_obj235;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj234=self->v1;
            __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj235=self->v2;
            if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value584 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_503;
struct tuple2$2charphsNodeph* __dec_obj236;
void* __right_value585 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_504;
struct tuple2$2charphsNodeph* __dec_obj237;
void* __right_value586 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_505;
struct tuple2$2charphsNodeph* __dec_obj238;
struct list$1tuple2$2charphsNodephph* __result335__;
    if(    self->len==0) {
        litem_503=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value584=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1235, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_503->prev=((void*)0);
        litem_503->next=((void*)0);
        __dec_obj236=litem_503->item;
        litem_503->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj236,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_503;
        self->head=litem_503;
    }
    else if(    self->len==1) {
        litem_504=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value585=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1245, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_504->prev=self->head;
        litem_504->next=((void*)0);
        __dec_obj237=litem_504->item;
        litem_504->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj237,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_504;
        self->head->next=litem_504;
    }
    else {
        litem_505=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value586=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1255, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_505->prev=self->tail;
        litem_505->next=((void*)0);
        __dec_obj238=litem_505->item;
        litem_505->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj238,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_505;
        self->tail=litem_505;
    }
    self->len++;
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result336__;
void* __right_value587 = (void*)0;
struct tuple2$2charphsNodeph* result_506;
void* __right_value588 = (void*)0;
char* __dec_obj239;
void* __right_value589 = (void*)0;
struct sNode* __dec_obj240;
struct tuple2$2charphsNodeph* __result337__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_506=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj239=result_506->v1;
        result_506->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj240=result_506->v2;
        result_506->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_506;
    come_call_finalizer3(result_506,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj241;
struct sNode* __dec_obj242;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj241=self->v1;
            __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj242=self->v2;
            if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_507;
struct list_item$1tuple2$2charphsNodephph* prev_it_508;
    it_507=self->head;
    while(it_507!=((void*)0)) {
        prev_it_508=it_507;
        it_507=it_507->next;
        come_call_finalizer3(prev_it_508,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
char* __dec_obj244;
struct list$1tuple2$2charphsNodephph* __dec_obj245;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj244=self->sname;
            __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj245=self->initializer;
            come_call_finalizer3(__dec_obj245,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_513;
struct tuple2$2charphsNodeph* __result341__;
struct tuple2$2charphsNodeph* __result342__;
struct tuple2$2charphsNodeph* result_514;
struct tuple2$2charphsNodeph* __result343__;
result_513 = (void*)0;
result_514 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_513,0,sizeof(struct tuple2$2charphsNodeph*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_513;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->it=self->head;
    if(    self->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_514,0,sizeof(struct tuple2$2charphsNodeph*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_514;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_516;
struct tuple2$2charphsNodeph* __result344__;
struct tuple2$2charphsNodeph* __result345__;
struct tuple2$2charphsNodeph* result_517;
struct tuple2$2charphsNodeph* __result346__;
result_516 = (void*)0;
result_517 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_516,0,sizeof(struct tuple2$2charphsNodeph*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_516;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_517,0,sizeof(struct tuple2$2charphsNodeph*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_517;
    gComeFunResultObject = (void*)0;
    return __result346__;
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
struct list$1tuple2$2charphsNodephph* initializer_523;
void* __right_value603 = (void*)0;
char* name_524;
_Bool no_comma_525;
void* __right_value604 = (void*)0;
struct sNode* exp_526;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
_Bool no_comma_527;
void* __right_value607 = (void*)0;
struct sNode* exp_528;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
char* name_529;
_Bool no_comma_530;
void* __right_value611 = (void*)0;
struct sNode* exp_531;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
_Bool no_comma_532;
void* __right_value614 = (void*)0;
struct sNode* exp_533;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value622 = (void*)0;
struct sNode* __result352__;
    expected_next_character(123,info);
    initializer_523=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "07var.c", 1119, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_524=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_525=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_526=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_525;
        list$1tuple2$2charphsNodephph_add(initializer_523,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1134, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_524),(struct sNode*)come_increment_ref_count(exp_526))));
        name_524 = come_decrement_ref_count2(name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_526) { exp_526 = come_decrement_ref_count2(exp_526, ((struct sNode*)exp_526)->finalize, ((struct sNode*)exp_526)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_527=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_528=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_527;
        list$1tuple2$2charphsNodephph_add(initializer_523,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1142, "struct tuple2$2voidpsNodeph", (void*)0, (void*)0)),((void*)0),(struct sNode*)come_increment_ref_count(exp_528))));
        if(exp_528) { exp_528 = come_decrement_ref_count2(exp_528, ((struct sNode*)exp_528)->finalize, ((struct sNode*)exp_528)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            name_529=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_530=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_531=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_530;
            list$1tuple2$2charphsNodephph_add(initializer_523,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1168, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_529),(struct sNode*)come_increment_ref_count(exp_531))));
            name_529 = come_decrement_ref_count2(name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_531) { exp_531 = come_decrement_ref_count2(exp_531, ((struct sNode*)exp_531)->finalize, ((struct sNode*)exp_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_532=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_533=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_532;
            list$1tuple2$2charphsNodephph_add(initializer_523,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1176, "struct tuple2$2voidpsNodeph", (void*)0, (void*)0)),((void*)0),(struct sNode*)come_increment_ref_count(exp_533))));
            if(exp_533) { exp_533 = come_decrement_ref_count2(exp_533, ((struct sNode*)exp_533)->finalize, ((struct sNode*)exp_533)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1182, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value618=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1182, "struct sStructInitializer*", (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_523),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result352__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value622=_inf_value4));
    come_call_finalizer3(initializer_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value618,sStructInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value622) { __right_value622 = come_decrement_ref_count2(__right_value622, ((struct sNode*)__right_value622)->finalize, ((struct sNode*)__right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj248;
struct sNode* __dec_obj249;
struct tuple2$2charphsNodeph* __result349__;
    __dec_obj248=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj249=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
    __result349__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
struct sStructInitializer* __result350__;
void* __right_value619 = (void*)0;
struct sStructInitializer* result_534;
void* __right_value620 = (void*)0;
char* __dec_obj250;
void* __right_value621 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj251;
struct sStructInitializer* __result351__;
    if(    self==(void*)0) {
        __result350__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    result_534=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_534->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj250=result_534->sname;
        result_534->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_534->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj251=result_534->initializer;
        result_534->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj251,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result351__ = gComeFunResultObject = __result_obj__ = result_534;
    come_call_finalizer3(result_534,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value623 = (void*)0;
struct sVar* self_535;
void* __right_value624 = (void*)0;
char* __dec_obj252;
void* __right_value625 = (void*)0;
struct sType* __dec_obj253;
void* __right_value626 = (void*)0;
char* __dec_obj254;
void* __right_value627 = (void*)0;
char* __dec_obj255;
void* __right_value628 = (void*)0;
char* __dec_obj256;
char* __dec_obj257;
void* __right_value634 = (void*)0;
    self_535=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1187, "struct sVar*", (void*)0, (void*)0));
    __dec_obj252=self_535->mName;
    self_535->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj253=self_535->mType;
    self_535->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mFunctionParam) {
        __dec_obj254=self_535->mCValueName;
        self_535->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_536=0;
        __dec_obj255=self_535->mCValueName;
        self_535->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_536++));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_535->mBlockLevel=info->block_level;
    self_535->mAllocaValue=(_Bool)0;
    self_535->mFunctionParam=(_Bool)0;
    self_535->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj256=self_535->mFunName;
        self_535->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->come_fun->mName));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj257=self_535->mFunName;
        self_535->mFunName=((void*)0);
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_535));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_535,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_554;
unsigned int it_555;
_Bool same_key_exist_556;
char* it2_559;
struct map$2charphsVarph* __result369__;
    if(    self->len*10>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_554=charp_get_hash_key(key)%self->size;
    it_555=hash_554;
    while((_Bool)1) {
        if(        self->item_existance[it_555]) {
            if(            charp_equals(self->keys[it_555],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_555]);
                    self->keys[it_555] = come_decrement_ref_count2(self->keys[it_555], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_555]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_555]);
                    self->keys[it_555]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_555],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_555]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_555]=item;
                }
                break;
            }
            it_555++;
            if(            it_555>=self->size) {
                it_555=0;
            }
            else if(            it_555==hash_554) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_555]=(_Bool)1;
            if(            1) {
                self->keys[it_555]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_555]=key;
            }
            if(            1) {
                self->items[it_555]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_555]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_556=(_Bool)0;
    for(    it2_559=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_559=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_559,key)) {
            same_key_exist_556=(_Bool)1;
        }
    }
    if(    !same_key_exist_556) {
        list$1charp_push_back(self->key_list,key);
    }
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_537;
void* __right_value629 = (void*)0;
char** keys_538;
void* __right_value630 = (void*)0;
struct sVar** items_539;
void* __right_value631 = (void*)0;
_Bool* item_existance_540;
int len_541;
char* it_544;
struct sVar* default_value_547;
void* __right_value632 = (void*)0;
struct sVar* it2_548;
unsigned int hash_551;
int n_552;
struct sVar* default_value_553;
void* __right_value633 = (void*)0;
default_value_547 = (void*)0;
default_value_553 = (void*)0;
    size_537=self->size*10;
    keys_538=(char**)come_increment_ref_count(((char**)(__right_value629=(char**)come_calloc(1, sizeof(char*)*(1*(size_537)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_539=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value630=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_537)), "./comelang.h", 2709, "struct sVar**", (void*)0, (void*)0))));
    item_existance_540=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value631=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_537)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_541=0;
    for(    it_544=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_544=map$2charphsVarph_next(self)    ){
        memset(&default_value_547,0,sizeof(struct sVar*));
        it2_548=((struct sVar*)(__right_value632=map$2charphsVarph_at(self,it_544,default_value_547)));
        come_call_finalizer3(__right_value632,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_551=charp_get_hash_key(it_544)%size_537;
        n_552=hash_551;
        while((_Bool)1) {
            if(            item_existance_540[n_552]) {
                n_552++;
                if(                n_552>=size_537) {
                    n_552=0;
                }
                else if(                n_552==hash_551) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_540[n_552]=(_Bool)1;
                keys_538[n_552]=it_544;
                items_539[n_552]=((struct sVar*)(__right_value633=map$2charphsVarph_at(self,it_544,default_value_553)));
                come_call_finalizer3(__right_value633,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_541++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_538;
    self->items=items_539;
    self->item_existance=item_existance_540;
    self->size=size_537;
    self->len=len_541;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_542;
char* __result353__;
char* __result354__;
char* result_543;
char* __result355__;
result_542 = (void*)0;
result_543 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_542,0,sizeof(char*));
        __result353__ = gComeFunResultObject = __result_obj__ = result_542;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result354__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    memset(&result_543,0,sizeof(char*));
    __result355__ = gComeFunResultObject = __result_obj__ = result_543;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_545;
char* __result356__;
char* __result357__;
char* result_546;
char* __result358__;
result_545 = (void*)0;
result_546 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_545,0,sizeof(char*));
        __result356__ = gComeFunResultObject = __result_obj__ = result_545;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result357__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    memset(&result_546,0,sizeof(char*));
    __result358__ = gComeFunResultObject = __result_obj__ = result_546;
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_549;
unsigned int it_550;
struct sVar* __result359__;
struct sVar* __result360__;
struct sVar* __result361__;
struct sVar* __result362__;
    hash_549=charp_get_hash_key(((char*)key))%self->size;
    it_550=hash_549;
    while((_Bool)1) {
        if(        self->item_existance[it_550]) {
            if(            charp_equals(self->keys[it_550],key)) {
                __result359__ = gComeFunResultObject = __result_obj__ = self->items[it_550];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result359__;
            }
            it_550++;
            if(            it_550>=self->size) {
                it_550=0;
            }
            else if(            it_550==hash_549) {
                __result360__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result360__;
            }
        }
        else {
            __result361__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result361__;
        }
    }
    __result362__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_557;
char* __result363__;
char* __result364__;
char* result_558;
char* __result365__;
result_557 = (void*)0;
result_558 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_557,0,sizeof(char*));
        __result363__ = gComeFunResultObject = __result_obj__ = result_557;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    self->it=self->head;
    if(    self->it) {
        __result364__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    memset(&result_558,0,sizeof(char*));
    __result365__ = gComeFunResultObject = __result_obj__ = result_558;
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_560;
char* __result366__;
char* __result367__;
char* result_561;
char* __result368__;
result_560 = (void*)0;
result_561 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_560,0,sizeof(char*));
        __result366__ = gComeFunResultObject = __result_obj__ = result_560;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result367__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    memset(&result_561,0,sizeof(char*));
    __result368__ = gComeFunResultObject = __result_obj__ = result_561;
    gComeFunResultObject = (void*)0;
    return __result368__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value635 = (void*)0;
struct sVar* self_562;
void* __right_value636 = (void*)0;
char* __dec_obj258;
void* __right_value637 = (void*)0;
struct sType* __dec_obj259;
void* __right_value638 = (void*)0;
char* __dec_obj260;
void* __right_value639 = (void*)0;
    self_562=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1216, "struct sVar*", (void*)0, (void*)0));
    __dec_obj258=self_562->mName;
    self_562->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj259=self_562->mType;
    self_562->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_562->mGlobal=(_Bool)1;
    __dec_obj260=self_562->mCValueName;
    self_562->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_562->mBlockLevel=info->block_level;
    self_562->mAllocaValue=(_Bool)0;
    self_562->mFunctionParam=(_Bool)0;
    self_562->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_562));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_562,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value640 = (void*)0;
struct sVar* self_563;
void* __right_value641 = (void*)0;
char* __dec_obj261;
void* __right_value642 = (void*)0;
struct sType* __dec_obj262;
void* __right_value643 = (void*)0;
char* __dec_obj263;
void* __right_value644 = (void*)0;
    self_563=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1235, "struct sVar*", (void*)0, (void*)0));
    __dec_obj261=self_563->mName;
    self_563->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj262=self_563->mType;
    self_563->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_563->mGlobal=(_Bool)1;
    __dec_obj263=self_563->mCValueName;
    self_563->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_563->mBlockLevel=info->block_level;
    self_563->mAllocaValue=(_Bool)0;
    self_563->mFunctionParam=(_Bool)0;
    self_563->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_563));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_563,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_564;
_Bool is_type_name_flag_565;
_Bool multiple_declare_566;
char* p_567;
int sline_568;
void* __right_value645 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_569=0;
char* name_570=0;
_Bool err_571=0;
void* __right_value646 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var5 = (void*)0;
struct sType* type_572=0;
char* name_573=0;
void* __right_value647 = (void*)0;
_Bool no_output_err_574;
_Bool no_comma_575;
_Bool no_output_come_code_576;
void* __right_value648 = (void*)0;
struct sNode* exp_577;
_Bool attr_define_578;
char* p_579;
int sline_580;
void* __right_value649 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* type_581=0;
char* name_582=0;
_Bool err_583=0;
void* __right_value650 = (void*)0;
struct sFun* fun_584;
void* __right_value651 = (void*)0;
char* buf2_585;
struct list$1charph* multiple_assign_586;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1charph* __dec_obj268;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
char* buf3_587;
void* __right_value656 = (void*)0;
_Bool no_comma_588;
void* __right_value657 = (void*)0;
struct sNode* right_value_589;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj269;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value663 = (void*)0;
struct sNode* node_590;
struct sNode* __result370__;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value668 = (void*)0;
struct sNode* node_591;
struct sNode* __result373__;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_593;
void* __right_value671 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* base_type_594=0;
char* name_595=0;
_Bool err_596=0;
void* __right_value672 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8 = (void*)0;
struct sType* type2_597=0;
char* var_name_598=0;
_Bool no_comma_599;
void* __right_value673 = (void*)0;
struct sNode* exp_600;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
_Bool no_comma_604;
void* __right_value679 = (void*)0;
struct sNode* exp_605;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var9 = (void*)0;
struct sType* type2_606=0;
char* var_name_607=0;
_Bool no_comma_608;
void* __right_value685 = (void*)0;
struct sNode* exp_609;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
_Bool no_comma_610;
void* __right_value688 = (void*)0;
struct sNode* exp_611;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sNode* right_node_612;
void* __right_value693 = (void*)0;
char* var_name2_613;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value698 = (void*)0;
struct sNode* node_614;
struct sNode* __result377__;
void* __right_value699 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_615=0;
char* name_616=0;
_Bool err_617=0;
void* __right_value700 = (void*)0;
char* __dec_obj281;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value709 = (void*)0;
struct sNode* self_node_621;
void* __right_value710 = (void*)0;
struct sNode* right_node_622;
void* __right_value711 = (void*)0;
struct sNode* node_623;
struct sNode* __result380__;
void* __right_value712 = (void*)0;
struct sNode* __result381__;
void* __right_value713 = (void*)0;
struct sNode* right_value_624;
void* __right_value714 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value719 = (void*)0;
struct sNode* node_625;
struct sNode* __result382__;
void* __right_value720 = (void*)0;
_Bool _elif_conditional1;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value724 = (void*)0;
struct sNode* node_626;
void* __right_value725 = (void*)0;
struct sNode* __dec_obj290;
struct sNode* __result383__;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value729 = (void*)0;
struct sNode* node_627;
void* __right_value730 = (void*)0;
struct sNode* __dec_obj291;
struct sNode* __result384__;
char* word_628;
void* __right_value731 = (void*)0;
char* __dec_obj292;
void* __right_value732 = (void*)0;
char* __dec_obj293;
_Bool is_type_name_flag_629;
void* __right_value733 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* type_630=0;
char* name_631=0;
_Bool err_632=0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value736 = (void*)0;
struct sNode* node_633;
struct sNode* __result385__;
struct sNode* right_value_634;
_Bool no_comma_635;
void* __right_value737 = (void*)0;
struct sNode* __dec_obj294;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value739 = (void*)0;
struct sNode* __dec_obj296;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value743 = (void*)0;
struct sNode* node_636;
struct sNode* __result386__;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value747 = (void*)0;
struct sNode* node_637;
struct sNode* __result387__;
word_628 = (void*)0;
    sline_real_564=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_565=is_type_name(buf,info);
    multiple_declare_566=(_Bool)0;
    if(    is_type_name_flag_565) {
        p_567=info->p;
        sline_568=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value645=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_569=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_570=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_571=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value645,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            err_571) {
                parse_sharp_v5(info);
                multiple_assign_var5=((struct tuple2$2sTypephcharph*)(__right_value646=parse_variable_name((struct sType*)come_increment_ref_count(type_569),(_Bool)1,info)));
                type_572=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_573=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value646,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value647=skip_block(info)));
                        __right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_574=info->no_output_err;
                        no_comma_575=info->no_comma;
                        no_output_come_code_576=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_577=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_575;
                        info->no_output_err=no_output_err_574;
                        info->no_output_come_code=no_output_come_code_576;
                        if(exp_577) { exp_577 = come_decrement_ref_count2(exp_577, ((struct sNode*)exp_577)->finalize, ((struct sNode*)exp_577)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(                !is_type_name(name_573,info)&&*info->p==44) {
                    multiple_declare_566=(_Bool)1;
                }
                come_call_finalizer3(type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_573 = come_decrement_ref_count2(name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_570 = come_decrement_ref_count2(name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_567;
        info->sline=sline_568;
    }
    attr_define_578=(_Bool)0;
    if(    is_type_name_flag_565&&info->defining_class) {
        p_579=info->p;
        sline_580=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value649=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_581=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_582=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_583=multiple_assign_var6->v3;
        come_call_finalizer3(__right_value649,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        err_583&&strmemcmp(info->p,"self")) {
            attr_define_578=(_Bool)1;
        }
        info->p=p_579;
        info->sline=sline_580;
        come_call_finalizer3(type_581,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_582 = come_decrement_ref_count2(name_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_584=((struct sFun*)(__right_value650=map$2charphsFunphp_operator_load_element(info->funcs,buf)));
    come_call_finalizer3(__right_value650,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_585=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_586=((void*)0);
        if(        *info->p==44) {
            __dec_obj268=multiple_assign_586;
            multiple_assign_586=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1346, "struct list$1charph*", (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj268,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            list$1charph_push_back(multiple_assign_586,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf2_585)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_587=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_586,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf3_587)));
                buf3_587 = come_decrement_ref_count2(buf3_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_588=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_589=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_588;
            parse_sharp_v5(info);
            __dec_obj269=right_value_589;
            right_value_589=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_589),info));
            if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1376, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value662=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1376, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf2_585)),(struct list$1charph*)come_increment_ref_count(multiple_assign_586),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_589),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_590=(struct sNode*)come_increment_ref_count(_inf_value5);
            come_call_finalizer3(__right_value662,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_564;
            __result370__ = gComeFunResultObject = __result_obj__ = node_590;
            if(right_value_589) { right_value_589 = come_decrement_ref_count2(right_value_589, ((struct sNode*)right_value_589)->finalize, ((struct sNode*)right_value_589)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_590) { node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_585 = come_decrement_ref_count2(buf2_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_586,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result370__;
            if(right_value_589) { right_value_589 = come_decrement_ref_count2(right_value_589, ((struct sNode*)right_value_589)->finalize, ((struct sNode*)right_value_589)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_590) { node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_585 = come_decrement_ref_count2(buf2_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_586,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1386, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value665=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1386, "struct sNewChannel*", (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_591=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value665,sNewChannel_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_564;
        __result373__ = gComeFunResultObject = __result_obj__ = node_591;
        if(node_591) { node_591 = come_decrement_ref_count2(node_591, ((struct sNode*)node_591)->finalize, ((struct sNode*)node_591)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result373__;
        if(node_591) { node_591 = come_decrement_ref_count2(node_591, ((struct sNode*)node_591)->finalize, ((struct sNode*)node_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    multiple_declare_566) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_593=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1394, "struct list$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        parse_sharp_v5(info);
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value671=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_594=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_595=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_596=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value671,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_596) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value672=parse_variable_name((struct sType*)come_increment_ref_count(base_type_594),(_Bool)1,info)));
        type2_597=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_598=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value672,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_597->mClass->mStruct&&list$1sNodeph_length(type2_597->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_599=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_600=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_599;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_593,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1421, "struct tuple3$3sTypephcharphsNodeph", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_597),(char*)come_increment_ref_count(var_name_598),(struct sNode*)come_increment_ref_count(exp_600))));
                if(exp_600) { exp_600 = come_decrement_ref_count2(exp_600, ((struct sNode*)exp_600)->finalize, ((struct sNode*)exp_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_604=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_605=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_604;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_593,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1431, "struct tuple3$3sTypephcharphsNodeph", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_597),(char*)come_increment_ref_count(var_name_598),(struct sNode*)come_increment_ref_count(exp_605))));
                if(exp_605) { exp_605 = come_decrement_ref_count2(exp_605, ((struct sNode*)exp_605)->finalize, ((struct sNode*)exp_605)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_593,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1435, "struct tuple3$3sTypephcharphvoidp", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_597),(char*)come_increment_ref_count(var_name_598),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple2$2sTypephcharph*)(__right_value684=parse_variable_name((struct sType*)come_increment_ref_count(base_type_594),(_Bool)0,info)));
            type2_606=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            var_name_607=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            come_call_finalizer3(__right_value684,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_606->mClass->mStruct&&list$1sNodeph_length(type2_606->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_608=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_609=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_608;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_593,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1457, "struct tuple3$3sTypephcharphsNodeph", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_606),(char*)come_increment_ref_count(var_name_607),(struct sNode*)come_increment_ref_count(exp_609))));
                    if(exp_609) { exp_609 = come_decrement_ref_count2(exp_609, ((struct sNode*)exp_609)->finalize, ((struct sNode*)exp_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    no_comma_610=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_611=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_610;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_593,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1469, "struct tuple3$3sTypephcharphsNodeph", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_606),(char*)come_increment_ref_count(var_name_607),(struct sNode*)come_increment_ref_count(exp_611))));
                    if(exp_611) { exp_611 = come_decrement_ref_count2(exp_611, ((struct sNode*)exp_611)->finalize, ((struct sNode*)exp_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
            else {
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_593,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1473, "struct tuple3$3sTypephcharphvoidp", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_606),(char*)come_increment_ref_count(var_name_607),((void*)0))));
            }
            come_call_finalizer3(type2_606,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_607 = come_decrement_ref_count2(var_name_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_612=((void*)0);
        var_name2_613=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1480, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value697=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1480, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_593),(struct sType*)come_increment_ref_count(base_type_594),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_614=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer3(__right_value697,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_564;
        __result377__ = gComeFunResultObject = __result_obj__ = node_614;
        come_call_finalizer3(multiple_declare_593,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_594,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_597,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_598 = come_decrement_ref_count2(var_name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_612) { right_node_612 = come_decrement_ref_count2(right_node_612, ((struct sNode*)right_node_612)->finalize, ((struct sNode*)right_node_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_613 = come_decrement_ref_count2(var_name2_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_614) { node_614 = come_decrement_ref_count2(node_614, ((struct sNode*)node_614)->finalize, ((struct sNode*)node_614)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result377__;
        come_call_finalizer3(multiple_declare_593,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_594,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_597,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_598 = come_decrement_ref_count2(var_name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_612) { right_node_612 = come_decrement_ref_count2(right_node_612, ((struct sNode*)right_node_612)->finalize, ((struct sNode*)right_node_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_613 = come_decrement_ref_count2(var_name2_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_614) { node_614 = come_decrement_ref_count2(node_614, ((struct sNode*)node_614)->finalize, ((struct sNode*)node_614)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    attr_define_578) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value699=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_615=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name_616=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_617=multiple_assign_var10->v3;
        come_call_finalizer3(__right_value699,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_617) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj281=name_616;
        name_616=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2charphsTypephph_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1503, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_616),(struct sType*)come_increment_ref_count(type_615))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1511, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value708=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1511, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_621=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value708,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_node_622=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_623=(struct sNode*)come_increment_ref_count(store_field(self_node_621,(struct sNode*)come_increment_ref_count(right_node_622),(char*)come_increment_ref_count(name_616),info));
            info->sline_real=sline_real_564;
            __result380__ = gComeFunResultObject = __result_obj__ = node_623;
            if(self_node_621) { self_node_621 = come_decrement_ref_count2(self_node_621, ((struct sNode*)self_node_621)->finalize, ((struct sNode*)self_node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_622) { right_node_622 = come_decrement_ref_count2(right_node_622, ((struct sNode*)right_node_622)->finalize, ((struct sNode*)right_node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_623) { node_623 = come_decrement_ref_count2(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer3(type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_616 = come_decrement_ref_count2(name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result380__;
            if(self_node_621) { self_node_621 = come_decrement_ref_count2(self_node_621, ((struct sNode*)self_node_621)->finalize, ((struct sNode*)self_node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_622) { right_node_622 = come_decrement_ref_count2(right_node_622, ((struct sNode*)right_node_622)->finalize, ((struct sNode*)right_node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_623) { node_623 = come_decrement_ref_count2(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            info->sline_real=sline_real_564;
            __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value712=create_null_node(info)));
            come_call_finalizer3(type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_616 = come_decrement_ref_count2(name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value712) { __right_value712 = come_decrement_ref_count2(__right_value712, ((struct sNode*)__right_value712)->finalize, ((struct sNode*)__right_value712)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result381__;
        }
        come_call_finalizer3(type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_616 = come_decrement_ref_count2(name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !is_type_name_flag_565&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_624=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj289=right_value_624;
        right_value_624=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_624),info));
        if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1536, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value718=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1536, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_624),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_625=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value718,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_564;
        __result382__ = gComeFunResultObject = __result_obj__ = node_625;
        if(right_value_624) { right_value_624 = come_decrement_ref_count2(right_value_624, ((struct sNode*)right_value_624)->finalize, ((struct sNode*)right_value_624)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_625) { node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result382__;
        if(right_value_624) { right_value_624 = come_decrement_ref_count2(right_value_624, ((struct sNode*)right_value_624)->finalize, ((struct sNode*)right_value_624)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_625) { node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_565||((struct sFun*)(__right_value720=map$2charphsFunphp_operator_load_element(info->funcs,buf))))),    come_call_finalizer3(__right_value720,sFun_finalize, 0, 1, 0, 0, __result_obj__),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1541, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value723=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1541, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_626=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value723,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj290=node_626;
        node_626=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_626),info));
        if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_564;
        __result383__ = gComeFunResultObject = __result_obj__ = node_626;
        if(node_626) { node_626 = come_decrement_ref_count2(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result383__;
        if(node_626) { node_626 = come_decrement_ref_count2(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !is_type_name_flag_565) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1549, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value728=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1549, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_627=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value728,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj291=node_627;
        node_627=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_627),info));
        if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_564;
        __result384__ = gComeFunResultObject = __result_obj__ = node_627;
        if(node_627) { node_627 = come_decrement_ref_count2(node_627, ((struct sNode*)node_627)->finalize, ((struct sNode*)node_627)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result384__;
        if(node_627) { node_627 = come_decrement_ref_count2(node_627, ((struct sNode*)node_627)->finalize, ((struct sNode*)node_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj292=word_628;
            word_628=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj293=word_628;
            word_628=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        is_type_name_flag_629=is_type_name(word_628,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_629) {
            parse_sharp_v5(info);
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value733=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_630=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_631=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_632=multiple_assign_var11->v3;
            come_call_finalizer3(__right_value733,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            !err_632) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1586, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value735=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1586, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_631),info))));
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
                come_call_finalizer3(__right_value735,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_564;
                __result385__ = gComeFunResultObject = __result_obj__ = node_633;
                if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_628 = come_decrement_ref_count2(word_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result385__;
                if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_634=((void*)0);
                if(                type_630->mClass->mStruct&&list$1sNodeph_length(type_630->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_635=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj294=right_value_634;
                    right_value_634=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
                    info->no_comma=no_comma_635;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj295=right_value_634;
                    right_value_634=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj296=right_value_634;
                right_value_634=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_634),info));
                if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1615, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value742=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1615, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_631),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_630),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_634),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_636=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer3(__right_value742,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_564;
                __result386__ = gComeFunResultObject = __result_obj__ = node_636;
                if(right_value_634) { right_value_634 = come_decrement_ref_count2(right_value_634, ((struct sNode*)right_value_634)->finalize, ((struct sNode*)right_value_634)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_636) { node_636 = come_decrement_ref_count2(node_636, ((struct sNode*)node_636)->finalize, ((struct sNode*)node_636)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_628 = come_decrement_ref_count2(word_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result386__;
                if(right_value_634) { right_value_634 = come_decrement_ref_count2(right_value_634, ((struct sNode*)right_value_634)->finalize, ((struct sNode*)right_value_634)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_636) { node_636 = come_decrement_ref_count2(node_636, ((struct sNode*)node_636)->finalize, ((struct sNode*)node_636)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1620, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value746=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1620, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_631),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_630),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_637=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer3(__right_value746,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_564;
                __result387__ = gComeFunResultObject = __result_obj__ = node_637;
                if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_628 = come_decrement_ref_count2(word_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result387__;
                if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
struct sType* __dec_obj264;
char* __dec_obj265;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj264=self->v1;
            come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj265=self->v2;
            __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj266;
char* __dec_obj267;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj266=self->v1;
            come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj267=self->v2;
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
void* __result_obj__=(void*)0;
struct sNewChannel* __result371__;
void* __right_value666 = (void*)0;
struct sNewChannel* result_592;
void* __right_value667 = (void*)0;
char* __dec_obj270;
struct sNewChannel* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_592=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_592->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj270=result_592->sname;
        result_592->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_592->sline_real=self->sline_real;
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_592;
    come_call_finalizer3(result_592,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value674 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_601;
struct tuple3$3sTypephcharphsNodeph* __dec_obj271;
void* __right_value675 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_602;
struct tuple3$3sTypephcharphsNodeph* __dec_obj272;
void* __right_value676 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_603;
struct tuple3$3sTypephcharphsNodeph* __dec_obj273;
struct list$1tuple3$3sTypephcharphsNodephph* __result374__;
    if(    self->len==0) {
        litem_601=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value674=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1305, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_601->prev=((void*)0);
        litem_601->next=((void*)0);
        __dec_obj271=litem_601->item;
        litem_601->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj271,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_601;
        self->head=litem_601;
    }
    else if(    self->len==1) {
        litem_602=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value675=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1315, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_602->prev=self->head;
        litem_602->next=((void*)0);
        __dec_obj272=litem_602->item;
        litem_602->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj272,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_602;
        self->head->next=litem_602;
    }
    else {
        litem_603=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value676=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1325, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_603->prev=self->tail;
        litem_603->next=((void*)0);
        __dec_obj273=litem_603->item;
        litem_603->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj273,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_603;
        self->tail=litem_603;
    }
    self->len++;
    __result374__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj274;
char* __dec_obj275;
struct sNode* __dec_obj276;
struct tuple3$3sTypephcharphsNodeph* __result375__;
    __dec_obj274=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj274,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj275=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj276=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    __result375__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj277;
char* __dec_obj278;
struct tuple3$3sTypephcharphvoidp* __result376__;
    __dec_obj277=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj277,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj278=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result376__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj279;
char* __dec_obj280;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj279=self->v1;
            come_call_finalizer3(__dec_obj279,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj280=self->v2;
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value701 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_618;
struct tuple2$2charphsTypeph* __dec_obj282;
void* __right_value702 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_619;
struct tuple2$2charphsTypeph* __dec_obj285;
void* __right_value703 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_620;
struct tuple2$2charphsTypeph* __dec_obj286;
struct list$1tuple2$2charphsTypephph* __result378__;
    if(    self->len==0) {
        litem_618=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value701=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1235, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_618->prev=((void*)0);
        litem_618->next=((void*)0);
        __dec_obj282=litem_618->item;
        litem_618->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj282,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_618;
        self->head=litem_618;
    }
    else if(    self->len==1) {
        litem_619=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value702=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1245, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_619->prev=self->head;
        litem_619->next=((void*)0);
        __dec_obj285=litem_619->item;
        litem_619->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj285,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_619;
        self->head->next=litem_619;
    }
    else {
        litem_620=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value703=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1255, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_620->prev=self->tail;
        litem_620->next=((void*)0);
        __dec_obj286=litem_620->item;
        litem_620->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj286,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_620;
        self->tail=litem_620;
    }
    self->len++;
    __result378__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj283;
struct sType* __dec_obj284;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj283=self->v1;
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj284=self->v2;
            come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj287;
struct sType* __dec_obj288;
struct tuple2$2charphsTypeph* __result379__;
    __dec_obj287=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj288=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result379__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

struct sNode* expression_node_v95(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* node_638;
void* __right_value748 = (void*)0;
struct sNode* exp_639;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value754 = (void*)0;
struct sNode* __result390__;
void* __right_value755 = (void*)0;
struct sNode* __dec_obj299;
struct sNode* __result391__;
node_638 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_639=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1646, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value750=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1646, "struct sReadChannelNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_639),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value754=_inf_value15));
        if(exp_639) { exp_639 = come_decrement_ref_count2(exp_639, ((struct sNode*)exp_639)->finalize, ((struct sNode*)exp_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_638) { node_638 = come_decrement_ref_count2(node_638, ((struct sNode*)node_638)->finalize, ((struct sNode*)node_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value750,sReadChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value754) { __right_value754 = come_decrement_ref_count2(__right_value754, ((struct sNode*)__right_value754)->finalize, ((struct sNode*)__right_value754)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result390__;
        if(exp_639) { exp_639 = come_decrement_ref_count2(exp_639, ((struct sNode*)exp_639)->finalize, ((struct sNode*)exp_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        __dec_obj299=node_638;
        node_638=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result391__ = gComeFunResultObject = __result_obj__ = node_638;
    if(node_638) { node_638 = come_decrement_ref_count2(node_638, ((struct sNode*)node_638)->finalize, ((struct sNode*)node_638)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
struct sReadChannelNode* __result388__;
void* __right_value751 = (void*)0;
struct sReadChannelNode* result_640;
void* __right_value752 = (void*)0;
char* __dec_obj297;
void* __right_value753 = (void*)0;
struct sNode* __dec_obj298;
struct sReadChannelNode* __result389__;
    if(    self==(void*)0) {
        __result388__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    result_640=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj297=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj298=result_640->exp;
        result_640->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result389__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value756 = (void*)0;
struct sNode* right_value_641;
void* __right_value757 = (void*)0;
struct sNode* __dec_obj300;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value764 = (void*)0;
struct sNode* __result394__;
void* __right_value765 = (void*)0;
struct sNode* __result395__;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_641=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj300=right_value_641;
        right_value_641=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_641),info));
        if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1669, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value759=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1669, "struct sWriteChannelNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_641),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value764=_inf_value16));
        if(right_value_641) { right_value_641 = come_decrement_ref_count2(right_value_641, ((struct sNode*)right_value_641)->finalize, ((struct sNode*)right_value_641)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value759,sWriteChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value764) { __right_value764 = come_decrement_ref_count2(__right_value764, ((struct sNode*)__right_value764)->finalize, ((struct sNode*)__right_value764)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result394__;
        if(right_value_641) { right_value_641 = come_decrement_ref_count2(right_value_641, ((struct sNode*)right_value_641)->finalize, ((struct sNode*)right_value_641)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result395__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value765=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value765) { __right_value765 = come_decrement_ref_count2(__right_value765, ((struct sNode*)__right_value765)->finalize, ((struct sNode*)__right_value765)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
struct sWriteChannelNode* __result392__;
void* __right_value760 = (void*)0;
struct sWriteChannelNode* result_642;
void* __right_value761 = (void*)0;
char* __dec_obj301;
void* __right_value762 = (void*)0;
struct sNode* __dec_obj302;
void* __right_value763 = (void*)0;
struct sNode* __dec_obj303;
struct sWriteChannelNode* __result393__;
    if(    self==(void*)0) {
        __result392__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result392__;
    }
    result_642=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_642->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj301=result_642->sname;
        result_642->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_642->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj302=result_642->exp;
        result_642->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj303=result_642->right_value;
        result_642->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result393__ = gComeFunResultObject = __result_obj__ = result_642;
    come_call_finalizer3(result_642,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

