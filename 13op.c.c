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
struct sNullNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNilNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
struct sNode* create_null_node(struct sInfo* info);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
static void sNilNode_finalize(struct sNilNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* mult_exp(struct sInfo* info);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value288 = (void*)0;
struct sType* generics_type_272;
struct sType* __dec_obj79;
struct sClass* klass_301;
char* class_name_302;
struct sFun* operator_fun_303;
char* fun_name2_304;
void* __right_value289 = (void*)0;
char* none_generics_name_305;
void* __right_value290 = (void*)0;
struct sType* obj_type_306;
void* __right_value291 = (void*)0;
char* __dec_obj80;
void* __right_value292 = (void*)0;
char* fun_name3_307;
void* __right_value293 = (void*)0;
struct sGenericsFun* generics_fun_308;
void* __right_value294 = (void*)0;
_Bool _if_conditional1;
_Bool __result235__;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_314=0;
char* fun_name_315=0;
void* __right_value297 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun2_316=0;
char* fun_name2_317=0;
void* __right_value298 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_318=0;
char* fun_name_319=0;
void* __right_value299 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_320=0;
char* fun_name2_321=0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
char* __dec_obj109;
int i_322;
void* __right_value302 = (void*)0;
char* new_fun_name_323;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
char* __dec_obj110;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* obj_type_324;
void* __right_value307 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_325=0;
char* fun_name_326=0;
void* __right_value308 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_327=0;
char* fun_name2_328=0;
void* __right_value309 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_329=0;
char* fun_name_330=0;
void* __right_value310 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun2_331=0;
char* fun_name2_332=0;
_Bool result_333;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct CVALUE* come_value_334;
char* left_value2_335;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
_Bool _if_conditional2;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* __dec_obj111;
void* __right_value319 = (void*)0;
char* __dec_obj112;
char* right_value2_339;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
_Bool _if_conditional3;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __dec_obj113;
void* __right_value326 = (void*)0;
char* __dec_obj114;
void* __right_value327 = (void*)0;
struct sType* type2_340;
void* __right_value328 = (void*)0;
struct sType* type3_341;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
char* __dec_obj115;
struct sType* result_type_342;
struct sType* obj_type_343;
int generics_num_344;
struct sType* type_345;
struct sType* __dec_obj116;
struct sType* __dec_obj117;
void* __right_value333 = (void*)0;
struct sType* refference_type_346;
void* __right_value334 = (void*)0;
struct sType* __dec_obj118;
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
char* __dec_obj119;
struct sType* __dec_obj120;
void* __right_value345 = (void*)0;
struct tuple1$1sTypeph* __dec_obj121;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __dec_obj122;
void* __right_value348 = (void*)0;
struct sType* __dec_obj123;
void* __right_value349 = (void*)0;
struct sType* __dec_obj124;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
char* __dec_obj125;
void* __right_value352 = (void*)0;
char* __dec_obj126;
_Bool __result243__;
fun_name2_304 = (void*)0;
memset(&i_322, 0, sizeof(int));
left_value2_335 = (void*)0;
right_value2_339 = (void*)0;
type_345 = (void*)0;
    generics_type_272=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_272->mNoSolvedGenericsType->v1) {
        __dec_obj79=generics_type_272;
        generics_type_272=(struct sType*)come_increment_ref_count(generics_type_272->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_301=type->mClass;
    class_name_302=klass_301->mName;
    operator_fun_303=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_305=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_306=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj80=fun_name2_304;
        fun_name2_304=(char*)come_increment_ref_count(create_method_name(obj_type_306,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_307=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_305,fun_name));
        generics_fun_308=((struct sGenericsFun*)(__right_value293=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_307,((void*)0))));
        come_call_finalizer3(__right_value293,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_308) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_304)),generics_fun_308,obj_type_306,info))),            _if_conditional1) {
                __result235__ = (_Bool)0;
                none_generics_name_305 = come_decrement_ref_count2(none_generics_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_307 = come_decrement_ref_count2(fun_name3_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_304 = come_decrement_ref_count2(fun_name2_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result235__;
            }
            operator_fun_303=((struct sFun*)(__right_value295=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_304)));
            come_call_finalizer3(__right_value295,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value296=create_equals_automatically(obj_type_306,"equals",info)));
                fun_314=multiple_assign_var1->v1;
                fun_name_315=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(__right_value296,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value297=create_operator_equals_automatically(obj_type_306,"operator_equals",info)));
                fun2_316=multiple_assign_var2->v1;
                fun_name2_317=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(__right_value297,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_303=fun2_316;
                fun_name_315 = come_decrement_ref_count2(fun_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_317 = come_decrement_ref_count2(fun_name2_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value298=create_not_equals_automatically(obj_type_306,"not_equals",info)));
                fun_318=multiple_assign_var3->v1;
                fun_name_319=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(__right_value298,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value299=create_operator_not_equals_automatically(obj_type_306,"operator_not_equals",info)));
                fun2_320=multiple_assign_var4->v1;
                fun_name2_321=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value299,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_303=fun2_320;
                fun_name_319 = come_decrement_ref_count2(fun_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_321 = come_decrement_ref_count2(fun_name2_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                operator_fun_303=((struct sFun*)(__right_value300=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_304)));
                come_call_finalizer3(__right_value300,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        none_generics_name_305 = come_decrement_ref_count2(none_generics_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_307 = come_decrement_ref_count2(fun_name3_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj109=fun_name2_304;
        fun_name2_304=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_322=128-1;        i_322>=1;        i_322--        ){
            new_fun_name_323=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_304,i_322));
            operator_fun_303=((struct sFun*)(__right_value303=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_323)));
            come_call_finalizer3(__right_value303,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            operator_fun_303) {
                __dec_obj110=fun_name2_304;
                fun_name2_304=(char*)come_increment_ref_count(__builtin_string(new_fun_name_323));
                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_323 = come_decrement_ref_count2(new_fun_name_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_323 = come_decrement_ref_count2(new_fun_name_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_303==((void*)0)) {
            operator_fun_303=((struct sFun*)(__right_value305=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_304)));
            come_call_finalizer3(__right_value305,sFun_finalize, 0, 1, 0, 0, (void*)0);
            obj_type_324=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
            if(            operator_fun_303==((void*)0)) {
                if(                charp_operator_equals(fun_name,"operator_equals")) {
                    multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value307=create_equals_automatically(obj_type_324,"equals",info)));
                    fun_325=multiple_assign_var5->v1;
                    fun_name_326=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    come_call_finalizer3(__right_value307,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value308=create_operator_equals_automatically(obj_type_324,"operator_equals",info)));
                    fun2_327=multiple_assign_var6->v1;
                    fun_name2_328=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                    come_call_finalizer3(__right_value308,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_303=fun2_327;
                    fun_name_326 = come_decrement_ref_count2(fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_328 = come_decrement_ref_count2(fun_name2_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value309=create_not_equals_automatically(obj_type_324,"not_equals",info)));
                    fun_329=multiple_assign_var7->v1;
                    fun_name_330=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    come_call_finalizer3(__right_value309,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value310=create_operator_not_equals_automatically(obj_type_324,"operator_not_equals",info)));
                    fun2_331=multiple_assign_var8->v1;
                    fun_name2_332=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    come_call_finalizer3(__right_value310,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_303=fun2_331;
                    fun_name_330 = come_decrement_ref_count2(fun_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_332 = come_decrement_ref_count2(fun_name2_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(obj_type_324,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    result_333=(_Bool)0;
    if(    operator_fun_303&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_334=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 92, "struct CVALUE*", (void*)0, (void*)0))));
        check_assign_type(((char*)(__right_value314=xsprintf("\%s is assigned to",((char*)(__right_value313=string_to_string(fun_name2_304)))))),((struct sType*)come_null_check(((struct sType*)(__right_value315=list$1sTypephp_operator_load_element(operator_fun_303->mParamTypes,0))), "13op.c", 94, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value315,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value316=list$1sTypephp_operator_load_element(operator_fun_303->mParamTypes,0))), "13op.c", 95, 1))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value316,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value317=list$1sTypephp_operator_load_element(operator_fun_303->mParamTypes,0))), "13op.c", 96, 2)),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj111=left_value2_335;
            left_value2_335=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj112=left_value2_335;
            left_value2_335=(char*)come_increment_ref_count(come_call_cloner(string_clone, left_value->c_value));
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value321=xsprintf("\%s is assigned to",((char*)(__right_value320=string_to_string(fun_name2_304)))))),((struct sType*)come_null_check(((struct sType*)(__right_value322=list$1sTypephp_operator_load_element(operator_fun_303->mParamTypes,1))), "13op.c", 103, 3)),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional3=(((struct sType*)come_null_check(((struct sType*)(__right_value323=list$1sTypephp_operator_load_element(operator_fun_303->mParamTypes,1))), "13op.c", 104, 4))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value324=list$1sTypephp_operator_load_element(operator_fun_303->mParamTypes,1))), "13op.c", 105, 5)),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj113=right_value2_339;
            right_value2_339=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj114=right_value2_339;
            right_value2_339=(char*)come_increment_ref_count(come_call_cloner(string_clone, right_value->c_value));
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type2_340=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_303->mResultType));
        type3_341=(struct sType*)come_increment_ref_count(solve_generics(type2_340,generics_type_272,info));
        __dec_obj115=come_value_334->c_value;
        come_value_334->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s)",((char*)(__right_value329=string_to_string(fun_name2_304))),((char*)(__right_value330=string_to_string(left_value2_335))),((char*)(__right_value331=string_to_string(right_value2_339)))));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_342=(struct sType*)come_increment_ref_count(type2_340);
        obj_type_343=(struct sType*)come_increment_ref_count(generics_type_272);
        if(        type3_341->mClass->mProtocol&&string_operator_equals(type3_341->mClass->mName,"object")&&type3_341->mNoRefference) {
            generics_num_344=result_type_342->mGenericsNumBefore;
            if(            obj_type_343->mNoSolvedGenericsType&&obj_type_343->mNoSolvedGenericsType->v1) {
                __dec_obj116=type_345;
                type_345=(struct sType*)come_increment_ref_count(obj_type_343->mNoSolvedGenericsType->v1);
                come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj117=type_345;
                type_345=(struct sType*)come_increment_ref_count(obj_type_343);
                come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            type_345) {
                refference_type_346=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(type_345->mGenericsTypes,generics_num_344));
                if(                refference_type_346&&refference_type_346->mRefferenceOriginalType) {
                    __dec_obj118=refference_type_346;
                    refference_type_346=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, refference_type_346->mRefferenceOriginalType->v1));
                    come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
                    static int i_347=0;
                    i_347++;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value337=make_define_var(result_type_342,((char*)(__right_value336=xsprintf("__tmp_infX\%s",((char*)(__right_value335=int_to_string(i_347)))))),(_Bool)0,info))));
                    __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj119=come_value_334->c_value;
                    come_value_334->c_value=(char*)come_increment_ref_count(xsprintf("((__tmp_infX\%s=\%s),((\%s)(__tmp_infX\%s ? __tmp_infX\%s->_protocol_obj:(void*)0)))",((char*)(__right_value338=int_to_string(i_347))),((char*)(__right_value339=string_to_string(come_value_334->c_value))),((char*)(__right_value341=string_to_string(((char*)(__right_value340=make_type_name_string(refference_type_346,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))))),((char*)(__right_value342=int_to_string(i_347))),((char*)(__right_value343=int_to_string(i_347)))));
                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj120=type3_341;
                    type3_341=(struct sType*)come_increment_ref_count(refference_type_346);
                    come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj121=type3_341->mRefferenceOriginalType;
                    type3_341->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "13op.c", 148, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
                    come_call_finalizer3(__dec_obj121,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj122=type3_341->mRefferenceOriginalType->v1;
                    type3_341->mRefferenceOriginalType->v1=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(((struct sType*)come_null_check(((struct sType*)(__right_value346=list$1sTypephp_operator_load_element(type_345->mGenericsTypes,generics_num_344))), "13op.c", 149, 6))->mRefferenceOriginalType->v1->mGenericsTypes,generics_num_344));
                    come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value346,sType_finalize, 0, 1, 0, 0, (void*)0);
                    type3_341->mHeap=result_type_342->mHeap;
                }
                come_call_finalizer3(refference_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            __dec_obj123=come_value_334->type;
            come_value_334->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_341));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_334->var=((void*)0);
            come_call_finalizer3(type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj124=come_value_334->type;
            come_value_334->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_341));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_334->var=((void*)0);
            if(            type3_341->mHeap) {
                append_object_to_right_values2(come_value_334,(struct sType*)come_increment_ref_count(type3_341),info,(_Bool)0);
            }
        }
        if(        !break_guard&&type3_341->mGuardValue&&type3_341->mPointerNum>0) {
            __dec_obj125=come_value_334->c_value;
            come_value_334->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value350=make_type_name_string(type3_341,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_334->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj126=come_value_334->c_value;
        come_value_334->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_334->c_value,come_value_334->type,info));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_334->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_334));
        result_333=(_Bool)1;
        come_call_finalizer3(come_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_335 = come_decrement_ref_count2(left_value2_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_339 = come_decrement_ref_count2(right_value2_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_340,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_341,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_342,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result243__ = result_333;
    come_call_finalizer3(generics_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_304 = come_decrement_ref_count2(fun_name2_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result243__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result214__;
void* __right_value249 = (void*)0;
struct sType* result_273;
void* __right_value252 = (void*)0;
struct tuple1$1sTypeph* __dec_obj53;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj55;
void* __right_value255 = (void*)0;
char* __dec_obj56;
void* __right_value256 = (void*)0;
char* __dec_obj57;
void* __right_value263 = (void*)0;
struct list$1sTypeph* __dec_obj61;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __dec_obj65;
void* __right_value272 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value279 = (void*)0;
struct list$1charph* __dec_obj70;
void* __right_value280 = (void*)0;
struct tuple1$1sTypeph* __dec_obj71;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj73;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value284 = (void*)0;
char* __dec_obj75;
void* __right_value285 = (void*)0;
char* __dec_obj76;
void* __right_value286 = (void*)0;
char* __dec_obj77;
void* __right_value287 = (void*)0;
char* __dec_obj78;
struct sType* __result230__;
    if(    self==(void*)0) {
        __result214__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_273=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_273->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj53=result_273->mNoSolvedGenericsType;
        result_273->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj53,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj54=result_273->mOriginalLoadVarType;
        result_273->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj55=result_273->mRefferenceOriginalType;
        result_273->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj56=result_273->mInterfaceName;
        result_273->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj57=result_273->mGenericsName;
        result_273->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj61=result_273->mGenericsTypes;
        result_273->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj61,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj65=result_273->mArrayNum;
        result_273->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj65,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj66=result_273->mParamTypes;
        result_273->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result_273->mParamNames;
        result_273->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result_273->mResultType;
        result_273->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj71,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_273->mAlignas;
        result_273->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj73=result_273->mChannelType;
        result_273->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj73,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_273->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_273->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_273->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_273->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_273->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_273->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_273->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_273->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_273->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_273->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_273->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_273->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_273->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_273->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_273->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_273->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_273->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_273->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_273->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_273->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_273->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_273->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_273->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_273->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_273->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj74=result_273->mSizeNum;
        result_273->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_273->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj75=result_273->mOriginalTypeName;
        result_273->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_273->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_273->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_273->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_273->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_273->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_273->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_273->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj76=result_273->mAsmName;
        result_273->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_273->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_273->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_273->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_273->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_273->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj77=result_273->mTupleName;
        result_273->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj78=result_273->mAttribute;
        result_273->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_273;
    come_call_finalizer3(result_273,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result215__;
void* __right_value250 = (void*)0;
struct tuple1$1sTypeph* result_274;
void* __right_value251 = (void*)0;
struct sType* __dec_obj31;
struct tuple1$1sTypeph* __result216__;
    if(    self==(void*)0) {
        __result215__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    result_274=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj31=result_274->v1;
        result_274->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_274;
    come_call_finalizer3(result_274,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj32;
struct tuple1$1sTypeph* __dec_obj34;
struct tuple1$1sTypeph* __dec_obj35;
char* __dec_obj36;
char* __dec_obj37;
struct list$1sTypeph* __dec_obj38;
struct list$1sNodeph* __dec_obj40;
struct list$1sTypeph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct tuple1$1sTypeph* __dec_obj44;
struct sNode* __dec_obj45;
struct tuple1$1sTypeph* __dec_obj46;
struct sNode* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj32=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj32,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj34=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj35=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj36=self->mInterfaceName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj37=self->mGenericsName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj38=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj38,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj40=self->mArrayNum;
            come_call_finalizer3(__dec_obj40,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj42=self->mParamTypes;
            come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj43=self->mParamNames;
            come_call_finalizer3(__dec_obj43,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj44=self->mResultType;
            come_call_finalizer3(__dec_obj44,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj45=self->mAlignas;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj46=self->mChannelType;
            come_call_finalizer3(__dec_obj46,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj47=self->mSizeNum;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj48=self->mOriginalTypeName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj49=self->mAsmName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj50=self->mTupleName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj51=self->mAttribute;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj33;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj33=self->v1;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_275;
struct list_item$1sTypeph* prev_it_276;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
        come_call_finalizer3(prev_it_276,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_277;
struct list_item$1sTypeph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        come_call_finalizer3(prev_it_278,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_279;
struct list_item$1sNodeph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        come_call_finalizer3(prev_it_280,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_281;
struct list_item$1sNodeph* prev_it_282;
    it_281=self->head;
    while(it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        come_call_finalizer3(prev_it_282,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_283;
struct list_item$1charph* prev_it_284;
    it_283=self->head;
    while(it_283!=((void*)0)) {
        prev_it_284=it_283;
        it_283=it_283->next;
        come_call_finalizer3(prev_it_284,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj52;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj52=self->v1;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result217__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1sTypeph* result_285;
struct list_item$1sTypeph* it_286;
void* __right_value262 = (void*)0;
struct list$1sTypeph* __result220__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_285=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_286=self->head;
    while(it_286!=((void*)0)) {
        list$1sTypeph_add(result_285,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_286->item)));
        it_286=it_286->next;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_285;
    come_call_finalizer3(result_285,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value259 = (void*)0;
struct list_item$1sTypeph* litem_287;
struct sType* __dec_obj58;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_288;
struct sType* __dec_obj59;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_289;
struct sType* __dec_obj60;
struct list$1sTypeph* __result219__;
    if(    self->len==0) {
        litem_287=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value259=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_287->prev=((void*)0);
        litem_287->next=((void*)0);
        __dec_obj58=litem_287->item;
        litem_287->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_287;
        self->head=litem_287;
    }
    else if(    self->len==1) {
        litem_288=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_288->prev=self->head;
        litem_288->next=((void*)0);
        __dec_obj59=litem_288->item;
        litem_288->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_288;
        self->head->next=litem_288;
    }
    else {
        litem_289=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_289->prev=self->tail;
        litem_289->next=((void*)0);
        __dec_obj60=litem_289->item;
        litem_289->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_289;
        self->tail=litem_289;
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
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sNodeph* result_290;
struct list_item$1sNodeph* it_291;
void* __right_value270 = (void*)0;
struct list$1sNodeph* __result226__;
    if(    self==((void*)0)) {
        __result221__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_290=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_291=self->head;
    while(it_291!=((void*)0)) {
        list$1sNodeph_add(result_290,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_291->item)));
        it_291=it_291->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_290;
    come_call_finalizer3(result_290,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value266 = (void*)0;
struct list_item$1sNodeph* litem_292;
struct sNode* __dec_obj62;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_293;
struct sNode* __dec_obj63;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_294;
struct sNode* __dec_obj64;
struct list$1sNodeph* __result223__;
    if(    self->len==0) {
        litem_292=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value266=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_292->prev=((void*)0);
        litem_292->next=((void*)0);
        __dec_obj62=litem_292->item;
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_292;
        self->head=litem_292;
    }
    else if(    self->len==1) {
        litem_293=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_293->prev=self->head;
        litem_293->next=((void*)0);
        __dec_obj63=litem_293->item;
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_293;
        self->head->next=litem_293;
    }
    else {
        litem_294=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_294->prev=self->tail;
        litem_294->next=((void*)0);
        __dec_obj64=litem_294->item;
        litem_294->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_294;
        self->tail=litem_294;
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
void* __right_value269 = (void*)0;
struct sNode* result_295;
struct sNode* __result225__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_295=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_295->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_295->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_295->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_295->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_295->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_295->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_295->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_295->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_295->kind=self->kind;
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_295;
    if(result_295) { result_295 = come_decrement_ref_count2(result_295, ((struct sNode*)result_295)->finalize, ((struct sNode*)result_295)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result227__;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1charph* result_296;
struct list_item$1charph* it_297;
void* __right_value278 = (void*)0;
struct list$1charph* __result229__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_296=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_297=self->head;
    while(it_297!=((void*)0)) {
        list$1charph_add(result_296,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_297->item)));
        it_297=it_297->next;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_296;
    come_call_finalizer3(result_296,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_298;
char* __dec_obj67;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_299;
char* __dec_obj68;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_300;
char* __dec_obj69;
struct list$1charph* __result228__;
    if(    self->len==0) {
        litem_298=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_298->prev=((void*)0);
        litem_298->next=((void*)0);
        __dec_obj67=litem_298->item;
        litem_298->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_298;
        self->head=litem_298;
    }
    else if(    self->len==1) {
        litem_299=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_299->prev=self->head;
        litem_299->next=((void*)0);
        __dec_obj68=litem_299->item;
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_299;
        self->head->next=litem_299;
    }
    else {
        litem_300=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_300->prev=self->tail;
        litem_300->next=((void*)0);
        __dec_obj69=litem_300->item;
        litem_300->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_300;
        self->tail=litem_300;
    }
    self->len++;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_309;
unsigned int it_310;
struct sGenericsFun* __result231__;
struct sGenericsFun* __result232__;
struct sGenericsFun* __result233__;
struct sGenericsFun* __result234__;
    hash_309=charp_get_hash_key(((char*)key))%self->size;
    it_310=hash_309;
    while((_Bool)1) {
        if(        self->item_existance[it_310]) {
            if(            charp_equals(self->keys[it_310],key)) {
                __result231__ = gComeFunResultObject = __result_obj__ = self->items[it_310];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
            it_310++;
            if(            it_310>=self->size) {
                it_310=0;
            }
            else if(            it_310==hash_309) {
                __result232__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result232__;
            }
        }
        else {
            __result233__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result233__;
        }
    }
    __result234__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj81;
struct list$1charph* __dec_obj82;
struct list$1charph* __dec_obj83;
char* __dec_obj84;
struct sType* __dec_obj85;
struct list$1sTypeph* __dec_obj86;
struct list$1charph* __dec_obj87;
struct list$1charph* __dec_obj88;
char* __dec_obj89;
char* __dec_obj90;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj81=self->mImplType;
            come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj82=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj83=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj84=self->mName;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj85=self->mResultType;
            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj86=self->mParamTypes;
            come_call_finalizer3(__dec_obj86,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj87=self->mParamNames;
            come_call_finalizer3(__dec_obj87,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj88=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj89=self->mBlock;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj90=self->mGenericsSName;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_311;
unsigned int hash_312;
unsigned int it_313;
struct sFun* __result236__;
struct sFun* __result237__;
struct sFun* __result238__;
struct sFun* __result239__;
default_value_311 = (void*)0;
    memset(&default_value_311,0,sizeof(struct sFun*));
    hash_312=charp_get_hash_key(((char*)key))%self->size;
    it_313=hash_312;
    while((_Bool)1) {
        if(        self->item_existance[it_313]) {
            if(            charp_equals(self->keys[it_313],key)) {
                __result236__ = gComeFunResultObject = __result_obj__ = self->items[it_313];
                come_call_finalizer3(default_value_311,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result236__;
            }
            it_313++;
            if(            it_313>=self->size) {
                it_313=0;
            }
            else if(            it_313==hash_312) {
                __result237__ = gComeFunResultObject = __result_obj__ = default_value_311;
                come_call_finalizer3(default_value_311,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result237__;
            }
        }
        else {
            __result238__ = gComeFunResultObject = __result_obj__ = default_value_311;
            come_call_finalizer3(default_value_311,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result238__;
        }
    }
    __result239__ = gComeFunResultObject = __result_obj__ = default_value_311;
    come_call_finalizer3(default_value_311,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj91;
struct sType* __dec_obj92;
struct list$1sTypeph* __dec_obj93;
struct list$1charph* __dec_obj94;
struct list$1charph* __dec_obj95;
struct sType* __dec_obj96;
struct sBlock* __dec_obj97;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
struct buffer* __dec_obj103;
char* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
char* __dec_obj107;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj91=self->mName;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj92=self->mResultType;
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj93=self->mParamTypes;
            come_call_finalizer3(__dec_obj93,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj94=self->mParamNames;
            come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj95=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj96=self->mLambdaType;
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj97=self->mBlock;
            come_call_finalizer3(__dec_obj97,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj100=self->mSource;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj101=self->mSourceHead;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj102=self->mSourceHead2;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj103=self->mSourceDefer;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj104=self->mComeHeader;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj105=self->mDeclareSName;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj106=self->mAttribute;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj107=self->mFunAttribute;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj98;
struct sVarTable* __dec_obj99;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj98=self->mNodes;
            come_call_finalizer3(__dec_obj98,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj99=self->mVarTable;
            come_call_finalizer3(__dec_obj99,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj108;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj108=self->v2;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_336;
int i_337;
struct sType* __result240__;
struct sType* default_value_338;
struct sType* __result241__;
default_value_338 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_336=self->head;
    i_337=0;
    while(it_336!=((void*)0)) {
        if(        position==i_337) {
            __result240__ = gComeFunResultObject = __result_obj__ = it_336->item;
            gComeFunResultObject = (void*)0;
            return __result240__;
        }
        it_336=it_336->next;
        i_337++;
    }
    memset(&default_value_338,0,sizeof(struct sType*));
    __result241__ = gComeFunResultObject = __result_obj__ = default_value_338;
    come_call_finalizer3(default_value_338,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
struct list_item$1CVALUEph* litem_348;
struct CVALUE* __dec_obj127;
void* __right_value354 = (void*)0;
struct list_item$1CVALUEph* litem_349;
struct CVALUE* __dec_obj131;
void* __right_value355 = (void*)0;
struct list_item$1CVALUEph* litem_350;
struct CVALUE* __dec_obj132;
struct list$1CVALUEph* __result242__;
    if(    self->len==0) {
        litem_348=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value353=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1305, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_348->prev=((void*)0);
        litem_348->next=((void*)0);
        __dec_obj127=litem_348->item;
        litem_348->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_348;
        self->head=litem_348;
    }
    else if(    self->len==1) {
        litem_349=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value354=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1315, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_349->prev=self->head;
        litem_349->next=((void*)0);
        __dec_obj131=litem_349->item;
        litem_349->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_349;
        self->head->next=litem_349;
    }
    else {
        litem_350=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value355=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1325, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_350->prev=self->tail;
        litem_350->next=((void*)0);
        __dec_obj132=litem_350->item;
        litem_350->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_350;
        self->tail=litem_350;
    }
    self->len++;
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj128;
struct sType* __dec_obj129;
char* __dec_obj130;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj128=self->c_value;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj129=self->type;
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj130=self->c_value_without_right_value_objects;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
struct sNullNode* __result244__;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value356,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result245__;
    __result245__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sNullNode")));
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_351;
void* __right_value360 = (void*)0;
char* __dec_obj135;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj136;
_Bool __result246__;
    come_value_351=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 196, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj135=come_value_351->c_value;
    come_value_351->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj136=come_value_351->type;
    come_value_351->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 199, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_351->var=((void*)0);
    add_come_last_code(info,"%s",come_value_351->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_351));
    __result246__ = (_Bool)1;
    come_call_finalizer3(come_value_351,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result246__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
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

static void sNullNode_finalize(struct sNullNode* self){
char* __dec_obj134;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj134=self->sname;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value367 = (void*)0;
struct sNode* __result249__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 212, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value364=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 212, "struct sNullNode*", (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result249__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value367=_inf_value1));
    come_call_finalizer3(__right_value364,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value367) { __right_value367 = come_decrement_ref_count2(__right_value367, ((struct sNode*)__right_value367)->finalize, ((struct sNode*)__right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__=(void*)0;
struct sNullNode* __result247__;
void* __right_value365 = (void*)0;
struct sNullNode* result_352;
void* __right_value366 = (void*)0;
char* __dec_obj137;
struct sNullNode* __result248__;
    if(    self==(void*)0) {
        __result247__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    result_352=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_352->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj137=result_352->sname;
        result_352->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_352->sline_real=self->sline_real;
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_352;
    come_call_finalizer3(result_352,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
struct sNilNode* __result250__;
    ((struct sNodeBase*)(__right_value368=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value368,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
char* __result251__;
    __result251__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value369=__builtin_string("sNilNode")));
    __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_353;
void* __right_value372 = (void*)0;
char* __dec_obj139;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* __dec_obj140;
_Bool __result252__;
    come_value_353=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 229, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj139=come_value_353->c_value;
    come_value_353->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=come_value_353->type;
    come_value_353->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 232, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_353->type->mNullValue=(_Bool)1;
    come_value_353->var=((void*)0);
    add_come_last_code(info,"%s",come_value_353->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_353));
    __result252__ = (_Bool)1;
    come_call_finalizer3(come_value_353,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result252__;
}

static void sNilNode_finalize(struct sNilNode* self){
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

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* __dec_obj141;
void* __right_value377 = (void*)0;
struct sNode* __dec_obj142;
struct sAddNode* __result253__;
    ((struct sNodeBase*)(__right_value375=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value375,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj141=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj142=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result253__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
char* __result254__;
    __result254__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value378=__builtin_string("sAddNode")));
    __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_354;
_Bool Value_355;
void* __right_value379 = (void*)0;
struct CVALUE* left_value_356;
struct sNode* right_node_357;
_Bool Value_358;
_Bool __result255__;
void* __right_value380 = (void*)0;
struct CVALUE* right_value_359;
struct sType* type_360;
char* fun_name_361;
_Bool calling_fun_362;
void* __right_value381 = (void*)0;
struct sType* result_type_363;
void* __right_value382 = (void*)0;
struct sType* __dec_obj146;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_364;
void* __right_value385 = (void*)0;
char* __dec_obj147;
void* __right_value386 = (void*)0;
struct sType* __dec_obj148;
_Bool __result256__;
memset(&calling_fun_362, 0, sizeof(_Bool));
    left_node_354=self->mLeft;
    Value_355=node_compile(left_node_354,info);
    if(    !Value_355) {
        return (_Bool)0;
    }
    else {
    }
    left_value_356=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_357=self->mRight;
    Value_358=node_compile(right_node_357,info);
    if(    !Value_358) {
        __result255__ = (_Bool)0;
        come_call_finalizer3(left_value_356,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result255__;
    }
    else {
    }
    right_value_359=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_360=(struct sType*)come_increment_ref_count(left_value_356->type);
    fun_name_361="operator_add";
    if(    self->mQuote) {
        calling_fun_362=(_Bool)0;
    }
    else {
        calling_fun_362=operator_overload_fun(type_360,fun_name_361,left_value_356,right_value_359,(_Bool)0,info);
    }
    if(    !calling_fun_362) {
        result_type_363=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_356->type));
        if(        right_value_359->type->mPointerNum>0) {
            __dec_obj146=result_type_363;
            result_type_363=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_359->type));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_364=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 298, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj147=come_value_364->c_value;
        come_value_364->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_356->c_value,right_value_359->c_value));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj148=come_value_364->type;
        come_value_364->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_363));
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_364->type->mHeap=(_Bool)0;
        come_value_364->var=((void*)0);
        add_come_last_code(info,"%s",come_value_364->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_364));
        come_call_finalizer3(result_type_363,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_364,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result256__ = (_Bool)1;
    come_call_finalizer3(left_value_356,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_359,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result256__;
}

static void sAddNode_finalize(struct sAddNode* self){
char* __dec_obj143;
struct sNode* __dec_obj144;
struct sNode* __dec_obj145;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj143=self->sname;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj144=self->mLeft;
            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj145=self->mRight;
            if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj149;
void* __right_value389 = (void*)0;
struct sNode* __dec_obj150;
struct sSubNode* __result257__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj149=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj150=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result257__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
char* __result258__;
    __result258__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value390=__builtin_string("sSubNode")));
    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_365;
_Bool Value_366;
void* __right_value391 = (void*)0;
struct CVALUE* left_value_367;
struct sNode* right_node_368;
_Bool Value_369;
_Bool __result259__;
void* __right_value392 = (void*)0;
struct CVALUE* right_value_370;
struct sType* type_371;
char* fun_name_372;
_Bool calling_fun_373;
void* __right_value393 = (void*)0;
struct sType* result_type_374;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sType* __dec_obj154;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_375;
void* __right_value398 = (void*)0;
char* __dec_obj155;
void* __right_value399 = (void*)0;
struct sType* __dec_obj156;
_Bool __result260__;
memset(&calling_fun_373, 0, sizeof(_Bool));
    left_node_365=self->mLeft;
    Value_366=node_compile(left_node_365,info);
    if(    !Value_366) {
        return (_Bool)0;
    }
    else {
    }
    left_value_367=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_368=self->mRight;
    Value_369=node_compile(right_node_368,info);
    if(    !Value_369) {
        __result259__ = (_Bool)0;
        come_call_finalizer3(left_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result259__;
    }
    else {
    }
    right_value_370=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_371=(struct sType*)come_increment_ref_count(left_value_367->type);
    fun_name_372="operator_sub";
    if(    self->mQuote) {
        calling_fun_373=(_Bool)0;
    }
    else {
        calling_fun_373=operator_overload_fun(type_371,fun_name_372,left_value_367,right_value_370,(_Bool)0,info);
    }
    if(    !calling_fun_373) {
        result_type_374=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_367->type));
        if(        left_value_367->type->mPointerNum>0&&right_value_370->type->mPointerNum>0) {
            __dec_obj154=result_type_374;
            result_type_374=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 365, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_375=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 368, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj155=come_value_375->c_value;
        come_value_375->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_367->c_value,right_value_370->c_value));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj156=come_value_375->type;
        come_value_375->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_374));
        come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_375->type->mHeap=(_Bool)0;
        come_value_375->var=((void*)0);
        add_come_last_code(info,"%s",come_value_375->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_375));
        come_call_finalizer3(result_type_374,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_375,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result260__ = (_Bool)1;
    come_call_finalizer3(left_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_370,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_371,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result260__;
}

static void sSubNode_finalize(struct sSubNode* self){
char* __dec_obj151;
struct sNode* __dec_obj152;
struct sNode* __dec_obj153;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj151=self->sname;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj152=self->mLeft;
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj153=self->mRight;
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sNode* __dec_obj157;
void* __right_value402 = (void*)0;
struct sNode* __dec_obj158;
struct sMultNode* __result261__;
    ((struct sNodeBase*)(__right_value400=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value400,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj157=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj158=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
char* __result262__;
    __result262__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value403=__builtin_string("sMultNode")));
    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_376;
_Bool Value_377;
void* __right_value404 = (void*)0;
struct CVALUE* left_value_378;
struct sNode* right_node_379;
_Bool Value_380;
_Bool __result263__;
void* __right_value405 = (void*)0;
struct CVALUE* right_value_381;
struct sType* type_382;
char* fun_name_383;
_Bool calling_fun_384;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value408 = (void*)0;
char* __dec_obj162;
void* __right_value409 = (void*)0;
struct sType* __dec_obj163;
_Bool __result264__;
memset(&calling_fun_384, 0, sizeof(_Bool));
    left_node_376=self->mLeft;
    Value_377=node_compile(left_node_376,info);
    if(    !Value_377) {
        return (_Bool)0;
    }
    else {
    }
    left_value_378=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_379=self->mRight;
    Value_380=node_compile(right_node_379,info);
    if(    !Value_380) {
        __result263__ = (_Bool)0;
        come_call_finalizer3(left_value_378,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result263__;
    }
    else {
    }
    right_value_381=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_382=(struct sType*)come_increment_ref_count(left_value_378->type);
    fun_name_383="operator_mult";
    if(    self->mQuote) {
        calling_fun_384=(_Bool)0;
    }
    else {
        calling_fun_384=operator_overload_fun(type_382,fun_name_383,left_value_378,right_value_381,(_Bool)0,info);
    }
    if(    !calling_fun_384) {
        come_value_385=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 433, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj162=come_value_385->c_value;
        come_value_385->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_378->c_value,right_value_381->c_value));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj163=come_value_385->type;
        come_value_385->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_378->type));
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_385->type->mHeap=(_Bool)0;
        come_value_385->var=((void*)0);
        add_come_last_code(info,"%s",come_value_385->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_385));
        come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result264__ = (_Bool)1;
    come_call_finalizer3(left_value_378,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_381,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_382,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result264__;
}

static void sMultNode_finalize(struct sMultNode* self){
char* __dec_obj159;
struct sNode* __dec_obj160;
struct sNode* __dec_obj161;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj159=self->sname;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj160=self->mLeft;
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj161=self->mRight;
            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sNode* __dec_obj164;
void* __right_value412 = (void*)0;
struct sNode* __dec_obj165;
struct sDivNode* __result265__;
    ((struct sNodeBase*)(__right_value410=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value410,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj164=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj165=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result265__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__=(void*)0;
void* __right_value413 = (void*)0;
char* __result266__;
    __result266__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value413=__builtin_string("sDivNode")));
    __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_386;
_Bool Value_387;
void* __right_value414 = (void*)0;
struct CVALUE* left_value_388;
struct sNode* right_node_389;
_Bool Value_390;
_Bool __result267__;
void* __right_value415 = (void*)0;
struct CVALUE* right_value_391;
struct sType* type_392;
char* fun_name_393;
_Bool calling_fun_394;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value418 = (void*)0;
char* __dec_obj169;
void* __right_value419 = (void*)0;
struct sType* __dec_obj170;
_Bool __result268__;
memset(&calling_fun_394, 0, sizeof(_Bool));
    left_node_386=self->mLeft;
    Value_387=node_compile(left_node_386,info);
    if(    !Value_387) {
        return (_Bool)0;
    }
    else {
    }
    left_value_388=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_389=self->mRight;
    Value_390=node_compile(right_node_389,info);
    if(    !Value_390) {
        __result267__ = (_Bool)0;
        come_call_finalizer3(left_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result267__;
    }
    else {
    }
    right_value_391=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_392=(struct sType*)come_increment_ref_count(left_value_388->type);
    fun_name_393="operator_div";
    if(    self->mQuote) {
        calling_fun_394=(_Bool)0;
    }
    else {
        calling_fun_394=operator_overload_fun(type_392,fun_name_393,left_value_388,right_value_391,(_Bool)0,info);
    }
    if(    !calling_fun_394) {
        come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 498, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj169=come_value_395->c_value;
        come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_388->c_value,right_value_391->c_value));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj170=come_value_395->type;
        come_value_395->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_388->type));
        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_395->type->mHeap=(_Bool)0;
        come_value_395->var=((void*)0);
        add_come_last_code(info,"%s",come_value_395->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
        come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result268__ = (_Bool)1;
    come_call_finalizer3(left_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result268__;
}

static void sDivNode_finalize(struct sDivNode* self){
char* __dec_obj166;
struct sNode* __dec_obj167;
struct sNode* __dec_obj168;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj166=self->sname;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj167=self->mLeft;
            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj168=self->mRight;
            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value422 = (void*)0;
struct sNode* __dec_obj172;
struct sModNode* __result269__;
    ((struct sNodeBase*)(__right_value420=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value420,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj171=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj172=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result269__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__=(void*)0;
void* __right_value423 = (void*)0;
char* __result270__;
    __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value423=__builtin_string("sModNode")));
    __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_396;
_Bool Value_397;
void* __right_value424 = (void*)0;
struct CVALUE* left_value_398;
struct sNode* right_node_399;
_Bool Value_400;
_Bool __result271__;
void* __right_value425 = (void*)0;
struct CVALUE* right_value_401;
struct sType* type_402;
char* fun_name_403;
_Bool calling_fun_404;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct CVALUE* come_value_405;
void* __right_value428 = (void*)0;
char* __dec_obj176;
void* __right_value429 = (void*)0;
struct sType* __dec_obj177;
_Bool __result272__;
memset(&calling_fun_404, 0, sizeof(_Bool));
    left_node_396=self->mLeft;
    Value_397=node_compile(left_node_396,info);
    if(    !Value_397) {
        return (_Bool)0;
    }
    else {
    }
    left_value_398=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_399=self->mRight;
    Value_400=node_compile(right_node_399,info);
    if(    !Value_400) {
        __result271__ = (_Bool)0;
        come_call_finalizer3(left_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result271__;
    }
    else {
    }
    right_value_401=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_402=(struct sType*)come_increment_ref_count(left_value_398->type);
    fun_name_403="operator_mod";
    if(    self->mQuote) {
        calling_fun_404=(_Bool)0;
    }
    else {
        calling_fun_404=operator_overload_fun(type_402,fun_name_403,left_value_398,right_value_401,(_Bool)0,info);
    }
    if(    !calling_fun_404) {
        come_value_405=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 563, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj176=come_value_405->c_value;
        come_value_405->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_398->c_value,right_value_401->c_value));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj177=come_value_405->type;
        come_value_405->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_398->type));
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_405->type->mHeap=(_Bool)0;
        come_value_405->var=((void*)0);
        add_come_last_code(info,"%s",come_value_405->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_405));
        come_call_finalizer3(come_value_405,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result272__ = (_Bool)1;
    come_call_finalizer3(left_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

static void sModNode_finalize(struct sModNode* self){
char* __dec_obj173;
struct sNode* __dec_obj174;
struct sNode* __dec_obj175;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj173=self->sname;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj174=self->mLeft;
            if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj175=self->mRight;
            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* __dec_obj178;
void* __right_value432 = (void*)0;
struct sNode* __dec_obj179;
struct sLShiftNode* __result273__;
    ((struct sNodeBase*)(__right_value430=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value430,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj178=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj179=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result273__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value433=__builtin_string("sLShiftNode")));
    __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_406;
_Bool Value_407;
void* __right_value434 = (void*)0;
struct CVALUE* left_value_408;
struct sNode* right_node_409;
_Bool Value_410;
_Bool __result275__;
void* __right_value435 = (void*)0;
struct CVALUE* right_value_411;
struct sType* type_412;
char* fun_name_413;
_Bool calling_fun_414;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* come_value_415;
void* __right_value438 = (void*)0;
char* __dec_obj183;
void* __right_value439 = (void*)0;
struct sType* __dec_obj184;
_Bool __result276__;
memset(&calling_fun_414, 0, sizeof(_Bool));
    left_node_406=self->mLeft;
    Value_407=node_compile(left_node_406,info);
    if(    !Value_407) {
        return (_Bool)0;
    }
    else {
    }
    left_value_408=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_409=self->mRight;
    Value_410=node_compile(right_node_409,info);
    if(    !Value_410) {
        __result275__ = (_Bool)0;
        come_call_finalizer3(left_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result275__;
    }
    else {
    }
    right_value_411=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_412=(struct sType*)come_increment_ref_count(left_value_408->type);
    fun_name_413="operator_lshift";
    if(    self->mQuote) {
        calling_fun_414=(_Bool)0;
    }
    else {
        calling_fun_414=operator_overload_fun(type_412,fun_name_413,left_value_408,right_value_411,(_Bool)0,info);
    }
    if(    !calling_fun_414) {
        come_value_415=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 629, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj183=come_value_415->c_value;
        come_value_415->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_408->c_value,right_value_411->c_value));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj184=come_value_415->type;
        come_value_415->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_408->type));
        come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_415->type->mHeap=(_Bool)0;
        come_value_415->var=((void*)0);
        add_come_last_code(info,"%s",come_value_415->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_415));
        come_call_finalizer3(come_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result276__ = (_Bool)1;
    come_call_finalizer3(left_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_411,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result276__;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
char* __dec_obj180;
struct sNode* __dec_obj181;
struct sNode* __dec_obj182;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj180=self->sname;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj181=self->mLeft;
            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj182=self->mRight;
            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value442 = (void*)0;
struct sNode* __dec_obj186;
struct sRShiftNode* __result277__;
    ((struct sNodeBase*)(__right_value440=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value440,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj185=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj186=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result277__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value443 = (void*)0;
char* __result278__;
    __result278__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value443=__builtin_string("sRShiftNode")));
    __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_416;
_Bool Value_417;
void* __right_value444 = (void*)0;
struct CVALUE* left_value_418;
struct sNode* right_node_419;
_Bool Value_420;
_Bool __result279__;
void* __right_value445 = (void*)0;
struct CVALUE* right_value_421;
struct sType* type_422;
char* fun_name_423;
_Bool calling_fun_424;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value448 = (void*)0;
char* __dec_obj190;
void* __right_value449 = (void*)0;
struct sType* __dec_obj191;
_Bool __result280__;
memset(&calling_fun_424, 0, sizeof(_Bool));
    left_node_416=self->mLeft;
    Value_417=node_compile(left_node_416,info);
    if(    !Value_417) {
        return (_Bool)0;
    }
    else {
    }
    left_value_418=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_419=self->mRight;
    Value_420=node_compile(right_node_419,info);
    if(    !Value_420) {
        __result279__ = (_Bool)0;
        come_call_finalizer3(left_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result279__;
    }
    else {
    }
    right_value_421=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_422=(struct sType*)come_increment_ref_count(left_value_418->type);
    fun_name_423="operator_rshift";
    if(    self->mQuote) {
        calling_fun_424=(_Bool)0;
    }
    else {
        calling_fun_424=operator_overload_fun(type_422,fun_name_423,left_value_418,right_value_421,(_Bool)0,info);
    }
    if(    !calling_fun_424) {
        come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 694, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj190=come_value_425->c_value;
        come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_418->c_value,right_value_421->c_value));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj191=come_value_425->type;
        come_value_425->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_418->type));
        come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_425->type->mHeap=(_Bool)0;
        come_value_425->var=((void*)0);
        add_come_last_code(info,"%s",come_value_425->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_425));
        come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result280__ = (_Bool)1;
    come_call_finalizer3(left_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_422,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
char* __dec_obj187;
struct sNode* __dec_obj188;
struct sNode* __dec_obj189;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj187=self->sname;
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj188=self->mLeft;
            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj189=self->mRight;
            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* __dec_obj192;
void* __right_value452 = (void*)0;
struct sNode* __dec_obj193;
struct sGtEqNode* __result281__;
    ((struct sNodeBase*)(__right_value450=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value450,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj192=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj193=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value453 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value453=__builtin_string("sGtEqNode")));
    __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_426;
_Bool Value_427;
void* __right_value454 = (void*)0;
struct CVALUE* left_value_428;
struct sNode* right_node_429;
_Bool Value_430;
_Bool __result283__;
void* __right_value455 = (void*)0;
struct CVALUE* right_value_431;
struct sType* type_432;
char* fun_name_433;
_Bool calling_fun_434;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct CVALUE* come_value_435;
void* __right_value458 = (void*)0;
char* __dec_obj197;
void* __right_value459 = (void*)0;
struct sType* __dec_obj198;
_Bool __result284__;
memset(&calling_fun_434, 0, sizeof(_Bool));
    left_node_426=self->mLeft;
    Value_427=node_compile(left_node_426,info);
    if(    !Value_427) {
        return (_Bool)0;
    }
    else {
    }
    left_value_428=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_429=self->mRight;
    Value_430=node_compile(right_node_429,info);
    if(    !Value_430) {
        __result283__ = (_Bool)0;
        come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result283__;
    }
    else {
    }
    right_value_431=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_432=(struct sType*)come_increment_ref_count(left_value_428->type);
    fun_name_433="operator_gteq";
    if(    self->mQuote) {
        calling_fun_434=(_Bool)0;
    }
    else {
        calling_fun_434=operator_overload_fun(type_432,fun_name_433,left_value_428,right_value_431,(_Bool)0,info);
    }
    if(    !calling_fun_434) {
        come_value_435=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 759, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj197=come_value_435->c_value;
        come_value_435->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_428->c_value,right_value_431->c_value));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj198=come_value_435->type;
        come_value_435->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_428->type));
        come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_435->type->mHeap=(_Bool)0;
        come_value_435->var=((void*)0);
        add_come_last_code(info,"%s",come_value_435->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_435));
        come_call_finalizer3(come_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result284__ = (_Bool)1;
    come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result284__;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
char* __dec_obj194;
struct sNode* __dec_obj195;
struct sNode* __dec_obj196;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj194=self->sname;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj195=self->mLeft;
            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj196=self->mRight;
            if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value462 = (void*)0;
struct sNode* __dec_obj200;
struct sLtEqNode* __result285__;
    ((struct sNodeBase*)(__right_value460=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value460,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj199=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj200=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result285__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value463 = (void*)0;
char* __result286__;
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value463=__builtin_string("sLtEqNode")));
    __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_436;
_Bool Value_437;
void* __right_value464 = (void*)0;
struct CVALUE* left_value_438;
struct sNode* right_node_439;
_Bool Value_440;
_Bool __result287__;
void* __right_value465 = (void*)0;
struct CVALUE* right_value_441;
struct sType* type_442;
char* fun_name_443;
_Bool calling_fun_444;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct CVALUE* come_value_445;
void* __right_value468 = (void*)0;
char* __dec_obj204;
void* __right_value469 = (void*)0;
struct sType* __dec_obj205;
_Bool __result288__;
memset(&calling_fun_444, 0, sizeof(_Bool));
    left_node_436=self->mLeft;
    Value_437=node_compile(left_node_436,info);
    if(    !Value_437) {
        return (_Bool)0;
    }
    else {
    }
    left_value_438=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_439=self->mRight;
    Value_440=node_compile(right_node_439,info);
    if(    !Value_440) {
        __result287__ = (_Bool)0;
        come_call_finalizer3(left_value_438,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result287__;
    }
    else {
    }
    right_value_441=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_442=(struct sType*)come_increment_ref_count(left_value_438->type);
    fun_name_443="operator_lteq";
    if(    self->mQuote) {
        calling_fun_444=(_Bool)0;
    }
    else {
        calling_fun_444=operator_overload_fun(type_442,fun_name_443,left_value_438,right_value_441,(_Bool)0,info);
    }
    if(    !calling_fun_444) {
        come_value_445=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 824, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj204=come_value_445->c_value;
        come_value_445->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_438->c_value,right_value_441->c_value));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj205=come_value_445->type;
        come_value_445->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_438->type));
        come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_445->type->mHeap=(_Bool)0;
        come_value_445->var=((void*)0);
        add_come_last_code(info,"%s",come_value_445->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_445));
        come_call_finalizer3(come_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result288__ = (_Bool)1;
    come_call_finalizer3(left_value_438,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result288__;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
char* __dec_obj201;
struct sNode* __dec_obj202;
struct sNode* __dec_obj203;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj201=self->sname;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj202=self->mLeft;
            if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj203=self->mRight;
            if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sNode* __dec_obj206;
void* __right_value472 = (void*)0;
struct sNode* __dec_obj207;
struct sLtNode* __result289__;
    ((struct sNodeBase*)(__right_value470=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value470,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj206=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj207=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__=(void*)0;
void* __right_value473 = (void*)0;
char* __result290__;
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value473=__builtin_string("sLtNode")));
    __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_446;
_Bool Value_447;
void* __right_value474 = (void*)0;
struct CVALUE* left_value_448;
struct sNode* right_node_449;
_Bool Value_450;
_Bool __result291__;
void* __right_value475 = (void*)0;
struct CVALUE* right_value_451;
struct sType* type_452;
char* fun_name_453;
_Bool calling_fun_454;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_455;
void* __right_value478 = (void*)0;
char* __dec_obj211;
void* __right_value479 = (void*)0;
struct sType* __dec_obj212;
_Bool __result292__;
memset(&calling_fun_454, 0, sizeof(_Bool));
    left_node_446=self->mLeft;
    Value_447=node_compile(left_node_446,info);
    if(    !Value_447) {
        return (_Bool)0;
    }
    else {
    }
    left_value_448=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_449=self->mRight;
    Value_450=node_compile(right_node_449,info);
    if(    !Value_450) {
        __result291__ = (_Bool)0;
        come_call_finalizer3(left_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result291__;
    }
    else {
    }
    right_value_451=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_452=(struct sType*)come_increment_ref_count(left_value_448->type);
    fun_name_453="operator_lt";
    if(    self->mQuote) {
        calling_fun_454=(_Bool)0;
    }
    else {
        calling_fun_454=operator_overload_fun(type_452,fun_name_453,left_value_448,right_value_451,(_Bool)0,info);
    }
    if(    !calling_fun_454) {
        come_value_455=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 889, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj211=come_value_455->c_value;
        come_value_455->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_448->c_value,right_value_451->c_value));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj212=come_value_455->type;
        come_value_455->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_448->type));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_455->type->mHeap=(_Bool)0;
        come_value_455->var=((void*)0);
        add_come_last_code(info,"%s",come_value_455->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_455));
        come_call_finalizer3(come_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result292__ = (_Bool)1;
    come_call_finalizer3(left_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_452,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

static void sLtNode_finalize(struct sLtNode* self){
char* __dec_obj208;
struct sNode* __dec_obj209;
struct sNode* __dec_obj210;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj208=self->sname;
            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj209=self->mLeft;
            if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj210=self->mRight;
            if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* __dec_obj213;
void* __right_value482 = (void*)0;
struct sNode* __dec_obj214;
struct sGtNode* __result293__;
    ((struct sNodeBase*)(__right_value480=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value480,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj213=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj214=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); };
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__=(void*)0;
void* __right_value483 = (void*)0;
char* __result294__;
    __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value483=__builtin_string("sGtNode")));
    __right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_456;
_Bool Value_457;
void* __right_value484 = (void*)0;
struct CVALUE* left_value_458;
struct sNode* right_node_459;
_Bool Value_460;
_Bool __result295__;
void* __right_value485 = (void*)0;
struct CVALUE* right_value_461;
struct sType* type_462;
char* fun_name_463;
_Bool calling_fun_464;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct CVALUE* come_value_465;
void* __right_value488 = (void*)0;
char* __dec_obj218;
void* __right_value489 = (void*)0;
struct sType* __dec_obj219;
_Bool __result296__;
memset(&calling_fun_464, 0, sizeof(_Bool));
    left_node_456=self->mLeft;
    Value_457=node_compile(left_node_456,info);
    if(    !Value_457) {
        return (_Bool)0;
    }
    else {
    }
    left_value_458=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_459=self->mRight;
    Value_460=node_compile(right_node_459,info);
    if(    !Value_460) {
        __result295__ = (_Bool)0;
        come_call_finalizer3(left_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result295__;
    }
    else {
    }
    right_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_462=(struct sType*)come_increment_ref_count(left_value_458->type);
    fun_name_463="operator_gt";
    if(    self->mQuote) {
        calling_fun_464=(_Bool)0;
    }
    else {
        calling_fun_464=operator_overload_fun(type_462,fun_name_463,left_value_458,right_value_461,(_Bool)0,info);
    }
    if(    !calling_fun_464) {
        come_value_465=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 954, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj218=come_value_465->c_value;
        come_value_465->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_458->c_value,right_value_461->c_value));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj219=come_value_465->type;
        come_value_465->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_458->type));
        come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_465->type->mHeap=(_Bool)0;
        come_value_465->var=((void*)0);
        add_come_last_code(info,"%s",come_value_465->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_465));
        come_call_finalizer3(come_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result296__ = (_Bool)1;
    come_call_finalizer3(left_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
}

static void sGtNode_finalize(struct sGtNode* self){
char* __dec_obj215;
struct sNode* __dec_obj216;
struct sNode* __dec_obj217;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj215=self->sname;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj216=self->mLeft;
            if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj217=self->mRight;
            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* __dec_obj220;
void* __right_value492 = (void*)0;
struct sNode* __dec_obj221;
struct sEqNode* __result297__;
    ((struct sNodeBase*)(__right_value490=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value490,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj220=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj221=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value493 = (void*)0;
char* __result298__;
    __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value493=__builtin_string("sEqNode")));
    __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_466;
_Bool Value_467;
void* __right_value494 = (void*)0;
struct CVALUE* left_value_468;
struct sNode* right_node_469;
_Bool Value_470;
_Bool __result299__;
void* __right_value495 = (void*)0;
struct CVALUE* right_value_471;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct CVALUE* come_value_472;
void* __right_value498 = (void*)0;
char* __dec_obj225;
void* __right_value499 = (void*)0;
struct sType* __dec_obj226;
_Bool __result300__;
    left_node_466=self->mLeft;
    Value_467=node_compile(left_node_466,info);
    if(    !Value_467) {
        return (_Bool)0;
    }
    else {
    }
    left_value_468=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_469=self->mRight;
    Value_470=node_compile(right_node_469,info);
    if(    !Value_470) {
        __result299__ = (_Bool)0;
        come_call_finalizer3(left_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result299__;
    }
    else {
    }
    right_value_471=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1007, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj225=come_value_472->c_value;
    come_value_472->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_468->c_value,right_value_471->c_value));
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj226=come_value_472->type;
    come_value_472->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_468->type));
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_472->type->mHeap=(_Bool)0;
    come_value_472->var=((void*)0);
    add_come_last_code(info,"%s",come_value_472->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
    __result300__ = (_Bool)1;
    come_call_finalizer3(left_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result300__;
}

static void sEqNode_finalize(struct sEqNode* self){
char* __dec_obj222;
struct sNode* __dec_obj223;
struct sNode* __dec_obj224;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj222=self->sname;
            __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj223=self->mLeft;
            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj224=self->mRight;
            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sNode* __dec_obj227;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj228;
struct sNotEqNode* __result301__;
    ((struct sNodeBase*)(__right_value500=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value500,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj227=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj228=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result301__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value503 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value503=__builtin_string("sNotEqNode")));
    __right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_473;
_Bool Value_474;
void* __right_value504 = (void*)0;
struct CVALUE* left_value_475;
struct sNode* right_node_476;
_Bool Value_477;
_Bool __result303__;
void* __right_value505 = (void*)0;
struct CVALUE* right_value_478;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct CVALUE* come_value_479;
void* __right_value508 = (void*)0;
char* __dec_obj232;
void* __right_value509 = (void*)0;
struct sType* __dec_obj233;
_Bool __result304__;
    left_node_473=self->mLeft;
    Value_474=node_compile(left_node_473,info);
    if(    !Value_474) {
        return (_Bool)0;
    }
    else {
    }
    left_value_475=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_476=self->mRight;
    Value_477=node_compile(right_node_476,info);
    if(    !Value_477) {
        __result303__ = (_Bool)0;
        come_call_finalizer3(left_value_475,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result303__;
    }
    else {
    }
    right_value_478=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_479=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1059, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj232=come_value_479->c_value;
    come_value_479->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_475->c_value,right_value_478->c_value));
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=come_value_479->type;
    come_value_479->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_475->type));
    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_479->type->mHeap=(_Bool)0;
    come_value_479->var=((void*)0);
    add_come_last_code(info,"%s",come_value_479->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_479));
    __result304__ = (_Bool)1;
    come_call_finalizer3(left_value_475,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_479,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result304__;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
char* __dec_obj229;
struct sNode* __dec_obj230;
struct sNode* __dec_obj231;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj229=self->sname;
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj230=self->mLeft;
            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj231=self->mRight;
            if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sNode* __dec_obj234;
void* __right_value512 = (void*)0;
struct sNode* __dec_obj235;
struct sEq2Node* __result305__;
    ((struct sNodeBase*)(__right_value510=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value510,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj234=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj235=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value513 = (void*)0;
char* __result306__;
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value513=__builtin_string("sEq2Node")));
    __right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_480;
_Bool Value_481;
void* __right_value514 = (void*)0;
struct CVALUE* left_value_482;
struct sNode* right_node_483;
_Bool Value_484;
_Bool __result307__;
void* __right_value515 = (void*)0;
struct CVALUE* right_value_485;
struct sType* type_486;
char* fun_name_487;
_Bool calling_fun_488;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct CVALUE* come_value_489;
void* __right_value518 = (void*)0;
char* __dec_obj239;
void* __right_value519 = (void*)0;
struct sType* __dec_obj240;
_Bool __result308__;
memset(&calling_fun_488, 0, sizeof(_Bool));
    left_node_480=self->mLeft;
    Value_481=node_compile(left_node_480,info);
    if(    !Value_481) {
        return (_Bool)0;
    }
    else {
    }
    left_value_482=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_483=self->mRight;
    Value_484=node_compile(right_node_483,info);
    if(    !Value_484) {
        __result307__ = (_Bool)0;
        come_call_finalizer3(left_value_482,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result307__;
    }
    else {
    }
    right_value_485=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_486=(struct sType*)come_increment_ref_count(left_value_482->type);
    fun_name_487="operator_equals";
    if(    self->mQuote) {
        calling_fun_488=(_Bool)0;
    }
    else {
        calling_fun_488=operator_overload_fun(type_486,fun_name_487,left_value_482,right_value_485,(_Bool)0,info);
    }
    if(    !calling_fun_488) {
        come_value_489=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1124, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj239=come_value_489->c_value;
        come_value_489->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_482->c_value,right_value_485->c_value));
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj240=come_value_489->type;
        come_value_489->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_482->type));
        come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_489->type->mHeap=(_Bool)0;
        come_value_489->var=((void*)0);
        add_come_last_code(info,"%s",come_value_489->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_489));
        come_call_finalizer3(come_value_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result308__ = (_Bool)1;
    come_call_finalizer3(left_value_482,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result308__;
}

static void sEq2Node_finalize(struct sEq2Node* self){
char* __dec_obj236;
struct sNode* __dec_obj237;
struct sNode* __dec_obj238;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj236=self->sname;
            __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj237=self->mLeft;
            if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj238=self->mRight;
            if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sNode* __dec_obj241;
void* __right_value522 = (void*)0;
struct sNode* __dec_obj242;
struct sNotEq2Node* __result309__;
    ((struct sNodeBase*)(__right_value520=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value520,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj241=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj242=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result309__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value523 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value523=__builtin_string("sNotEq2Node")));
    __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_490;
_Bool Value_491;
void* __right_value524 = (void*)0;
struct CVALUE* left_value_492;
struct sNode* right_node_493;
_Bool Value_494;
_Bool __result311__;
void* __right_value525 = (void*)0;
struct CVALUE* right_value_495;
struct sType* type_496;
char* fun_name_497;
_Bool calling_fun_498;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct CVALUE* come_value_499;
void* __right_value528 = (void*)0;
char* __dec_obj246;
void* __right_value529 = (void*)0;
struct sType* __dec_obj247;
_Bool __result312__;
memset(&calling_fun_498, 0, sizeof(_Bool));
    left_node_490=self->mLeft;
    Value_491=node_compile(left_node_490,info);
    if(    !Value_491) {
        return (_Bool)0;
    }
    else {
    }
    left_value_492=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_493=self->mRight;
    Value_494=node_compile(right_node_493,info);
    if(    !Value_494) {
        __result311__ = (_Bool)0;
        come_call_finalizer3(left_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result311__;
    }
    else {
    }
    right_value_495=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_496=(struct sType*)come_increment_ref_count(left_value_492->type);
    fun_name_497="operator_not_equals";
    if(    self->mQuote) {
        calling_fun_498=(_Bool)0;
    }
    else {
        calling_fun_498=operator_overload_fun(type_496,fun_name_497,left_value_492,right_value_495,(_Bool)0,info);
    }
    if(    !calling_fun_498) {
        come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1189, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj246=come_value_499->c_value;
        come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_492->c_value,right_value_495->c_value));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj247=come_value_499->type;
        come_value_499->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_492->type));
        come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_499->type->mHeap=(_Bool)0;
        come_value_499->var=((void*)0);
        add_come_last_code(info,"%s",come_value_499->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
        come_call_finalizer3(come_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result312__ = (_Bool)1;
    come_call_finalizer3(left_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result312__;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
char* __dec_obj243;
struct sNode* __dec_obj244;
struct sNode* __dec_obj245;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj243=self->sname;
            __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj244=self->mLeft;
            if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj245=self->mRight;
            if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sNode* __dec_obj248;
void* __right_value532 = (void*)0;
struct sNode* __dec_obj249;
struct sAndNode* __result313__;
    ((struct sNodeBase*)(__right_value530=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value530,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj248=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj249=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result313__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value533 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value533=__builtin_string("sAndNode")));
    __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_500;
_Bool Value_501;
void* __right_value534 = (void*)0;
struct CVALUE* left_value_502;
struct sNode* right_node_503;
_Bool Value_504;
_Bool __result315__;
void* __right_value535 = (void*)0;
struct CVALUE* right_value_505;
struct sType* type_506;
char* fun_name_507;
_Bool calling_fun_508;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct CVALUE* come_value_509;
void* __right_value538 = (void*)0;
char* __dec_obj253;
void* __right_value539 = (void*)0;
struct sType* __dec_obj254;
_Bool __result316__;
memset(&calling_fun_508, 0, sizeof(_Bool));
    left_node_500=self->mLeft;
    Value_501=node_compile(left_node_500,info);
    if(    !Value_501) {
        return (_Bool)0;
    }
    else {
    }
    left_value_502=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_503=self->mRight;
    Value_504=node_compile(right_node_503,info);
    if(    !Value_504) {
        __result315__ = (_Bool)0;
        come_call_finalizer3(left_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result315__;
    }
    else {
    }
    right_value_505=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_506=(struct sType*)come_increment_ref_count(left_value_502->type);
    fun_name_507="operator_and";
    if(    self->mQuote) {
        calling_fun_508=(_Bool)0;
    }
    else {
        calling_fun_508=operator_overload_fun(type_506,fun_name_507,left_value_502,right_value_505,(_Bool)0,info);
    }
    if(    !calling_fun_508) {
        come_value_509=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1255, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj253=come_value_509->c_value;
        come_value_509->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_502->c_value,right_value_505->c_value));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj254=come_value_509->type;
        come_value_509->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_502->type));
        come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_509->type->mHeap=(_Bool)0;
        come_value_509->var=((void*)0);
        add_come_last_code(info,"%s",come_value_509->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_509));
        come_call_finalizer3(come_value_509,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result316__ = (_Bool)1;
    come_call_finalizer3(left_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result316__;
}

static void sAndNode_finalize(struct sAndNode* self){
char* __dec_obj250;
struct sNode* __dec_obj251;
struct sNode* __dec_obj252;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj250=self->sname;
            __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj251=self->mLeft;
            if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj252=self->mRight;
            if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sNode* __dec_obj255;
void* __right_value542 = (void*)0;
struct sNode* __dec_obj256;
struct sXOrNode* __result317__;
    ((struct sNodeBase*)(__right_value540=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value540,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj255=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj256=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value543 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value543=__builtin_string("sXOrNode")));
    __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_510;
_Bool Value_511;
void* __right_value544 = (void*)0;
struct CVALUE* left_value_512;
struct sNode* right_node_513;
_Bool Value_514;
_Bool __result319__;
void* __right_value545 = (void*)0;
struct CVALUE* right_value_515;
struct sType* type_516;
char* fun_name_517;
_Bool calling_fun_518;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_519;
void* __right_value548 = (void*)0;
char* __dec_obj260;
void* __right_value549 = (void*)0;
struct sType* __dec_obj261;
_Bool __result320__;
memset(&calling_fun_518, 0, sizeof(_Bool));
    left_node_510=self->mLeft;
    Value_511=node_compile(left_node_510,info);
    if(    !Value_511) {
        return (_Bool)0;
    }
    else {
    }
    left_value_512=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_513=self->mRight;
    Value_514=node_compile(right_node_513,info);
    if(    !Value_514) {
        __result319__ = (_Bool)0;
        come_call_finalizer3(left_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result319__;
    }
    else {
    }
    right_value_515=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_516=(struct sType*)come_increment_ref_count(left_value_512->type);
    fun_name_517="operator_xor";
    if(    self->mQuote) {
        calling_fun_518=(_Bool)0;
    }
    else {
        calling_fun_518=operator_overload_fun(type_516,fun_name_517,left_value_512,right_value_515,(_Bool)0,info);
    }
    if(    !calling_fun_518) {
        come_value_519=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1320, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj260=come_value_519->c_value;
        come_value_519->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_512->c_value,right_value_515->c_value));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj261=come_value_519->type;
        come_value_519->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_512->type));
        come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_519->type->mHeap=(_Bool)0;
        come_value_519->var=((void*)0);
        add_come_last_code(info,"%s",come_value_519->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_519));
        come_call_finalizer3(come_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result320__ = (_Bool)1;
    come_call_finalizer3(left_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_515,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_516,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

static void sXOrNode_finalize(struct sXOrNode* self){
char* __dec_obj257;
struct sNode* __dec_obj258;
struct sNode* __dec_obj259;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj257=self->sname;
            __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj258=self->mLeft;
            if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj259=self->mRight;
            if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sNode* __dec_obj262;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj263;
struct sOrNode* __result321__;
    ((struct sNodeBase*)(__right_value550=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value550,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj262=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj263=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result321__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value553 = (void*)0;
char* __result322__;
    __result322__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value553=__builtin_string("sOrNode")));
    __right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_520;
_Bool Value_521;
void* __right_value554 = (void*)0;
struct CVALUE* left_value_522;
struct sNode* right_node_523;
_Bool Value_524;
_Bool __result323__;
void* __right_value555 = (void*)0;
struct CVALUE* right_value_525;
struct sType* type_526;
char* fun_name_527;
_Bool calling_fun_528;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value558 = (void*)0;
char* __dec_obj267;
void* __right_value559 = (void*)0;
struct sType* __dec_obj268;
_Bool __result324__;
memset(&calling_fun_528, 0, sizeof(_Bool));
    left_node_520=self->mLeft;
    Value_521=node_compile(left_node_520,info);
    if(    !Value_521) {
        return (_Bool)0;
    }
    else {
    }
    left_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_523=self->mRight;
    Value_524=node_compile(right_node_523,info);
    if(    !Value_524) {
        __result323__ = (_Bool)0;
        come_call_finalizer3(left_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result323__;
    }
    else {
    }
    right_value_525=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_526=(struct sType*)come_increment_ref_count(left_value_522->type);
    fun_name_527="operator_or";
    if(    self->mQuote) {
        calling_fun_528=(_Bool)0;
    }
    else {
        calling_fun_528=operator_overload_fun(type_526,fun_name_527,left_value_522,right_value_525,(_Bool)0,info);
    }
    if(    !calling_fun_528) {
        come_value_529=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1386, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj267=come_value_529->c_value;
        come_value_529->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_522->c_value,right_value_525->c_value));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj268=come_value_529->type;
        come_value_529->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_522->type));
        come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_529->type->mHeap=(_Bool)0;
        come_value_529->var=((void*)0);
        add_come_last_code(info,"%s",come_value_529->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_529));
        come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result324__ = (_Bool)1;
    come_call_finalizer3(left_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result324__;
}

static void sOrNode_finalize(struct sOrNode* self){
char* __dec_obj264;
struct sNode* __dec_obj265;
struct sNode* __dec_obj266;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj264=self->sname;
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj265=self->mLeft;
            if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj266=self->mRight;
            if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sNode* __dec_obj269;
void* __right_value562 = (void*)0;
struct sNode* __dec_obj270;
struct sAndAndNode* __result325__;
    ((struct sNodeBase*)(__right_value560=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value560,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj269=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj270=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result325__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value563 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value563=__builtin_string("sAndAndNode")));
    __right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_530;
_Bool Value_531;
void* __right_value564 = (void*)0;
struct CVALUE* left_value_532;
struct sNode* right_node_533;
_Bool Value_534;
_Bool __result327__;
void* __right_value565 = (void*)0;
struct CVALUE* right_value_535;
struct sType* type_536;
char* fun_name_537;
_Bool calling_fun_538;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_539;
void* __right_value568 = (void*)0;
char* __dec_obj274;
void* __right_value569 = (void*)0;
struct sType* __dec_obj275;
_Bool __result328__;
memset(&calling_fun_538, 0, sizeof(_Bool));
    left_node_530=self->mLeft;
    Value_531=node_compile(left_node_530,info);
    if(    !Value_531) {
        return (_Bool)0;
    }
    else {
    }
    left_value_532=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_533=self->mRight;
    Value_534=node_compile(right_node_533,info);
    if(    !Value_534) {
        __result327__ = (_Bool)0;
        come_call_finalizer3(left_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result327__;
    }
    else {
    }
    right_value_535=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_536=(struct sType*)come_increment_ref_count(left_value_532->type);
    fun_name_537="operator_andand";
    if(    self->mQuote) {
        calling_fun_538=(_Bool)0;
    }
    else {
        calling_fun_538=operator_overload_fun(type_536,fun_name_537,left_value_532,right_value_535,(_Bool)0,info);
    }
    if(    !calling_fun_538) {
        come_value_539=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1452, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj274=come_value_539->c_value;
        come_value_539->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_532->c_value,right_value_535->c_value));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj275=come_value_539->type;
        come_value_539->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_532->type));
        come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_539->type->mHeap=(_Bool)0;
        come_value_539->var=left_value_532->var;
        add_come_last_code(info,"%s",come_value_539->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_539));
        come_call_finalizer3(come_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result328__ = (_Bool)1;
    come_call_finalizer3(left_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_536,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result328__;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
char* __dec_obj271;
struct sNode* __dec_obj272;
struct sNode* __dec_obj273;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj271=self->sname;
            __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj272=self->mLeft;
            if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj273=self->mRight;
            if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sNode* __dec_obj276;
void* __right_value572 = (void*)0;
struct sNode* __dec_obj277;
struct sOrOrNode* __result329__;
    ((struct sNodeBase*)(__right_value570=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value570,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj276=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj277=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result329__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value573 = (void*)0;
char* __result330__;
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value573=__builtin_string("sOrOrNode")));
    __right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_540;
_Bool Value_541;
void* __right_value574 = (void*)0;
struct CVALUE* left_value_542;
struct sNode* right_node_543;
_Bool Value_544;
_Bool __result331__;
void* __right_value575 = (void*)0;
struct CVALUE* right_value_545;
struct sType* type_546;
char* fun_name_547;
_Bool calling_fun_548;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_549;
void* __right_value578 = (void*)0;
char* __dec_obj281;
void* __right_value579 = (void*)0;
struct sType* __dec_obj282;
_Bool __result332__;
memset(&calling_fun_548, 0, sizeof(_Bool));
    left_node_540=self->mLeft;
    Value_541=node_compile(left_node_540,info);
    if(    !Value_541) {
        return (_Bool)0;
    }
    else {
    }
    left_value_542=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_543=self->mRight;
    Value_544=node_compile(right_node_543,info);
    if(    !Value_544) {
        __result331__ = (_Bool)0;
        come_call_finalizer3(left_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result331__;
    }
    else {
    }
    right_value_545=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_546=(struct sType*)come_increment_ref_count(left_value_542->type);
    fun_name_547="operator_oror";
    if(    self->mQuote) {
        calling_fun_548=(_Bool)0;
    }
    else {
        calling_fun_548=operator_overload_fun(type_546,fun_name_547,left_value_542,right_value_545,(_Bool)0,info);
    }
    if(    !calling_fun_548) {
        come_value_549=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1517, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj281=come_value_549->c_value;
        come_value_549->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_542->c_value,right_value_545->c_value));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj282=come_value_549->type;
        come_value_549->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_542->type));
        come_call_finalizer3(__dec_obj282,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_549->type->mHeap=(_Bool)0;
        come_value_549->var=left_value_542->var;
        add_come_last_code(info,"%s",come_value_549->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_549));
        come_call_finalizer3(come_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result332__ = (_Bool)1;
    come_call_finalizer3(left_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_546,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result332__;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
char* __dec_obj278;
struct sNode* __dec_obj279;
struct sNode* __dec_obj280;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj278=self->sname;
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj279=self->mLeft;
            if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj280=self->mRight;
            if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* __dec_obj283;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj284;
struct sCommaNode* __result333__;
    ((struct sNodeBase*)(__right_value580=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value580,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj283=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj284=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result333__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__=(void*)0;
void* __right_value583 = (void*)0;
char* __result334__;
    __result334__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value583=__builtin_string("sCommaNode")));
    __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_550;
_Bool Value_551;
void* __right_value584 = (void*)0;
struct CVALUE* left_value_552;
struct sNode* right_node_553;
_Bool Value_554;
_Bool __result335__;
void* __right_value585 = (void*)0;
struct CVALUE* right_value_555;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_556;
void* __right_value588 = (void*)0;
char* __dec_obj288;
void* __right_value589 = (void*)0;
struct sType* __dec_obj289;
_Bool __result336__;
    left_node_550=self->mLeft;
    Value_551=node_compile(left_node_550,info);
    if(    !Value_551) {
        return (_Bool)0;
    }
    else {
    }
    left_value_552=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_553=self->mRight;
    Value_554=node_compile(right_node_553,info);
    if(    !Value_554) {
        __result335__ = (_Bool)0;
        come_call_finalizer3(left_value_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result335__;
    }
    else {
    }
    right_value_555=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_556=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1569, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj288=come_value_556->c_value;
    come_value_556->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_552->c_value,right_value_555->c_value));
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj289=come_value_556->type;
    come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_552->type));
    come_call_finalizer3(__dec_obj289,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_556->var=((void*)0);
    add_come_last_code(info,"%s",come_value_556->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_556));
    __result336__ = (_Bool)1;
    come_call_finalizer3(left_value_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_555,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result336__;
}

static void sCommaNode_finalize(struct sCommaNode* self){
char* __dec_obj285;
struct sNode* __dec_obj286;
struct sNode* __dec_obj287;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj285=self->sname;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj286=self->mLeft;
            if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj287=self->mRight;
            if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value592 = (void*)0;
struct sNode* __dec_obj291;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj292;
struct sConditionalNode* __result337__;
    ((struct sNodeBase*)(__right_value590=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value590,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj290=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value1));
    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj291=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value2));
    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj292=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value3));
    if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result337__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
void* __right_value594 = (void*)0;
char* __result338__;
    __result338__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value594=__builtin_string("sConditionalNode")));
    __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_557;
struct sNode* value1_558;
_Bool Value_559;
void* __right_value595 = (void*)0;
struct CVALUE* value1_value_560;
struct sNode* value2_561;
_Bool Value_562;
_Bool __result339__;
void* __right_value596 = (void*)0;
struct CVALUE* value2_value_563;
struct sNode* value3_564;
_Bool Value_565;
_Bool __result340__;
void* __right_value597 = (void*)0;
struct CVALUE* value3_value_566;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct CVALUE* come_value_567;
void* __right_value600 = (void*)0;
char* __dec_obj297;
void* __right_value601 = (void*)0;
struct sType* __dec_obj298;
_Bool __result341__;
    in_conditional_operator_557=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_558=self->mValue1;
    Value_559=node_compile(value1_558,info);
    if(    !Value_559) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_560=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value2_561=self->mValue2;
    Value_562=node_compile(value2_561,info);
    if(    !Value_562) {
        __result339__ = (_Bool)0;
        come_call_finalizer3(value1_value_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result339__;
    }
    else {
    }
    value2_value_563=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value3_564=self->mValue3;
    Value_565=node_compile(value3_564,info);
    if(    !Value_565) {
        __result340__ = (_Bool)0;
        come_call_finalizer3(value1_value_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result340__;
    }
    else {
    }
    value3_value_566=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_567=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1632, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj297=come_value_567->c_value;
    come_value_567->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_560->c_value,value2_value_563->c_value,value3_value_566->c_value));
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj298=come_value_567->type;
    come_value_567->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value2_value_563->type));
    come_call_finalizer3(__dec_obj298,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_567->var=((void*)0);
    add_come_last_code(info,"%s",come_value_567->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_567));
    info->in_conditional_operator=in_conditional_operator_557;
    __result341__ = (_Bool)1;
    come_call_finalizer3(value1_value_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_566,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result341__;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
char* __dec_obj293;
struct sNode* __dec_obj294;
struct sNode* __dec_obj295;
struct sNode* __dec_obj296;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj293=self->sname;
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        if(        self->mValue1==gComeFunResultObject) {
            __dec_obj294=self->mValue1;
            if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        if(        self->mValue2==gComeFunResultObject) {
            __dec_obj295=self->mValue2;
            if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        if(        self->mValue3==gComeFunResultObject) {
            __dec_obj296=self->mValue3;
            if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value609 = (void*)0;
struct sNode* __result344__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1650, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value603=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1650, "struct sConditionalNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result344__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value609=_inf_value2));
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value603,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value609) { __right_value609 = come_decrement_ref_count2(__right_value609, ((struct sNode*)__right_value609)->finalize, ((struct sNode*)__right_value609)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
struct sConditionalNode* __result342__;
void* __right_value604 = (void*)0;
struct sConditionalNode* result_568;
void* __right_value605 = (void*)0;
char* __dec_obj299;
void* __right_value606 = (void*)0;
struct sNode* __dec_obj300;
void* __right_value607 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value608 = (void*)0;
struct sNode* __dec_obj302;
struct sConditionalNode* __result343__;
    if(    self==(void*)0) {
        __result342__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_568=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_568->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_568->sname;
        result_568->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_568->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj300=result_568->mValue1;
        result_568->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue1));
        if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj301=result_568->mValue2;
        result_568->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue2));
        if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj302=result_568->mValue3;
        result_568->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue3));
        if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_568;
    come_call_finalizer3(result_568,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value610 = (void*)0;
struct sNode* node_569;
int sline_real_570;
void* __right_value611 = (void*)0;
struct sNode* right_571;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value618 = (void*)0;
struct sNode* __result347__;
int sline_real_573;
void* __right_value619 = (void*)0;
struct sNode* right_574;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value626 = (void*)0;
struct sNode* __result350__;
int sline_real_576;
void* __right_value627 = (void*)0;
struct sNode* right_577;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value634 = (void*)0;
struct sNode* __result353__;
int sline_real_579;
void* __right_value635 = (void*)0;
struct sNode* right_580;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value638 = (void*)0;
struct sNode* __result354__;
int sline_real_581;
void* __right_value639 = (void*)0;
struct sNode* right_582;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value642 = (void*)0;
struct sNode* __result355__;
int sline_real_583;
void* __right_value643 = (void*)0;
struct sNode* right_584;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value646 = (void*)0;
struct sNode* __result356__;
struct sNode* __result357__;
    node_569=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_569->terminated(node_569->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real_570=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_571=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_570;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1670, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value613=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1670, "struct sMultNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_569),(struct sNode*)come_increment_ref_count(right_571),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result347__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value618=_inf_value3));
            if(right_571) { right_571 = come_decrement_ref_count2(right_571, ((struct sNode*)right_571)->finalize, ((struct sNode*)right_571)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value613,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value618) { __right_value618 = come_decrement_ref_count2(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result347__;
            if(right_571) { right_571 = come_decrement_ref_count2(right_571, ((struct sNode*)right_571)->finalize, ((struct sNode*)right_571)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_573=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_574=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_573;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1681, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value621=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1681, "struct sDivNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_569),(struct sNode*)come_increment_ref_count(right_574),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __result350__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value626=_inf_value4));
            if(right_574) { right_574 = come_decrement_ref_count2(right_574, ((struct sNode*)right_574)->finalize, ((struct sNode*)right_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value621,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value626) { __right_value626 = come_decrement_ref_count2(__right_value626, ((struct sNode*)__right_value626)->finalize, ((struct sNode*)__right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result350__;
            if(right_574) { right_574 = come_decrement_ref_count2(right_574, ((struct sNode*)right_574)->finalize, ((struct sNode*)right_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_576=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_577=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_576;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1692, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value629=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1692, "struct sModNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_569),(struct sNode*)come_increment_ref_count(right_577),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __result353__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value634=_inf_value5));
            if(right_577) { right_577 = come_decrement_ref_count2(right_577, ((struct sNode*)right_577)->finalize, ((struct sNode*)right_577)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value629,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value634) { __right_value634 = come_decrement_ref_count2(__right_value634, ((struct sNode*)__right_value634)->finalize, ((struct sNode*)__right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result353__;
            if(right_577) { right_577 = come_decrement_ref_count2(right_577, ((struct sNode*)right_577)->finalize, ((struct sNode*)right_577)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_569->terminated(node_569->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_579=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_580=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_579;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1703, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value637=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1703, "struct sMultNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_569),(struct sNode*)come_increment_ref_count(right_580),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __result354__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value638=_inf_value6));
            if(right_580) { right_580 = come_decrement_ref_count2(right_580, ((struct sNode*)right_580)->finalize, ((struct sNode*)right_580)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value637,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value638) { __right_value638 = come_decrement_ref_count2(__right_value638, ((struct sNode*)__right_value638)->finalize, ((struct sNode*)__right_value638)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result354__;
            if(right_580) { right_580 = come_decrement_ref_count2(right_580, ((struct sNode*)right_580)->finalize, ((struct sNode*)right_580)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_581=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_582=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_581;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1714, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value641=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1714, "struct sDivNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_569),(struct sNode*)come_increment_ref_count(right_582),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __result355__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value642=_inf_value7));
            if(right_582) { right_582 = come_decrement_ref_count2(right_582, ((struct sNode*)right_582)->finalize, ((struct sNode*)right_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value641,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value642) { __right_value642 = come_decrement_ref_count2(__right_value642, ((struct sNode*)__right_value642)->finalize, ((struct sNode*)__right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result355__;
            if(right_582) { right_582 = come_decrement_ref_count2(right_582, ((struct sNode*)right_582)->finalize, ((struct sNode*)right_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_583=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_584=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_583;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1725, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value645=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1725, "struct sModNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_569),(struct sNode*)come_increment_ref_count(right_584),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __result356__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value646=_inf_value8));
            if(right_584) { right_584 = come_decrement_ref_count2(right_584, ((struct sNode*)right_584)->finalize, ((struct sNode*)right_584)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value645,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value646) { __right_value646 = come_decrement_ref_count2(__right_value646, ((struct sNode*)__right_value646)->finalize, ((struct sNode*)__right_value646)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result356__;
            if(right_584) { right_584 = come_decrement_ref_count2(right_584, ((struct sNode*)right_584)->finalize, ((struct sNode*)right_584)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result357__ = gComeFunResultObject = __result_obj__ = node_569;
    if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__=(void*)0;
struct sMultNode* __result345__;
void* __right_value614 = (void*)0;
struct sMultNode* result_572;
void* __right_value615 = (void*)0;
char* __dec_obj303;
void* __right_value616 = (void*)0;
struct sNode* __dec_obj304;
void* __right_value617 = (void*)0;
struct sNode* __dec_obj305;
struct sMultNode* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_572=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_572->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj303=result_572->sname;
        result_572->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_572->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_572->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj304=result_572->mLeft;
        result_572->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj305=result_572->mRight;
        result_572->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_572;
    come_call_finalizer3(result_572,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__=(void*)0;
struct sDivNode* __result348__;
void* __right_value622 = (void*)0;
struct sDivNode* result_575;
void* __right_value623 = (void*)0;
char* __dec_obj306;
void* __right_value624 = (void*)0;
struct sNode* __dec_obj307;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj308;
struct sDivNode* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_575=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_575->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj306=result_575->sname;
        result_575->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_575->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_575->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj307=result_575->mLeft;
        result_575->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj308=result_575->mRight;
        result_575->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_575;
    come_call_finalizer3(result_575,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__=(void*)0;
struct sModNode* __result351__;
void* __right_value630 = (void*)0;
struct sModNode* result_578;
void* __right_value631 = (void*)0;
char* __dec_obj309;
void* __right_value632 = (void*)0;
struct sNode* __dec_obj310;
void* __right_value633 = (void*)0;
struct sNode* __dec_obj311;
struct sModNode* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_578=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_578->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj309=result_578->sname;
        result_578->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_578->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_578->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj310=result_578->mLeft;
        result_578->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj311=result_578->mRight;
        result_578->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_578;
    come_call_finalizer3(result_578,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value647 = (void*)0;
struct sNode* node_585;
int sline_real_586;
void* __right_value648 = (void*)0;
struct sNode* right_587;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value655 = (void*)0;
struct sNode* __result360__;
int sline_real_589;
void* __right_value656 = (void*)0;
struct sNode* right_590;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value663 = (void*)0;
struct sNode* __result363__;
int sline_real_592;
void* __right_value664 = (void*)0;
struct sNode* right_593;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value667 = (void*)0;
struct sNode* __result364__;
int sline_real_594;
void* __right_value668 = (void*)0;
struct sNode* right_595;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value671 = (void*)0;
struct sNode* __result365__;
struct sNode* __result366__;
    node_585=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real_586=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_587=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_586;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1754, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value650=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1754, "struct sAddNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_585),(struct sNode*)come_increment_ref_count(right_587),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result360__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value655=_inf_value9));
            if(right_587) { right_587 = come_decrement_ref_count2(right_587, ((struct sNode*)right_587)->finalize, ((struct sNode*)right_587)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_585) { node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value650,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value655) { __right_value655 = come_decrement_ref_count2(__right_value655, ((struct sNode*)__right_value655)->finalize, ((struct sNode*)__right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result360__;
            if(right_587) { right_587 = come_decrement_ref_count2(right_587, ((struct sNode*)right_587)->finalize, ((struct sNode*)right_587)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_589=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_590=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_589;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1766, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value658=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1766, "struct sSubNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_585),(struct sNode*)come_increment_ref_count(right_590),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __result363__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value663=_inf_value10));
            if(right_590) { right_590 = come_decrement_ref_count2(right_590, ((struct sNode*)right_590)->finalize, ((struct sNode*)right_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_585) { node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value658,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value663) { __right_value663 = come_decrement_ref_count2(__right_value663, ((struct sNode*)__right_value663)->finalize, ((struct sNode*)__right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result363__;
            if(right_590) { right_590 = come_decrement_ref_count2(right_590, ((struct sNode*)right_590)->finalize, ((struct sNode*)right_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_592=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_593=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_592;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1778, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value666=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1778, "struct sAddNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_585),(struct sNode*)come_increment_ref_count(right_593),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __result364__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value667=_inf_value11));
            if(right_593) { right_593 = come_decrement_ref_count2(right_593, ((struct sNode*)right_593)->finalize, ((struct sNode*)right_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_585) { node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value666,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value667) { __right_value667 = come_decrement_ref_count2(__right_value667, ((struct sNode*)__right_value667)->finalize, ((struct sNode*)__right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result364__;
            if(right_593) { right_593 = come_decrement_ref_count2(right_593, ((struct sNode*)right_593)->finalize, ((struct sNode*)right_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_594=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_595=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_594;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1790, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value670=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1790, "struct sSubNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_585),(struct sNode*)come_increment_ref_count(right_595),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __result365__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value671=_inf_value12));
            if(right_595) { right_595 = come_decrement_ref_count2(right_595, ((struct sNode*)right_595)->finalize, ((struct sNode*)right_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_585) { node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value670,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value671) { __right_value671 = come_decrement_ref_count2(__right_value671, ((struct sNode*)__right_value671)->finalize, ((struct sNode*)__right_value671)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result365__;
            if(right_595) { right_595 = come_decrement_ref_count2(right_595, ((struct sNode*)right_595)->finalize, ((struct sNode*)right_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result366__ = gComeFunResultObject = __result_obj__ = node_585;
    if(node_585) { node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__=(void*)0;
struct sAddNode* __result358__;
void* __right_value651 = (void*)0;
struct sAddNode* result_588;
void* __right_value652 = (void*)0;
char* __dec_obj312;
void* __right_value653 = (void*)0;
struct sNode* __dec_obj313;
void* __right_value654 = (void*)0;
struct sNode* __dec_obj314;
struct sAddNode* __result359__;
    if(    self==(void*)0) {
        __result358__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    result_588=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_588->sname;
        result_588->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_588->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj313=result_588->mLeft;
        result_588->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj314=result_588->mRight;
        result_588->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_588->mQuote=self->mQuote;
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_588;
    come_call_finalizer3(result_588,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__=(void*)0;
struct sSubNode* __result361__;
void* __right_value659 = (void*)0;
struct sSubNode* result_591;
void* __right_value660 = (void*)0;
char* __dec_obj315;
void* __right_value661 = (void*)0;
struct sNode* __dec_obj316;
void* __right_value662 = (void*)0;
struct sNode* __dec_obj317;
struct sSubNode* __result362__;
    if(    self==(void*)0) {
        __result361__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_591=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_591->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_591->sname;
        result_591->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_591->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj316=result_591->mLeft;
        result_591->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj317=result_591->mRight;
        result_591->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_591->mQuote=self->mQuote;
    }
    __result362__ = gComeFunResultObject = __result_obj__ = result_591;
    come_call_finalizer3(result_591,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value672 = (void*)0;
struct sNode* node_596;
int sline_real_597;
void* __right_value673 = (void*)0;
struct sNode* right_598;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value680 = (void*)0;
struct sNode* __result369__;
int sline_real_600;
void* __right_value681 = (void*)0;
struct sNode* right_601;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value688 = (void*)0;
struct sNode* __result372__;
int sline_real_603;
void* __right_value689 = (void*)0;
struct sNode* right_604;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value692 = (void*)0;
struct sNode* __result373__;
int sline_real_605;
void* __right_value693 = (void*)0;
struct sNode* right_606;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value696 = (void*)0;
struct sNode* __result374__;
struct sNode* __result375__;
    parse_sharp_v5(info);
    node_596=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_597=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_598=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_597;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1820, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value675=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1820, "struct sLShiftNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_596),(struct sNode*)come_increment_ref_count(right_598),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result369__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value680=_inf_value13));
            if(right_598) { right_598 = come_decrement_ref_count2(right_598, ((struct sNode*)right_598)->finalize, ((struct sNode*)right_598)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_596) { node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value675,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value680) { __right_value680 = come_decrement_ref_count2(__right_value680, ((struct sNode*)__right_value680)->finalize, ((struct sNode*)__right_value680)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result369__;
            if(right_598) { right_598 = come_decrement_ref_count2(right_598, ((struct sNode*)right_598)->finalize, ((struct sNode*)right_598)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_600=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_601=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_600;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1831, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value683=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1831, "struct sRShiftNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_596),(struct sNode*)come_increment_ref_count(right_601),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __result372__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value688=_inf_value14));
            if(right_601) { right_601 = come_decrement_ref_count2(right_601, ((struct sNode*)right_601)->finalize, ((struct sNode*)right_601)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_596) { node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value683,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value688) { __right_value688 = come_decrement_ref_count2(__right_value688, ((struct sNode*)__right_value688)->finalize, ((struct sNode*)__right_value688)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result372__;
            if(right_601) { right_601 = come_decrement_ref_count2(right_601, ((struct sNode*)right_601)->finalize, ((struct sNode*)right_601)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_603=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_604=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_603;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1842, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value691=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1842, "struct sLShiftNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_596),(struct sNode*)come_increment_ref_count(right_604),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value692=_inf_value15));
            if(right_604) { right_604 = come_decrement_ref_count2(right_604, ((struct sNode*)right_604)->finalize, ((struct sNode*)right_604)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_596) { node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value691,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value692) { __right_value692 = come_decrement_ref_count2(__right_value692, ((struct sNode*)__right_value692)->finalize, ((struct sNode*)__right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result373__;
            if(right_604) { right_604 = come_decrement_ref_count2(right_604, ((struct sNode*)right_604)->finalize, ((struct sNode*)right_604)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_605=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_606=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_605;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1853, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value695=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1853, "struct sRShiftNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_596),(struct sNode*)come_increment_ref_count(right_606),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __result374__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value696=_inf_value16));
            if(right_606) { right_606 = come_decrement_ref_count2(right_606, ((struct sNode*)right_606)->finalize, ((struct sNode*)right_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_596) { node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value695,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value696) { __right_value696 = come_decrement_ref_count2(__right_value696, ((struct sNode*)__right_value696)->finalize, ((struct sNode*)__right_value696)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result374__;
            if(right_606) { right_606 = come_decrement_ref_count2(right_606, ((struct sNode*)right_606)->finalize, ((struct sNode*)right_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result375__ = gComeFunResultObject = __result_obj__ = node_596;
    if(node_596) { node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
struct sLShiftNode* __result367__;
void* __right_value676 = (void*)0;
struct sLShiftNode* result_599;
void* __right_value677 = (void*)0;
char* __dec_obj318;
void* __right_value678 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value679 = (void*)0;
struct sNode* __dec_obj320;
struct sLShiftNode* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_599=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_599->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj318=result_599->sname;
        result_599->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_599->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_599->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj319=result_599->mLeft;
        result_599->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj320=result_599->mRight;
        result_599->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_599;
    come_call_finalizer3(result_599,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
struct sRShiftNode* __result370__;
void* __right_value684 = (void*)0;
struct sRShiftNode* result_602;
void* __right_value685 = (void*)0;
char* __dec_obj321;
void* __right_value686 = (void*)0;
struct sNode* __dec_obj322;
void* __right_value687 = (void*)0;
struct sNode* __dec_obj323;
struct sRShiftNode* __result371__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_602=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_602->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj321=result_602->sname;
        result_602->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_602->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_602->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj322=result_602->mLeft;
        result_602->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj323=result_602->mRight;
        result_602->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj323) { __dec_obj323 = come_decrement_ref_count2(__dec_obj323, ((struct sNode*)__dec_obj323)->finalize, ((struct sNode*)__dec_obj323)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_602;
    come_call_finalizer3(result_602,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value697 = (void*)0;
struct sNode* node_607;
int sline_real_608;
void* __right_value698 = (void*)0;
struct sNode* right_609;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value705 = (void*)0;
struct sNode* __result378__;
int sline_real_611;
void* __right_value706 = (void*)0;
struct sNode* right_612;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value713 = (void*)0;
struct sNode* __result381__;
int sline_real_614;
void* __right_value714 = (void*)0;
struct sNode* right_615;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value721 = (void*)0;
struct sNode* __result384__;
int sline_real_617;
void* __right_value722 = (void*)0;
struct sNode* right_618;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value729 = (void*)0;
struct sNode* __result387__;
int sline_real_620;
void* __right_value730 = (void*)0;
struct sNode* right_621;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value733 = (void*)0;
struct sNode* __result388__;
int sline_real_622;
void* __right_value734 = (void*)0;
struct sNode* right_623;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value737 = (void*)0;
struct sNode* __result389__;
int sline_real_624;
void* __right_value738 = (void*)0;
struct sNode* right_625;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value741 = (void*)0;
struct sNode* __result390__;
int sline_real_626;
void* __right_value742 = (void*)0;
struct sNode* right_627;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value745 = (void*)0;
struct sNode* __result391__;
struct sNode* __result392__;
    parse_sharp_v5(info);
    node_607=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_608=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_609=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_608;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1883, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value700=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1883, "struct sGtEqNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_609),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value705=_inf_value17));
            if(right_609) { right_609 = come_decrement_ref_count2(right_609, ((struct sNode*)right_609)->finalize, ((struct sNode*)right_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value700,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value705) { __right_value705 = come_decrement_ref_count2(__right_value705, ((struct sNode*)__right_value705)->finalize, ((struct sNode*)__right_value705)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result378__;
            if(right_609) { right_609 = come_decrement_ref_count2(right_609, ((struct sNode*)right_609)->finalize, ((struct sNode*)right_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_611=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_612=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_611;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1894, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value708=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1894, "struct sLtEqNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_612),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value713=_inf_value18));
            if(right_612) { right_612 = come_decrement_ref_count2(right_612, ((struct sNode*)right_612)->finalize, ((struct sNode*)right_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value708,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value713) { __right_value713 = come_decrement_ref_count2(__right_value713, ((struct sNode*)__right_value713)->finalize, ((struct sNode*)__right_value713)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result381__;
            if(right_612) { right_612 = come_decrement_ref_count2(right_612, ((struct sNode*)right_612)->finalize, ((struct sNode*)right_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_614=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_615=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_614;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1905, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value716=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1905, "struct sGtNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_615),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value721=_inf_value19));
            if(right_615) { right_615 = come_decrement_ref_count2(right_615, ((struct sNode*)right_615)->finalize, ((struct sNode*)right_615)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value716,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value721) { __right_value721 = come_decrement_ref_count2(__right_value721, ((struct sNode*)__right_value721)->finalize, ((struct sNode*)__right_value721)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result384__;
            if(right_615) { right_615 = come_decrement_ref_count2(right_615, ((struct sNode*)right_615)->finalize, ((struct sNode*)right_615)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_617=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_618=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_617;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1916, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value724=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1916, "struct sLtNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_618),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value729=_inf_value20));
            if(right_618) { right_618 = come_decrement_ref_count2(right_618, ((struct sNode*)right_618)->finalize, ((struct sNode*)right_618)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value724,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value729) { __right_value729 = come_decrement_ref_count2(__right_value729, ((struct sNode*)__right_value729)->finalize, ((struct sNode*)__right_value729)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result387__;
            if(right_618) { right_618 = come_decrement_ref_count2(right_618, ((struct sNode*)right_618)->finalize, ((struct sNode*)right_618)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_620=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_621=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_620;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1927, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value732=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1927, "struct sGtEqNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_621),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value733=_inf_value21));
            if(right_621) { right_621 = come_decrement_ref_count2(right_621, ((struct sNode*)right_621)->finalize, ((struct sNode*)right_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value732,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value733) { __right_value733 = come_decrement_ref_count2(__right_value733, ((struct sNode*)__right_value733)->finalize, ((struct sNode*)__right_value733)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result388__;
            if(right_621) { right_621 = come_decrement_ref_count2(right_621, ((struct sNode*)right_621)->finalize, ((struct sNode*)right_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_622=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_623=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_622;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1938, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value736=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1938, "struct sLtEqNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_623),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value737=_inf_value22));
            if(right_623) { right_623 = come_decrement_ref_count2(right_623, ((struct sNode*)right_623)->finalize, ((struct sNode*)right_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value736,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value737) { __right_value737 = come_decrement_ref_count2(__right_value737, ((struct sNode*)__right_value737)->finalize, ((struct sNode*)__right_value737)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result389__;
            if(right_623) { right_623 = come_decrement_ref_count2(right_623, ((struct sNode*)right_623)->finalize, ((struct sNode*)right_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_624=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_625=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_624;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1949, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value740=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1949, "struct sGtNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_625),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value741=_inf_value23));
            if(right_625) { right_625 = come_decrement_ref_count2(right_625, ((struct sNode*)right_625)->finalize, ((struct sNode*)right_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value740,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value741) { __right_value741 = come_decrement_ref_count2(__right_value741, ((struct sNode*)__right_value741)->finalize, ((struct sNode*)__right_value741)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result390__;
            if(right_625) { right_625 = come_decrement_ref_count2(right_625, ((struct sNode*)right_625)->finalize, ((struct sNode*)right_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_626=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_627=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_626;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1960, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value744=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1960, "struct sLtNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_627),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value745=_inf_value24));
            if(right_627) { right_627 = come_decrement_ref_count2(right_627, ((struct sNode*)right_627)->finalize, ((struct sNode*)right_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value744,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value745) { __right_value745 = come_decrement_ref_count2(__right_value745, ((struct sNode*)__right_value745)->finalize, ((struct sNode*)__right_value745)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result391__;
            if(right_627) { right_627 = come_decrement_ref_count2(right_627, ((struct sNode*)right_627)->finalize, ((struct sNode*)right_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result392__ = gComeFunResultObject = __result_obj__ = node_607;
    if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
struct sGtEqNode* __result376__;
void* __right_value701 = (void*)0;
struct sGtEqNode* result_610;
void* __right_value702 = (void*)0;
char* __dec_obj324;
void* __right_value703 = (void*)0;
struct sNode* __dec_obj325;
void* __right_value704 = (void*)0;
struct sNode* __dec_obj326;
struct sGtEqNode* __result377__;
    if(    self==(void*)0) {
        __result376__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    result_610=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_610->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj324=result_610->sname;
        result_610->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_610->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_610->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj325=result_610->mLeft;
        result_610->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj326=result_610->mRight;
        result_610->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result377__ = gComeFunResultObject = __result_obj__ = result_610;
    come_call_finalizer3(result_610,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
struct sLtEqNode* __result379__;
void* __right_value709 = (void*)0;
struct sLtEqNode* result_613;
void* __right_value710 = (void*)0;
char* __dec_obj327;
void* __right_value711 = (void*)0;
struct sNode* __dec_obj328;
void* __right_value712 = (void*)0;
struct sNode* __dec_obj329;
struct sLtEqNode* __result380__;
    if(    self==(void*)0) {
        __result379__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    result_613=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_613->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj327=result_613->sname;
        result_613->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_613->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_613->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj328=result_613->mLeft;
        result_613->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj329=result_613->mRight;
        result_613->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result380__ = gComeFunResultObject = __result_obj__ = result_613;
    come_call_finalizer3(result_613,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__=(void*)0;
struct sGtNode* __result382__;
void* __right_value717 = (void*)0;
struct sGtNode* result_616;
void* __right_value718 = (void*)0;
char* __dec_obj330;
void* __right_value719 = (void*)0;
struct sNode* __dec_obj331;
void* __right_value720 = (void*)0;
struct sNode* __dec_obj332;
struct sGtNode* __result383__;
    if(    self==(void*)0) {
        __result382__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    result_616=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_616->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj330=result_616->sname;
        result_616->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_616->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_616->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj331=result_616->mLeft;
        result_616->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj332=result_616->mRight;
        result_616->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj332) { __dec_obj332 = come_decrement_ref_count2(__dec_obj332, ((struct sNode*)__dec_obj332)->finalize, ((struct sNode*)__dec_obj332)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result383__ = gComeFunResultObject = __result_obj__ = result_616;
    come_call_finalizer3(result_616,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__=(void*)0;
struct sLtNode* __result385__;
void* __right_value725 = (void*)0;
struct sLtNode* result_619;
void* __right_value726 = (void*)0;
char* __dec_obj333;
void* __right_value727 = (void*)0;
struct sNode* __dec_obj334;
void* __right_value728 = (void*)0;
struct sNode* __dec_obj335;
struct sLtNode* __result386__;
    if(    self==(void*)0) {
        __result385__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    result_619=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_619->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj333=result_619->sname;
        result_619->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_619->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_619->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj334=result_619->mLeft;
        result_619->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj335=result_619->mRight;
        result_619->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result386__ = gComeFunResultObject = __result_obj__ = result_619;
    come_call_finalizer3(result_619,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value746 = (void*)0;
struct sNode* node_628;
int sline_real_629;
void* __right_value747 = (void*)0;
struct sNode* right_630;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value754 = (void*)0;
struct sNode* __result395__;
int sline_real_632;
void* __right_value755 = (void*)0;
struct sNode* right_633;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value762 = (void*)0;
struct sNode* __result398__;
int sline_real_635;
void* __right_value763 = (void*)0;
struct sNode* right_636;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value770 = (void*)0;
struct sNode* __result401__;
int sline_real_638;
void* __right_value771 = (void*)0;
struct sNode* right_639;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value778 = (void*)0;
struct sNode* __result404__;
int sline_real_641;
void* __right_value779 = (void*)0;
struct sNode* right_642;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value782 = (void*)0;
struct sNode* __result405__;
int sline_real_643;
void* __right_value783 = (void*)0;
struct sNode* right_644;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value786 = (void*)0;
struct sNode* __result406__;
int sline_real_645;
void* __right_value787 = (void*)0;
struct sNode* right_646;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value790 = (void*)0;
struct sNode* __result407__;
int sline_real_647;
void* __right_value791 = (void*)0;
struct sNode* right_648;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value794 = (void*)0;
struct sNode* __result408__;
struct sNode* __result409__;
    parse_sharp_v5(info);
    node_628=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_629=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_630=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_629;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1990, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value749=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1990, "struct sEq2Node*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_630),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result395__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value754=_inf_value25));
            if(right_630) { right_630 = come_decrement_ref_count2(right_630, ((struct sNode*)right_630)->finalize, ((struct sNode*)right_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value749,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value754) { __right_value754 = come_decrement_ref_count2(__right_value754, ((struct sNode*)__right_value754)->finalize, ((struct sNode*)__right_value754)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result395__;
            if(right_630) { right_630 = come_decrement_ref_count2(right_630, ((struct sNode*)right_630)->finalize, ((struct sNode*)right_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_632=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_633=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_632;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2001, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value757=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2001, "struct sEqNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_633),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __result398__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value762=_inf_value26));
            if(right_633) { right_633 = come_decrement_ref_count2(right_633, ((struct sNode*)right_633)->finalize, ((struct sNode*)right_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value757,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value762) { __right_value762 = come_decrement_ref_count2(__right_value762, ((struct sNode*)__right_value762)->finalize, ((struct sNode*)__right_value762)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result398__;
            if(right_633) { right_633 = come_decrement_ref_count2(right_633, ((struct sNode*)right_633)->finalize, ((struct sNode*)right_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_635=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_636=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_635;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2012, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value765=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2012, "struct sNotEq2Node*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_636),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __result401__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value770=_inf_value27));
            if(right_636) { right_636 = come_decrement_ref_count2(right_636, ((struct sNode*)right_636)->finalize, ((struct sNode*)right_636)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value765,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value770) { __right_value770 = come_decrement_ref_count2(__right_value770, ((struct sNode*)__right_value770)->finalize, ((struct sNode*)__right_value770)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result401__;
            if(right_636) { right_636 = come_decrement_ref_count2(right_636, ((struct sNode*)right_636)->finalize, ((struct sNode*)right_636)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_638=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_639=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_638;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2023, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value773=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2023, "struct sNotEqNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_639),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __result404__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value778=_inf_value28));
            if(right_639) { right_639 = come_decrement_ref_count2(right_639, ((struct sNode*)right_639)->finalize, ((struct sNode*)right_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value773,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value778) { __right_value778 = come_decrement_ref_count2(__right_value778, ((struct sNode*)__right_value778)->finalize, ((struct sNode*)__right_value778)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result404__;
            if(right_639) { right_639 = come_decrement_ref_count2(right_639, ((struct sNode*)right_639)->finalize, ((struct sNode*)right_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_641=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_642=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_641;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2034, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value781=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2034, "struct sEq2Node*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_642),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __result405__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value782=_inf_value29));
            if(right_642) { right_642 = come_decrement_ref_count2(right_642, ((struct sNode*)right_642)->finalize, ((struct sNode*)right_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value781,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value782) { __right_value782 = come_decrement_ref_count2(__right_value782, ((struct sNode*)__right_value782)->finalize, ((struct sNode*)__right_value782)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result405__;
            if(right_642) { right_642 = come_decrement_ref_count2(right_642, ((struct sNode*)right_642)->finalize, ((struct sNode*)right_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_643=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_644=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_643;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2045, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value785=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2045, "struct sEqNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_644),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __result406__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value786=_inf_value30));
            if(right_644) { right_644 = come_decrement_ref_count2(right_644, ((struct sNode*)right_644)->finalize, ((struct sNode*)right_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value785,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value786) { __right_value786 = come_decrement_ref_count2(__right_value786, ((struct sNode*)__right_value786)->finalize, ((struct sNode*)__right_value786)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result406__;
            if(right_644) { right_644 = come_decrement_ref_count2(right_644, ((struct sNode*)right_644)->finalize, ((struct sNode*)right_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_645=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_646=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_645;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2056, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value789=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2056, "struct sNotEq2Node*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_646),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __result407__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value790=_inf_value31));
            if(right_646) { right_646 = come_decrement_ref_count2(right_646, ((struct sNode*)right_646)->finalize, ((struct sNode*)right_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value789,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value790) { __right_value790 = come_decrement_ref_count2(__right_value790, ((struct sNode*)__right_value790)->finalize, ((struct sNode*)__right_value790)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result407__;
            if(right_646) { right_646 = come_decrement_ref_count2(right_646, ((struct sNode*)right_646)->finalize, ((struct sNode*)right_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_647=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_648=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_647;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2067, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value793=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2067, "struct sNotEqNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_648),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __result408__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value794=_inf_value32));
            if(right_648) { right_648 = come_decrement_ref_count2(right_648, ((struct sNode*)right_648)->finalize, ((struct sNode*)right_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value793,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value794) { __right_value794 = come_decrement_ref_count2(__right_value794, ((struct sNode*)__right_value794)->finalize, ((struct sNode*)__right_value794)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result408__;
            if(right_648) { right_648 = come_decrement_ref_count2(right_648, ((struct sNode*)right_648)->finalize, ((struct sNode*)right_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result409__ = gComeFunResultObject = __result_obj__ = node_628;
    if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__=(void*)0;
struct sEq2Node* __result393__;
void* __right_value750 = (void*)0;
struct sEq2Node* result_631;
void* __right_value751 = (void*)0;
char* __dec_obj336;
void* __right_value752 = (void*)0;
struct sNode* __dec_obj337;
void* __right_value753 = (void*)0;
struct sNode* __dec_obj338;
struct sEq2Node* __result394__;
    if(    self==(void*)0) {
        __result393__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result393__;
    }
    result_631=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_631->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj336=result_631->sname;
        result_631->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_631->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_631->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj337=result_631->mLeft;
        result_631->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj338=result_631->mRight;
        result_631->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj338) { __dec_obj338 = come_decrement_ref_count2(__dec_obj338, ((struct sNode*)__dec_obj338)->finalize, ((struct sNode*)__dec_obj338)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result394__ = gComeFunResultObject = __result_obj__ = result_631;
    come_call_finalizer3(result_631,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__=(void*)0;
struct sEqNode* __result396__;
void* __right_value758 = (void*)0;
struct sEqNode* result_634;
void* __right_value759 = (void*)0;
char* __dec_obj339;
void* __right_value760 = (void*)0;
struct sNode* __dec_obj340;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj341;
struct sEqNode* __result397__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_634=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_634->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj339=result_634->sname;
        result_634->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_634->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_634->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj340=result_634->mLeft;
        result_634->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj341=result_634->mRight;
        result_634->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj341) { __dec_obj341 = come_decrement_ref_count2(__dec_obj341, ((struct sNode*)__dec_obj341)->finalize, ((struct sNode*)__dec_obj341)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_634;
    come_call_finalizer3(result_634,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
struct sNotEq2Node* __result399__;
void* __right_value766 = (void*)0;
struct sNotEq2Node* result_637;
void* __right_value767 = (void*)0;
char* __dec_obj342;
void* __right_value768 = (void*)0;
struct sNode* __dec_obj343;
void* __right_value769 = (void*)0;
struct sNode* __dec_obj344;
struct sNotEq2Node* __result400__;
    if(    self==(void*)0) {
        __result399__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    result_637=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_637->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj342=result_637->sname;
        result_637->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_637->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_637->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj343=result_637->mLeft;
        result_637->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj343) { __dec_obj343 = come_decrement_ref_count2(__dec_obj343, ((struct sNode*)__dec_obj343)->finalize, ((struct sNode*)__dec_obj343)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj344=result_637->mRight;
        result_637->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj344) { __dec_obj344 = come_decrement_ref_count2(__dec_obj344, ((struct sNode*)__dec_obj344)->finalize, ((struct sNode*)__dec_obj344)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result400__ = gComeFunResultObject = __result_obj__ = result_637;
    come_call_finalizer3(result_637,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
struct sNotEqNode* __result402__;
void* __right_value774 = (void*)0;
struct sNotEqNode* result_640;
void* __right_value775 = (void*)0;
char* __dec_obj345;
void* __right_value776 = (void*)0;
struct sNode* __dec_obj346;
void* __right_value777 = (void*)0;
struct sNode* __dec_obj347;
struct sNotEqNode* __result403__;
    if(    self==(void*)0) {
        __result402__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result402__;
    }
    result_640=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj345=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_640->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj346=result_640->mLeft;
        result_640->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj346) { __dec_obj346 = come_decrement_ref_count2(__dec_obj346, ((struct sNode*)__dec_obj346)->finalize, ((struct sNode*)__dec_obj346)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj347=result_640->mRight;
        result_640->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj347) { __dec_obj347 = come_decrement_ref_count2(__dec_obj347, ((struct sNode*)__dec_obj347)->finalize, ((struct sNode*)__dec_obj347)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result403__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value795 = (void*)0;
struct sNode* node_649;
int sline_real_650;
void* __right_value796 = (void*)0;
struct sNode* right_651;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value803 = (void*)0;
struct sNode* __result412__;
int sline_real_653;
void* __right_value804 = (void*)0;
struct sNode* right_654;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value807 = (void*)0;
struct sNode* __result413__;
struct sNode* __result414__;
    parse_sharp_v5(info);
    node_649=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_649->terminated(node_649->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real_650=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_651=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_650;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2097, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value798=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2097, "struct sAndNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_649),(struct sNode*)come_increment_ref_count(right_651),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result412__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value803=_inf_value33));
            if(right_651) { right_651 = come_decrement_ref_count2(right_651, ((struct sNode*)right_651)->finalize, ((struct sNode*)right_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value798,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value803) { __right_value803 = come_decrement_ref_count2(__right_value803, ((struct sNode*)__right_value803)->finalize, ((struct sNode*)__right_value803)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result412__;
            if(right_651) { right_651 = come_decrement_ref_count2(right_651, ((struct sNode*)right_651)->finalize, ((struct sNode*)right_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_649->terminated(node_649->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_653=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_654=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_653;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2108, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value806=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2108, "struct sAndNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_649),(struct sNode*)come_increment_ref_count(right_654),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __result413__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value807=_inf_value34));
            if(right_654) { right_654 = come_decrement_ref_count2(right_654, ((struct sNode*)right_654)->finalize, ((struct sNode*)right_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value806,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value807) { __right_value807 = come_decrement_ref_count2(__right_value807, ((struct sNode*)__right_value807)->finalize, ((struct sNode*)__right_value807)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result413__;
            if(right_654) { right_654 = come_decrement_ref_count2(right_654, ((struct sNode*)right_654)->finalize, ((struct sNode*)right_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result414__ = gComeFunResultObject = __result_obj__ = node_649;
    if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__=(void*)0;
struct sAndNode* __result410__;
void* __right_value799 = (void*)0;
struct sAndNode* result_652;
void* __right_value800 = (void*)0;
char* __dec_obj348;
void* __right_value801 = (void*)0;
struct sNode* __dec_obj349;
void* __right_value802 = (void*)0;
struct sNode* __dec_obj350;
struct sAndNode* __result411__;
    if(    self==(void*)0) {
        __result410__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result410__;
    }
    result_652=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_652->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj348=result_652->sname;
        result_652->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_652->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_652->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj349=result_652->mLeft;
        result_652->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj349) { __dec_obj349 = come_decrement_ref_count2(__dec_obj349, ((struct sNode*)__dec_obj349)->finalize, ((struct sNode*)__dec_obj349)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj350=result_652->mRight;
        result_652->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj350) { __dec_obj350 = come_decrement_ref_count2(__dec_obj350, ((struct sNode*)__dec_obj350)->finalize, ((struct sNode*)__dec_obj350)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result411__ = gComeFunResultObject = __result_obj__ = result_652;
    come_call_finalizer3(result_652,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value808 = (void*)0;
struct sNode* node_655;
int sline_real_656;
void* __right_value809 = (void*)0;
struct sNode* right_657;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value816 = (void*)0;
struct sNode* __result417__;
int sline_real_659;
void* __right_value817 = (void*)0;
struct sNode* right_660;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value820 = (void*)0;
struct sNode* __result418__;
struct sNode* __result419__;
    parse_sharp_v5(info);
    node_655=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real_656=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_657=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_656;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2138, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value811=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2138, "struct sXOrNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_655),(struct sNode*)come_increment_ref_count(right_657),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result417__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value816=_inf_value35));
            if(right_657) { right_657 = come_decrement_ref_count2(right_657, ((struct sNode*)right_657)->finalize, ((struct sNode*)right_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_655) { node_655 = come_decrement_ref_count2(node_655, ((struct sNode*)node_655)->finalize, ((struct sNode*)node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value811,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value816) { __right_value816 = come_decrement_ref_count2(__right_value816, ((struct sNode*)__right_value816)->finalize, ((struct sNode*)__right_value816)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result417__;
            if(right_657) { right_657 = come_decrement_ref_count2(right_657, ((struct sNode*)right_657)->finalize, ((struct sNode*)right_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_659=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_660=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_659;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2149, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value819=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2149, "struct sXOrNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_655),(struct sNode*)come_increment_ref_count(right_660),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value820=_inf_value36));
            if(right_660) { right_660 = come_decrement_ref_count2(right_660, ((struct sNode*)right_660)->finalize, ((struct sNode*)right_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_655) { node_655 = come_decrement_ref_count2(node_655, ((struct sNode*)node_655)->finalize, ((struct sNode*)node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value819,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value820) { __right_value820 = come_decrement_ref_count2(__right_value820, ((struct sNode*)__right_value820)->finalize, ((struct sNode*)__right_value820)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result418__;
            if(right_660) { right_660 = come_decrement_ref_count2(right_660, ((struct sNode*)right_660)->finalize, ((struct sNode*)right_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result419__ = gComeFunResultObject = __result_obj__ = node_655;
    if(node_655) { node_655 = come_decrement_ref_count2(node_655, ((struct sNode*)node_655)->finalize, ((struct sNode*)node_655)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result419__;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__=(void*)0;
struct sXOrNode* __result415__;
void* __right_value812 = (void*)0;
struct sXOrNode* result_658;
void* __right_value813 = (void*)0;
char* __dec_obj351;
void* __right_value814 = (void*)0;
struct sNode* __dec_obj352;
void* __right_value815 = (void*)0;
struct sNode* __dec_obj353;
struct sXOrNode* __result416__;
    if(    self==(void*)0) {
        __result415__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result415__;
    }
    result_658=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_658->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj351=result_658->sname;
        result_658->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_658->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj352=result_658->mLeft;
        result_658->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj352) { __dec_obj352 = come_decrement_ref_count2(__dec_obj352, ((struct sNode*)__dec_obj352)->finalize, ((struct sNode*)__dec_obj352)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj353=result_658->mRight;
        result_658->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj353) { __dec_obj353 = come_decrement_ref_count2(__dec_obj353, ((struct sNode*)__dec_obj353)->finalize, ((struct sNode*)__dec_obj353)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result416__ = gComeFunResultObject = __result_obj__ = result_658;
    come_call_finalizer3(result_658,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value821 = (void*)0;
struct sNode* node_661;
int sline_real_662;
void* __right_value822 = (void*)0;
struct sNode* right_663;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value829 = (void*)0;
struct sNode* __result422__;
int sline_real_665;
void* __right_value830 = (void*)0;
struct sNode* right_666;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value833 = (void*)0;
struct sNode* __result423__;
struct sNode* __result424__;
    parse_sharp_v5(info);
    node_661=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real_662=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_663=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_662;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2179, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value824=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2179, "struct sOrNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_661),(struct sNode*)come_increment_ref_count(right_663),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result422__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value829=_inf_value37));
            if(right_663) { right_663 = come_decrement_ref_count2(right_663, ((struct sNode*)right_663)->finalize, ((struct sNode*)right_663)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value824,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value829) { __right_value829 = come_decrement_ref_count2(__right_value829, ((struct sNode*)__right_value829)->finalize, ((struct sNode*)__right_value829)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result422__;
            if(right_663) { right_663 = come_decrement_ref_count2(right_663, ((struct sNode*)right_663)->finalize, ((struct sNode*)right_663)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_665=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_666=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_665;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2190, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value832=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2190, "struct sOrNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_661),(struct sNode*)come_increment_ref_count(right_666),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __result423__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value833=_inf_value38));
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value832,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value833) { __right_value833 = come_decrement_ref_count2(__right_value833, ((struct sNode*)__right_value833)->finalize, ((struct sNode*)__right_value833)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result423__;
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result424__ = gComeFunResultObject = __result_obj__ = node_661;
    if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result424__;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__=(void*)0;
struct sOrNode* __result420__;
void* __right_value825 = (void*)0;
struct sOrNode* result_664;
void* __right_value826 = (void*)0;
char* __dec_obj354;
void* __right_value827 = (void*)0;
struct sNode* __dec_obj355;
void* __right_value828 = (void*)0;
struct sNode* __dec_obj356;
struct sOrNode* __result421__;
    if(    self==(void*)0) {
        __result420__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result420__;
    }
    result_664=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_664->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj354=result_664->sname;
        result_664->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_664->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj355=result_664->mLeft;
        result_664->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj355) { __dec_obj355 = come_decrement_ref_count2(__dec_obj355, ((struct sNode*)__dec_obj355)->finalize, ((struct sNode*)__dec_obj355)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj356=result_664->mRight;
        result_664->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj356) { __dec_obj356 = come_decrement_ref_count2(__dec_obj356, ((struct sNode*)__dec_obj356)->finalize, ((struct sNode*)__dec_obj356)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result421__ = gComeFunResultObject = __result_obj__ = result_664;
    come_call_finalizer3(result_664,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value834 = (void*)0;
struct sNode* node_667;
int sline_real_668;
void* __right_value835 = (void*)0;
struct sNode* right_669;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value842 = (void*)0;
struct sNode* __result427__;
int sline_real_671;
void* __right_value843 = (void*)0;
struct sNode* right_672;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value846 = (void*)0;
struct sNode* __result428__;
struct sNode* __result429__;
    parse_sharp_v5(info);
    node_667=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real_668=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_669=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_668;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2220, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value837=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2220, "struct sAndAndNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_667),(struct sNode*)come_increment_ref_count(right_669),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result427__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value842=_inf_value39));
            if(right_669) { right_669 = come_decrement_ref_count2(right_669, ((struct sNode*)right_669)->finalize, ((struct sNode*)right_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_667) { node_667 = come_decrement_ref_count2(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value837,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value842) { __right_value842 = come_decrement_ref_count2(__right_value842, ((struct sNode*)__right_value842)->finalize, ((struct sNode*)__right_value842)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result427__;
            if(right_669) { right_669 = come_decrement_ref_count2(right_669, ((struct sNode*)right_669)->finalize, ((struct sNode*)right_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_671=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_672=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_671;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2231, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value845=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2231, "struct sAndAndNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_667),(struct sNode*)come_increment_ref_count(right_672),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __result428__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=_inf_value40));
            if(right_672) { right_672 = come_decrement_ref_count2(right_672, ((struct sNode*)right_672)->finalize, ((struct sNode*)right_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_667) { node_667 = come_decrement_ref_count2(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value845,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value846) { __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result428__;
            if(right_672) { right_672 = come_decrement_ref_count2(right_672, ((struct sNode*)right_672)->finalize, ((struct sNode*)right_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result429__ = gComeFunResultObject = __result_obj__ = node_667;
    if(node_667) { node_667 = come_decrement_ref_count2(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result429__;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
struct sAndAndNode* __result425__;
void* __right_value838 = (void*)0;
struct sAndAndNode* result_670;
void* __right_value839 = (void*)0;
char* __dec_obj357;
void* __right_value840 = (void*)0;
struct sNode* __dec_obj358;
void* __right_value841 = (void*)0;
struct sNode* __dec_obj359;
struct sAndAndNode* __result426__;
    if(    self==(void*)0) {
        __result425__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result425__;
    }
    result_670=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_670->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj357=result_670->sname;
        result_670->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_670->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_670->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj358=result_670->mLeft;
        result_670->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj358) { __dec_obj358 = come_decrement_ref_count2(__dec_obj358, ((struct sNode*)__dec_obj358)->finalize, ((struct sNode*)__dec_obj358)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj359=result_670->mRight;
        result_670->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj359) { __dec_obj359 = come_decrement_ref_count2(__dec_obj359, ((struct sNode*)__dec_obj359)->finalize, ((struct sNode*)__dec_obj359)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result426__ = gComeFunResultObject = __result_obj__ = result_670;
    come_call_finalizer3(result_670,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result426__;
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value847 = (void*)0;
struct sNode* node_673;
int sline_real_674;
void* __right_value848 = (void*)0;
struct sNode* right_675;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value855 = (void*)0;
struct sNode* __result432__;
int sline_real_677;
void* __right_value856 = (void*)0;
struct sNode* right_678;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value859 = (void*)0;
struct sNode* __result433__;
struct sNode* __result434__;
    parse_sharp_v5(info);
    node_673=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real_674=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_675=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_674;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2261, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value850=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2261, "struct sOrOrNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_675),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result432__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value855=_inf_value41));
            if(right_675) { right_675 = come_decrement_ref_count2(right_675, ((struct sNode*)right_675)->finalize, ((struct sNode*)right_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value850,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value855) { __right_value855 = come_decrement_ref_count2(__right_value855, ((struct sNode*)__right_value855)->finalize, ((struct sNode*)__right_value855)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result432__;
            if(right_675) { right_675 = come_decrement_ref_count2(right_675, ((struct sNode*)right_675)->finalize, ((struct sNode*)right_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_677=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_678=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_677;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2272, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value858=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2272, "struct sOrOrNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_678),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __result433__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value859=_inf_value42));
            if(right_678) { right_678 = come_decrement_ref_count2(right_678, ((struct sNode*)right_678)->finalize, ((struct sNode*)right_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value858,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value859) { __right_value859 = come_decrement_ref_count2(__right_value859, ((struct sNode*)__right_value859)->finalize, ((struct sNode*)__right_value859)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result433__;
            if(right_678) { right_678 = come_decrement_ref_count2(right_678, ((struct sNode*)right_678)->finalize, ((struct sNode*)right_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result434__ = gComeFunResultObject = __result_obj__ = node_673;
    if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result434__;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
struct sOrOrNode* __result430__;
void* __right_value851 = (void*)0;
struct sOrOrNode* result_676;
void* __right_value852 = (void*)0;
char* __dec_obj360;
void* __right_value853 = (void*)0;
struct sNode* __dec_obj361;
void* __right_value854 = (void*)0;
struct sNode* __dec_obj362;
struct sOrOrNode* __result431__;
    if(    self==(void*)0) {
        __result430__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result430__;
    }
    result_676=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_676->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj360=result_676->sname;
        result_676->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_676->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_676->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj361=result_676->mLeft;
        result_676->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj361) { __dec_obj361 = come_decrement_ref_count2(__dec_obj361, ((struct sNode*)__dec_obj361)->finalize, ((struct sNode*)__dec_obj361)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj362=result_676->mRight;
        result_676->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj362) { __dec_obj362 = come_decrement_ref_count2(__dec_obj362, ((struct sNode*)__dec_obj362)->finalize, ((struct sNode*)__dec_obj362)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result431__ = gComeFunResultObject = __result_obj__ = result_676;
    come_call_finalizer3(result_676,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result431__;
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value860 = (void*)0;
struct sNode* node_679;
int sline_real_680;
void* __right_value861 = (void*)0;
struct sNode* node2_681;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value868 = (void*)0;
struct sNode* __result437__;
struct sNode* __result438__;
    parse_sharp_v5(info);
    node_679=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !info->no_comma&&*info->p==44) {
            info->p++;
            sline_real_680=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_681=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_680;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2302, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value863=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2302, "struct sCommaNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_679),(struct sNode*)come_increment_ref_count(node2_681),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result437__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value868=_inf_value43));
            if(node2_681) { node2_681 = come_decrement_ref_count2(node2_681, ((struct sNode*)node2_681)->finalize, ((struct sNode*)node2_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_679) { node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value863,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value868) { __right_value868 = come_decrement_ref_count2(__right_value868, ((struct sNode*)__right_value868)->finalize, ((struct sNode*)__right_value868)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result437__;
            if(node2_681) { node2_681 = come_decrement_ref_count2(node2_681, ((struct sNode*)node2_681)->finalize, ((struct sNode*)node2_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result438__ = gComeFunResultObject = __result_obj__ = node_679;
    if(node_679) { node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result438__;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__=(void*)0;
struct sCommaNode* __result435__;
void* __right_value864 = (void*)0;
struct sCommaNode* result_682;
void* __right_value865 = (void*)0;
char* __dec_obj363;
void* __right_value866 = (void*)0;
struct sNode* __dec_obj364;
void* __right_value867 = (void*)0;
struct sNode* __dec_obj365;
struct sCommaNode* __result436__;
    if(    self==(void*)0) {
        __result435__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result435__;
    }
    result_682=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_682->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj363=result_682->sname;
        result_682->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_682->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj364=result_682->mLeft;
        result_682->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj364) { __dec_obj364 = come_decrement_ref_count2(__dec_obj364, ((struct sNode*)__dec_obj364)->finalize, ((struct sNode*)__dec_obj364)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj365=result_682->mRight;
        result_682->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj365) { __dec_obj365 = come_decrement_ref_count2(__dec_obj365, ((struct sNode*)__dec_obj365)->finalize, ((struct sNode*)__dec_obj365)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result436__ = gComeFunResultObject = __result_obj__ = result_682;
    come_call_finalizer3(result_682,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result436__;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value869 = (void*)0;
struct sNode* node_683;
int sline_real_684;
struct sNode* value1_685;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value872 = (void*)0;
struct sNode* __dec_obj366;
_Bool no_label_686;
void* __right_value873 = (void*)0;
struct sNode* __dec_obj367;
void* __right_value874 = (void*)0;
struct sNode* value2_687;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value877 = (void*)0;
struct sNode* __result439__;
struct sNode* __result440__;
value1_685 = (void*)0;
    parse_sharp_v5(info);
    node_683=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==63) {
            info->p++;
            sline_real_684=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2333, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value871=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2333, "struct sNullNode*", (void*)0, (void*)0)),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj366=value1_685;
                value1_685=(struct sNode*)come_increment_ref_count(_inf_value44);
                if(__dec_obj366) { __dec_obj366 = come_decrement_ref_count2(__dec_obj366, ((struct sNode*)__dec_obj366)->finalize, ((struct sNode*)__dec_obj366)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value871,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                no_label_686=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj367=value1_685;
                value1_685=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                if(__dec_obj367) { __dec_obj367 = come_decrement_ref_count2(__dec_obj367, ((struct sNode*)__dec_obj367)->finalize, ((struct sNode*)__dec_obj367)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_label=no_label_686;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_687=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_684;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2351, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value876=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2351, "struct sConditionalNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_683),(struct sNode*)come_increment_ref_count(value1_685),(struct sNode*)come_increment_ref_count(value2_687),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result439__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value877=_inf_value45));
            if(value1_685) { value1_685 = come_decrement_ref_count2(value1_685, ((struct sNode*)value1_685)->finalize, ((struct sNode*)value1_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_687) { value2_687 = come_decrement_ref_count2(value2_687, ((struct sNode*)value2_687)->finalize, ((struct sNode*)value2_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_683) { node_683 = come_decrement_ref_count2(node_683, ((struct sNode*)node_683)->finalize, ((struct sNode*)node_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value876,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value877) { __right_value877 = come_decrement_ref_count2(__right_value877, ((struct sNode*)__right_value877)->finalize, ((struct sNode*)__right_value877)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result439__;
            if(value1_685) { value1_685 = come_decrement_ref_count2(value1_685, ((struct sNode*)value1_685)->finalize, ((struct sNode*)value1_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_687) { value2_687 = come_decrement_ref_count2(value2_687, ((struct sNode*)value2_687)->finalize, ((struct sNode*)value2_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result440__ = gComeFunResultObject = __result_obj__ = node_683;
    if(node_683) { node_683 = come_decrement_ref_count2(node_683, ((struct sNode*)node_683)->finalize, ((struct sNode*)node_683)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result440__;
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value878 = (void*)0;
struct sNode* node_688;
struct sNode* __result441__;
    parse_sharp_v5(info);
    node_688=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result441__ = gComeFunResultObject = __result_obj__ = node_688;
    if(node_688) { node_688 = come_decrement_ref_count2(node_688, ((struct sNode*)node_688)->finalize, ((struct sNode*)node_688)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result441__;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value881 = (void*)0;
struct sNode* __result442__;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value886 = (void*)0;
struct sNode* __result445__;
void* __right_value887 = (void*)0;
struct sNode* __result446__;
    if(    !gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2375, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value880=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2375, "struct sNullNode*", (void*)0, (void*)0)),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result442__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value881=_inf_value46));
        come_call_finalizer3(__right_value880,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value881) { __right_value881 = come_decrement_ref_count2(__right_value881, ((struct sNode*)__right_value881)->finalize, ((struct sNode*)__right_value881)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result442__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")) {
        _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2378, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value883=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2378, "struct sNilNode*", (void*)0, (void*)0)),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sline_real=(void*)sNodeBase_sline_real;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result445__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value886=_inf_value47));
        come_call_finalizer3(__right_value883,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value886) { __right_value886 = come_decrement_ref_count2(__right_value886, ((struct sNode*)__right_value886)->finalize, ((struct sNode*)__right_value886)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result445__;
    }
    __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value887=string_node_v12(buf,head,head_sline,info)));
    if(__right_value887) { __right_value887 = come_decrement_ref_count2(__right_value887, ((struct sNode*)__right_value887)->finalize, ((struct sNode*)__right_value887)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result446__;
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__=(void*)0;
struct sNilNode* __result443__;
void* __right_value884 = (void*)0;
struct sNilNode* result_689;
void* __right_value885 = (void*)0;
char* __dec_obj368;
struct sNilNode* __result444__;
    if(    self==(void*)0) {
        __result443__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result443__;
    }
    result_689=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_689->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj368=result_689->sname;
        result_689->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->sline_real=self->sline_real;
    }
    __result444__ = gComeFunResultObject = __result_obj__ = result_689;
    come_call_finalizer3(result_689,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result444__;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value890 = (void*)0;
struct sNode* __result447__;
    _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2386, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value889=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2386, "struct sLtNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sline_real=(void*)sNodeBase_sline_real;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result447__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value890=_inf_value48));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value889,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value890) { __right_value890 = come_decrement_ref_count2(__right_value890, ((struct sNode*)__right_value890)->finalize, ((struct sNode*)__right_value890)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result447__;
}

