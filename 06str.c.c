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
    struct list$1sNodeph* exps;
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
    unsigned int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int* value;
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
    struct list$1sNodeph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
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
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
struct sNode* create_null_return_value(struct sInfo* info);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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
struct buffer* result_122;
struct buffer* __result63__;
    result_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3793, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_122,self,sizeof(char)*len);
    __result63__ = gComeFunResultObject = __result_obj__ = result_122;
    come_call_finalizer3(result_122,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_123;
int i_124;
struct buffer* __result64__;
    result_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3800, "struct buffer*", (void*)0, (void*)0))));
    for(    i_124=0;    i_124<len;    i_124++    ){
        buffer_append(result_123,self[i_124],strlen(self[i_124]));
    }
    __result64__ = gComeFunResultObject = __result_obj__ = result_123;
    come_call_finalizer3(result_123,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_125;
struct buffer* __result65__;
    result_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3809, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_125,(char*)self,sizeof(short)*len);
    __result65__ = gComeFunResultObject = __result_obj__ = result_125;
    come_call_finalizer3(result_125,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_126;
struct buffer* __result66__;
    result_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3816, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_126,(char*)self,sizeof(int)*len);
    __result66__ = gComeFunResultObject = __result_obj__ = result_126;
    come_call_finalizer3(result_126,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_127;
struct buffer* __result67__;
    result_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3823, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_127,(char*)self,sizeof(long)*len);
    __result67__ = gComeFunResultObject = __result_obj__ = result_127;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_128;
struct buffer* __result68__;
    result_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3830, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_128,(char*)self,sizeof(float)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = result_128;
    come_call_finalizer3(result_128,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_129;
struct buffer* __result69__;
    result_129=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3837, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_129,(char*)self,sizeof(double)*len);
    __result69__ = gComeFunResultObject = __result_obj__ = result_129;
    come_call_finalizer3(result_129,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4165, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4170, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4175, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4180, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4185, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_135;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result80__;
    buf_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4218, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_135,(char*)self,sizeof(char)*len);
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4220, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_135))));
    come_call_finalizer3(buf_135,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_136;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result82__;
    buf_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4225, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_136,(char*)self,sizeof(char*)*len);
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4227, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_136))));
    come_call_finalizer3(buf_136,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_137;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result83__;
    buf_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4232, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_137,(char*)self,sizeof(short)*len);
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4234, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_137))));
    come_call_finalizer3(buf_137,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_138;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result84__;
    buf_138=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4239, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_138,(char*)self,sizeof(int)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4241, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_138))));
    come_call_finalizer3(buf_138,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_139;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result85__;
    buf_139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4246, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_139,(char*)self,sizeof(long)*len);
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4248, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_139))));
    come_call_finalizer3(buf_139,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_140;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result87__;
    buf_140=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4253, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_140,(char*)self,sizeof(float)*len);
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4255, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_140))));
    come_call_finalizer3(buf_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_141;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result89__;
    buf_141=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4260, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_141,(char*)self,sizeof(double)*len);
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4262, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_141))));
    come_call_finalizer3(buf_141,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4267, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4272, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4277, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result101__;
    __result101__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4282, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result101__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4287, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4292, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4297, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4302, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4307, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result116__;
    __result116__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4312, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result116__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result118__;
    __result118__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4317, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result120__;
    __result120__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4322, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result120__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4327, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result124__;
    __result124__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4332, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_199;
int i_200;
    result_199=(_Bool)0;
    for(    i_200=0;    i_200<len;    i_200++    ){
        if(        strncmp(self[i_200],str,strlen(self[i_200]))==0) {
            result_199=(_Bool)1;
            break;
        }
    }
    return result_199;
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
int i_142;
struct list$1char* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_142=0;    i_142<num_value;    i_142++    ){
        list$1char_push_back(self,values[i_142]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_143;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_144;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_145;
struct list$1char* __result90__;
    if(    self->len==0) {
        litem_143=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1304, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_143->prev=((void*)0);
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head=litem_143;
    }
    else if(    self->len==1) {
        litem_144=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1314, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_144->prev=self->head;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail=litem_144;
        self->head->next=litem_144;
    }
    else {
        litem_145=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1324, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_145->prev=self->tail;
        litem_145->next=((void*)0);
        litem_145->item=item;
        self->tail->next=litem_145;
        self->tail=litem_145;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_146;
struct list_item$1char* prev_it_147;
    it_146=self->head;
    while(it_146!=((void*)0)) {
        prev_it_147=it_146;
        it_146=it_146->next;
        come_call_finalizer3(prev_it_147,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_148;
struct list$1charp* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_148=0;    i_148<num_value;    i_148++    ){
        list$1charp_push_back(self,values[i_148]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_149;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_150;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_151;
struct list$1charp* __result93__;
    if(    self->len==0) {
        litem_149=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1304, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_149->prev=((void*)0);
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head=litem_149;
    }
    else if(    self->len==1) {
        litem_150=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1314, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_150->prev=self->head;
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail=litem_150;
        self->head->next=litem_150;
    }
    else {
        litem_151=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1324, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_151->prev=self->tail;
        litem_151->next=((void*)0);
        litem_151->item=item;
        self->tail->next=litem_151;
        self->tail=litem_151;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_152;
struct list_item$1charp* prev_it_153;
    it_152=self->head;
    while(it_152!=((void*)0)) {
        prev_it_153=it_152;
        it_152=it_152->next;
        come_call_finalizer3(prev_it_153,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_154;
struct list$1short* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_154=0;    i_154<num_value;    i_154++    ){
        list$1short_push_back(self,values[i_154]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_155;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_156;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_157;
struct list$1short* __result96__;
    if(    self->len==0) {
        litem_155=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1304, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_155->prev=((void*)0);
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head=litem_155;
    }
    else if(    self->len==1) {
        litem_156=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1314, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_156->prev=self->head;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail=litem_156;
        self->head->next=litem_156;
    }
    else {
        litem_157=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1324, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_157->prev=self->tail;
        litem_157->next=((void*)0);
        litem_157->item=item;
        self->tail->next=litem_157;
        self->tail=litem_157;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_158;
struct list_item$1short* prev_it_159;
    it_158=self->head;
    while(it_158!=((void*)0)) {
        prev_it_159=it_158;
        it_158=it_158->next;
        come_call_finalizer3(prev_it_159,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_160;
struct list$1int* __result100__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_160=0;    i_160<num_value;    i_160++    ){
        list$1int_push_back(self,values[i_160]);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_161;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_162;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_163;
struct list$1int* __result99__;
    if(    self->len==0) {
        litem_161=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1304, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_161->prev=((void*)0);
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head=litem_161;
    }
    else if(    self->len==1) {
        litem_162=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1314, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_162->prev=self->head;
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail=litem_162;
        self->head->next=litem_162;
    }
    else {
        litem_163=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1324, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_163->prev=self->tail;
        litem_163->next=((void*)0);
        litem_163->item=item;
        self->tail->next=litem_163;
        self->tail=litem_163;
    }
    self->len++;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_164;
struct list_item$1int* prev_it_165;
    it_164=self->head;
    while(it_164!=((void*)0)) {
        prev_it_165=it_164;
        it_164=it_164->next;
        come_call_finalizer3(prev_it_165,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_166;
struct list$1long* __result103__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_166=0;    i_166<num_value;    i_166++    ){
        list$1long_push_back(self,values[i_166]);
    }
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_167;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_168;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_169;
struct list$1long* __result102__;
    if(    self->len==0) {
        litem_167=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1304, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_167->prev=((void*)0);
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head=litem_167;
    }
    else if(    self->len==1) {
        litem_168=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1314, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_168->prev=self->head;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail=litem_168;
        self->head->next=litem_168;
    }
    else {
        litem_169=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1324, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_169->prev=self->tail;
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail->next=litem_169;
        self->tail=litem_169;
    }
    self->len++;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_170;
struct list_item$1long* prev_it_171;
    it_170=self->head;
    while(it_170!=((void*)0)) {
        prev_it_171=it_170;
        it_170=it_170->next;
        come_call_finalizer3(prev_it_171,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_172;
struct list$1float* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_172=0;    i_172<num_value;    i_172++    ){
        list$1float_push_back(self,values[i_172]);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_173;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_174;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_175;
struct list$1float* __result105__;
    if(    self->len==0) {
        litem_173=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1304, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_173->prev=((void*)0);
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head=litem_173;
    }
    else if(    self->len==1) {
        litem_174=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1314, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_174->prev=self->head;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail=litem_174;
        self->head->next=litem_174;
    }
    else {
        litem_175=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1324, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_175->prev=self->tail;
        litem_175->next=((void*)0);
        litem_175->item=item;
        self->tail->next=litem_175;
        self->tail=litem_175;
    }
    self->len++;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_176;
struct list_item$1float* prev_it_177;
    it_176=self->head;
    while(it_176!=((void*)0)) {
        prev_it_177=it_176;
        it_176=it_176->next;
        come_call_finalizer3(prev_it_177,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_178;
struct list$1double* __result109__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_178=0;    i_178<num_value;    i_178++    ){
        list$1double_push_back(self,values[i_178]);
    }
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_179;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_180;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_181;
struct list$1double* __result108__;
    if(    self->len==0) {
        litem_179=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1304, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_179->prev=((void*)0);
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head=litem_179;
    }
    else if(    self->len==1) {
        litem_180=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1314, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_180->prev=self->head;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail=litem_180;
        self->head->next=litem_180;
    }
    else {
        litem_181=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1324, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_181->prev=self->tail;
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail->next=litem_181;
        self->tail=litem_181;
    }
    self->len++;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_182;
struct list_item$1double* prev_it_183;
    it_182=self->head;
    while(it_182!=((void*)0)) {
        prev_it_183=it_182;
        it_182=it_182->next;
        come_call_finalizer3(prev_it_183,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2096, "char*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_184;
    if(    0) {
        for(        i_184=0;        i_184<self->len;        i_184++        ){
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2096, "char**", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_185;
    if(    0) {
        for(        i_185=0;        i_185<self->len;        i_185++        ){
            self->items[i_185] = come_decrement_ref_count2(self->items[i_185], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2096, "short*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_186;
    if(    0) {
        for(        i_186=0;        i_186<self->len;        i_186++        ){
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2096, "int*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_187;
    if(    0) {
        for(        i_187=0;        i_187<self->len;        i_187++        ){
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2096, "long*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_188;
    if(    0) {
        for(        i_188=0;        i_188<self->len;        i_188++        ){
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2096, "float*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_189;
    if(    0) {
        for(        i_189=0;        i_189<self->len;        i_189++        ){
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2096, "double*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_190;
    if(    0) {
        for(        i_190=0;        i_190<self->len;        i_190++        ){
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
struct list_item$1charph* it_222;
struct list_item$1charph* prev_it_223;
    it_222=self->head;
    while(it_222!=((void*)0)) {
        prev_it_223=it_222;
        it_222=it_222->next;
        come_call_finalizer3(prev_it_223,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* litem_227;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_228;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_229;
char* __dec_obj30;
struct list$1charph* __result163__;
    if(    self->len==0) {
        litem_227=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1304, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_227->prev=((void*)0);
        litem_227->next=((void*)0);
        __dec_obj28=litem_227->item;
        litem_227->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_227;
        self->head=litem_227;
    }
    else if(    self->len==1) {
        litem_228=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1314, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_228->prev=self->head;
        litem_228->next=((void*)0);
        __dec_obj29=litem_228->item;
        litem_228->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_228;
        self->head->next=litem_228;
    }
    else {
        litem_229=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1324, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_229->prev=self->tail;
        litem_229->next=((void*)0);
        __dec_obj30=litem_229->item;
        litem_229->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_229;
        self->tail=litem_229;
    }
    self->len++;
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj32;
struct sStrNode* __result219__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sStrNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct CVALUE* come_value_280;
void* __right_value254 = (void*)0;
char* __dec_obj35;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct sType* __dec_obj36;
_Bool __result222__;
    come_value_280=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj35=come_value_280->c_value;
    come_value_280->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj36=come_value_280->type;
    come_value_280->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_280->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_280));
    add_come_last_code(info,"%s",come_value_280->c_value);
    __result222__ = (_Bool)1;
    come_call_finalizer3(come_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result222__;
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

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj33;
char* __dec_obj34;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj34=self->value;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj37;
struct tuple1$1sTypeph* __dec_obj39;
struct tuple1$1sTypeph* __dec_obj40;
char* __dec_obj41;
char* __dec_obj42;
struct list$1sTypeph* __dec_obj43;
struct list$1sNodeph* __dec_obj45;
struct list$1sTypeph* __dec_obj47;
struct list$1charph* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj39=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj40=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj40,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
            __dec_obj50=self->mAlignas;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj51=self->mChannelType;
            come_call_finalizer3(__dec_obj51,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj52=self->mSizeNum;
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj53=self->mOriginalTypeName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj54=self->mAsmName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj55=self->mTupleName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj56=self->mAttribute;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
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
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_281;
struct list_item$1sTypeph* prev_it_282;
    it_281=self->head;
    while(it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        come_call_finalizer3(prev_it_282,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_283;
struct list_item$1sTypeph* prev_it_284;
    it_283=self->head;
    while(it_283!=((void*)0)) {
        prev_it_284=it_283;
        it_283=it_283->next;
        come_call_finalizer3(prev_it_284,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_285;
struct list_item$1sNodeph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        come_call_finalizer3(prev_it_286,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_287;
struct list_item$1sNodeph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        come_call_finalizer3(prev_it_288,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_289;
struct list_item$1charph* prev_it_290;
    it_289=self->head;
    while(it_289!=((void*)0)) {
        prev_it_290=it_289;
        it_289=it_289->next;
        come_call_finalizer3(prev_it_290,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
struct list_item$1CVALUEph* litem_291;
struct CVALUE* __dec_obj57;
void* __right_value258 = (void*)0;
struct list_item$1CVALUEph* litem_292;
struct CVALUE* __dec_obj61;
void* __right_value259 = (void*)0;
struct list_item$1CVALUEph* litem_293;
struct CVALUE* __dec_obj62;
struct list$1CVALUEph* __result221__;
    if(    self->len==0) {
        litem_291=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value257=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1304, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj57=litem_291->item;
        litem_291->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value258=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1314, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj61=litem_292->item;
        litem_292->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value259=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1324, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj62=litem_293->item;
        litem_293->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj58;
struct sType* __dec_obj59;
char* __dec_obj60;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj58=self->c_value;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj59=self->type;
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj60=self->c_value_without_right_value_objects;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct buffer* __dec_obj63;
struct sBufferNode* __result223__;
    ((struct sNodeBase*)(__right_value260=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value260,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj63=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj63,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->size=size;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
char* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string("sBufferNode")));
    __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_294;
unsigned long  int size_295;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_296;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* buf_297;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct sType* type2_298;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sType* type2_299;
void* __right_value271 = (void*)0;
char* __dec_obj66;
void* __right_value311 = (void*)0;
struct sType* __dec_obj95;
_Bool __result242__;
    value_294=(struct buffer*)come_increment_ref_count(self->value);
    size_295=self->size;
    come_value_296=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0))));
    buf_297=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*", (void*)0, (void*)0))));
    type2_298=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType*", (void*)0, (void*)0)),"buffer",(_Bool)0,info));
    type2_298->mPointerNum++;
    buffer_append_format(buf_297,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", (void*)0, (void*)0)), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value268=buffer_to_string(value_294))),size_295);
    __right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type2_298,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_299=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 77, "struct sType*", (void*)0, (void*)0)),"buffer*",(_Bool)0,info));
    type2_299->mHeap=(_Bool)1;
    __dec_obj66=come_value_296->c_value;
    come_value_296->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_297));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=come_value_296->type;
    come_value_296->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_299));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_296->var=((void*)0);
    append_object_to_right_values2(come_value_296,(struct sType*)come_increment_ref_count(type2_299),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_296));
    add_come_last_code(info,"%s",come_value_296->c_value);
    __result242__ = (_Bool)1;
    come_call_finalizer3(value_294,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_296,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_297,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_299,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result242__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj64;
struct buffer* __dec_obj65;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj64=self->sname;
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj65=self->value;
            come_call_finalizer3(__dec_obj65,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result225__;
void* __right_value272 = (void*)0;
struct sType* result_300;
void* __right_value275 = (void*)0;
struct tuple1$1sTypeph* __dec_obj69;
void* __right_value276 = (void*)0;
struct tuple1$1sTypeph* __dec_obj70;
void* __right_value277 = (void*)0;
struct tuple1$1sTypeph* __dec_obj71;
void* __right_value278 = (void*)0;
char* __dec_obj72;
void* __right_value279 = (void*)0;
char* __dec_obj73;
void* __right_value286 = (void*)0;
struct list$1sTypeph* __dec_obj77;
void* __right_value294 = (void*)0;
struct list$1sNodeph* __dec_obj81;
void* __right_value295 = (void*)0;
struct list$1sTypeph* __dec_obj82;
void* __right_value302 = (void*)0;
struct list$1charph* __dec_obj86;
void* __right_value303 = (void*)0;
struct tuple1$1sTypeph* __dec_obj87;
void* __right_value304 = (void*)0;
struct sNode* __dec_obj88;
void* __right_value305 = (void*)0;
struct tuple1$1sTypeph* __dec_obj89;
void* __right_value306 = (void*)0;
struct sNode* __dec_obj90;
void* __right_value307 = (void*)0;
char* __dec_obj91;
void* __right_value308 = (void*)0;
char* __dec_obj92;
void* __right_value309 = (void*)0;
char* __dec_obj93;
void* __right_value310 = (void*)0;
char* __dec_obj94;
struct sType* __result241__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_300=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_300->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj69=result_300->mNoSolvedGenericsType;
        result_300->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj69,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj70=result_300->mOriginalLoadVarType;
        result_300->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj70,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj71=result_300->mRefferenceOriginalType;
        result_300->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj71,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj72=result_300->mInterfaceName;
        result_300->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj73=result_300->mGenericsName;
        result_300->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj77=result_300->mGenericsTypes;
        result_300->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj77,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj81=result_300->mArrayNum;
        result_300->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj81,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj82=result_300->mParamTypes;
        result_300->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj82,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj86=result_300->mParamNames;
        result_300->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj86,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj87=result_300->mResultType;
        result_300->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj87,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj88=result_300->mAlignas;
        result_300->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj89=result_300->mChannelType;
        result_300->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj89,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_300->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_300->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_300->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_300->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_300->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_300->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_300->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_300->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_300->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_300->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_300->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_300->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_300->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_300->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_300->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_300->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_300->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_300->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_300->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_300->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_300->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_300->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_300->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_300->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_300->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj90=result_300->mSizeNum;
        result_300->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_300->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj91=result_300->mOriginalTypeName;
        result_300->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_300->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_300->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_300->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_300->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_300->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_300->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_300->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj92=result_300->mAsmName;
        result_300->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_300->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_300->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_300->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_300->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_300->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj93=result_300->mTupleName;
        result_300->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj94=result_300->mAttribute;
        result_300->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_300;
    come_call_finalizer3(result_300,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result226__;
void* __right_value273 = (void*)0;
struct tuple1$1sTypeph* result_301;
void* __right_value274 = (void*)0;
struct sType* __dec_obj67;
struct tuple1$1sTypeph* __result227__;
    if(    self==(void*)0) {
        __result226__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_301=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj67=result_301->v1;
        result_301->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_301;
    come_call_finalizer3(result_301,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj68;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj68=self->v1;
            come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result228__;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1sTypeph* result_302;
struct list_item$1sTypeph* it_303;
void* __right_value285 = (void*)0;
struct list$1sTypeph* __result231__;
    if(    self==((void*)0)) {
        __result228__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_302=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1220, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_303=self->head;
    while(it_303!=((void*)0)) {
        list$1sTypeph_add(result_302,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_303->item)));
        it_303=it_303->next;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_302;
    come_call_finalizer3(result_302,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result229__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1sTypeph* litem_304;
struct sType* __dec_obj74;
void* __right_value283 = (void*)0;
struct list_item$1sTypeph* litem_305;
struct sType* __dec_obj75;
void* __right_value284 = (void*)0;
struct list_item$1sTypeph* litem_306;
struct sType* __dec_obj76;
struct list$1sTypeph* __result230__;
    if(    self->len==0) {
        litem_304=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value282=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1234, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj74=litem_304->item;
        litem_304->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value283=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1244, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj75=litem_305->item;
        litem_305->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value284=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1254, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj76=litem_306->item;
        litem_306->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result232__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1sNodeph* result_307;
struct list_item$1sNodeph* it_308;
void* __right_value293 = (void*)0;
struct list$1sNodeph* __result237__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_307=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_308=self->head;
    while(it_308!=((void*)0)) {
        list$1sNodeph_add(result_307,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_308->item)));
        it_308=it_308->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_307;
    come_call_finalizer3(result_307,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result233__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1sNodeph* litem_309;
struct sNode* __dec_obj78;
void* __right_value290 = (void*)0;
struct list_item$1sNodeph* litem_310;
struct sNode* __dec_obj79;
void* __right_value291 = (void*)0;
struct list_item$1sNodeph* litem_311;
struct sNode* __dec_obj80;
struct list$1sNodeph* __result234__;
    if(    self->len==0) {
        litem_309=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value289=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_309->prev=((void*)0);
        litem_309->next=((void*)0);
        __dec_obj78=litem_309->item;
        litem_309->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_309;
        self->head=litem_309;
    }
    else if(    self->len==1) {
        litem_310=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value290=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_310->prev=self->head;
        litem_310->next=((void*)0);
        __dec_obj79=litem_310->item;
        litem_310->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_310;
        self->head->next=litem_310;
    }
    else {
        litem_311=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value291=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_311->prev=self->tail;
        litem_311->next=((void*)0);
        __dec_obj80=litem_311->item;
        litem_311->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_311;
        self->tail=litem_311;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result235__;
void* __right_value292 = (void*)0;
struct sNode* result_312;
struct sNode* __result236__;
    if(    self==(void*)0) {
        __result235__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_312=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_312->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_312->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_312->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_312->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_312->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_312->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_312->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_312->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_312->kind=self->kind;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_312;
    if(result_312) { result_312 = come_decrement_ref_count2(result_312, ((struct sNode*)result_312)->finalize, ((struct sNode*)result_312)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result238__;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1charph* result_313;
struct list_item$1charph* it_314;
void* __right_value301 = (void*)0;
struct list$1charph* __result240__;
    if(    self==((void*)0)) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_313=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0))));
    it_314=self->head;
    while(it_314!=((void*)0)) {
        list$1charph_add(result_313,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_314->item)));
        it_314=it_314->next;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_313;
    come_call_finalizer3(result_313,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct list_item$1charph* litem_315;
char* __dec_obj83;
void* __right_value299 = (void*)0;
struct list_item$1charph* litem_316;
char* __dec_obj84;
void* __right_value300 = (void*)0;
struct list_item$1charph* litem_317;
char* __dec_obj85;
struct list$1charph* __result239__;
    if(    self->len==0) {
        litem_315=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value298=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_315->prev=((void*)0);
        litem_315->next=((void*)0);
        __dec_obj83=litem_315->item;
        litem_315->item=(char*)come_increment_ref_count(item);
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_315;
        self->head=litem_315;
    }
    else if(    self->len==1) {
        litem_316=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value299=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_316->prev=self->head;
        litem_316->next=((void*)0);
        __dec_obj84=litem_316->item;
        litem_316->item=(char*)come_increment_ref_count(item);
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_316;
        self->head->next=litem_316;
    }
    else {
        litem_317=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value300=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_317->prev=self->tail;
        litem_317->next=((void*)0);
        __dec_obj85=litem_317->item;
        litem_317->item=(char*)come_increment_ref_count(item);
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_317;
        self->tail=litem_317;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* __dec_obj96;
void* __right_value314 = (void*)0;
struct list$1sNodeph* __dec_obj97;
struct sSStringNode* __result243__;
    ((struct sNodeBase*)(__right_value312=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value312,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj96=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj97=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, exps));
    come_call_finalizer3(__dec_obj97,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
char* __result244__;
    __result244__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value315=__builtin_string("sSStringNode")));
    __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct CVALUE* come_value_318;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct buffer* buf_319;
struct list$1sNodeph* o2_saved_320;
struct sNode* it_323;
void* __right_value320 = (void*)0;
struct sNode* obj_326;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_327;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sNode* node_333;
_Bool Value_334;
_Bool __result254__;
void* __right_value331 = (void*)0;
struct CVALUE* come_value_335;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sType* type2_336;
void* __right_value334 = (void*)0;
char* __dec_obj109;
void* __right_value335 = (void*)0;
struct sType* __dec_obj110;
_Bool __result255__;
    come_value_318=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 111, "struct CVALUE*", (void*)0, (void*)0))));
    buf_319=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 113, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_319,"xsprintf(\"");
    buffer_append_str(buf_319,self->value);
    buffer_append_str(buf_319,"\"");
    if(    list$1sNodeph_length(self->exps)>0) {
        for(        o2_saved_320=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_323=list$1sNodeph_begin((o2_saved_320));        !list$1sNodeph_end((o2_saved_320));        it_323=list$1sNodeph_next((o2_saved_320))        ){
            obj_326=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_323));
            params_327=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 123, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephph_add(params_327,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 124, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_323)))));
            node_333=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_326),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_327),((void*)0),0,((void*)0),info));
            Value_334=node_compile(node_333,info);
            if(            !Value_334) {
                __result254__ = (_Bool)0;
                if(obj_326) { obj_326 = come_decrement_ref_count2(obj_326, ((struct sNode*)obj_326)->finalize, ((struct sNode*)obj_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_327,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(node_333) { node_333 = come_decrement_ref_count2(node_333, ((struct sNode*)node_333)->finalize, ((struct sNode*)node_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_320,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_318,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_319,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result254__;
            }
            else {
            }
            come_value_335=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_319,",");
            buffer_append_str(buf_319,come_value_335->c_value);
            if(obj_326) { obj_326 = come_decrement_ref_count2(obj_326, ((struct sNode*)obj_326)->finalize, ((struct sNode*)obj_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_327,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(node_333) { node_333 = come_decrement_ref_count2(node_333, ((struct sNode*)node_333)->finalize, ((struct sNode*)node_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_320,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_319,")");
    type2_336=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 142, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    type2_336->mHeap=(_Bool)1;
    __dec_obj109=come_value_318->c_value;
    come_value_318->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_319));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj110=come_value_318->type;
    come_value_318->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_336));
    come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_318->var=((void*)0);
    append_object_to_right_values2(come_value_318,(struct sType*)come_increment_ref_count(type2_336),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_318));
    add_come_last_code(info,"%s",come_value_318->c_value);
    __result255__ = (_Bool)1;
    come_call_finalizer3(come_value_318,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_319,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_336,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result255__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj98;
char* __dec_obj99;
struct list$1sNodeph* __dec_obj100;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj98=self->sname;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj99=self->value;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj100=self->exps;
            come_call_finalizer3(__dec_obj100,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_321;
struct sNode* __result245__;
struct sNode* __result246__;
struct sNode* result_322;
struct sNode* __result247__;
result_321 = (void*)0;
result_322 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_321,0,sizeof(struct sNode*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_321;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->it=self->head;
    if(    self->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_322,0,sizeof(struct sNode*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_322;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_324;
struct sNode* __result248__;
struct sNode* __result249__;
struct sNode* result_325;
struct sNode* __result250__;
result_324 = (void*)0;
result_325 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_324,0,sizeof(struct sNode*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_324;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_325,0,sizeof(struct sNode*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_325;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result251__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_328;
struct list_item$1tuple2$2charphsNodephph* prev_it_329;
    it_328=self->head;
    while(it_328!=((void*)0)) {
        prev_it_329=it_328;
        it_328=it_328->next;
        come_call_finalizer3(prev_it_329,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj101;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj101=self->item;
            come_call_finalizer3(__dec_obj101,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj102;
struct sNode* __dec_obj103;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj102=self->v1;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj103=self->v2;
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_330;
struct tuple2$2charphsNodeph* __dec_obj104;
void* __right_value324 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_331;
struct tuple2$2charphsNodeph* __dec_obj105;
void* __right_value325 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_332;
struct tuple2$2charphsNodeph* __dec_obj106;
struct list$1tuple2$2charphsNodephph* __result252__;
    if(    self->len==0) {
        litem_330=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value323=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1234, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_330->prev=((void*)0);
        litem_330->next=((void*)0);
        __dec_obj104=litem_330->item;
        litem_330->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_330;
        self->head=litem_330;
    }
    else if(    self->len==1) {
        litem_331=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value324=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1244, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_331->prev=self->head;
        litem_331->next=((void*)0);
        __dec_obj105=litem_331->item;
        litem_331->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_331;
        self->head->next=litem_331;
    }
    else {
        litem_332=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value325=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1254, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_332->prev=self->tail;
        litem_332->next=((void*)0);
        __dec_obj106=litem_332->item;
        litem_332->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_332;
        self->tail=litem_332;
    }
    self->len++;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj107;
struct sNode* __dec_obj108;
struct tuple2$2charphsNodeph* __result253__;
    __dec_obj107=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj108=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); };
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result253__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value336 = (void*)0;
struct sCharNode* __result256__;
    ((struct sNodeBase*)(__right_value336=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value336,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value337 = (void*)0;
char* __result257__;
    __result257__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value337=__builtin_string("sCharNode")));
    __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_337;
void* __right_value340 = (void*)0;
char* __dec_obj112;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* __dec_obj113;
_Bool __result258__;
    come_value_337=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 175, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj112=come_value_337->c_value;
    come_value_337->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=come_value_337->type;
    come_value_337->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 178, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_337->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_337));
    add_come_last_code(info,"%s",come_value_337->c_value);
    __result258__ = (_Bool)1;
    come_call_finalizer3(come_value_337,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result258__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj111;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj111=self->sname;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value343 = (void*)0;
struct sWCharNode* __result259__;
    ((struct sNodeBase*)(__right_value343=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value343,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
char* __result260__;
    __result260__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value344=__builtin_string("sWCharNode")));
    __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_338;
void* __right_value347 = (void*)0;
char* __dec_obj115;
void* __right_value348 = (void*)0;
char* __dec_obj116;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sType* __dec_obj117;
_Bool __result261__;
    come_value_338=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 206, "struct CVALUE*", (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj115=come_value_338->c_value;
        come_value_338->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj116=come_value_338->c_value;
        come_value_338->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj117=come_value_338->type;
    come_value_338->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 214, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_338->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_338));
    add_come_last_code(info,"%s",come_value_338->c_value);
    __result261__ = (_Bool)1;
    come_call_finalizer3(come_value_338,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result261__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj114;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj114=self->sname;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
unsigned int* __dec_obj118;
struct sWStringNode* __result262__;
    ((struct sNodeBase*)(__right_value351=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value351,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj118=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
char* __result263__;
    __result263__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value352=__builtin_string("sWStringNode")));
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct CVALUE* come_value_339;
void* __right_value355 = (void*)0;
char* __dec_obj121;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* __dec_obj122;
_Bool __result264__;
    come_value_339=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 241, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj121=come_value_339->c_value;
    come_value_339->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=come_value_339->type;
    come_value_339->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 244, "struct sType*", (void*)0, (void*)0)),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_339->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_339));
    add_come_last_code(info,"%s",come_value_339->c_value);
    __result264__ = (_Bool)1;
    come_call_finalizer3(come_value_339,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result264__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj119;
unsigned int* __dec_obj120;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj119=self->sname;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj120=self->value;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
char* __dec_obj123;
struct sRegexNode* __result265__;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value358,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj123=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
char* __result266__;
    __result266__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value360=__builtin_string("sRegexNode")));
    __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value366 = (void*)0;
struct sNode* obj_node_340;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_342;
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
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sNode* node_343;
_Bool Value_344;
_Bool __result269__;
_Bool __result270__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 273, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value362=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 273, "struct sStrNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_340=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value362,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_342=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 275, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephph_add(params_342,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 277, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_340))));
    list$1tuple2$2charphsNodephph_add(params_342,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 278, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_342,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 279, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_342,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 280, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_342,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 281, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_342,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 282, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_342,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 283, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_342,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 284, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_342,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 285, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_343=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_340),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_342),((void*)0),info->sline,((void*)0),info));
    Value_344=node_compile(node_343,info);
    if(    !Value_344) {
        __result269__ = (_Bool)0;
        if(obj_node_340) { obj_node_340 = come_decrement_ref_count2(obj_node_340, ((struct sNode*)obj_node_340)->finalize, ((struct sNode*)obj_node_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_342,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_343) { node_343 = come_decrement_ref_count2(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result269__;
    }
    else {
    }
    __result270__ = (_Bool)1;
    if(obj_node_340) { obj_node_340 = come_decrement_ref_count2(obj_node_340, ((struct sNode*)obj_node_340)->finalize, ((struct sNode*)obj_node_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params_342,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_343) { node_343 = come_decrement_ref_count2(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result270__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj124;
char* __dec_obj125;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj124=self->sname;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj125=self->str;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result267__;
void* __right_value363 = (void*)0;
struct sStrNode* result_341;
void* __right_value364 = (void*)0;
char* __dec_obj126;
void* __right_value365 = (void*)0;
char* __dec_obj127;
struct sStrNode* __result268__;
    if(    self==(void*)0) {
        __result267__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    result_341=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_341->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj126=result_341->sname;
        result_341->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_341->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj127=result_341->value;
        result_341->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result268__ = gComeFunResultObject = __result_obj__ = result_341;
    come_call_finalizer3(result_341,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value405 = (void*)0;
struct list$1sNodeph* __dec_obj128;
struct sListNode* __result271__;
    ((struct sNodeBase*)(__right_value405=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value405,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj128=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj128,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value406 = (void*)0;
char* __result272__;
    __result272__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value406=__builtin_string("sListNode")));
    __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_345;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct list$1CVALUEph* params_346;
struct sType* list_element_type_349;
int n_350;
struct list$1sNodeph* o2_saved_351;
struct sNode* it_352;
void* __right_value409 = (void*)0;
_Bool _if_conditional1;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sNode* value_node_353;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_354;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sNode* exp_355;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj132;
_Bool Value_356;
_Bool __result274__;
_Bool Value_357;
_Bool __result275__;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_358;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* __dec_obj133;
void* __right_value427 = (void*)0;
struct sType* type_values_359;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
char* var_name_364;
void* __right_value433 = (void*)0;
struct sVar* var__365;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct buffer* source_366;
int i_367;
struct list$1CVALUEph* o2_saved_368;
struct CVALUE* it_371;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
char* c_value_374;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sType* list_type_378;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* obj_type_382;
char* fun_name_383;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
char* generics_fun_name_384;
void* __right_value451 = (void*)0;
struct sFun* fun_385;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
char* __dec_obj157;
void* __right_value454 = (void*)0;
_Bool __result290__;
void* __right_value455 = (void*)0;
struct sType* result_type_388;
struct sType* type_389;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct CVALUE* obj_value_390;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct buffer* num_string_391;
void* __right_value460 = (void*)0;
struct sType* type2_392;
void* __right_value461 = (void*)0;
char* type_name_393;
void* __right_value462 = (void*)0;
char* finalizer_name_394;
void* __right_value463 = (void*)0;
char* cloner_name_395;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
char* __dec_obj158;
void* __right_value466 = (void*)0;
struct sType* type3_396;
void* __right_value467 = (void*)0;
struct sType* __dec_obj159;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1CVALUEph* come_params_397;
void* __right_value470 = (void*)0;
_Bool _if_conditional2;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct CVALUE* come_value2_401;
void* __right_value474 = (void*)0;
char* __dec_obj160;
struct sType* __dec_obj161;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct CVALUE* come_value3_402;
void* __right_value477 = (void*)0;
char* __dec_obj162;
struct sType* __dec_obj163;
int j_403;
struct list$1CVALUEph* o2_saved_404;
struct CVALUE* it_405;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct CVALUE* come_value4_406;
void* __right_value480 = (void*)0;
char* __dec_obj164;
void* __right_value481 = (void*)0;
struct sType* __dec_obj165;
_Bool __result293__;
    list_elements_345=self->list_elements;
    params_346=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 317, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    list_element_type_349=((void*)0);
    n_350=0;
    for(    o2_saved_351=(list_elements_345),it_352=list$1sNodeph_begin((o2_saved_351));    !list$1sNodeph_end((o2_saved_351));    it_352=list$1sNodeph_next((o2_saved_351))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value409=it_352->kind(it_352->_protocol_obj))),"sWildCard"))),        (__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional1) {
            value_node_353=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value410=xsprintf("Value"))),info));
            __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            params_354=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 325, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephph_add(params_354,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 326, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_353))));
            list$1tuple2$2charphsNodephph_add(params_354,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 327, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_350,info)))));
            exp_355=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value421=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_353),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_354),((void*)0),0,((void*)0),info));
            __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj132=exp_355;
            exp_355=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_355,info));
            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
            Value_356=node_compile(exp_355,info);
            if(            !Value_356) {
                __result274__ = (_Bool)0;
                if(value_node_353) { value_node_353 = come_decrement_ref_count2(value_node_353, ((struct sNode*)value_node_353)->finalize, ((struct sNode*)value_node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_354,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(exp_355) { exp_355 = come_decrement_ref_count2(exp_355, ((struct sNode*)exp_355)->finalize, ((struct sNode*)exp_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result274__;
            }
            else {
            }
            if(value_node_353) { value_node_353 = come_decrement_ref_count2(value_node_353, ((struct sNode*)value_node_353)->finalize, ((struct sNode*)value_node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_354,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(exp_355) { exp_355 = come_decrement_ref_count2(exp_355, ((struct sNode*)exp_355)->finalize, ((struct sNode*)exp_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_357=node_compile(it_352,info);
            if(            !Value_357) {
                __result275__ = (_Bool)0;
                come_call_finalizer3(params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result275__;
            }
            else {
            }
        }
        come_value_358=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_349) {
            check_assign_type(((char*)(__right_value425=xsprintf("invalid list element type"))),list_element_type_349,come_value_358->type,come_value_358,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(params_346,(struct CVALUE*)come_increment_ref_count(come_value_358));
        __dec_obj133=list_element_type_349;
        list_element_type_349=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_358->type));
        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
        n_350++;
        come_call_finalizer3(come_value_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_349));
    list$1sNodeph_push_back(type_values_359->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(params_346),info)));
    type_values_359->mHeap=(_Bool)0;
    static int list_value_num_363=0;
    var_name_364=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_363));
    add_variable_to_table(var_name_364,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_359)),info);
    var__365=get_variable_from_table(info->lv_table,var_name_364);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value434=make_define_var(type_values_359,var__365->mCValueName,(_Bool)0,info))));
    __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_366=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 368, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(source_366,"(");
    i_367=0;
    for(    o2_saved_368=(struct list$1CVALUEph*)come_increment_ref_count((params_346)),it_371=list$1CVALUEph_begin((o2_saved_368));    !list$1CVALUEph_end((o2_saved_368));    it_371=list$1CVALUEph_next((o2_saved_368))    ){
        if(        list_element_type_349->mHeap) {
            c_value_374=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value437=list$1CVALUEphp_operator_load_element(params_346,i_367))), "06str.c", 375, 0))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value438=list$1CVALUEphp_operator_load_element(params_346,i_367))), "06str.c", 375, 1))->c_value,info));
            come_call_finalizer3(__right_value437,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value438,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_format(source_366,"%s[%d]=%s,\n",var__365->mCValueName,i_367,c_value_374);
            c_value_374 = come_decrement_ref_count2(c_value_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_366,"%s[%d]=%s,\n",var__365->mCValueName,i_367,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value440=list$1CVALUEphp_operator_load_element(params_346,i_367))), "06str.c", 379, 2))->c_value);
            come_call_finalizer3(__right_value440,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_367++;
    }
    come_call_finalizer3(o2_saved_368,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_378=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 388, "struct sType*", (void*)0, (void*)0)),"list",(_Bool)0,info));
    list$1sTypeph_push_back(list_type_378->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value446=come_call_cloner(sType_clone, list_element_type_349))))));
    come_call_finalizer3(__right_value446,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_378));
    fun_name_383="initialize_with_values";
    generics_fun_name_384=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value449=make_generics_function(obj_type_382,(char*)come_increment_ref_count(__builtin_string(fun_name_383)),info,(_Bool)1)))));
    __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_385=((struct sFun*)(__right_value451=map$2charphsFunph_at(info->funcs,generics_fun_name_384,((void*)0))));
    come_call_finalizer3(__right_value451,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_385==((void*)0)) {
        __dec_obj157=generics_fun_name_384;
        generics_fun_name_384=(char*)come_increment_ref_count(create_method_name(obj_type_382,(_Bool)0,((char*)(__right_value452=__builtin_string(fun_name_383))),info,(_Bool)1));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_385=((struct sFun*)(__right_value454=map$2charphsFunph_at(info->funcs,generics_fun_name_384,((void*)0))));
        come_call_finalizer3(__right_value454,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_385==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_384,info->come_fun->mName);
            __result290__ = (_Bool)1;
            come_call_finalizer3(params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_359,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_364 = come_decrement_ref_count2(var_name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_366,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_384 = come_decrement_ref_count2(generics_fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result290__;
        }
    }
    result_type_388=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_385->mResultType));
    result_type_388->mStatic=(_Bool)0;
    type_389=list_type_378;
    obj_value_390=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 414, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_391=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 416, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_391,"1");
    type2_392=(struct sType*)come_increment_ref_count(solve_generics(type_389,type_389,info));
    type_name_393=(char*)come_increment_ref_count(make_type_name_string(type2_392,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_394=(char*)come_increment_ref_count(create_method_name(type2_392,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_395=(char*)come_increment_ref_count(create_method_name(type2_392,(_Bool)0,"clone",info,(_Bool)1));
    __dec_obj158=obj_value_390->c_value;
    obj_value_390->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",type_name_393,type_name_393,((char*)(__right_value464=buffer_to_string(num_string_391))),info->sname,info->sline,type_name_393));
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_396=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_392));
    type3_396->mPointerNum++;
    type3_396->mHeap=(_Bool)1;
    type2_392->mHeap=(_Bool)1;
    __dec_obj159=obj_value_390->type;
    obj_value_390->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_392));
    come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_390->type->mPointerNum++;
    obj_value_390->var=((void*)0);
    append_object_to_right_values2(obj_value_390,(struct sType*)come_increment_ref_count(type3_396),info,(_Bool)0);
    come_params_397=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 448, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value470=list$1sTypephp_operator_load_element(fun_385->mParamTypes,0))), "06str.c", 450, 3))->mHeap&&obj_value_390->type->mHeap)),    come_call_finalizer3(__right_value470,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value471=list$1sTypephp_operator_load_element(fun_385->mParamTypes,0))), "06str.c", 451, 4)),obj_value_390->type,obj_value_390,info,(_Bool)1);
        come_call_finalizer3(__right_value471,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_397,(struct CVALUE*)come_increment_ref_count(obj_value_390));
    come_value2_401=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 455, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj160=come_value2_401->c_value;
    come_value2_401->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(params_346)));
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj161=come_value2_401->type;
    come_value2_401->type=((void*)0);
    come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_401->var=((void*)0);
    list$1CVALUEph_push_back(come_params_397,(struct CVALUE*)come_increment_ref_count(come_value2_401));
    come_value3_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 463, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj162=come_value3_402->c_value;
    come_value3_402->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__365->mCValueName));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj163=come_value3_402->type;
    come_value3_402->type=((void*)0);
    come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_402->var=((void*)0);
    list$1CVALUEph_push_back(come_params_397,(struct CVALUE*)come_increment_ref_count(come_value3_402));
    buffer_append_str(source_366,generics_fun_name_384);
    buffer_append_str(source_366,"(");
    j_403=0;
    for(    o2_saved_404=(struct list$1CVALUEph*)come_increment_ref_count((come_params_397)),it_405=list$1CVALUEph_begin((o2_saved_404));    !list$1CVALUEph_end((o2_saved_404));    it_405=list$1CVALUEph_next((o2_saved_404))    ){
        buffer_append_str(source_366,it_405->c_value);
        if(        j_403!=list$1CVALUEph_length(come_params_397)-1) {
            buffer_append_str(source_366,",");
        }
        j_403++;
    }
    come_call_finalizer3(o2_saved_404,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_366,")");
    buffer_append_str(source_366,")");
    come_value4_406=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 489, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj164=come_value4_406->c_value;
    come_value4_406->c_value=(char*)come_increment_ref_count(buffer_to_string(source_366));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj165=come_value4_406->type;
    come_value4_406->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_388));
    come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_406->type->mStatic=(_Bool)0;
    come_value4_406->var=((void*)0);
    if(    result_type_388->mHeap) {
        append_object_to_right_values2(come_value4_406,(struct sType*)come_increment_ref_count(result_type_388),info,(_Bool)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_406));
    add_come_last_code(info,"%s",come_value4_406->c_value);
    __result293__ = (_Bool)1;
    come_call_finalizer3(params_346,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_359,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_364 = come_decrement_ref_count2(var_name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_366,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_382,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_384 = come_decrement_ref_count2(generics_fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_391,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_392,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_393 = come_decrement_ref_count2(type_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_394 = come_decrement_ref_count2(finalizer_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_395 = come_decrement_ref_count2(cloner_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_396,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result293__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj129;
struct list$1sNodeph* __dec_obj130;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj129=self->sname;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj130=self->list_elements;
            come_call_finalizer3(__dec_obj130,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result273__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_347;
struct list_item$1CVALUEph* prev_it_348;
    it_347=self->head;
    while(it_347!=((void*)0)) {
        prev_it_348=it_347;
        it_347=it_347->next;
        come_call_finalizer3(prev_it_348,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj131;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj131=self->item;
            come_call_finalizer3(__dec_obj131,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value428 = (void*)0;
struct list_item$1sNodeph* litem_360;
struct sNode* __dec_obj134;
void* __right_value429 = (void*)0;
struct list_item$1sNodeph* litem_361;
struct sNode* __dec_obj135;
void* __right_value430 = (void*)0;
struct list_item$1sNodeph* litem_362;
struct sNode* __dec_obj136;
struct list$1sNodeph* __result276__;
    if(    self->len==0) {
        litem_360=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value428=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1304, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_360->prev=((void*)0);
        litem_360->next=((void*)0);
        __dec_obj134=litem_360->item;
        litem_360->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_360;
        self->head=litem_360;
    }
    else if(    self->len==1) {
        litem_361=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value429=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1314, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_361->prev=self->head;
        litem_361->next=((void*)0);
        __dec_obj135=litem_361->item;
        litem_361->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_361;
        self->head->next=litem_361;
    }
    else {
        litem_362=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value430=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1324, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_362->prev=self->tail;
        litem_362->next=((void*)0);
        __dec_obj136=litem_362->item;
        litem_362->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_362;
        self->tail=litem_362;
    }
    self->len++;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_369;
struct CVALUE* __result277__;
struct CVALUE* __result278__;
struct CVALUE* result_370;
struct CVALUE* __result279__;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_369,0,sizeof(struct CVALUE*));
        __result277__ = gComeFunResultObject = __result_obj__ = result_369;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    self->it=self->head;
    if(    self->it) {
        __result278__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    memset(&result_370,0,sizeof(struct CVALUE*));
    __result279__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_372;
struct CVALUE* __result280__;
struct CVALUE* __result281__;
struct CVALUE* result_373;
struct CVALUE* __result282__;
result_372 = (void*)0;
result_373 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_372,0,sizeof(struct CVALUE*));
        __result280__ = gComeFunResultObject = __result_obj__ = result_372;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result281__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    memset(&result_373,0,sizeof(struct CVALUE*));
    __result282__ = gComeFunResultObject = __result_obj__ = result_373;
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_375;
int i_376;
struct CVALUE* __result283__;
struct CVALUE* default_value_377;
struct CVALUE* __result284__;
default_value_377 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_375=self->head;
    i_376=0;
    while(it_375!=((void*)0)) {
        if(        position==i_376) {
            __result283__ = gComeFunResultObject = __result_obj__ = it_375->item;
            gComeFunResultObject = (void*)0;
            return __result283__;
        }
        it_375=it_375->next;
        i_376++;
    }
    memset(&default_value_377,0,sizeof(struct CVALUE*));
    __result284__ = gComeFunResultObject = __result_obj__ = default_value_377;
    come_call_finalizer3(default_value_377,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value443 = (void*)0;
struct list_item$1sTypeph* litem_379;
struct sType* __dec_obj137;
void* __right_value444 = (void*)0;
struct list_item$1sTypeph* litem_380;
struct sType* __dec_obj138;
void* __right_value445 = (void*)0;
struct list_item$1sTypeph* litem_381;
struct sType* __dec_obj139;
struct list$1sTypeph* __result285__;
    if(    self->len==0) {
        litem_379=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value443=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1304, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_379->prev=((void*)0);
        litem_379->next=((void*)0);
        __dec_obj137=litem_379->item;
        litem_379->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_379;
        self->head=litem_379;
    }
    else if(    self->len==1) {
        litem_380=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value444=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1314, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_380->prev=self->head;
        litem_380->next=((void*)0);
        __dec_obj138=litem_380->item;
        litem_380->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_380;
        self->head->next=litem_380;
    }
    else {
        litem_381=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value445=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1324, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_381->prev=self->tail;
        litem_381->next=((void*)0);
        __dec_obj139=litem_381->item;
        litem_381->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_381;
        self->tail=litem_381;
    }
    self->len++;
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_386;
unsigned int it_387;
struct sFun* __result286__;
struct sFun* __result287__;
struct sFun* __result288__;
struct sFun* __result289__;
    hash_386=charp_get_hash_key(((char*)key))%self->size;
    it_387=hash_386;
    while((_Bool)1) {
        if(        self->item_existance[it_387]) {
            if(            charp_equals(self->keys[it_387],key)) {
                __result286__ = gComeFunResultObject = __result_obj__ = self->items[it_387];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result286__;
            }
            it_387++;
            if(            it_387>=self->size) {
                it_387=0;
            }
            else if(            it_387==hash_386) {
                __result287__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result287__;
            }
        }
        else {
            __result288__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result288__;
        }
    }
    __result289__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj140;
struct sType* __dec_obj141;
struct list$1sTypeph* __dec_obj142;
struct list$1charph* __dec_obj143;
struct list$1charph* __dec_obj144;
struct sType* __dec_obj145;
struct sBlock* __dec_obj146;
struct buffer* __dec_obj149;
struct buffer* __dec_obj150;
struct buffer* __dec_obj151;
struct buffer* __dec_obj152;
char* __dec_obj153;
char* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj140=self->mName;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj141=self->mResultType;
            come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj142=self->mParamTypes;
            come_call_finalizer3(__dec_obj142,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj143=self->mParamNames;
            come_call_finalizer3(__dec_obj143,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj144=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj144,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj145=self->mLambdaType;
            come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj146=self->mBlock;
            come_call_finalizer3(__dec_obj146,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj149=self->mSource;
            come_call_finalizer3(__dec_obj149,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj150=self->mSourceHead;
            come_call_finalizer3(__dec_obj150,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj151=self->mSourceHead2;
            come_call_finalizer3(__dec_obj151,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj152=self->mSourceDefer;
            come_call_finalizer3(__dec_obj152,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj153=self->mComeHeader;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj154=self->mDeclareSName;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj155=self->mAttribute;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj156=self->mFunAttribute;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj147;
struct sVarTable* __dec_obj148;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj147=self->mNodes;
            come_call_finalizer3(__dec_obj147,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj148=self->mVarTable;
            come_call_finalizer3(__dec_obj148,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_398;
int i_399;
struct sType* __result291__;
struct sType* default_value_400;
struct sType* __result292__;
default_value_400 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_398=self->head;
    i_399=0;
    while(it_398!=((void*)0)) {
        if(        position==i_399) {
            __result291__ = gComeFunResultObject = __result_obj__ = it_398->item;
            gComeFunResultObject = (void*)0;
            return __result291__;
        }
        it_398=it_398->next;
        i_399++;
    }
    memset(&default_value_400,0,sizeof(struct sType*));
    __result292__ = gComeFunResultObject = __result_obj__ = default_value_400;
    come_call_finalizer3(default_value_400,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value482 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj166;
struct sTupleNode* __result294__;
    ((struct sNodeBase*)(__right_value482=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value482,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj166=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj166,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value483 = (void*)0;
char* __result295__;
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value483=__builtin_string("sTupleNode")));
    __right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_409;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct list$1sTypeph* tuple_types_410;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1CVALUEph* tuple_values_411;
int n_412;
struct list$1tuple2$2charphsNodephph* o2_saved_413;
struct tuple2$2charphsNodeph* it_416;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* name_419=0;
struct sNode* node_420=0;
void* __right_value488 = (void*)0;
_Bool _if_conditional3;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sNode* value_node_421;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* exp_422;
_Bool Value_423;
_Bool __result302__;
_Bool Value_424;
_Bool __result303__;
void* __right_value493 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* type_427;
char* __dec_obj172;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* type_428;
struct list$1sTypeph* o2_saved_429;
struct sType* it_432;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct CVALUE* obj_value_435;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct buffer* num_string_436;
void* __right_value508 = (void*)0;
struct sType* type2_437;
void* __right_value509 = (void*)0;
char* type_name_438;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
char* __dec_obj173;
void* __right_value512 = (void*)0;
struct sType* type3_439;
void* __right_value513 = (void*)0;
struct sType* __dec_obj174;
void* __right_value514 = (void*)0;
struct sType* obj_type_440;
char* fun_name_441;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* generics_fun_name_442;
void* __right_value518 = (void*)0;
struct sFun* fun_443;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
char* __dec_obj175;
void* __right_value521 = (void*)0;
_Bool __result312__;
void* __right_value522 = (void*)0;
struct sType* result_type_444;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct list$1CVALUEph* come_params_445;
void* __right_value525 = (void*)0;
_Bool _if_conditional4;
void* __right_value526 = (void*)0;
int i_446;
struct list$1CVALUEph* o2_saved_447;
struct CVALUE* it_448;
void* __right_value527 = (void*)0;
struct CVALUE* come_value_449;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
_Bool _if_conditional5;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct buffer* buf_450;
int j_451;
struct list$1CVALUEph* o2_saved_452;
struct CVALUE* it_453;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct CVALUE* come_value2_454;
void* __right_value535 = (void*)0;
char* __dec_obj176;
void* __right_value536 = (void*)0;
struct sType* __dec_obj177;
_Bool __result313__;
    tuple_elements_409=self->tuple_elements;
    tuple_types_410=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 526, "struct list$1sTypeph*", (void*)0, (void*)0))));
    tuple_values_411=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 527, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    n_412=0;
    for(    o2_saved_413=(tuple_elements_409),it_416=list$1tuple2$2charphsNodephph_begin((o2_saved_413));    !list$1tuple2$2charphsNodephph_end((o2_saved_413));    it_416=list$1tuple2$2charphsNodephph_next((o2_saved_413))    ){
        multiple_assign_var1=it_416;
        name_419=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        node_420=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value488=node_420->kind(node_420->_protocol_obj))),"sWildCard"))),        (__right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional3) {
            value_node_421=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value489=xsprintf("Value"))),info));
            __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exp_422=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_421),(char*)come_increment_ref_count(xsprintf("v%d",n_412+1)),info));
            Value_423=node_compile(exp_422,info);
            if(            !Value_423) {
                __result302__ = (_Bool)0;
                if(value_node_421) { value_node_421 = come_decrement_ref_count2(value_node_421, ((struct sNode*)value_node_421)->finalize, ((struct sNode*)value_node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_422) { exp_422 = come_decrement_ref_count2(exp_422, ((struct sNode*)exp_422)->finalize, ((struct sNode*)exp_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
                name_419 = come_decrement_ref_count2(name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_420) { node_420 = come_decrement_ref_count2(node_420, ((struct sNode*)node_420)->finalize, ((struct sNode*)node_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_410,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_411,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result302__;
            }
            else {
            }
            if(value_node_421) { value_node_421 = come_decrement_ref_count2(value_node_421, ((struct sNode*)value_node_421)->finalize, ((struct sNode*)value_node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_422) { exp_422 = come_decrement_ref_count2(exp_422, ((struct sNode*)exp_422)->finalize, ((struct sNode*)exp_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_424=node_compile(node_420,info);
            if(            !Value_424) {
                __result303__ = (_Bool)0;
                name_419 = come_decrement_ref_count2(name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_420) { node_420 = come_decrement_ref_count2(node_420, ((struct sNode*)node_420)->finalize, ((struct sNode*)node_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_410,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_411,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result303__;
            }
            else {
            }
        }
        come_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_411,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_425)));
        type_427=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_425->type));
        __dec_obj172=type_427->mTupleName;
        type_427->mTupleName=(char*)come_increment_ref_count(name_419);
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1sTypeph_push_back(tuple_types_410,(struct sType*)come_increment_ref_count(type_427));
        n_412++;
        name_419 = come_decrement_ref_count2(name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_420) { node_420 = come_decrement_ref_count2(node_420, ((struct sNode*)node_420)->finalize, ((struct sNode*)node_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_428=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 557, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value501=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_410)))),(_Bool)0,info));
    __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_429=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_410)),it_432=list$1sTypeph_begin((o2_saved_429));    !list$1sTypeph_end((o2_saved_429));    it_432=list$1sTypeph_next((o2_saved_429))    ){
        list$1sTypeph_push_back(type_428->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value503=come_call_cloner(sType_clone, it_432))))));
        come_call_finalizer3(__right_value503,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_435=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 563, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_436=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 565, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_436,"1");
    type2_437=(struct sType*)come_increment_ref_count(solve_generics(type_428,type_428,info));
    type_name_438=(char*)come_increment_ref_count(make_type_name_string(type2_437,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj173=obj_value_435->c_value;
    obj_value_435->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",type_name_438,type_name_438,((char*)(__right_value510=buffer_to_string(num_string_436))),info->sname,info->sline,type_name_438));
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_439=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_437));
    type3_439->mPointerNum++;
    type3_439->mHeap=(_Bool)1;
    type2_437->mHeap=(_Bool)1;
    __dec_obj174=obj_value_435->type;
    obj_value_435->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_437));
    come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_435->type->mPointerNum++;
    obj_value_435->var=((void*)0);
    append_object_to_right_values2(obj_value_435,(struct sType*)come_increment_ref_count(type3_439),info,(_Bool)0);
    obj_type_440=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_437));
    fun_name_441="initialize";
    generics_fun_name_442=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value516=make_generics_function(obj_type_440,(char*)come_increment_ref_count(__builtin_string(fun_name_441)),info,(_Bool)1)))));
    __right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_443=((struct sFun*)(__right_value518=map$2charphsFunph_at(info->funcs,generics_fun_name_442,((void*)0))));
    come_call_finalizer3(__right_value518,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_443==((void*)0)) {
        __dec_obj175=generics_fun_name_442;
        generics_fun_name_442=(char*)come_increment_ref_count(create_method_name(obj_type_440,(_Bool)0,((char*)(__right_value519=__builtin_string(fun_name_441))),info,(_Bool)1));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_443=((struct sFun*)(__right_value521=map$2charphsFunph_at(info->funcs,generics_fun_name_442,((void*)0))));
        come_call_finalizer3(__right_value521,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_443==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_442,info->come_fun->mName);
            __result312__ = (_Bool)1;
            come_call_finalizer3(tuple_types_410,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_411,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_436,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_438 = come_decrement_ref_count2(type_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_439,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_442 = come_decrement_ref_count2(generics_fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result312__;
        }
    }
    result_type_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_443->mResultType));
    result_type_444->mStatic=(_Bool)0;
    come_params_445=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 618, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value525=list$1sTypephp_operator_load_element(fun_443->mParamTypes,0))), "06str.c", 620, 5))->mHeap&&obj_value_435->type->mHeap)),    come_call_finalizer3(__right_value525,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value526=list$1sTypephp_operator_load_element(fun_443->mParamTypes,0))), "06str.c", 621, 6)),obj_value_435->type,obj_value_435,info,(_Bool)1);
        come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_445,(struct CVALUE*)come_increment_ref_count(obj_value_435));
    i_446=1;
    for(    o2_saved_447=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_411)),it_448=list$1CVALUEph_begin((o2_saved_447));    !list$1CVALUEph_end((o2_saved_447));    it_448=list$1CVALUEph_next((o2_saved_447))    ){
        come_value_449=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_448));
        if(        (_if_conditional5=(((struct sType*)come_null_check(((struct sType*)(__right_value528=list$1sTypephp_operator_load_element(fun_443->mParamTypes,i_446))), "06str.c", 629, 7))&&((struct sType*)come_null_check(((struct sType*)(__right_value529=list$1sTypephp_operator_load_element(fun_443->mParamTypes,i_446))), "06str.c", 629, 8))->mHeap&&come_value_449->type->mHeap)),        come_call_finalizer3(__right_value528,sType_finalize, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value529,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional5) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value530=list$1sTypephp_operator_load_element(fun_443->mParamTypes,i_446))), "06str.c", 630, 9)),come_value_449->type,come_value_449,info,(_Bool)1);
            come_call_finalizer3(__right_value530,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(come_params_445,(struct CVALUE*)come_increment_ref_count(come_value_449));
        i_446++;
        come_call_finalizer3(come_value_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_447,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_450=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 637, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_450,generics_fun_name_442);
    buffer_append_str(buf_450,"(");
    j_451=0;
    for(    o2_saved_452=(struct list$1CVALUEph*)come_increment_ref_count((come_params_445)),it_453=list$1CVALUEph_begin((o2_saved_452));    !list$1CVALUEph_end((o2_saved_452));    it_453=list$1CVALUEph_next((o2_saved_452))    ){
        buffer_append_str(buf_450,it_453->c_value);
        if(        j_451!=list$1CVALUEph_length(come_params_445)-1) {
            buffer_append_str(buf_450,",");
        }
        j_451++;
    }
    come_call_finalizer3(o2_saved_452,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_450,")");
    come_value2_454=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 654, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj176=come_value2_454->c_value;
    come_value2_454->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_450));
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj177=come_value2_454->type;
    come_value2_454->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_444));
    come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_454->type->mStatic=(_Bool)0;
    come_value2_454->var=((void*)0);
    if(    result_type_444->mHeap) {
        append_object_to_right_values2(come_value2_454,(struct sType*)come_increment_ref_count(result_type_444),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_454->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_454));
    __result313__ = (_Bool)1;
    come_call_finalizer3(tuple_types_410,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_411,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_436,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_438 = come_decrement_ref_count2(type_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_439,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_442 = come_decrement_ref_count2(generics_fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_445,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_450,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result313__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_407;
struct list_item$1tuple2$2charphsNodephph* prev_it_408;
    it_407=self->head;
    while(it_407!=((void*)0)) {
        prev_it_408=it_407;
        it_407=it_407->next;
        come_call_finalizer3(prev_it_408,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj167;
struct list$1tuple2$2charphsNodephph* __dec_obj168;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj167=self->sname;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj168=self->tuple_elements;
            come_call_finalizer3(__dec_obj168,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_414;
struct tuple2$2charphsNodeph* __result296__;
struct tuple2$2charphsNodeph* __result297__;
struct tuple2$2charphsNodeph* result_415;
struct tuple2$2charphsNodeph* __result298__;
result_414 = (void*)0;
result_415 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_414,0,sizeof(struct tuple2$2charphsNodeph*));
        __result296__ = gComeFunResultObject = __result_obj__ = result_414;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    self->it=self->head;
    if(    self->it) {
        __result297__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    memset(&result_415,0,sizeof(struct tuple2$2charphsNodeph*));
    __result298__ = gComeFunResultObject = __result_obj__ = result_415;
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_417;
struct tuple2$2charphsNodeph* __result299__;
struct tuple2$2charphsNodeph* __result300__;
struct tuple2$2charphsNodeph* result_418;
struct tuple2$2charphsNodeph* __result301__;
result_417 = (void*)0;
result_418 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_417,0,sizeof(struct tuple2$2charphsNodeph*));
        __result299__ = gComeFunResultObject = __result_obj__ = result_417;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result300__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    memset(&result_418,0,sizeof(struct tuple2$2charphsNodeph*));
    __result301__ = gComeFunResultObject = __result_obj__ = result_418;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result304__;
void* __right_value494 = (void*)0;
struct CVALUE* result_426;
void* __right_value495 = (void*)0;
char* __dec_obj169;
void* __right_value496 = (void*)0;
struct sType* __dec_obj170;
void* __right_value497 = (void*)0;
char* __dec_obj171;
struct CVALUE* __result305__;
    if(    self==(void*)0) {
        __result304__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    result_426=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj169=result_426->c_value;
        result_426->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj170=result_426->type;
        result_426->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_426->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_426->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj171=result_426->c_value_without_right_value_objects;
        result_426->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result305__ = gComeFunResultObject = __result_obj__ = result_426;
    come_call_finalizer3(result_426,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_430;
struct sType* __result306__;
struct sType* __result307__;
struct sType* result_431;
struct sType* __result308__;
result_430 = (void*)0;
result_431 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_430,0,sizeof(struct sType*));
        __result306__ = gComeFunResultObject = __result_obj__ = result_430;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    self->it=self->head;
    if(    self->it) {
        __result307__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    memset(&result_431,0,sizeof(struct sType*));
    __result308__ = gComeFunResultObject = __result_obj__ = result_431;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_433;
struct sType* __result309__;
struct sType* __result310__;
struct sType* result_434;
struct sType* __result311__;
result_433 = (void*)0;
result_434 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_433,0,sizeof(struct sType*));
        __result309__ = gComeFunResultObject = __result_obj__ = result_433;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result310__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    memset(&result_434,0,sizeof(struct sType*));
    __result311__ = gComeFunResultObject = __result_obj__ = result_434;
    gComeFunResultObject = (void*)0;
    return __result311__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value537 = (void*)0;
struct list$1sNodeph* __dec_obj178;
struct sSomeNode* __result314__;
    ((struct sNodeBase*)(__right_value537=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value537,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj178=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj178,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value538 = (void*)0;
char* __result315__;
    __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value538=__builtin_string("sSomeNode")));
    __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_455;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1sTypeph* tuple_types_456;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1CVALUEph* tuple_values_457;
struct list$1sNodeph* o2_saved_458;
struct sNode* it_459;
_Bool Value_460;
_Bool __result316__;
void* __right_value543 = (void*)0;
struct CVALUE* come_value_461;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sType* type_462;
struct list$1sTypeph* o2_saved_463;
struct sType* it_464;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct CVALUE* obj_value_465;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct buffer* num_string_466;
void* __right_value554 = (void*)0;
struct sType* type2_467;
void* __right_value555 = (void*)0;
char* type_name_468;
void* __right_value556 = (void*)0;
char* finalizer_name_469;
void* __right_value557 = (void*)0;
char* cloner_name_470;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
char* __dec_obj181;
void* __right_value560 = (void*)0;
struct sType* type3_471;
void* __right_value561 = (void*)0;
struct sType* __dec_obj182;
void* __right_value562 = (void*)0;
struct sType* obj_type_472;
char* fun_name_473;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
char* generics_fun_name_474;
void* __right_value566 = (void*)0;
struct sFun* fun_475;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
char* __dec_obj183;
void* __right_value569 = (void*)0;
_Bool __result317__;
void* __right_value570 = (void*)0;
struct sType* result_type_476;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct list$1CVALUEph* come_params_477;
void* __right_value573 = (void*)0;
_Bool _if_conditional6;
void* __right_value574 = (void*)0;
int i_478;
struct list$1CVALUEph* o2_saved_479;
struct CVALUE* it_480;
void* __right_value575 = (void*)0;
struct CVALUE* come_value_481;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
_Bool _if_conditional7;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct buffer* buf_482;
int j_483;
struct list$1CVALUEph* o2_saved_484;
struct CVALUE* it_485;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct CVALUE* come_value2_486;
void* __right_value583 = (void*)0;
char* __dec_obj184;
void* __right_value584 = (void*)0;
struct sType* __dec_obj185;
_Bool __result318__;
    tuple_elements_455=self->tuple_elements;
    tuple_types_456=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 691, "struct list$1sTypeph*", (void*)0, (void*)0))));
    tuple_values_457=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 692, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    o2_saved_458=(tuple_elements_455),it_459=list$1sNodeph_begin((o2_saved_458));    !list$1sNodeph_end((o2_saved_458));    it_459=list$1sNodeph_next((o2_saved_458))    ){
        Value_460=node_compile(it_459,info);
        if(        !Value_460) {
            __result316__ = (_Bool)0;
            come_call_finalizer3(tuple_types_456,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_457,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result316__;
        }
        else {
        }
        come_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_457,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_461)));
        list$1sTypeph_push_back(tuple_types_456,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_461->type)));
        come_call_finalizer3(come_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_462=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 706, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value547=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_456)))),(_Bool)0,info));
    __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_463=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_456)),it_464=list$1sTypeph_begin((o2_saved_463));    !list$1sTypeph_end((o2_saved_463));    it_464=list$1sTypeph_next((o2_saved_463))    ){
        list$1sTypeph_push_back(type_462->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value549=come_call_cloner(sType_clone, it_464))))));
        come_call_finalizer3(__right_value549,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_463,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_465=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 712, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_466=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 714, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_466,"1");
    type2_467=(struct sType*)come_increment_ref_count(solve_generics(type_462,type_462,info));
    type_name_468=(char*)come_increment_ref_count(make_type_name_string(type2_467,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_469=(char*)come_increment_ref_count(create_method_name(type2_467,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_470=(char*)come_increment_ref_count(create_method_name(type2_467,(_Bool)0,"clone",info,(_Bool)1));
    __dec_obj181=obj_value_465->c_value;
    obj_value_465->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",type_name_468,type_name_468,((char*)(__right_value558=buffer_to_string(num_string_466))),info->sname,info->sline,type_name_468));
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_471=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_467));
    type3_471->mPointerNum++;
    type3_471->mHeap=(_Bool)1;
    type2_467->mHeap=(_Bool)1;
    __dec_obj182=obj_value_465->type;
    obj_value_465->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_467));
    come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_465->type->mPointerNum++;
    obj_value_465->var=((void*)0);
    append_object_to_right_values2(obj_value_465,(struct sType*)come_increment_ref_count(type3_471),info,(_Bool)0);
    obj_type_472=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_467));
    fun_name_473="initialize";
    generics_fun_name_474=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value564=make_generics_function(obj_type_472,(char*)come_increment_ref_count(__builtin_string(fun_name_473)),info,(_Bool)1)))));
    __right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_475=((struct sFun*)(__right_value566=map$2charphsFunph_at(info->funcs,generics_fun_name_474,((void*)0))));
    come_call_finalizer3(__right_value566,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_475==((void*)0)) {
        __dec_obj183=generics_fun_name_474;
        generics_fun_name_474=(char*)come_increment_ref_count(create_method_name(obj_type_472,(_Bool)0,((char*)(__right_value567=__builtin_string(fun_name_473))),info,(_Bool)1));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_475=((struct sFun*)(__right_value569=map$2charphsFunph_at(info->funcs,generics_fun_name_474,((void*)0))));
        come_call_finalizer3(__right_value569,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_475==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_474,info->come_fun->mName);
            __result317__ = (_Bool)1;
            come_call_finalizer3(tuple_types_456,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_457,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_466,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_467,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_468 = come_decrement_ref_count2(type_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_469 = come_decrement_ref_count2(finalizer_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_470 = come_decrement_ref_count2(cloner_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_471,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_472,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_474 = come_decrement_ref_count2(generics_fun_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result317__;
        }
    }
    result_type_476=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_475->mResultType));
    result_type_476->mStatic=(_Bool)0;
    come_params_477=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 767, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional6=(((struct sType*)come_null_check(((struct sType*)(__right_value573=list$1sTypephp_operator_load_element(fun_475->mParamTypes,0))), "06str.c", 769, 10))->mHeap&&obj_value_465->type->mHeap)),    come_call_finalizer3(__right_value573,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional6) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value574=list$1sTypephp_operator_load_element(fun_475->mParamTypes,0))), "06str.c", 770, 11)),obj_value_465->type,obj_value_465,info,(_Bool)1);
        come_call_finalizer3(__right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_477,(struct CVALUE*)come_increment_ref_count(obj_value_465));
    i_478=1;
    for(    o2_saved_479=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_457)),it_480=list$1CVALUEph_begin((o2_saved_479));    !list$1CVALUEph_end((o2_saved_479));    it_480=list$1CVALUEph_next((o2_saved_479))    ){
        come_value_481=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_480));
        if(        (_if_conditional7=(((struct sType*)come_null_check(((struct sType*)(__right_value576=list$1sTypephp_operator_load_element(fun_475->mParamTypes,i_478))), "06str.c", 778, 12))&&((struct sType*)come_null_check(((struct sType*)(__right_value577=list$1sTypephp_operator_load_element(fun_475->mParamTypes,i_478))), "06str.c", 778, 13))->mHeap&&come_value_481->type->mHeap)),        come_call_finalizer3(__right_value576,sType_finalize, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value577,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional7) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value578=list$1sTypephp_operator_load_element(fun_475->mParamTypes,i_478))), "06str.c", 779, 14)),come_value_481->type,come_value_481,info,(_Bool)1);
            come_call_finalizer3(__right_value578,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(come_params_477,(struct CVALUE*)come_increment_ref_count(come_value_481));
        i_478++;
        come_call_finalizer3(come_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_479,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_482=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 786, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_482,generics_fun_name_474);
    buffer_append_str(buf_482,"(");
    j_483=0;
    for(    o2_saved_484=(struct list$1CVALUEph*)come_increment_ref_count((come_params_477)),it_485=list$1CVALUEph_begin((o2_saved_484));    !list$1CVALUEph_end((o2_saved_484));    it_485=list$1CVALUEph_next((o2_saved_484))    ){
        buffer_append_str(buf_482,it_485->c_value);
        if(        j_483!=list$1CVALUEph_length(come_params_477)-1) {
            buffer_append_str(buf_482,",");
        }
        j_483++;
    }
    come_call_finalizer3(o2_saved_484,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_482,")");
    come_value2_486=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 803, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj184=come_value2_486->c_value;
    come_value2_486->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_482));
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj185=come_value2_486->type;
    come_value2_486->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_476));
    come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_486->type->mStatic=(_Bool)0;
    come_value2_486->var=((void*)0);
    if(    result_type_476->mHeap) {
        append_object_to_right_values2(come_value2_486,(struct sType*)come_increment_ref_count(result_type_476),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_486->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_486));
    __result318__ = (_Bool)1;
    come_call_finalizer3(tuple_types_456,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_457,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_466,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_467,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_468 = come_decrement_ref_count2(type_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_469 = come_decrement_ref_count2(finalizer_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_470 = come_decrement_ref_count2(cloner_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_471,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_472,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_474 = come_decrement_ref_count2(generics_fun_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_477,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_482,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result318__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj179;
struct list$1sNodeph* __dec_obj180;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj179=self->sname;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj180=self->tuple_elements;
            come_call_finalizer3(__dec_obj180,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value585 = (void*)0;
struct sNullReturnValue* __result319__;
    ((struct sNodeBase*)(__right_value585=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value585,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value586 = (void*)0;
char* __result320__;
    __result320__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value586=__builtin_string("sNullReturnValue")));
    __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct CVALUE* come_value_487;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct buffer* buf_488;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
char* var_name_490;
void* __right_value593 = (void*)0;
struct sType* result_type_491;
void* __right_value594 = (void*)0;
struct sType* result_type2_492;
struct sType* left_type_493;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct CVALUE* come_value2_494;
char* __dec_obj187;
struct sType* __dec_obj188;
    if(    info->come_fun) {
        come_value_487=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 838, "struct CVALUE*", (void*)0, (void*)0))));
        buf_488=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 840, "struct buffer*", (void*)0, (void*)0))));
        static int num_489=0;
        num_489++;
        var_name_490=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value591=int_to_string(num_489)))));
        __right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_491=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_492=(struct sType*)come_increment_ref_count(solve_generics(result_type_491,info->generics_type,info));
        left_type_493=(struct sType*)come_increment_ref_count(result_type2_492);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value595=make_define_var(left_type_493,var_name_490,(_Bool)0,info))));
        __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_490,((char*)(__right_value596=make_type_name_string(left_type_493,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_494=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 856, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj187=come_value2_494->c_value;
        come_value2_494->c_value=(char*)come_increment_ref_count(var_name_490);
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj188=come_value2_494->type;
        come_value2_494->type=(struct sType*)come_increment_ref_count(result_type2_492);
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_494->type->mStatic=(_Bool)0;
        come_value2_494->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_494));
        come_call_finalizer3(come_value_487,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_488,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_490 = come_decrement_ref_count2(var_name_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_491,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_492,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_493,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_494,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj186;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj186=self->sname;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value603 = (void*)0;
struct sNode* __result323__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 873, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value600=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 873, "struct sNullReturnValue*", (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result323__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value603=_inf_value2));
    come_call_finalizer3(__right_value600,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value603) { __right_value603 = come_decrement_ref_count2(__right_value603, ((struct sNode*)__right_value603)->finalize, ((struct sNode*)__right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result321__;
void* __right_value601 = (void*)0;
struct sNullReturnValue* result_495;
void* __right_value602 = (void*)0;
char* __dec_obj189;
struct sNullReturnValue* __result322__;
    if(    self==(void*)0) {
        __result321__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    result_495=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_495->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj189=result_495->sname;
        result_495->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_495->sline_real=self->sline_real;
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_495;
    come_call_finalizer3(result_495,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value604 = (void*)0;
struct sNullReturnValueOfException* __result324__;
    ((struct sNodeBase*)(__right_value604=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value604,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value605 = (void*)0;
char* __result325__;
    __result325__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value605=__builtin_string("sNullReturnValue")));
    __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct CVALUE* come_value_496;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct buffer* buf_497;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
char* var_name_499;
void* __right_value612 = (void*)0;
struct sType* result_type_500;
void* __right_value613 = (void*)0;
struct sType* result_type2_501;
struct sType* __dec_obj191;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* left_type_502;
_Bool __result326__;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct CVALUE* come_value2_503;
char* __dec_obj192;
struct sType* __dec_obj193;
    if(    info->come_fun) {
        come_value_496=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 891, "struct CVALUE*", (void*)0, (void*)0))));
        buf_497=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 893, "struct buffer*", (void*)0, (void*)0))));
        static int num_498=0;
        num_498++;
        var_name_499=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value610=int_to_string(num_498)))));
        __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_500=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_501=(struct sType*)come_increment_ref_count(solve_generics(result_type_500,info->generics_type,info));
        if(        result_type2_501->mNoSolvedGenericsType->v1) {
            __dec_obj191=result_type2_501;
            result_type2_501=(struct sType*)come_increment_ref_count(result_type2_501->mNoSolvedGenericsType->v1);
            come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_502=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value614=list$1sTypephp_operator_load_element(result_type2_501->mGenericsTypes,0)))));
        come_call_finalizer3(__right_value614,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        left_type_502==((void*)0)||string_operator_not_equals(result_type2_501->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result326__ = (_Bool)0;
            come_call_finalizer3(come_value_496,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_497,buffer_finalize, 0, 0, 0, 0, (void*)0);
            var_name_499 = come_decrement_ref_count2(var_name_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result326__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value616=make_define_var(left_type_502,var_name_499,(_Bool)0,info))));
        __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_499,((char*)(__right_value617=make_type_name_string(left_type_502,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_503=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 918, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj192=come_value2_503->c_value;
        come_value2_503->c_value=(char*)come_increment_ref_count(var_name_499);
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj193=come_value2_503->type;
        come_value2_503->type=(struct sType*)come_increment_ref_count(left_type_502);
        come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_503->type->mStatic=(_Bool)0;
        come_value2_503->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_503));
        come_call_finalizer3(come_value_496,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_497,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_499 = come_decrement_ref_count2(var_name_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_503,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj190;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj190=self->sname;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value624 = (void*)0;
struct sNode* __result329__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 935, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value621=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 935, "struct sNullReturnValueOfException*", (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result329__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value624=_inf_value3));
    come_call_finalizer3(__right_value621,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value624) { __right_value624 = come_decrement_ref_count2(__right_value624, ((struct sNode*)__right_value624)->finalize, ((struct sNode*)__right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result327__;
void* __right_value622 = (void*)0;
struct sNullReturnValueOfException* result_504;
void* __right_value623 = (void*)0;
char* __dec_obj194;
struct sNullReturnValueOfException* __result328__;
    if(    self==(void*)0) {
        __result327__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    result_504=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_504->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj194=result_504->sname;
        result_504->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_504->sline_real=self->sline_real;
    }
    __result328__ = gComeFunResultObject = __result_obj__ = result_504;
    come_call_finalizer3(result_504,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value625 = (void*)0;
struct sType* __dec_obj195;
struct sNullValue* __result330__;
    ((struct sNodeBase*)(__right_value625=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value625,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj195=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value626 = (void*)0;
char* __result331__;
    __result331__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value626=__builtin_string("sNullValue")));
    __right_value626 = come_decrement_ref_count2(__right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct buffer* buf_506;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
char* var_name_508;
struct sType* left_type_509;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct CVALUE* come_value2_510;
char* __dec_obj198;
struct sType* __dec_obj199;
_Bool __result332__;
    come_value_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 954, "struct CVALUE*", (void*)0, (void*)0))));
    buf_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 956, "struct buffer*", (void*)0, (void*)0))));
    static int num_507=0;
    num_507++;
    var_name_508=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value631=int_to_string(num_507)))));
    __right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_509=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value633=make_define_var(left_type_509,var_name_508,(_Bool)0,info))));
    __right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_508,((char*)(__right_value634=make_type_name_string(left_type_509,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    __right_value634 = come_decrement_ref_count2(__right_value634, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_510=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 968, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj198=come_value2_510->c_value;
    come_value2_510->c_value=(char*)come_increment_ref_count(var_name_508);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj199=come_value2_510->type;
    come_value2_510->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_510->type->mStatic=(_Bool)0;
    come_value2_510->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_510));
    __result332__ = (_Bool)1;
    come_call_finalizer3(come_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
    var_name_508 = come_decrement_ref_count2(var_name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result332__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj196;
struct sType* __dec_obj197;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj196=self->sname;
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj197=self->type;
            come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value642 = (void*)0;
struct sNode* __result335__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 984, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value638=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 984, "struct sNullValue*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result335__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value642=_inf_value4));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value638,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value642) { __right_value642 = come_decrement_ref_count2(__right_value642, ((struct sNode*)__right_value642)->finalize, ((struct sNode*)__right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result333__;
void* __right_value639 = (void*)0;
struct sNullValue* result_511;
void* __right_value640 = (void*)0;
char* __dec_obj200;
void* __right_value641 = (void*)0;
struct sType* __dec_obj201;
struct sNullValue* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_511=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_511->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_511->sname;
        result_511->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_511->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj201=result_511->type;
        result_511->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_511;
    come_call_finalizer3(result_511,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value643 = (void*)0;
struct list$1sNodeph* __dec_obj202;
struct sNoneNode* __result336__;
    ((struct sNodeBase*)(__right_value643=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value643,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj202=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj202,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value644 = (void*)0;
char* __result337__;
    __result337__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value644=__builtin_string("sNoneNode")));
    __right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_512;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct list$1sTypeph* tuple_types_513;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1CVALUEph* tuple_values_514;
int i_515;
struct list$1sNodeph* o2_saved_516;
struct sNode* it_517;
_Bool Value_518;
_Bool __result338__;
void* __right_value649 = (void*)0;
struct CVALUE* come_value_519;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sType* string_type_520;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sType* type_521;
struct list$1sTypeph* o2_saved_522;
struct sType* it_523;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct CVALUE* obj_value_524;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct buffer* num_string_525;
void* __right_value663 = (void*)0;
struct sType* type2_526;
void* __right_value664 = (void*)0;
char* type_name_527;
void* __right_value665 = (void*)0;
char* finalizer_name_528;
void* __right_value666 = (void*)0;
char* cloner_name_529;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
char* __dec_obj205;
void* __right_value669 = (void*)0;
struct sType* type3_530;
void* __right_value670 = (void*)0;
struct sType* __dec_obj206;
void* __right_value671 = (void*)0;
struct sType* obj_type_531;
char* fun_name_532;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
char* generics_fun_name_533;
void* __right_value675 = (void*)0;
struct sFun* fun_534;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
char* __dec_obj207;
void* __right_value678 = (void*)0;
_Bool __result339__;
void* __right_value679 = (void*)0;
struct sType* result_type_535;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1CVALUEph* come_params_536;
void* __right_value682 = (void*)0;
_Bool _if_conditional8;
void* __right_value683 = (void*)0;
struct list$1CVALUEph* o2_saved_537;
struct CVALUE* it_538;
void* __right_value684 = (void*)0;
struct CVALUE* come_value_539;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
_Bool _if_conditional9;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct buffer* buf_540;
int j_541;
struct list$1CVALUEph* o2_saved_542;
struct CVALUE* it_543;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct CVALUE* come_value2_544;
void* __right_value692 = (void*)0;
char* __dec_obj208;
void* __right_value693 = (void*)0;
struct sType* __dec_obj209;
_Bool __result340__;
    tuple_elements_512=self->tuple_elements;
    tuple_types_513=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1004, "struct list$1sTypeph*", (void*)0, (void*)0))));
    tuple_values_514=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1005, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    i_515=0;
    for(    o2_saved_516=(tuple_elements_512),it_517=list$1sNodeph_begin((o2_saved_516));    !list$1sNodeph_end((o2_saved_516));    it_517=list$1sNodeph_next((o2_saved_516))    ){
        Value_518=node_compile(it_517,info);
        if(        !Value_518) {
            __result338__ = (_Bool)0;
            come_call_finalizer3(tuple_types_513,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result338__;
        }
        else {
        }
        come_value_519=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_514,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_519)));
        list$1sTypeph_push_back(tuple_types_513,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_519->type)));
        if(        i_515==1) {
            string_type_520=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1020, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
            string_type_520->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value654=xsprintf("invalid none type"))),string_type_520,come_value_519->type,come_value_519,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value654 = come_decrement_ref_count2(__right_value654, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(string_type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_515++;
        come_call_finalizer3(come_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_521=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1028, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value656=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_513)))),(_Bool)0,info));
    __right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_522=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_513)),it_523=list$1sTypeph_begin((o2_saved_522));    !list$1sTypeph_end((o2_saved_522));    it_523=list$1sTypeph_next((o2_saved_522))    ){
        list$1sTypeph_push_back(type_521->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value658=come_call_cloner(sType_clone, it_523))))));
        come_call_finalizer3(__right_value658,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_522,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_524=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1034, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_525=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1036, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_525,"1");
    type2_526=(struct sType*)come_increment_ref_count(solve_generics(type_521,type_521,info));
    type_name_527=(char*)come_increment_ref_count(make_type_name_string(type2_526,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_528=(char*)come_increment_ref_count(create_method_name(type2_526,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_529=(char*)come_increment_ref_count(create_method_name(type2_526,(_Bool)0,"clone",info,(_Bool)1));
    __dec_obj205=obj_value_524->c_value;
    obj_value_524->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",type_name_527,type_name_527,((char*)(__right_value667=buffer_to_string(num_string_525))),info->sname,info->sline,type_name_527));
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value667 = come_decrement_ref_count2(__right_value667, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_530=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_526));
    type3_530->mPointerNum++;
    type3_530->mHeap=(_Bool)1;
    type2_526->mHeap=(_Bool)1;
    __dec_obj206=obj_value_524->type;
    obj_value_524->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_526));
    come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_524->type->mPointerNum++;
    obj_value_524->var=((void*)0);
    append_object_to_right_values2(obj_value_524,(struct sType*)come_increment_ref_count(type3_530),info,(_Bool)0);
    obj_type_531=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_526));
    fun_name_532="initialize";
    generics_fun_name_533=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value673=make_generics_function(obj_type_531,(char*)come_increment_ref_count(__builtin_string(fun_name_532)),info,(_Bool)1)))));
    __right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_534=((struct sFun*)(__right_value675=map$2charphsFunph_at(info->funcs,generics_fun_name_533,((void*)0))));
    come_call_finalizer3(__right_value675,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_534==((void*)0)) {
        __dec_obj207=generics_fun_name_533;
        generics_fun_name_533=(char*)come_increment_ref_count(create_method_name(obj_type_531,(_Bool)0,((char*)(__right_value676=__builtin_string(fun_name_532))),info,(_Bool)1));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_534=((struct sFun*)(__right_value678=map$2charphsFunph_at(info->funcs,generics_fun_name_533,((void*)0))));
        come_call_finalizer3(__right_value678,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_534==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_533,info->come_fun->mName);
            __result339__ = (_Bool)1;
            come_call_finalizer3(tuple_types_513,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_524,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_526,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_527 = come_decrement_ref_count2(type_name_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_528 = come_decrement_ref_count2(finalizer_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_529 = come_decrement_ref_count2(cloner_name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_530,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_533 = come_decrement_ref_count2(generics_fun_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result339__;
        }
    }
    result_type_535=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_534->mResultType));
    result_type_535->mStatic=(_Bool)0;
    come_params_536=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1089, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional8=(((struct sType*)come_null_check(((struct sType*)(__right_value682=list$1sTypephp_operator_load_element(fun_534->mParamTypes,0))), "06str.c", 1091, 15))->mHeap&&obj_value_524->type->mHeap)),    come_call_finalizer3(__right_value682,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional8) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value683=list$1sTypephp_operator_load_element(fun_534->mParamTypes,0))), "06str.c", 1092, 16)),obj_value_524->type,obj_value_524,info,(_Bool)1);
        come_call_finalizer3(__right_value683,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_536,(struct CVALUE*)come_increment_ref_count(obj_value_524));
    i_515=1;
    for(    o2_saved_537=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_514)),it_538=list$1CVALUEph_begin((o2_saved_537));    !list$1CVALUEph_end((o2_saved_537));    it_538=list$1CVALUEph_next((o2_saved_537))    ){
        come_value_539=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_538));
        if(        (_if_conditional9=(((struct sType*)come_null_check(((struct sType*)(__right_value685=list$1sTypephp_operator_load_element(fun_534->mParamTypes,i_515))), "06str.c", 1100, 17))&&((struct sType*)come_null_check(((struct sType*)(__right_value686=list$1sTypephp_operator_load_element(fun_534->mParamTypes,i_515))), "06str.c", 1100, 18))->mHeap&&come_value_539->type->mHeap)),        come_call_finalizer3(__right_value685,sType_finalize, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value686,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional9) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value687=list$1sTypephp_operator_load_element(fun_534->mParamTypes,i_515))), "06str.c", 1101, 19)),come_value_539->type,come_value_539,info,(_Bool)1);
            come_call_finalizer3(__right_value687,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(come_params_536,(struct CVALUE*)come_increment_ref_count(come_value_539));
        i_515++;
        come_call_finalizer3(come_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_537,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_540=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1108, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_540,generics_fun_name_533);
    buffer_append_str(buf_540,"(");
    j_541=0;
    for(    o2_saved_542=(struct list$1CVALUEph*)come_increment_ref_count((come_params_536)),it_543=list$1CVALUEph_begin((o2_saved_542));    !list$1CVALUEph_end((o2_saved_542));    it_543=list$1CVALUEph_next((o2_saved_542))    ){
        buffer_append_str(buf_540,it_543->c_value);
        if(        j_541!=list$1CVALUEph_length(come_params_536)-1) {
            buffer_append_str(buf_540,",");
        }
        j_541++;
    }
    come_call_finalizer3(o2_saved_542,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_540,")");
    come_value2_544=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1125, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj208=come_value2_544->c_value;
    come_value2_544->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_540));
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj209=come_value2_544->type;
    come_value2_544->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_535));
    come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_544->type->mStatic=(_Bool)0;
    come_value2_544->var=((void*)0);
    if(    result_type_535->mHeap) {
        append_object_to_right_values2(come_value2_544,(struct sType*)come_increment_ref_count(result_type_535),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_544->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_544));
    __result340__ = (_Bool)1;
    come_call_finalizer3(tuple_types_513,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_524,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_526,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_527 = come_decrement_ref_count2(type_name_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_528 = come_decrement_ref_count2(finalizer_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_529 = come_decrement_ref_count2(cloner_name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_530,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_533 = come_decrement_ref_count2(generics_fun_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_535,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_536,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_540,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_544,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result340__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj203;
struct list$1sNodeph* __dec_obj204;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj203=self->sname;
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj204=self->tuple_elements;
            come_call_finalizer3(__dec_obj204,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value694 = (void*)0;
struct list$1sNodeph* __dec_obj210;
struct list$1sNodeph* __dec_obj211;
struct sMapNode* __result341__;
    ((struct sNodeBase*)(__right_value694=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value694,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj210=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj210,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj211=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj211,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value695 = (void*)0;
char* __result342__;
    __result342__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value695=__builtin_string("sMapNode")));
    __right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_545;
struct list$1sNodeph* map_elements_546;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1CVALUEph* key_params_547;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct list$1CVALUEph* element_params_548;
struct sType* map_key_type_549;
struct sType* map_element_type_550;
int i_551;
void* __right_value700 = (void*)0;
struct sNode* key_elements_552;
void* __right_value701 = (void*)0;
struct sNode* elements_556;
void* __right_value702 = (void*)0;
_Bool _if_conditional10;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* value_node_557;
struct sNode* exp_558;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_559;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sNode* __dec_obj215;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_560;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sNode* __dec_obj216;
void* __right_value723 = (void*)0;
struct sNode* __dec_obj217;
_Bool Value_561;
_Bool __result345__;
void* __right_value724 = (void*)0;
struct CVALUE* come_value_562;
void* __right_value725 = (void*)0;
struct sType* __dec_obj218;
_Bool Value_563;
_Bool __result346__;
void* __right_value726 = (void*)0;
struct CVALUE* come_value_564;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sType* __dec_obj219;
void* __right_value729 = (void*)0;
_Bool _if_conditional11;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* value_node_565;
struct sNode* exp2_566;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_567;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj220;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_568;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* __dec_obj221;
void* __right_value750 = (void*)0;
struct sNode* __dec_obj222;
_Bool Value_569;
_Bool __result347__;
void* __right_value751 = (void*)0;
struct CVALUE* come_value2_570;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sType* __dec_obj223;
_Bool Value_571;
_Bool __result348__;
void* __right_value754 = (void*)0;
struct CVALUE* come_value2_572;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sType* __dec_obj224;
void* __right_value757 = (void*)0;
struct sType* key_type_values_574;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
char* var_name_575;
void* __right_value760 = (void*)0;
struct sVar* var__576;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sType* element_type_values_577;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
char* var_name2_578;
void* __right_value765 = (void*)0;
struct sVar* var2__579;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct buffer* source_580;
int i_581;
void* __right_value769 = (void*)0;
struct CVALUE* key_param_582;
void* __right_value770 = (void*)0;
struct CVALUE* element_param_583;
void* __right_value771 = (void*)0;
char* c_value_584;
void* __right_value772 = (void*)0;
char* c_value_585;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sType* map_type_586;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sType* obj_type_587;
char* fun_name_588;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
char* generics_fun_name_589;
void* __right_value781 = (void*)0;
struct sFun* fun_590;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
char* __dec_obj225;
void* __right_value784 = (void*)0;
_Bool __result349__;
void* __right_value785 = (void*)0;
struct sType* result_type_591;
struct sType* type_592;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct CVALUE* obj_value_593;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct buffer* num_string_594;
void* __right_value790 = (void*)0;
struct sType* type2_595;
void* __right_value791 = (void*)0;
char* type_name_596;
void* __right_value792 = (void*)0;
char* finalizer_name_597;
void* __right_value793 = (void*)0;
char* cloner_name_598;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
char* __dec_obj226;
void* __right_value796 = (void*)0;
struct sType* type3_599;
void* __right_value797 = (void*)0;
struct sType* __dec_obj227;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct list$1CVALUEph* come_params_600;
void* __right_value800 = (void*)0;
_Bool _if_conditional12;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct CVALUE* come_value2_601;
void* __right_value804 = (void*)0;
char* __dec_obj228;
struct sType* __dec_obj229;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct CVALUE* come_value3_602;
void* __right_value807 = (void*)0;
char* __dec_obj230;
struct sType* __dec_obj231;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct CVALUE* come_value4_603;
void* __right_value810 = (void*)0;
char* __dec_obj232;
struct sType* __dec_obj233;
int j_604;
struct list$1CVALUEph* o2_saved_605;
struct CVALUE* it_606;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct CVALUE* come_value5_607;
void* __right_value813 = (void*)0;
char* __dec_obj234;
void* __right_value814 = (void*)0;
struct sType* __dec_obj235;
_Bool __result350__;
exp_558 = (void*)0;
exp2_566 = (void*)0;
    map_key_elements_545=self->map_key_elements;
    map_elements_546=self->map_elements;
    key_params_547=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1165, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    element_params_548=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1166, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    map_key_type_549=((void*)0);
    map_element_type_550=((void*)0);
    for(    i_551=0;    i_551<list$1sNodeph_length(map_key_elements_545);    i_551++    ){
        key_elements_552=((struct sNode*)come_null_check(((struct sNode*)(__right_value700=list$1sNodephp_operator_load_element(map_key_elements_545,i_551))), "06str.c", 1171, 20));
        if(__right_value700) { __right_value700 = come_decrement_ref_count2(__right_value700, ((struct sNode*)__right_value700)->finalize, ((struct sNode*)__right_value700)->_protocol_obj, 1, 0, 0, (void*)0); } 
        elements_556=((struct sNode*)come_null_check(((struct sNode*)(__right_value701=list$1sNodephp_operator_load_element(map_elements_546,i_551))), "06str.c", 1172, 21));
        if(__right_value701) { __right_value701 = come_decrement_ref_count2(__right_value701, ((struct sNode*)__right_value701)->finalize, ((struct sNode*)__right_value701)->_protocol_obj, 1, 0, 0, (void*)0); } 
        if(        (_if_conditional10=(string_operator_equals(((char*)(__right_value702=key_elements_552->kind(key_elements_552->_protocol_obj))),"sWildCard"))),        (__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional10) {
            value_node_557=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value703=xsprintf("Value"))),info));
            __right_value703 = come_decrement_ref_count2(__right_value703, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_559=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1179, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephph_add(params_559,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1180, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_557))));
                __dec_obj215=exp_558;
                exp_558=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value710=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_557),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_559),((void*)0),0,((void*)0),info));
                if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_559,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_560=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1185, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephph_add(params_560,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1186, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_558))));
                list$1tuple2$2charphsNodephph_add(params_560,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1187, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_551,info)))));
                __dec_obj216=exp_558;
                exp_558=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value721=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_558),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_560),((void*)0),0,((void*)0),info));
                if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj217=exp_558;
                exp_558=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_558,info));
                if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_560,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_561=node_compile(exp_558,info);
            if(            !Value_561) {
                __result345__ = (_Bool)0;
                if(value_node_557) { value_node_557 = come_decrement_ref_count2(value_node_557, ((struct sNode*)value_node_557)->finalize, ((struct sNode*)value_node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_558) { exp_558 = come_decrement_ref_count2(exp_558, ((struct sNode*)exp_558)->finalize, ((struct sNode*)exp_558)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result345__;
            }
            else {
            }
            come_value_562=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(key_params_547,(struct CVALUE*)come_increment_ref_count(come_value_562));
            __dec_obj218=map_key_type_549;
            map_key_type_549=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_562->type));
            come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_557) { value_node_557 = come_decrement_ref_count2(value_node_557, ((struct sNode*)value_node_557)->finalize, ((struct sNode*)value_node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_558) { exp_558 = come_decrement_ref_count2(exp_558, ((struct sNode*)exp_558)->finalize, ((struct sNode*)exp_558)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_563=node_compile(key_elements_552,info);
            if(            !Value_563) {
                __result346__ = (_Bool)0;
                come_call_finalizer3(key_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result346__;
            }
            else {
            }
            come_value_564=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_549) {
                check_assign_type(((char*)(__right_value727=xsprintf("invalid map key type"))),map_key_type_549,come_value_564->type,come_value_564,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(key_params_547,(struct CVALUE*)come_increment_ref_count(come_value_564));
            __dec_obj219=map_key_type_549;
            map_key_type_549=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_564->type));
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_564,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional11=(string_operator_equals(((char*)(__right_value729=elements_556->kind(elements_556->_protocol_obj))),"sWildCard"))),        (__right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional11) {
            value_node_565=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value730=xsprintf("Value"))),info));
            __right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_567=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1223, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephph_add(params_567,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1224, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_565))));
                __dec_obj220=exp2_566;
                exp2_566=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value737=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_565),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_567),((void*)0),0,((void*)0),info));
                if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_567,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_568=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1229, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephph_add(params_568,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1230, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_566))));
                list$1tuple2$2charphsNodephph_add(params_568,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1231, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_551,info)))));
                __dec_obj221=exp2_566;
                exp2_566=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value748=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_566),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_568),((void*)0),0,((void*)0),info));
                if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj222=exp2_566;
                exp2_566=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_566,info));
                if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_568,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_569=node_compile(exp2_566,info);
            if(            !Value_569) {
                __result347__ = (_Bool)0;
                if(value_node_565) { value_node_565 = come_decrement_ref_count2(value_node_565, ((struct sNode*)value_node_565)->finalize, ((struct sNode*)value_node_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp2_566) { exp2_566 = come_decrement_ref_count2(exp2_566, ((struct sNode*)exp2_566)->finalize, ((struct sNode*)exp2_566)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result347__;
            }
            else {
            }
            come_value2_570=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_550) {
                check_assign_type(((char*)(__right_value752=xsprintf("invalid map element type"))),map_element_type_550,come_value2_570->type,come_value2_570,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_548,(struct CVALUE*)come_increment_ref_count(come_value2_570));
            __dec_obj223=map_element_type_550;
            map_element_type_550=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_570->type));
            come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_565) { value_node_565 = come_decrement_ref_count2(value_node_565, ((struct sNode*)value_node_565)->finalize, ((struct sNode*)value_node_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_566) { exp2_566 = come_decrement_ref_count2(exp2_566, ((struct sNode*)exp2_566)->finalize, ((struct sNode*)exp2_566)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_571=node_compile(elements_556,info);
            if(            !Value_571) {
                __result348__ = (_Bool)0;
                come_call_finalizer3(key_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result348__;
            }
            else {
            }
            come_value2_572=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_550) {
                check_assign_type(((char*)(__right_value755=xsprintf("invalid map element type"))),map_element_type_550,come_value2_572->type,come_value2_572,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_548,(struct CVALUE*)come_increment_ref_count(come_value2_572));
            __dec_obj224=map_element_type_550;
            map_element_type_550=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_572->type));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_572,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_573=0;
    key_type_values_574=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_549));
    list$1sNodeph_push_back(key_type_values_574->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(key_params_547),info)));
    key_type_values_574->mHeap=(_Bool)0;
    var_name_575=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_573));
    add_variable_to_table(var_name_575,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_574)),info);
    var__576=get_variable_from_table(info->lv_table,var_name_575);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value761=make_define_var(key_type_values_574,var__576->mCValueName,(_Bool)0,info))));
    __right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_577=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_550));
    list$1sNodeph_push_back(element_type_values_577->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(element_params_548),info)));
    element_type_values_577->mHeap=(_Bool)0;
    var_name2_578=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_573));
    add_variable_to_table(var_name2_578,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_577)),info);
    var2__579=get_variable_from_table(info->lv_table,var_name2_578);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value766=make_define_var(element_type_values_577,var2__579->mCValueName,(_Bool)0,info))));
    __right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_580=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1292, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(source_580,"(");
    for(    i_581=0;    i_581<list$1CVALUEph_length(key_params_547);    i_581++    ){
        key_param_582=((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value769=list$1CVALUEphp_operator_load_element(key_params_547,i_581))), "06str.c", 1297, 22));
        come_call_finalizer3(__right_value769,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_583=((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value770=list$1CVALUEphp_operator_load_element(element_params_548,i_581))), "06str.c", 1298, 23));
        come_call_finalizer3(__right_value770,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_549->mHeap) {
            c_value_584=(char*)come_increment_ref_count(increment_ref_count_object(key_param_582->type,key_param_582->c_value,info));
            buffer_append_format(source_580,"%s[%d]=%s,\n",var__576->mCValueName,i_581,c_value_584);
            c_value_584 = come_decrement_ref_count2(c_value_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_580,"%s[%d]=%s,\n",var__576->mCValueName,i_581,key_param_582->c_value);
        }
        if(        map_element_type_550->mHeap) {
            c_value_585=(char*)come_increment_ref_count(increment_ref_count_object(element_param_583->type,element_param_583->c_value,info));
            buffer_append_format(source_580,"%s[%d]=%s,\n",var2__579->mCValueName,i_581,c_value_585);
            c_value_585 = come_decrement_ref_count2(c_value_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_580,"%s[%d]=%s,\n",var2__579->mCValueName,i_581,element_param_583->c_value);
        }
    }
    map_type_586=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1317, "struct sType*", (void*)0, (void*)0)),"map",(_Bool)0,info));
    list$1sTypeph_push_back(map_type_586->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value775=come_call_cloner(sType_clone, map_key_type_549))))));
    come_call_finalizer3(__right_value775,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sTypeph_push_back(map_type_586->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value776=come_call_cloner(sType_clone, map_element_type_550))))));
    come_call_finalizer3(__right_value776,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_587=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_586));
    fun_name_588="initialize_with_values";
    generics_fun_name_589=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value779=make_generics_function(obj_type_587,(char*)come_increment_ref_count(__builtin_string(fun_name_588)),info,(_Bool)1)))));
    __right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_590=((struct sFun*)(__right_value781=map$2charphsFunph_at(info->funcs,generics_fun_name_589,((void*)0))));
    come_call_finalizer3(__right_value781,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_590==((void*)0)) {
        __dec_obj225=generics_fun_name_589;
        generics_fun_name_589=(char*)come_increment_ref_count(create_method_name(obj_type_587,(_Bool)0,((char*)(__right_value782=__builtin_string(fun_name_588))),info,(_Bool)1));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_590=((struct sFun*)(__right_value784=map$2charphsFunph_at(info->funcs,generics_fun_name_589,((void*)0))));
        come_call_finalizer3(__right_value784,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_590==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_589,info->come_fun->mName);
            __result349__ = (_Bool)1;
            come_call_finalizer3(key_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_574,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_575 = come_decrement_ref_count2(var_name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_577,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_578 = come_decrement_ref_count2(var_name2_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_580,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_589 = come_decrement_ref_count2(generics_fun_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result349__;
        }
    }
    result_type_591=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_590->mResultType));
    result_type_591->mStatic=(_Bool)0;
    type_592=map_type_586;
    obj_value_593=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1344, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_594=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1346, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_594,"1");
    type2_595=(struct sType*)come_increment_ref_count(solve_generics(type_592,type_592,info));
    type_name_596=(char*)come_increment_ref_count(make_type_name_string(type2_595,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_597=(char*)come_increment_ref_count(create_method_name(type2_595,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_598=(char*)come_increment_ref_count(create_method_name(type2_595,(_Bool)0,"clone",info,(_Bool)1));
    __dec_obj226=obj_value_593->c_value;
    obj_value_593->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",type_name_596,type_name_596,((char*)(__right_value794=buffer_to_string(num_string_594))),info->sname,info->sline,type_name_596));
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value794 = come_decrement_ref_count2(__right_value794, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_599=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_595));
    type3_599->mPointerNum++;
    type3_599->mHeap=(_Bool)1;
    type2_595->mHeap=(_Bool)1;
    __dec_obj227=obj_value_593->type;
    obj_value_593->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_595));
    come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_593->type->mPointerNum++;
    obj_value_593->var=((void*)0);
    append_object_to_right_values2(obj_value_593,(struct sType*)come_increment_ref_count(type3_599),info,(_Bool)0);
    come_params_600=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1378, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional12=(((struct sType*)come_null_check(((struct sType*)(__right_value800=list$1sTypephp_operator_load_element(fun_590->mParamTypes,0))), "06str.c", 1380, 24))->mHeap&&obj_value_593->type->mHeap)),    come_call_finalizer3(__right_value800,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional12) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value801=list$1sTypephp_operator_load_element(fun_590->mParamTypes,0))), "06str.c", 1381, 25)),obj_value_593->type,obj_value_593,info,(_Bool)1);
        come_call_finalizer3(__right_value801,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_600,(struct CVALUE*)come_increment_ref_count(obj_value_593));
    come_value2_601=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1385, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj228=come_value2_601->c_value;
    come_value2_601->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(key_params_547)));
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj229=come_value2_601->type;
    come_value2_601->type=((void*)0);
    come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_601->var=((void*)0);
    list$1CVALUEph_push_back(come_params_600,(struct CVALUE*)come_increment_ref_count(come_value2_601));
    come_value3_602=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1393, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj230=come_value3_602->c_value;
    come_value3_602->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__576->mCValueName));
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj231=come_value3_602->type;
    come_value3_602->type=((void*)0);
    come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_602->var=((void*)0);
    list$1CVALUEph_push_back(come_params_600,(struct CVALUE*)come_increment_ref_count(come_value3_602));
    come_value4_603=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1401, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj232=come_value4_603->c_value;
    come_value4_603->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__579->mCValueName));
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=come_value4_603->type;
    come_value4_603->type=((void*)0);
    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_603->var=((void*)0);
    list$1CVALUEph_push_back(come_params_600,(struct CVALUE*)come_increment_ref_count(come_value4_603));
    buffer_append_str(source_580,generics_fun_name_589);
    buffer_append_str(source_580,"(");
    j_604=0;
    for(    o2_saved_605=(struct list$1CVALUEph*)come_increment_ref_count((come_params_600)),it_606=list$1CVALUEph_begin((o2_saved_605));    !list$1CVALUEph_end((o2_saved_605));    it_606=list$1CVALUEph_next((o2_saved_605))    ){
        buffer_append_str(source_580,it_606->c_value);
        if(        j_604!=list$1CVALUEph_length(come_params_600)-1) {
            buffer_append_str(source_580,",");
        }
        j_604++;
    }
    come_call_finalizer3(o2_saved_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_580,")");
    buffer_append_str(source_580,")");
    come_value5_607=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1427, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj234=come_value5_607->c_value;
    come_value5_607->c_value=(char*)come_increment_ref_count(buffer_to_string(source_580));
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj235=come_value5_607->type;
    come_value5_607->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_591));
    come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_607->type->mStatic=(_Bool)0;
    come_value5_607->var=((void*)0);
    if(    result_type_591->mHeap) {
        append_object_to_right_values2(come_value5_607,(struct sType*)come_increment_ref_count(result_type_591),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_607->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_607));
    __result350__ = (_Bool)1;
    come_call_finalizer3(key_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_574,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_575 = come_decrement_ref_count2(var_name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_577,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_578 = come_decrement_ref_count2(var_name2_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_580,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_589 = come_decrement_ref_count2(generics_fun_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_591,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_593,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_594,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_595,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_596 = come_decrement_ref_count2(type_name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_597 = come_decrement_ref_count2(finalizer_name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_598 = come_decrement_ref_count2(cloner_name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_599,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_600,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_601,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_602,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_603,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_607,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result350__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj212;
struct list$1sNodeph* __dec_obj213;
struct list$1sNodeph* __dec_obj214;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj212=self->sname;
            __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj213=self->map_key_elements;
            come_call_finalizer3(__dec_obj213,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj214=self->map_elements;
            come_call_finalizer3(__dec_obj214,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_553;
int i_554;
struct sNode* __result343__;
struct sNode* default_value_555;
struct sNode* __result344__;
default_value_555 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_553=self->head;
    i_554=0;
    while(it_553!=((void*)0)) {
        if(        position==i_554) {
            __result343__ = gComeFunResultObject = __result_obj__ = it_553->item;
            gComeFunResultObject = (void*)0;
            return __result343__;
        }
        it_553=it_553->next;
        i_554++;
    }
    memset(&default_value_555,0,sizeof(struct sNode*));
    __result344__ = gComeFunResultObject = __result_obj__ = default_value_555;
    if(default_value_555) { default_value_555 = come_decrement_ref_count2(default_value_555, ((struct sNode*)default_value_555)->finalize, ((struct sNode*)default_value_555)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_608;
int sline_609;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct list$1sNodeph* exps_610;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct buffer* value_611;
char* head_of_last_line_612;
int len_613;
void* __right_value819 = (void*)0;
struct sNode* exp_614;
int sline2_615;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value827 = (void*)0;
struct sNode* __result353__;
int sline_real_617;
int sline_618;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct buffer* value_619;
char* p_620;
int sline_621;
int sline2_622;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value833 = (void*)0;
struct sNode* __result354__;
int sline_real_623;
int sline_624;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct buffer* value_625;
unsigned long  int size_626;
char* p_627;
int sline_628;
int len_629;
int sline2_630;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value841 = (void*)0;
struct sNode* __result357__;
int sline_real_632;
int sline_633;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct buffer* buf_634;
_Bool global_635;
_Bool ignore_case_636;
_Bool catch_exception_637;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value847 = (void*)0;
struct sNode* obj_638;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_639;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct buffer* method_block_640;
int method_block_sline_641;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct list$1sTypeph* method_generics_types_642;
void* __right_value889 = (void*)0;
struct sNode* node_643;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct sNode* __dec_obj241;
struct sNode* __result358__;
int sline_real_644;
int sline_645;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct buffer* value_646;
char* p_647;
int sline_648;
int len_649;
int sline2_650;
_Bool global_651;
_Bool ignore_case_652;
_Bool catch_exception_653;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value897 = (void*)0;
struct sNode* obj_654;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_655;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct buffer* method_block_656;
int method_block_sline_657;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct list$1sTypeph* method_generics_types_658;
void* __right_value939 = (void*)0;
struct sNode* node_659;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sNode* __dec_obj242;
struct sNode* __result359__;
int sline_real_660;
int c_661;
int n_662;
int n_663;
unsigned long long int n_666;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value946 = (void*)0;
struct sNode* __result362__;
int sline_real_668;
unsigned int c_669;
_Bool quote_670;
int n_671;
int n_672;
unsigned long long int n_675;
unsigned char p2_676;
int size_677;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value951 = (void*)0;
struct sNode* __result365__;
int sline_real_680;
int sline_681;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct buffer* value_682;
char* p_683;
int sline_684;
int sline2_685;
int len_686;
void* __right_value954 = (void*)0;
unsigned int* wstr_687;
char* str_688;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value960 = (void*)0;
struct sNode* __result368__;
int sline_real_690;
int sline_691;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct list$1sNodeph* exps_692;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct buffer* value_693;
char* p_694;
int sline_695;
int len_696;
void* __right_value965 = (void*)0;
struct sNode* exp_697;
int sline2_698;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value969 = (void*)0;
struct sNode* __result369__;
int sline_real_699;
char* p_700;
_Bool no_comma_701;
void* __right_value970 = (void*)0;
struct sNode* node_702;
char* p2_703;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct buffer* first_element_source_704;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct list$1sNodeph* list_elements_705;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct list$1sNodeph* map_keys_706;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct list$1sNodeph* map_elements_707;
_Bool no_comma_708;
void* __right_value979 = (void*)0;
struct sNode* node2_709;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value986 = (void*)0;
struct sNode* __result372__;
_Bool no_comma_711;
void* __right_value987 = (void*)0;
struct sNode* node2_712;
void* __right_value988 = (void*)0;
struct sNode* node3_713;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value991 = (void*)0;
struct sNode* __result373__;
_Bool no_comma_714;
void* __right_value992 = (void*)0;
struct sNode* node2_715;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value998 = (void*)0;
struct sNode* __result376__;
void* __right_value999 = (void*)0;
struct sNode* node_717;
struct sNode* __result377__;
struct sNode* __result378__;
memset(&c_661, 0, sizeof(int));
memset(&c_669, 0, sizeof(unsigned int));
memset(&quote_670, 0, sizeof(_Bool));
memset(&size_677, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_608=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_609=info->sline;
        exps_610=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1457, "struct list$1sNodeph*", (void*)0, (void*)0))));
        value_611=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1458, "struct buffer*", (void*)0, (void*)0))));
        head_of_last_line_612=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_612) {
                    buffer_trim(value_611,info->p-head_of_last_line_612);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_611,37);
                buffer_append_char(value_611,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_611,92);
                buffer_append_char(value_611,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_611,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_613=0;
                    while(xisdigit(*info->p)&&len_613<3) {
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        len_613++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_611,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_614=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_610,(struct sNode*)come_increment_ref_count(exp_614));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_611,"%s");
                    if(exp_614) { exp_614 = come_decrement_ref_count2(exp_614, ((struct sNode*)exp_614)->finalize, ((struct sNode*)exp_614)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_611,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_615=info->sline;
                info->sline=sline_609;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_611,92);
                    buffer_append_char(value_611,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_612=info->p;
                }
                else {
                    buffer_append_char(value_611,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_608;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1597, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value822=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1597, "struct sSStringNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_611)),(struct list$1sNodeph*)come_increment_ref_count(exps_610),sline_609,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result353__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value827=_inf_value5));
        come_call_finalizer3(exps_610,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_611,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value822,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value827) { __right_value827 = come_decrement_ref_count2(__right_value827, ((struct sNode*)__right_value827)->finalize, ((struct sNode*)__right_value827)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result353__;
        come_call_finalizer3(exps_610,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_611,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_617=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_618=info->sline;
        value_619=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1607, "struct buffer*", (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_620=info->p;
                sline_621=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_620;
                    info->sline=sline_621;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_619,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_619,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_619,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_622=info->sline;
                info->sline=sline_618;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_622;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_619,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_617;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1660, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value832=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1660, "struct sStrNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_619)),sline_618,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result354__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value833=_inf_value6));
        come_call_finalizer3(value_619,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value832,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value833) { __right_value833 = come_decrement_ref_count2(__right_value833, ((struct sNode*)__right_value833)->finalize, ((struct sNode*)__right_value833)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result354__;
        come_call_finalizer3(value_619,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_623=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_624=info->sline;
        value_625=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1670, "struct buffer*", (void*)0, (void*)0))));
        size_626=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_625,*info->p);
                info->p++;
                p_627=info->p;
                sline_628=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_627;
                    info->sline=sline_628;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_625,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_629=0;
                    while(xisdigit(*info->p)&&len_629<3) {
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        len_629++;
                    }
                    size_626++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_625,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                    }
                    size_626++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 110:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 116:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 114:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 118:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 102:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 97:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 98:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 92:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        default:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_630=info->sline;
                info->sline=sline_624;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_625,*info->p);
                info->p++;
                size_626++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_623;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1797, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value837=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1797, "struct sBufferNode*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_625),size_626,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result357__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value841=_inf_value7));
        come_call_finalizer3(value_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value837,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value841) { __right_value841 = come_decrement_ref_count2(__right_value841, ((struct sNode*)__right_value841)->finalize, ((struct sNode*)__right_value841)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result357__;
        come_call_finalizer3(value_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_632=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_633=info->sline;
        buf_634=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1806, "struct buffer*", (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_634,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf_634,*info->p);
                info->p++;
            }
        }
        global_635=(_Bool)0;
        ignore_case_636=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_635=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_636=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_637=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_637=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1850, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value846=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1850, "struct sStrNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_634)),sline_633,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_638=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value846,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_639=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1852, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephph_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1854, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_638))));
        list$1tuple2$2charphsNodephph_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1855, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_636)?(((struct sNode*)(__right_value854=create_int_node(1,info)))):(((struct sNode*)(__right_value855=create_int_node(0,info)))))))));
        if(__right_value854) { __right_value854 = come_decrement_ref_count2(__right_value854, ((struct sNode*)__right_value854)->finalize, ((struct sNode*)__right_value854)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value855) { __right_value855 = come_decrement_ref_count2(__right_value855, ((struct sNode*)__right_value855)->finalize, ((struct sNode*)__right_value855)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1856, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1857, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_635)?(((struct sNode*)(__right_value863=create_int_node(1,info)))):(((struct sNode*)(__right_value864=create_int_node(0,info)))))))));
        if(__right_value863) { __right_value863 = come_decrement_ref_count2(__right_value863, ((struct sNode*)__right_value863)->finalize, ((struct sNode*)__right_value863)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value864) { __right_value864 = come_decrement_ref_count2(__right_value864, ((struct sNode*)__right_value864)->finalize, ((struct sNode*)__right_value864)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1858, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1859, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1860, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1861, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_639,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1862, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_640=((void*)0);
        method_block_sline_641=info->sline;
        method_generics_types_642=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1868, "struct list$1sTypeph*", (void*)0, (void*)0))));
        node_643=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_638),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_639),method_block_640,method_block_sline_641,method_generics_types_642,info));
        if(        !catch_exception_637) {
            __dec_obj241=node_643;
            node_643=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_643)),info));
            if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_632;
        __result358__ = gComeFunResultObject = __result_obj__ = node_643;
        come_call_finalizer3(buf_634,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_638) { obj_638 = come_decrement_ref_count2(obj_638, ((struct sNode*)obj_638)->finalize, ((struct sNode*)obj_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_639,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_642,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_643) { node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result358__;
        come_call_finalizer3(buf_634,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_638) { obj_638 = come_decrement_ref_count2(obj_638, ((struct sNode*)obj_638)->finalize, ((struct sNode*)obj_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_639,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_642,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_643) { node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_644=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_645=info->sline;
        value_646=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1886, "struct buffer*", (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_647=info->p;
                sline_648=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_647;
                    info->sline=sline_648;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_646,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_649=0;
                    while(xisdigit(*info->p)&&len_649<3) {
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        len_649++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_646,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_646,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_650=info->sline;
                info->sline=sline_645;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_646,*info->p);
                info->p++;
            }
        }
        global_651=(_Bool)0;
        ignore_case_652=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_651=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_652=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_653=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_653=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2017, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value896=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 2017, "struct sStrNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_646)),sline_645,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_654=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value896,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_655=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2019, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephph_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2021, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_654))));
        list$1tuple2$2charphsNodephph_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2022, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_652)?(((struct sNode*)(__right_value904=create_int_node(1,info)))):(((struct sNode*)(__right_value905=create_int_node(0,info)))))))));
        if(__right_value904) { __right_value904 = come_decrement_ref_count2(__right_value904, ((struct sNode*)__right_value904)->finalize, ((struct sNode*)__right_value904)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value905) { __right_value905 = come_decrement_ref_count2(__right_value905, ((struct sNode*)__right_value905)->finalize, ((struct sNode*)__right_value905)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2023, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2024, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_651)?(((struct sNode*)(__right_value913=create_int_node(1,info)))):(((struct sNode*)(__right_value914=create_int_node(0,info)))))))));
        if(__right_value913) { __right_value913 = come_decrement_ref_count2(__right_value913, ((struct sNode*)__right_value913)->finalize, ((struct sNode*)__right_value913)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value914) { __right_value914 = come_decrement_ref_count2(__right_value914, ((struct sNode*)__right_value914)->finalize, ((struct sNode*)__right_value914)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2025, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2026, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2027, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2028, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2029, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_656=((void*)0);
        method_block_sline_657=info->sline;
        method_generics_types_658=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 2035, "struct list$1sTypeph*", (void*)0, (void*)0))));
        node_659=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_654),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_655),method_block_656,method_block_sline_657,method_generics_types_658,info));
        if(        !catch_exception_653) {
            __dec_obj242=node_659;
            node_659=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_659)),info));
            if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_644;
        __result359__ = gComeFunResultObject = __result_obj__ = node_659;
        come_call_finalizer3(value_646,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_654) { obj_654 = come_decrement_ref_count2(obj_654, ((struct sNode*)obj_654)->finalize, ((struct sNode*)obj_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_655,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result359__;
        come_call_finalizer3(value_646,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_654) { obj_654 = come_decrement_ref_count2(obj_654, ((struct sNode*)obj_654)->finalize, ((struct sNode*)obj_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_655,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==39) {
        sline_real_660=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_662=0;
                while(xisdigit(*info->p)) {
                    n_662=n_662*8+*info->p-48;
                    info->p++;
                }
                c_661=n_662;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_661=10;
                    info->p++;
                    break;
                    case 116:
                    c_661=9;
                    info->p++;
                    break;
                    case 114:
                    c_661=13;
                    info->p++;
                    break;
                    case 97:
                    c_661=7;
                    info->p++;
                    break;
                    case 102:
                    c_661=12;
                    info->p++;
                    break;
                    case 118:
                    c_661=11;
                    info->p++;
                    break;
                    case 98:
                    c_661=8;
                    info->p++;
                    break;
                    case 92:
                    c_661=92;
                    info->p++;
                    break;
                    case 48:
                    c_661=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_663=0;
                        while(xisdigit(*info->p)) {
                            n_663=n_663*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_661=n_663;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_664[128];
                        memset(&buf_664, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_664,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_665[2];
                            memset(&buf2_665, 0, sizeof(char)                            *(2)                            );
                            buf2_665[0]=*info->p;
                            buf2_665[1]=0;
                            info->p++;
                            strncat(buf_664,buf2_665,128);
                        }
                        n_666=strtoll(buf_664,((void*)0),0);
                        c_661=n_666;
                    }
                    break;
                    default:
                    c_661=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_661=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_660;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2164, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value943=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2164, "struct sCharNode*", (void*)0, (void*)0)),c_661,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value946=_inf_value10));
            come_call_finalizer3(__right_value943,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value946) { __right_value946 = come_decrement_ref_count2(__right_value946, ((struct sNode*)__right_value946)->finalize, ((struct sNode*)__right_value946)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result362__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_668=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_670=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_671=0;
                while(xisdigit(*info->p)) {
                    n_671=n_671*8+*info->p-48;
                    info->p++;
                }
                c_669=n_671;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_669=10;
                    info->p++;
                    break;
                    case 116:
                    c_669=9;
                    info->p++;
                    break;
                    case 114:
                    c_669=13;
                    info->p++;
                    break;
                    case 97:
                    c_669=7;
                    info->p++;
                    break;
                    case 92:
                    c_669=92;
                    info->p++;
                    break;
                    case 48:
                    c_669=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_672=0;
                        while(xisdigit(*info->p)) {
                            n_672=n_672*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_669=n_672;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_673[128];
                        memset(&buf_673, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_673,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_674[2];
                            memset(&buf2_674, 0, sizeof(char)                            *(2)                            );
                            buf2_674[0]=*info->p;
                            buf2_674[1]=0;
                            info->p++;
                            strncat(buf_673,buf2_674,128);
                        }
                        n_675=strtoll(buf_673,((void*)0),0);
                        c_669=n_675;
                    }
                    break;
                    default:
                    c_669=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_670=(_Bool)0;
            p2_676=*(unsigned char*)info->p;
            if(            p2_676>127) {
                char str_678[4+1];
                memset(&str_678, 0, sizeof(char)                *(4+1)                );
                size_677=((p2_676&128)>>7)+((p2_676&64)>>6)+((p2_676&32)>>5)+((p2_676&16)>>4);
                if(                size_677>4) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_678,info->p,size_677);
                    str_678[size_677]=0;
                    if(                    mbtowc(&c_669,str_678,size_677)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_677;
                    }
                }
            }
            else {
                c_669=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_668;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2306, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value948=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2306, "struct sWCharNode*", (void*)0, (void*)0)),c_669,quote_670,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result365__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value951=_inf_value11));
            come_call_finalizer3(__right_value948,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value951) { __right_value951 = come_decrement_ref_count2(__right_value951, ((struct sNode*)__right_value951)->finalize, ((struct sNode*)__right_value951)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result365__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_680=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_681=info->sline;
        value_682=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2317, "struct buffer*", (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_683=info->p;
                sline_684=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_683;
                    info->sline=sline_684;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_682,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_682,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_682,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_685=info->sline;
                info->sline=sline_681;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_682,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_686=value_682->len;
        wstr_687=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_686+1)), "06str.c", 2368, "unsigned int*", (void*)0, (void*)0));
        str_688=value_682->buf;
        if(        mbstowcs(wstr_687,str_688,len_686+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_687[len_686]=0;
        info->sline_real=sline_real_680;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2380, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value956=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2380, "struct sWStringNode*", (void*)0, (void*)0)),(unsigned int*)come_increment_ref_count(wstr_687),sline_681,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result368__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value960=_inf_value12));
        come_call_finalizer3(value_682,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_687 = come_decrement_ref_count2(wstr_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value956,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value960) { __right_value960 = come_decrement_ref_count2(__right_value960, ((struct sNode*)__right_value960)->finalize, ((struct sNode*)__right_value960)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result368__;
        come_call_finalizer3(value_682,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_687 = come_decrement_ref_count2(wstr_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_690=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_691=info->sline;
        exps_692=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2390, "struct list$1sNodeph*", (void*)0, (void*)0))));
        value_693=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2391, "struct buffer*", (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_694=info->p;
                sline_695=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_694;
                    info->sline=sline_695;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_693,37);
                buffer_append_char(value_693,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_693,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_696=0;
                    while(xisdigit(*info->p)&&len_696<3) {
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        len_696++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_693,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_697=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_692,(struct sNode*)come_increment_ref_count(exp_697));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_693,"%s");
                    if(exp_697) { exp_697 = come_decrement_ref_count2(exp_697, ((struct sNode*)exp_697)->finalize, ((struct sNode*)exp_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_698=info->sline;
                info->sline=sline_691;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_693,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_690;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2539, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value968=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2539, "struct sSStringNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_693)),(struct list$1sNodeph*)come_increment_ref_count(exps_692),sline_691,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result369__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value969=_inf_value13));
        come_call_finalizer3(exps_692,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_693,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value968,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value969) { __right_value969 = come_decrement_ref_count2(__right_value969, ((struct sNode*)__right_value969)->finalize, ((struct sNode*)__right_value969)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result369__;
        come_call_finalizer3(exps_692,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_693,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_699=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_700=info->p;
        no_comma_701=info->no_comma;
        info->no_comma=(_Bool)1;
        node_702=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_701;
        p2_703=info->p;
        first_element_source_704=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2558, "struct buffer*", (void*)0, (void*)0))));
        buffer_append(first_element_source_704,p_700,p2_703-p_700);
        buffer_append_char(first_element_source_704,0);
        list_elements_705=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2563, "struct list$1sNodeph*", (void*)0, (void*)0))));
        map_keys_706=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2565, "struct list$1sNodeph*", (void*)0, (void*)0))));
        map_elements_707=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2566, "struct list$1sNodeph*", (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(map_keys_706,(struct sNode*)come_increment_ref_count(node_702));
            no_comma_708=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_709=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_708;
            list$1sNodeph_push_back(map_elements_707,(struct sNode*)come_increment_ref_count(node2_709));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2589, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value981=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2589, "struct sMapNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_706),(struct list$1sNodeph*)come_increment_ref_count(map_elements_707),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result372__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value986=_inf_value14));
                if(node2_709) { node2_709 = come_decrement_ref_count2(node2_709, ((struct sNode*)node2_709)->finalize, ((struct sNode*)node2_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_702) { node_702 = come_decrement_ref_count2(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_705,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_706,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_707,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value981,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value986) { __right_value986 = come_decrement_ref_count2(__right_value986, ((struct sNode*)__right_value986)->finalize, ((struct sNode*)__right_value986)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result372__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_711=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_712=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_711;
                    list$1sNodeph_push_back(map_keys_706,(struct sNode*)come_increment_ref_count(node2_712));
                    expected_next_character(58,info);
                    no_comma_711=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_713=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_711;
                    list$1sNodeph_push_back(map_elements_707,(struct sNode*)come_increment_ref_count(node3_713));
                    if(                    *info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(node2_712) { node2_712 = come_decrement_ref_count2(node2_712, ((struct sNode*)node2_712)->finalize, ((struct sNode*)node2_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_713) { node3_713 = come_decrement_ref_count2(node3_713, ((struct sNode*)node3_713)->finalize, ((struct sNode*)node3_713)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_712) { node2_712 = come_decrement_ref_count2(node2_712, ((struct sNode*)node2_712)->finalize, ((struct sNode*)node2_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_713) { node3_713 = come_decrement_ref_count2(node3_713, ((struct sNode*)node3_713)->finalize, ((struct sNode*)node3_713)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2634, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value990=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2634, "struct sMapNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_706),(struct list$1sNodeph*)come_increment_ref_count(map_elements_707),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value991=_inf_value15));
                if(node2_709) { node2_709 = come_decrement_ref_count2(node2_709, ((struct sNode*)node2_709)->finalize, ((struct sNode*)node2_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_702) { node_702 = come_decrement_ref_count2(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_705,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_706,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_707,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value990,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value991) { __right_value991 = come_decrement_ref_count2(__right_value991, ((struct sNode*)__right_value991)->finalize, ((struct sNode*)__right_value991)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result373__;
            }
            if(node2_709) { node2_709 = come_decrement_ref_count2(node2_709, ((struct sNode*)node2_709)->finalize, ((struct sNode*)node2_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_705,(struct sNode*)come_increment_ref_count(node_702));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_705,(struct sNode*)come_increment_ref_count(node_702));
            while((_Bool)1) {
                no_comma_714=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_715=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_714;
                list$1sNodeph_push_back(list_elements_705,(struct sNode*)come_increment_ref_count(node2_715));
                if(                *info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node2_715) { node2_715 = come_decrement_ref_count2(node2_715, ((struct sNode*)node2_715)->finalize, ((struct sNode*)node2_715)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_715) { node2_715 = come_decrement_ref_count2(node2_715, ((struct sNode*)node2_715)->finalize, ((struct sNode*)node2_715)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodeph_length(list_elements_705)>0) {
            info->sline_real=sline_real_699;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2686, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value994=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2686, "struct sListNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(list_elements_705),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value998=_inf_value16));
            if(node_702) { node_702 = come_decrement_ref_count2(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(first_element_source_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_705,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_706,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_707,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value994,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value998) { __right_value998 = come_decrement_ref_count2(__right_value998, ((struct sNode*)__right_value998)->finalize, ((struct sNode*)__right_value998)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result376__;
        }
        else {
        }
        if(node_702) { node_702 = come_decrement_ref_count2(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(first_element_source_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_705,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_706,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_707,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_717=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result377__ = gComeFunResultObject = __result_obj__ = node_717;
        if(node_717) { node_717 = come_decrement_ref_count2(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result377__;
        if(node_717) { node_717 = come_decrement_ref_count2(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result378__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result351__;
void* __right_value823 = (void*)0;
struct sSStringNode* result_616;
void* __right_value824 = (void*)0;
char* __dec_obj236;
void* __right_value825 = (void*)0;
char* __dec_obj237;
void* __right_value826 = (void*)0;
struct list$1sNodeph* __dec_obj238;
struct sSStringNode* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_616=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_616->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj236=result_616->sname;
        result_616->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_616->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj237=result_616->value;
        result_616->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj238=result_616->exps;
        result_616->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj238,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_616;
    come_call_finalizer3(result_616,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result355__;
void* __right_value838 = (void*)0;
struct sBufferNode* result_631;
void* __right_value839 = (void*)0;
char* __dec_obj239;
void* __right_value840 = (void*)0;
struct buffer* __dec_obj240;
struct sBufferNode* __result356__;
    if(    self==(void*)0) {
        __result355__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    result_631=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_631->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_631->sname;
        result_631->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_631->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj240=result_631->value;
        result_631->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj240,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_631->size=self->size;
    }
    __result356__ = gComeFunResultObject = __result_obj__ = result_631;
    come_call_finalizer3(result_631,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result360__;
void* __right_value944 = (void*)0;
struct sCharNode* result_667;
void* __right_value945 = (void*)0;
char* __dec_obj243;
struct sCharNode* __result361__;
    if(    self==(void*)0) {
        __result360__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    result_667=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_667->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj243=result_667->sname;
        result_667->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_667->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_667->value=self->value;
    }
    __result361__ = gComeFunResultObject = __result_obj__ = result_667;
    come_call_finalizer3(result_667,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result363__;
void* __right_value949 = (void*)0;
struct sWCharNode* result_679;
void* __right_value950 = (void*)0;
char* __dec_obj244;
struct sWCharNode* __result364__;
    if(    self==(void*)0) {
        __result363__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    result_679=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_679->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj244=result_679->sname;
        result_679->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_679->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_679->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_679->quote=self->quote;
    }
    __result364__ = gComeFunResultObject = __result_obj__ = result_679;
    come_call_finalizer3(result_679,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result366__;
void* __right_value957 = (void*)0;
struct sWStringNode* result_689;
void* __right_value958 = (void*)0;
char* __dec_obj245;
void* __right_value959 = (void*)0;
unsigned int* __dec_obj246;
struct sWStringNode* __result367__;
    if(    self==(void*)0) {
        __result366__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    result_689=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_689->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_689->sname;
        result_689->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj246=result_689->value;
        result_689->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*", "wchar_tp_finalize", "wchar_tp_clone"));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result367__ = gComeFunResultObject = __result_obj__ = result_689;
    come_call_finalizer3(result_689,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result370__;
void* __right_value982 = (void*)0;
struct sMapNode* result_710;
void* __right_value983 = (void*)0;
char* __dec_obj247;
void* __right_value984 = (void*)0;
struct list$1sNodeph* __dec_obj248;
void* __right_value985 = (void*)0;
struct list$1sNodeph* __dec_obj249;
struct sMapNode* __result371__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_710=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_710->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj247=result_710->sname;
        result_710->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_710->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj248=result_710->map_key_elements;
        result_710->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj248,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj249=result_710->map_elements;
        result_710->map_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_elements));
        come_call_finalizer3(__dec_obj249,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_710;
    come_call_finalizer3(result_710,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result374__;
void* __right_value995 = (void*)0;
struct sListNode* result_716;
void* __right_value996 = (void*)0;
char* __dec_obj250;
void* __right_value997 = (void*)0;
struct list$1sNodeph* __dec_obj251;
struct sListNode* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_716=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_716->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj250=result_716->sname;
        result_716->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_716->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj251=result_716->list_elements;
        result_716->list_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->list_elements));
        come_call_finalizer3(__dec_obj251,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result375__ = gComeFunResultObject = __result_obj__ = result_716;
    come_call_finalizer3(result_716,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_718;
char* p_719;
char* name_720;
void* __right_value1002 = (void*)0;
char* __dec_obj252;
_Bool no_comma_721;
void* __right_value1003 = (void*)0;
struct sNode* node_722;
void* __right_value1004 = (void*)0;
struct sNode* __dec_obj253;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1022 = (void*)0;
struct sNode* __result386__;
name_720 = (void*)0;
    tuple_elements_718=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2701, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    while((_Bool)1) {
        p_719=info->p;
        if(        named_tuple) {
            __dec_obj252=name_720;
            name_720=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_721=info->no_comma;
        info->no_comma=(_Bool)1;
        node_722=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj253=node_722;
        node_722=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_722),info));
        if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_721;
        list$1tuple2$2charphsNodephph_push_back(tuple_elements_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2720, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_720)),(struct sNode*)come_increment_ref_count(node_722))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            name_720 = come_decrement_ref_count2(name_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_722) { node_722 = come_decrement_ref_count2(node_722, ((struct sNode*)node_722)->finalize, ((struct sNode*)node_722)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        name_720 = come_decrement_ref_count2(name_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_722) { node_722 = come_decrement_ref_count2(node_722, ((struct sNode*)node_722)->finalize, ((struct sNode*)node_722)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2737, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1012=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2737, "struct sTupleNode*", (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_718),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1022=_inf_value17));
    come_call_finalizer3(tuple_elements_718,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1012,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1022) { __right_value1022 = come_decrement_ref_count2(__right_value1022, ((struct sNode*)__right_value1022)->finalize, ((struct sNode*)__right_value1022)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value1005 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_723;
struct tuple2$2charphsNodeph* __dec_obj254;
void* __right_value1006 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_724;
struct tuple2$2charphsNodeph* __dec_obj255;
void* __right_value1007 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_725;
struct tuple2$2charphsNodeph* __dec_obj256;
struct list$1tuple2$2charphsNodephph* __result379__;
    if(    self->len==0) {
        litem_723=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1005=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1304, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_723->prev=((void*)0);
        litem_723->next=((void*)0);
        __dec_obj254=litem_723->item;
        litem_723->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj254,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_723;
        self->head=litem_723;
    }
    else if(    self->len==1) {
        litem_724=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1006=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1314, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_724->prev=self->head;
        litem_724->next=((void*)0);
        __dec_obj255=litem_724->item;
        litem_724->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj255,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_724;
        self->head->next=litem_724;
    }
    else {
        litem_725=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1007=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1324, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_725->prev=self->tail;
        litem_725->next=((void*)0);
        __dec_obj256=litem_725->item;
        litem_725->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj256,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_725;
        self->tail=litem_725;
    }
    self->len++;
    __result379__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result380__;
void* __right_value1013 = (void*)0;
struct sTupleNode* result_726;
void* __right_value1014 = (void*)0;
char* __dec_obj257;
void* __right_value1021 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj262;
struct sTupleNode* __result385__;
    if(    self==(void*)0) {
        __result380__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    result_726=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_726->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj257=result_726->sname;
        result_726->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_726->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj262=result_726->tuple_elements;
        result_726->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj262,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result385__ = gComeFunResultObject = __result_obj__ = result_726;
    come_call_finalizer3(result_726,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result381__;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_727;
struct list_item$1tuple2$2charphsNodephph* it_728;
void* __right_value1020 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result384__;
    if(    self==((void*)0)) {
        __result381__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    result_727=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1220, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_728=self->head;
    while(it_728!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_727,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodephp_clone, it_728->item)));
        it_728=it_728->next;
    }
    __result384__ = gComeFunResultObject = __result_obj__ = result_727;
    come_call_finalizer3(result_727,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result382__;
void* __right_value1017 = (void*)0;
struct tuple2$2charphsNodeph* result_729;
void* __right_value1018 = (void*)0;
char* __dec_obj258;
void* __right_value1019 = (void*)0;
struct sNode* __dec_obj259;
struct tuple2$2charphsNodeph* __result383__;
    if(    self==(void*)0) {
        __result382__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    result_729=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj258=result_729->v1;
        result_729->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj259=result_729->v2;
        result_729->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result383__ = gComeFunResultObject = __result_obj__ = result_729;
    come_call_finalizer3(result_729,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj260;
struct sNode* __dec_obj261;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj260=self->v1;
            __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj261=self->v2;
            if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct list$1sNodeph* tuple_elements_730;
struct sNode* node_731;
void* __right_value1025 = (void*)0;
struct sNode* node2_732;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1031 = (void*)0;
struct sNode* __result389__;
    tuple_elements_730=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2742, "struct list$1sNodeph*", (void*)0, (void*)0))));
    node_731=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodeph_push_back(tuple_elements_730,(struct sNode*)come_increment_ref_count(node_731));
    node2_732=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_730,(struct sNode*)come_increment_ref_count(node2_732));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2752, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1027=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2752, "struct sSomeNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_730),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1031=_inf_value18));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(tuple_elements_730,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_731) { node_731 = come_decrement_ref_count2(node_731, ((struct sNode*)node_731)->finalize, ((struct sNode*)node_731)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_732) { node2_732 = come_decrement_ref_count2(node2_732, ((struct sNode*)node2_732)->finalize, ((struct sNode*)node2_732)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1027,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1031) { __right_value1031 = come_decrement_ref_count2(__right_value1031, ((struct sNode*)__right_value1031)->finalize, ((struct sNode*)__right_value1031)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result387__;
void* __right_value1028 = (void*)0;
struct sSomeNode* result_733;
void* __right_value1029 = (void*)0;
char* __dec_obj263;
void* __right_value1030 = (void*)0;
struct list$1sNodeph* __dec_obj264;
struct sSomeNode* __result388__;
    if(    self==(void*)0) {
        __result387__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    result_733=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_733->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj263=result_733->sname;
        result_733->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_733->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj264=result_733->tuple_elements;
        result_733->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj264,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result388__ = gComeFunResultObject = __result_obj__ = result_733;
    come_call_finalizer3(result_733,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct list$1sNodeph* tuple_elements_734;
void* __right_value1034 = (void*)0;
struct sNode* node_735;
void* __right_value1035 = (void*)0;
struct sNode* __dec_obj265;
void* __right_value1036 = (void*)0;
struct sNode* node2_736;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1039 = (void*)0;
struct sNode* __result390__;
    tuple_elements_734=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2757, "struct list$1sNodeph*", (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_735=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj265=node_735;
    node_735=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_735),info));
    if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodeph_push_back(tuple_elements_734,(struct sNode*)come_increment_ref_count(node_735));
    node2_736=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_734,(struct sNode*)come_increment_ref_count(node2_736));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2770, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1038=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2770, "struct sSomeNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_734),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1039=_inf_value19));
    come_call_finalizer3(tuple_elements_734,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_735) { node_735 = come_decrement_ref_count2(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_736) { node2_736 = come_decrement_ref_count2(node2_736, ((struct sNode*)node2_736)->finalize, ((struct sNode*)node2_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1038,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1039) { __right_value1039 = come_decrement_ref_count2(__right_value1039, ((struct sNode*)__right_value1039)->finalize, ((struct sNode*)__right_value1039)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result390__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
struct list$1sNodeph* tuple_elements_737;
void* __right_value1042 = (void*)0;
struct sNode* node_738;
void* __right_value1043 = (void*)0;
struct sNode* __dec_obj266;
void* __right_value1044 = (void*)0;
struct sNode* node2_739;
struct sNode* node3_740;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1050 = (void*)0;
struct sNode* __result393__;
    tuple_elements_737=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2775, "struct list$1sNodeph*", (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_738=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj266=node_738;
    node_738=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_738),info));
    if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_739=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodeph_push_back(tuple_elements_737,(struct sNode*)come_increment_ref_count(node2_739));
    node3_740=(struct sNode*)come_increment_ref_count(node_738);
    list$1sNodeph_push_back(tuple_elements_737,(struct sNode*)come_increment_ref_count(node3_740));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2790, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1046=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2790, "struct sNoneNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_737),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1050=_inf_value20));
    come_call_finalizer3(tuple_elements_737,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_738) { node_738 = come_decrement_ref_count2(node_738, ((struct sNode*)node_738)->finalize, ((struct sNode*)node_738)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_739) { node2_739 = come_decrement_ref_count2(node2_739, ((struct sNode*)node2_739)->finalize, ((struct sNode*)node2_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_740) { node3_740 = come_decrement_ref_count2(node3_740, ((struct sNode*)node3_740)->finalize, ((struct sNode*)node3_740)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1046,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1050) { __right_value1050 = come_decrement_ref_count2(__right_value1050, ((struct sNode*)__right_value1050)->finalize, ((struct sNode*)__right_value1050)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result391__;
void* __right_value1047 = (void*)0;
struct sNoneNode* result_741;
void* __right_value1048 = (void*)0;
char* __dec_obj267;
void* __right_value1049 = (void*)0;
struct list$1sNodeph* __dec_obj268;
struct sNoneNode* __result392__;
    if(    self==(void*)0) {
        __result391__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    result_741=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_741->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj267=result_741->sname;
        result_741->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_741->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj268=result_741->tuple_elements;
        result_741->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj268,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result392__ = gComeFunResultObject = __result_obj__ = result_741;
    come_call_finalizer3(result_741,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

