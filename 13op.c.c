/// previous struct definition ///
struct __locale_struct;

struct tm;

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
typedef unsigned int wint_t;

typedef unsigned long  int wctype_t;

struct __mbstate_t
{
    unsigned int __opaque1;
    unsigned int __opaque2;
};

typedef struct __mbstate_t mbstate_t;

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
    void* get_hash_key_fun;
    void* equaler_fun;
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
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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

struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};

struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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
    struct list$1voidph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
    char* mAttribute;
    _Bool mDynamic;
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
    struct sType* mNoSolvedGenericsType;
    struct sType* mOriginalLoadVarType;
    struct sType* mAnyOriginalType;
    _Bool mAnyClass;
    char* mInterfaceName;
    char* mGenericsName;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct sType* mChannelType;
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
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
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
    struct list$1voidph* mParamTypes;
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
    _Bool mGenerate;
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
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
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

struct list$1voidp
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
};

struct map$2voidphvoidph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1voidp* key_list;
    int it;
};

struct sVarTable
{
    struct map$2voidphvoidph* mVars;
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
    struct map$2voidphvoidph* funcs;
    struct map$2voidphvoidph* generics_funcs;
    struct map$2voidphvoidph* classes;
    struct map$2voidphvoidph* modules;
    struct map$2voidphvoidph* types;
    struct map$2voidphvoidph* generics_classes;
    struct map$2voidphvoidph* struct_definition;
    struct map$2voidphvoidph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1voidph* right_value_objects;
    struct sType* generics_type;
    struct list$1voidph* method_generics_types;
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
    struct list$1voidph* param_types;
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
    struct map$2voidphvoidph* module_params;
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
    struct list$1voidph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
    struct map$2voidphvoidph* uniq_definition;
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

struct tuple2$2charphsGenericsFunp
{
    char* v1;
    struct sGenericsFun* v2;
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

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2charphbool
{
    char* v1;
    _Bool v2;
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

extern struct list$1voidph* gExceptionRightValueObjects;
struct tuple4$4charphcharphcharphcharph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
};

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
unsigned int* wcscpy(unsigned int* anonymous_var_nameX518, const unsigned int* anonymous_var_nameX519);
unsigned int* wcsncpy(unsigned int* anonymous_var_nameX520, const unsigned int* anonymous_var_nameX521, unsigned long  int anonymous_var_nameX522);
unsigned int* wcscat(unsigned int* anonymous_var_nameX523, const unsigned int* anonymous_var_nameX524);
unsigned int* wcsncat(unsigned int* anonymous_var_nameX525, const unsigned int* anonymous_var_nameX526, unsigned long  int anonymous_var_nameX527);
int wcscmp(const unsigned int* anonymous_var_nameX528, const unsigned int* anonymous_var_nameX529);
int wcsncmp(const unsigned int* anonymous_var_nameX530, const unsigned int* anonymous_var_nameX531, unsigned long  int anonymous_var_nameX532);
int wcscoll(const unsigned int* anonymous_var_nameX533, const unsigned int* anonymous_var_nameX534);
unsigned long  int wcsxfrm(unsigned int* anonymous_var_nameX535, const unsigned int* anonymous_var_nameX536, unsigned long  int anonymous_var_nameX537);
unsigned int* wcschr(const unsigned int* anonymous_var_nameX538, unsigned int anonymous_var_nameX539);
unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX540, unsigned int anonymous_var_nameX541);
unsigned long  int wcscspn(const unsigned int* anonymous_var_nameX542, const unsigned int* anonymous_var_nameX543);
unsigned long  int wcsspn(const unsigned int* anonymous_var_nameX544, const unsigned int* anonymous_var_nameX545);
unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX546, const unsigned int* anonymous_var_nameX547);
unsigned int* wcstok(unsigned int* anonymous_var_nameX548, const unsigned int* anonymous_var_nameX549, unsigned int** anonymous_var_nameX550);
unsigned long  int wcslen(const unsigned int* anonymous_var_nameX551);
unsigned int* wcsstr(const unsigned int* anonymous_var_nameX552, const unsigned int* anonymous_var_nameX553);
unsigned int* wcswcs(const unsigned int* anonymous_var_nameX554, const unsigned int* anonymous_var_nameX555);
unsigned int* wmemchr(const unsigned int* anonymous_var_nameX556, unsigned int anonymous_var_nameX557, unsigned long  int anonymous_var_nameX558);
int wmemcmp(const unsigned int* anonymous_var_nameX559, const unsigned int* anonymous_var_nameX560, unsigned long  int anonymous_var_nameX561);
unsigned int* wmemcpy(unsigned int* anonymous_var_nameX562, const unsigned int* anonymous_var_nameX563, unsigned long  int anonymous_var_nameX564);
unsigned int* wmemmove(unsigned int* anonymous_var_nameX565, const unsigned int* anonymous_var_nameX566, unsigned long  int anonymous_var_nameX567);
unsigned int* wmemset(unsigned int* anonymous_var_nameX568, unsigned int anonymous_var_nameX569, unsigned long  int anonymous_var_nameX570);
unsigned int btowc(int anonymous_var_nameX571);
int wctob(unsigned int anonymous_var_nameX572);
int mbsinit(const struct __mbstate_t* anonymous_var_nameX573);
unsigned long  int mbrtowc(unsigned int* anonymous_var_nameX574, const char* anonymous_var_nameX575, unsigned long  int anonymous_var_nameX576, struct __mbstate_t* anonymous_var_nameX577);
unsigned long  int wcrtomb(char* anonymous_var_nameX578, unsigned int anonymous_var_nameX579, struct __mbstate_t* anonymous_var_nameX580);
unsigned long  int mbrlen(const char* anonymous_var_nameX581, unsigned long  int anonymous_var_nameX582, struct __mbstate_t* anonymous_var_nameX583);
unsigned long  int mbsrtowcs(unsigned int* anonymous_var_nameX584, const char** anonymous_var_nameX585, unsigned long  int anonymous_var_nameX586, struct __mbstate_t* anonymous_var_nameX587);
unsigned long  int wcsrtombs(char* anonymous_var_nameX588, const unsigned int** anonymous_var_nameX589, unsigned long  int anonymous_var_nameX590, struct __mbstate_t* anonymous_var_nameX591);
float wcstof(const unsigned int* anonymous_var_nameX592, unsigned int** anonymous_var_nameX593);
double wcstod(const unsigned int* anonymous_var_nameX594, unsigned int** anonymous_var_nameX595);
long  double wcstold(const unsigned int* anonymous_var_nameX596, unsigned int** anonymous_var_nameX597);
long wcstol(const unsigned int* anonymous_var_nameX598, unsigned int** anonymous_var_nameX599, int anonymous_var_nameX600);
unsigned long  int wcstoul(const unsigned int* anonymous_var_nameX601, unsigned int** anonymous_var_nameX602, int anonymous_var_nameX603);
long long wcstoll(const unsigned int* anonymous_var_nameX604, unsigned int** anonymous_var_nameX605, int anonymous_var_nameX606);
unsigned long  long wcstoull(const unsigned int* anonymous_var_nameX607, unsigned int** anonymous_var_nameX608, int anonymous_var_nameX609);
int fwide(struct _IO_FILE* anonymous_var_nameX610, int anonymous_var_nameX611);
int wprintf(const unsigned int* anonymous_var_nameX612, ...);
int fwprintf(struct _IO_FILE* anonymous_var_nameX613, const unsigned int* anonymous_var_nameX614, ...);
int swprintf(unsigned int* anonymous_var_nameX615, unsigned long  int anonymous_var_nameX616, const unsigned int* anonymous_var_nameX617, ...);
int vwprintf(const unsigned int* anonymous_var_nameX618, va_list anonymous_var_nameX619);
int vfwprintf(struct _IO_FILE* anonymous_var_nameX620, const unsigned int* anonymous_var_nameX621, va_list anonymous_var_nameX622);
int vswprintf(unsigned int* anonymous_var_nameX623, unsigned long  int anonymous_var_nameX624, const unsigned int* anonymous_var_nameX625, va_list anonymous_var_nameX626);
int wscanf(const unsigned int* anonymous_var_nameX627, ...);
int fwscanf(struct _IO_FILE* anonymous_var_nameX628, const unsigned int* anonymous_var_nameX629, ...);
int swscanf(const unsigned int* anonymous_var_nameX630, const unsigned int* anonymous_var_nameX631, ...);
int vwscanf(const unsigned int* anonymous_var_nameX632, va_list anonymous_var_nameX633);
int vfwscanf(struct _IO_FILE* anonymous_var_nameX634, const unsigned int* anonymous_var_nameX635, va_list anonymous_var_nameX636);
int vswscanf(const unsigned int* anonymous_var_nameX637, const unsigned int* anonymous_var_nameX638, va_list anonymous_var_nameX639);
unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX640);
unsigned int getwc(struct _IO_FILE* anonymous_var_nameX641);
unsigned int getwchar();
unsigned int fputwc(unsigned int anonymous_var_nameX642, struct _IO_FILE* anonymous_var_nameX643);
unsigned int putwc(unsigned int anonymous_var_nameX644, struct _IO_FILE* anonymous_var_nameX645);
unsigned int putwchar(unsigned int anonymous_var_nameX646);
unsigned int* fgetws(unsigned int* anonymous_var_nameX647, int anonymous_var_nameX648, struct _IO_FILE* anonymous_var_nameX649);
int fputws(const unsigned int* anonymous_var_nameX650, struct _IO_FILE* anonymous_var_nameX651);
unsigned int ungetwc(unsigned int anonymous_var_nameX652, struct _IO_FILE* anonymous_var_nameX653);
unsigned long  int wcsftime(unsigned int* anonymous_var_nameX654, unsigned long  int anonymous_var_nameX655, const unsigned int* anonymous_var_nameX656, const struct tm* anonymous_var_nameX657);
unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX658);
unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX659);
unsigned int getwchar_unlocked();
unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX660, struct _IO_FILE* anonymous_var_nameX661);
unsigned int putwc_unlocked(unsigned int anonymous_var_nameX662, struct _IO_FILE* anonymous_var_nameX663);
unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX664);
unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX665, int anonymous_var_nameX666, struct _IO_FILE* anonymous_var_nameX667);
int fputws_unlocked(const unsigned int* anonymous_var_nameX668, struct _IO_FILE* anonymous_var_nameX669);
unsigned long  int wcsftime_l(unsigned int* anonymous_var_nameX670, unsigned long  int anonymous_var_nameX671, const unsigned int* anonymous_var_nameX672, const struct tm* anonymous_var_nameX673, struct __locale_struct* anonymous_var_nameX674);
struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX675, unsigned long  int* anonymous_var_nameX676);
unsigned long  int mbsnrtowcs(unsigned int* anonymous_var_nameX677, const char** anonymous_var_nameX678, unsigned long  int anonymous_var_nameX679, unsigned long  int anonymous_var_nameX680, struct __mbstate_t* anonymous_var_nameX681);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX682, const unsigned int** anonymous_var_nameX683, unsigned long  int anonymous_var_nameX684, unsigned long  int anonymous_var_nameX685, struct __mbstate_t* anonymous_var_nameX686);
unsigned int* wcsdup(const unsigned int* anonymous_var_nameX687);
unsigned long  int wcsnlen(const unsigned int* anonymous_var_nameX688, unsigned long  int anonymous_var_nameX689);
unsigned int* wcpcpy(unsigned int* anonymous_var_nameX690, const unsigned int* anonymous_var_nameX691);
unsigned int* wcpncpy(unsigned int* anonymous_var_nameX692, const unsigned int* anonymous_var_nameX693, unsigned long  int anonymous_var_nameX694);
int wcscasecmp(const unsigned int* anonymous_var_nameX695, const unsigned int* anonymous_var_nameX696);
int wcscasecmp_l(const unsigned int* anonymous_var_nameX697, const unsigned int* anonymous_var_nameX698, struct __locale_struct* anonymous_var_nameX699);
int wcsncasecmp(const unsigned int* anonymous_var_nameX700, const unsigned int* anonymous_var_nameX701, unsigned long  int anonymous_var_nameX702);
int wcsncasecmp_l(const unsigned int* anonymous_var_nameX703, const unsigned int* anonymous_var_nameX704, unsigned long  int anonymous_var_nameX705, struct __locale_struct* anonymous_var_nameX706);
int wcscoll_l(const unsigned int* anonymous_var_nameX707, const unsigned int* anonymous_var_nameX708, struct __locale_struct* anonymous_var_nameX709);
unsigned long  int wcsxfrm_l(unsigned int* anonymous_var_nameX710, const unsigned int* anonymous_var_nameX711, unsigned long  int anonymous_var_nameX712, struct __locale_struct* anonymous_var_nameX713);
int wcwidth(unsigned int anonymous_var_nameX714);
int wcswidth(const unsigned int* anonymous_var_nameX715, unsigned long  int anonymous_var_nameX716);
int iswalnum(unsigned int anonymous_var_nameX717);
int iswalpha(unsigned int anonymous_var_nameX718);
int iswblank(unsigned int anonymous_var_nameX719);
int iswcntrl(unsigned int anonymous_var_nameX720);
int iswdigit(unsigned int anonymous_var_nameX721);
int iswgraph(unsigned int anonymous_var_nameX722);
int iswlower(unsigned int anonymous_var_nameX723);
int iswprint(unsigned int anonymous_var_nameX724);
int iswpunct(unsigned int anonymous_var_nameX725);
int iswspace(unsigned int anonymous_var_nameX726);
int iswupper(unsigned int anonymous_var_nameX727);
int iswxdigit(unsigned int anonymous_var_nameX728);
int iswctype(unsigned int anonymous_var_nameX729, unsigned long  int anonymous_var_nameX730);
unsigned int towlower(unsigned int anonymous_var_nameX731);
unsigned int towupper(unsigned int anonymous_var_nameX732);
unsigned long  int wctype(const char* anonymous_var_nameX733);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static unsigned int buffer_get_hash_key(struct buffer* self);
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
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void* come_get_cloner(void* mem);
void* come_get_hash_key(void* mem);
void* come_get_equaler(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
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
void* come_call_cloner(void* fun, void* mem);
unsigned int come_call_get_hash_key(void* fun, void* mem);
unsigned int come_call_equals(void* fun, void* mem, void* mem2);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
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
static void va_list_finalize(va_list self);
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
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values);
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
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
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
_Bool wchar_t_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
unsigned int wchar_t_get_hash_key(unsigned int value);
unsigned int wchar_tp_get_hash_key(unsigned int* value);
char* wchar_t_to_string(unsigned int wc);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
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
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
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
struct sType* use_any_type(struct sType* type);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4charphcharphcharphcharph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static int list$1voidphp_length(struct list$1voidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self);
static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self);
static _Bool tuple2$2charphvoidp_equals(struct tuple2$2charphvoidp* left, struct tuple2$2charphvoidp* right);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
struct sNode* create_null_node(struct sInfo* info);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static unsigned int sNullNode_get_hash_key(struct sNullNode* self);
static _Bool sNullNode_equals(struct sNullNode* left, struct sNullNode* right);
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
static unsigned int sConditionalNode_get_hash_key(struct sConditionalNode* self);
static _Bool sConditionalNode_equals(struct sConditionalNode* left, struct sConditionalNode* right);
struct sNode* mult_exp(struct sInfo* info);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static unsigned int sMultNode_get_hash_key(struct sMultNode* self);
static _Bool sMultNode_equals(struct sMultNode* left, struct sMultNode* right);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static unsigned int sDivNode_get_hash_key(struct sDivNode* self);
static _Bool sDivNode_equals(struct sDivNode* left, struct sDivNode* right);
static struct sModNode* sModNode_clone(struct sModNode* self);
static unsigned int sModNode_get_hash_key(struct sModNode* self);
static _Bool sModNode_equals(struct sModNode* left, struct sModNode* right);
struct sNode* add_exp(struct sInfo* info);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static unsigned int sAddNode_get_hash_key(struct sAddNode* self);
static _Bool sAddNode_equals(struct sAddNode* left, struct sAddNode* right);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
static unsigned int sSubNode_get_hash_key(struct sSubNode* self);
static _Bool sSubNode_equals(struct sSubNode* left, struct sSubNode* right);
struct sNode* shift_exp(struct sInfo* info);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static unsigned int sLShiftNode_get_hash_key(struct sLShiftNode* self);
static _Bool sLShiftNode_equals(struct sLShiftNode* left, struct sLShiftNode* right);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
static unsigned int sRShiftNode_get_hash_key(struct sRShiftNode* self);
static _Bool sRShiftNode_equals(struct sRShiftNode* left, struct sRShiftNode* right);
struct sNode* comparison_exp(struct sInfo* info);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static unsigned int sGtEqNode_get_hash_key(struct sGtEqNode* self);
static _Bool sGtEqNode_equals(struct sGtEqNode* left, struct sGtEqNode* right);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static unsigned int sLtEqNode_get_hash_key(struct sLtEqNode* self);
static _Bool sLtEqNode_equals(struct sLtEqNode* left, struct sLtEqNode* right);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static unsigned int sGtNode_get_hash_key(struct sGtNode* self);
static _Bool sGtNode_equals(struct sGtNode* left, struct sGtNode* right);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
static unsigned int sLtNode_get_hash_key(struct sLtNode* self);
static _Bool sLtNode_equals(struct sLtNode* left, struct sLtNode* right);
struct sNode* eq_exp(struct sInfo* info);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static unsigned int sEq2Node_get_hash_key(struct sEq2Node* self);
static _Bool sEq2Node_equals(struct sEq2Node* left, struct sEq2Node* right);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static unsigned int sEqNode_get_hash_key(struct sEqNode* self);
static _Bool sEqNode_equals(struct sEqNode* left, struct sEqNode* right);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static unsigned int sNotEq2Node_get_hash_key(struct sNotEq2Node* self);
static _Bool sNotEq2Node_equals(struct sNotEq2Node* left, struct sNotEq2Node* right);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
static unsigned int sNotEqNode_get_hash_key(struct sNotEqNode* self);
static _Bool sNotEqNode_equals(struct sNotEqNode* left, struct sNotEqNode* right);
struct sNode* and_exp(struct sInfo* info);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
static unsigned int sAndNode_get_hash_key(struct sAndNode* self);
static _Bool sAndNode_equals(struct sAndNode* left, struct sAndNode* right);
struct sNode* xor_exp(struct sInfo* info);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
static unsigned int sXOrNode_get_hash_key(struct sXOrNode* self);
static _Bool sXOrNode_equals(struct sXOrNode* left, struct sXOrNode* right);
struct sNode* or_exp(struct sInfo* info);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
static unsigned int sOrNode_get_hash_key(struct sOrNode* self);
static _Bool sOrNode_equals(struct sOrNode* left, struct sOrNode* right);
struct sNode* andand_exp(struct sInfo* info);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
static unsigned int sAndAndNode_get_hash_key(struct sAndAndNode* self);
static _Bool sAndAndNode_equals(struct sAndAndNode* left, struct sAndAndNode* right);
struct sNode* oror_exp(struct sInfo* info);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
static unsigned int sOrOrNode_get_hash_key(struct sOrOrNode* self);
static _Bool sOrOrNode_equals(struct sOrOrNode* left, struct sOrOrNode* right);
struct sNode* comma_exp(struct sInfo* info);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
static unsigned int sCommaNode_get_hash_key(struct sCommaNode* self);
static _Bool sCommaNode_equals(struct sCommaNode* left, struct sCommaNode* right);
struct sNode* conditional_exp(struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
static unsigned int sNilNode_get_hash_key(struct sNilNode* self);
static _Bool sNilNode_equals(struct sNilNode* left, struct sNilNode* right);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_1;
    result_1=0;
    result_1+=int_get_hash_key(((int)self->buf));
    result_1+=int_get_hash_key(((int)self->len));
    result_1+=int_get_hash_key(((int)self->size));
    return result_1;
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
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

static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
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

static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
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

static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
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

static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
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

static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
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

static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
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

static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_175;
struct list$1char* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1charp_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_178;
struct list$1char* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1452, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1462, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1472, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_179;
struct list_item$1char* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1charp* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1charpp_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_184;
struct list$1charp* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1452, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1462, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1472, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_185;
struct list_item$1charp* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1shortp_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_190;
struct list$1short* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1452, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1462, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1472, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_191;
struct list_item$1short* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1intp_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_196;
struct list$1int* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1452, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1462, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1472, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_197;
struct list_item$1int* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1longp_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_202;
struct list$1long* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1452, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1462, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1472, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_203;
struct list_item$1long* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1floatp_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_208;
struct list$1float* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1452, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1462, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1472, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_209;
struct list_item$1float* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1doublep_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_214;
struct list$1double* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1452, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1462, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1472, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_215;
struct list_item$1double* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2244, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_217;
    if(    0) {
        for(        i_217=0;        i_217<self->len;        i_217++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2244, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_218;
    if(    0) {
        for(        i_218=0;        i_218<self->len;        i_218++        ){
            self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2244, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_219;
    if(    0) {
        for(        i_219=0;        i_219<self->len;        i_219++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result127__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2244, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_220;
    if(    0) {
        for(        i_220=0;        i_220<self->len;        i_220++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result129__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2244, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2244, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_222;
    if(    0) {
        for(        i_222=0;        i_222<self->len;        i_222++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result133__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2244, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result171__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_257;
struct list_item$1charph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer3(prev_it_258,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_262;
char* __dec_obj28;
void* __right_value195 = (void*)0;
struct list_item$1charph* litem_263;
char* __dec_obj29;
void* __right_value196 = (void*)0;
struct list_item$1charph* litem_264;
char* __dec_obj30;
struct list$1charph* __result173__;
    if(    self->len==0) {
        litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1452, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj28=litem_262->item;
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1462, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj29=litem_263->item;
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1472, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj30=litem_264->item;
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value289 = (void*)0;
struct sType* generics_type_317;
struct sType* __dec_obj76;
struct sClass* klass_353;
char* class_name_354;
struct sFun* operator_fun_355;
char* fun_name2_356;
struct sGenericsFun* generics_fun_357;
void* __right_value290 = (void*)0;
char* none_generics_name_358;
void* __right_value291 = (void*)0;
struct sType* obj_type_359;
void* __right_value292 = (void*)0;
char* __dec_obj77;
void* __right_value293 = (void*)0;
char* fun_name3_360;
void* __right_value294 = (void*)0;
_Bool generics_any_child_363;
void* __right_value295 = (void*)0;
struct sType* no_solved_type_364;
struct sType* __dec_obj78;
struct list$1voidph* o2_saved_365;
struct sType* it_368;
struct list$1voidph* o2_saved_371;
struct sType* it_372;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sType* type2_373;
void* __right_value298 = (void*)0;
struct sType* type_before_374;
void* __right_value299 = (void*)0;
char* __dec_obj79;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_375=0;
_Bool err_376=0;
void* __right_value302 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
_Bool __result258__;
void* __right_value307 = (void*)0;
char* __dec_obj85;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var2 = (void*)0;
char* name_382=0;
_Bool err_383=0;
_Bool __result263__;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_384=0;
char* fun_name_385=0;
void* __right_value312 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_386=0;
char* fun_name2_387=0;
void* __right_value313 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_388=0;
char* fun_name_389=0;
void* __right_value314 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_390=0;
char* fun_name2_391=0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* __dec_obj87;
int i_392;
void* __right_value317 = (void*)0;
char* new_fun_name_393;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* __dec_obj88;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* obj_type_394;
void* __right_value322 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_395=0;
char* fun_name_396=0;
void* __right_value323 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun2_397=0;
char* fun_name2_398=0;
void* __right_value324 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var9 = (void*)0;
struct sFun* fun_399=0;
char* fun_name_400=0;
void* __right_value325 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10 = (void*)0;
struct sFun* fun2_401=0;
char* fun_name2_402=0;
_Bool result_403;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct CVALUE* come_value_404;
char* left_value2_405;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
_Bool _if_conditional1;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* __dec_obj89;
void* __right_value334 = (void*)0;
char* __dec_obj90;
char* right_value2_409;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
_Bool _if_conditional2;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
char* __dec_obj91;
void* __right_value341 = (void*)0;
char* __dec_obj92;
void* __right_value342 = (void*)0;
struct sType* type2_410;
void* __right_value343 = (void*)0;
struct sType* type3_411;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* __dec_obj93;
struct sType* result_type_412;
struct sType* obj_type_413;
void* __right_value348 = (void*)0;
struct sType* __dec_obj94;
void* __right_value349 = (void*)0;
struct sType* __dec_obj95;
void* __right_value350 = (void*)0;
struct sType* __dec_obj96;
void* __right_value351 = (void*)0;
char* __dec_obj97;
void* __right_value352 = (void*)0;
struct CVALUE* __dec_obj98;
_Bool __result267__;
fun_name2_356 = (void*)0;
memset(&i_392, 0, sizeof(int));
left_value2_405 = (void*)0;
right_value2_409 = (void*)0;
    generics_type_317=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_317->mNoSolvedGenericsType) {
        __dec_obj76=generics_type_317;
        generics_type_317=(struct sType*)come_increment_ref_count(generics_type_317->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    klass_353=type->mClass;
    class_name_354=klass_353->mName;
    operator_fun_355=((void*)0);
    generics_fun_357=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_358=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_359=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj77=fun_name2_356;
        fun_name2_356=(char*)come_increment_ref_count(create_method_name(obj_type_359,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_360=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_358,fun_name));
        generics_fun_357=((struct sGenericsFun*)((void*)(__right_value294=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_360,((void*)0)))));
        come_call_finalizer3(__right_value294,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_357) {
            generics_any_child_363=(_Bool)0;
            no_solved_type_364=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj78=no_solved_type_364;
                no_solved_type_364=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
                for(                o2_saved_365=(struct list$1voidph*)come_increment_ref_count((no_solved_type_364->mGenericsTypes)),it_368=((struct sType*)list$1voidphp_begin((o2_saved_365)));                !list$1voidphp_end((o2_saved_365));                it_368=((struct sType*)list$1voidphp_next((o2_saved_365)))                ){
                    if(                    it_368->mAnyOriginalType) {
                        generics_any_child_363=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_365,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            for(            o2_saved_371=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_372=((struct sType*)list$1voidphp_begin((o2_saved_371)));            !list$1voidphp_end((o2_saved_371));            it_372=((struct sType*)list$1voidphp_next((o2_saved_371)))            ){
                if(                it_372->mAnyOriginalType) {
                    generics_any_child_363=(_Bool)1;
                }
            }
            come_call_finalizer3(o2_saved_371,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            generics_fun_357->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_363)) {
                type2_373=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type))));
                type_before_374=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
                __dec_obj79=fun_name2_356;
                fun_name2_356=(char*)come_increment_ref_count(create_method_name(type2_373,(_Bool)0,fun_name,info,(_Bool)1));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value301=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_356)),generics_fun_357,type2_373,info)));
                name_375=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                err_376=multiple_assign_var1->v2;
                come_call_finalizer3(__right_value301,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_376) {
                    err_msg(info,"%s not found",fun_name3_360);
                    __result258__ = ((struct tuple2$2charphvoidp*)(__right_value306=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "13op.c", 58, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                    come_call_finalizer3(type2_373,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_before_374,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_375 = come_decrement_ref_count2(name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(no_solved_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                    none_generics_name_358 = come_decrement_ref_count2(none_generics_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_360 = come_decrement_ref_count2(fun_name3_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(generics_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_356 = come_decrement_ref_count2(fun_name2_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value306,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, (void*)0);
                    return __result258__;
                }
                operator_fun_355=((struct sFun*)((void*)(__right_value307=map$2voidphvoidphp_operator_load_element(info->funcs,name_375))));
                come_call_finalizer3(__right_value307,(void*)0, 0, 1, 0, 0, (void*)0);
                __dec_obj85=fun_name2_356;
                fun_name2_356=(char*)come_increment_ref_count(name_375);
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                type=type_before_374;
                come_call_finalizer3(type2_373,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_374,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_375 = come_decrement_ref_count2(name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var2=((struct tuple2$2charphbool*)(__right_value309=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_356)),generics_fun_357,obj_type_359,info)));
                name_382=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                err_383=multiple_assign_var2->v2;
                come_call_finalizer3(__right_value309,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_383) {
                    __result263__ = (_Bool)0;
                    name_382 = come_decrement_ref_count2(name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(no_solved_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                    none_generics_name_358 = come_decrement_ref_count2(none_generics_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_360 = come_decrement_ref_count2(fun_name3_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(generics_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_356 = come_decrement_ref_count2(fun_name2_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result263__;
                }
                operator_fun_355=((struct sFun*)((void*)(__right_value310=map$2voidphvoidphp_operator_load_element(info->funcs,name_382))));
                come_call_finalizer3(__right_value310,(void*)0, 0, 1, 0, 0, (void*)0);
                name_382 = come_decrement_ref_count2(name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(no_solved_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value311=create_equals_automatically(obj_type_359,"equals",info)));
                fun_384=multiple_assign_var3->v1;
                fun_name_385=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(__right_value311,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value312=create_operator_equals_automatically(obj_type_359,"operator_equals",info)));
                fun2_386=multiple_assign_var4->v1;
                fun_name2_387=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value312,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_355=fun2_386;
                fun_name_385 = come_decrement_ref_count2(fun_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_387 = come_decrement_ref_count2(fun_name2_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value313=create_not_equals_automatically(obj_type_359,"not_equals",info)));
                fun_388=multiple_assign_var5->v1;
                fun_name_389=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value313,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value314=create_operator_not_equals_automatically(obj_type_359,"operator_not_equals",info)));
                fun2_390=multiple_assign_var6->v1;
                fun_name2_391=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                come_call_finalizer3(__right_value314,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_355=fun2_390;
                fun_name_389 = come_decrement_ref_count2(fun_name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_391 = come_decrement_ref_count2(fun_name2_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                operator_fun_355=((struct sFun*)((void*)(__right_value315=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_356))));
                come_call_finalizer3(__right_value315,(void*)0, 0, 1, 0, 0, (void*)0);
            }
        }
        none_generics_name_358 = come_decrement_ref_count2(none_generics_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_360 = come_decrement_ref_count2(fun_name3_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj87=fun_name2_356;
        fun_name2_356=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_392=128-1;        i_392>=1;        i_392--        ){
            new_fun_name_393=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_356,i_392));
            operator_fun_355=((struct sFun*)((void*)(__right_value318=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_393))));
            come_call_finalizer3(__right_value318,(void*)0, 0, 1, 0, 0, (void*)0);
            if(            operator_fun_355) {
                __dec_obj88=fun_name2_356;
                fun_name2_356=(char*)come_increment_ref_count(__builtin_string(new_fun_name_393));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_393 = come_decrement_ref_count2(new_fun_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_393 = come_decrement_ref_count2(new_fun_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_355==((void*)0)) {
            operator_fun_355=((struct sFun*)((void*)(__right_value320=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_356))));
            come_call_finalizer3(__right_value320,(void*)0, 0, 1, 0, 0, (void*)0);
            obj_type_394=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
            if(            operator_fun_355==((void*)0)) {
                if(                charp_operator_equals(fun_name,"operator_equals")) {
                    multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value322=create_equals_automatically(obj_type_394,"equals",info)));
                    fun_395=multiple_assign_var7->v1;
                    fun_name_396=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    come_call_finalizer3(__right_value322,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value323=create_operator_equals_automatically(obj_type_394,"operator_equals",info)));
                    fun2_397=multiple_assign_var8->v1;
                    fun_name2_398=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    come_call_finalizer3(__right_value323,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_355=fun2_397;
                    fun_name_396 = come_decrement_ref_count2(fun_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_398 = come_decrement_ref_count2(fun_name2_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var9=((struct tuple2$2sFunpcharph*)(__right_value324=create_not_equals_automatically(obj_type_394,"not_equals",info)));
                    fun_399=multiple_assign_var9->v1;
                    fun_name_400=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    come_call_finalizer3(__right_value324,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value325=create_operator_not_equals_automatically(obj_type_394,"operator_not_equals",info)));
                    fun2_401=multiple_assign_var10->v1;
                    fun_name2_402=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    come_call_finalizer3(__right_value325,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_355=fun2_401;
                    fun_name_400 = come_decrement_ref_count2(fun_name_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_402 = come_decrement_ref_count2(fun_name2_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(obj_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    result_403=(_Bool)0;
    if(    operator_fun_355&&(list$1voidphp_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 134, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        check_assign_type(((char*)(__right_value329=xsprintf("\%s is assigned to",((char*)(__right_value328=string_to_string(fun_name2_356)))))),((struct sType*)((void*)(__right_value330=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,0)))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value330,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional1=(((struct sType*)((void*)(__right_value331=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,0))))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value331,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            std_move(((struct sType*)((void*)(__right_value332=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,0)))),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value332,(void*)0, 0, 1, 0, 0, (void*)0);
            __dec_obj89=left_value2_405;
            left_value2_405=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj90=left_value2_405;
            left_value2_405=(char*)come_increment_ref_count(come_call_cloner(string_clone, left_value->c_value));
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value336=xsprintf("\%s is assigned to",((char*)(__right_value335=string_to_string(fun_name2_356)))))),((struct sType*)((void*)(__right_value337=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,1)))),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value337,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)((void*)(__right_value338=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,1))))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value338,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)((void*)(__right_value339=list$1voidphp_operator_load_element(operator_fun_355->mParamTypes,1)))),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value339,(void*)0, 0, 1, 0, 0, (void*)0);
            __dec_obj91=right_value2_409;
            right_value2_409=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj92=right_value2_409;
            right_value2_409=(char*)come_increment_ref_count(come_call_cloner(string_clone, right_value->c_value));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type2_410=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_355->mResultType));
        type3_411=(struct sType*)come_increment_ref_count(solve_generics(type2_410,generics_type_317,info));
        __dec_obj93=come_value_404->c_value;
        come_value_404->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s)",((char*)(__right_value344=string_to_string(fun_name2_356))),((char*)(__right_value345=string_to_string(left_value2_405))),((char*)(__right_value346=string_to_string(right_value2_409)))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_412=(struct sType*)come_increment_ref_count(type2_410);
        obj_type_413=(struct sType*)come_increment_ref_count(generics_type_317);
        come_value_404->var=((void*)0);
        if(        result_type_412->mAnyOriginalType&&generics_fun_357) {
            __dec_obj94=type3_411;
            type3_411=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_357->mResultType,obj_type_413,info));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj95=come_value_404->type;
            come_value_404->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_411));
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_404->type->mStatic=(_Bool)0;
        }
        else {
            __dec_obj96=come_value_404->type;
            come_value_404->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_411));
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        type3_411->mHeap) {
            append_object_to_right_values2(come_value_404,(struct sType*)come_increment_ref_count(type3_411),info,(_Bool)0);
        }
        __dec_obj97=come_value_404->c_value;
        come_value_404->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_404->c_value,come_value_404->type,info));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_404->c_value);
        __dec_obj98=come_value_404;
        come_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_404),info));
        come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_404));
        result_403=(_Bool)1;
        come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_405 = come_decrement_ref_count2(left_value2_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_409 = come_decrement_ref_count2(right_value2_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_411,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result267__ = result_403;
    come_call_finalizer3(generics_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_356 = come_decrement_ref_count2(fun_name2_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result267__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result230__;
void* __right_value252 = (void*)0;
struct sType* result_335;
void* __right_value253 = (void*)0;
struct sType* __dec_obj50;
void* __right_value254 = (void*)0;
struct sType* __dec_obj51;
void* __right_value255 = (void*)0;
struct sType* __dec_obj52;
void* __right_value256 = (void*)0;
char* __dec_obj53;
void* __right_value257 = (void*)0;
char* __dec_obj54;
void* __right_value264 = (void*)0;
struct list$1voidph* __dec_obj58;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj62;
void* __right_value273 = (void*)0;
struct list$1voidph* __dec_obj63;
void* __right_value280 = (void*)0;
struct list$1charph* __dec_obj67;
void* __right_value281 = (void*)0;
struct sType* __dec_obj68;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj69;
void* __right_value283 = (void*)0;
struct sType* __dec_obj70;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value285 = (void*)0;
char* __dec_obj72;
void* __right_value286 = (void*)0;
char* __dec_obj73;
void* __right_value287 = (void*)0;
char* __dec_obj74;
void* __right_value288 = (void*)0;
char* __dec_obj75;
struct sType* __result244__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_335=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_335->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj50=result_335->mNoSolvedGenericsType;
        result_335->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj51=result_335->mOriginalLoadVarType;
        result_335->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj52=result_335->mAnyOriginalType;
        result_335->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj53=result_335->mInterfaceName;
        result_335->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj54=result_335->mGenericsName;
        result_335->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj58=result_335->mGenericsTypes;
        result_335->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj58,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj62=result_335->mArrayNum;
        result_335->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj62,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj63=result_335->mParamTypes;
        result_335->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj63,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj67=result_335->mParamNames;
        result_335->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj67,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj68=result_335->mResultType;
        result_335->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj69=result_335->mAlignas;
        result_335->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj70=result_335->mChannelType;
        result_335->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_335->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_335->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_335->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_335->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_335->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_335->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_335->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_335->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_335->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_335->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_335->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_335->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_335->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_335->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_335->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_335->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_335->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj71=result_335->mSizeNum;
        result_335->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_335->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj72=result_335->mOriginalTypeName;
        result_335->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_335->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_335->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_335->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_335->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_335->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_335->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj73=result_335->mAsmName;
        result_335->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_335->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj74=result_335->mTupleName;
        result_335->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj75=result_335->mAttribute;
        result_335->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_335->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_335->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_335->mDynamic=self->mDynamic;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_335;
    come_call_finalizer3(result_335,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj31;
struct sType* __dec_obj32;
struct sType* __dec_obj33;
char* __dec_obj34;
char* __dec_obj35;
struct list$1voidph* __dec_obj36;
struct list$1sNodeph* __dec_obj38;
struct list$1voidph* __dec_obj40;
struct list$1charph* __dec_obj41;
struct sType* __dec_obj42;
struct sNode* __dec_obj43;
struct sType* __dec_obj44;
struct sNode* __dec_obj45;
char* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj31=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj31,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj32=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj33=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj34=self->mInterfaceName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj35=self->mGenericsName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj36=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj36,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj38=self->mArrayNum;
            come_call_finalizer3(__dec_obj38,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj40=self->mParamTypes;
            come_call_finalizer3(__dec_obj40,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj41=self->mParamNames;
            come_call_finalizer3(__dec_obj41,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj42=self->mResultType;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj43=self->mAlignas;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj44=self->mChannelType;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj45=self->mSizeNum;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj46=self->mOriginalTypeName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj47=self->mAsmName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj48=self->mTupleName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj49=self->mAttribute;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_318;
struct list_item$1voidph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        come_call_finalizer3(prev_it_319,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj37;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj37=self->item;
            come_call_finalizer3(__dec_obj37,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_320;
struct list_item$1voidph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        come_call_finalizer3(prev_it_321,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_322;
struct list_item$1sNodeph* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        come_call_finalizer3(prev_it_323,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_324;
struct list_item$1sNodeph* prev_it_325;
    it_324=self->head;
    while(it_324!=((void*)0)) {
        prev_it_325=it_324;
        it_324=it_324->next;
        come_call_finalizer3(prev_it_325,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_326;
struct list_item$1charph* prev_it_327;
    it_326=self->head;
    while(it_326!=((void*)0)) {
        prev_it_327=it_326;
        it_326=it_326->next;
        come_call_finalizer3(prev_it_327,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_328;
    result_328=0;
    result_328+=int_get_hash_key(((int)self->mClass));
    result_328+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_328+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_328+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_328+=int_get_hash_key(((int)self->mAnyClass));
    result_328+=int_get_hash_key(((int)self->mInterfaceName));
    result_328+=int_get_hash_key(((int)self->mGenericsName));
    result_328+=int_get_hash_key(((int)self->mGenericsTypes));
    result_328+=int_get_hash_key(((int)self->mArrayNum));
    result_328+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_328+=int_get_hash_key(((int)self->mParamTypes));
    result_328+=int_get_hash_key(((int)self->mParamNames));
    result_328+=int_get_hash_key(((int)self->mResultType));
    result_328+=int_get_hash_key(((int)self->mVarArgs));
    result_328+=int_get_hash_key(((int)self->mAlignas));
    result_328+=int_get_hash_key(((int)self->mChannelType));
    result_328+=int_get_hash_key(((int)self->mUnsigned));
    result_328+=int_get_hash_key(((int)self->mShort));
    result_328+=int_get_hash_key(((int)self->mLong));
    result_328+=int_get_hash_key(((int)self->mLongLong));
    result_328+=int_get_hash_key(((int)self->mConstant));
    result_328+=int_get_hash_key(((int)self->mAtomic));
    result_328+=int_get_hash_key(((int)self->mRegister));
    result_328+=int_get_hash_key(((int)self->mVolatile));
    result_328+=int_get_hash_key(((int)self->mStatic));
    result_328+=int_get_hash_key(((int)self->mUniq));
    result_328+=int_get_hash_key(((int)self->mRecord));
    result_328+=int_get_hash_key(((int)self->mExtern));
    result_328+=int_get_hash_key(((int)self->mRestrict));
    result_328+=int_get_hash_key(((int)self->mImmutable));
    result_328+=int_get_hash_key(((int)self->mHeap));
    result_328+=int_get_hash_key(((int)self->mChannel));
    result_328+=int_get_hash_key(((int)self->mNoHeap));
    result_328+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_328+=int_get_hash_key(((int)self->mException));
    result_328+=int_get_hash_key(((int)self->mPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_328+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_328+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mSizeNum));
    result_328+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_328+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mFunctionParam));
    result_328+=int_get_hash_key(((int)self->mAllocaValue));
    result_328+=int_get_hash_key(((int)self->mGenericsStruct));
    result_328+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_328+=int_get_hash_key(((int)self->mInline));
    result_328+=int_get_hash_key(((int)self->mNullValue));
    result_328+=int_get_hash_key(((int)self->mGuardValue));
    result_328+=int_get_hash_key(((int)self->mAsmName));
    result_328+=int_get_hash_key(((int)self->mArrayPointerType));
    result_328+=int_get_hash_key(((int)self->mLambdaArray));
    result_328+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_328+=int_get_hash_key(((int)self->mTypedef));
    result_328+=int_get_hash_key(((int)self->mMultipleTypes));
    result_328+=int_get_hash_key(((int)self->mOriginIsArray));
    result_328+=int_get_hash_key(((int)self->mTupleName));
    result_328+=int_get_hash_key(((int)self->mAttribute));
    result_328+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_328+=int_get_hash_key(((int)self->mGenerate));
    result_328+=int_get_hash_key(((int)self->mCreateVTable));
    result_328+=int_get_hash_key(((int)self->mDynamic));
    return result_328;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mInterfaceName,right->mInterfaceName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
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
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
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
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
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
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mFields,right->mFields)) {
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
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_329;
struct list_item$1voidph* it2_330;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_329=left->head;
    it2_330=right->head;
    while(it_329!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_329->item, it2_330->item)) {
            return (_Bool)0;
        }
        it_329=it_329->next;
        it2_330=it2_330->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_331;
struct list_item$1sNodeph* it2_332;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_331=left->head;
    it2_332=right->head;
    while(it_331!=((void*)0)) {
        if(        !sNode_equals(it_331->item,it2_332->item)) {
            return (_Bool)0;
        }
        it_331=it_331->next;
        it2_332=it2_332->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_333;
struct list_item$1charph* it2_334;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_333=left->head;
    it2_334=right->head;
    while(it_333!=((void*)0)) {
        if(        !string_equals(it_333->item,it2_334->item)) {
            return (_Bool)0;
        }
        it_333=it_333->next;
        it2_334=it2_334->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result231__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1voidph* result_337;
struct list_item$1voidph* it_338;
void* __right_value263 = (void*)0;
struct list$1voidph* __result234__;
    if(    self==((void*)0)) {
        __result231__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_337=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_338=self->head;
    while(it_338!=((void*)0)) {
        list$1voidphp_add(result_337,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_338->item)));
        it_338=it_338->next;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer3(result_337,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_336;
    result_336=0;
    result_336+=int_get_hash_key(((int)self->head));
    result_336+=int_get_hash_key(((int)self->tail));
    result_336+=int_get_hash_key(((int)self->len));
    result_336+=int_get_hash_key(((int)self->it));
    return result_336;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result232__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1voidph* litem_339;
void* __dec_obj55;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj56;
void* __right_value262 = (void*)0;
struct list_item$1voidph* litem_341;
void* __dec_obj57;
struct list$1voidph* __result233__;
    if(    self->len==0) {
        litem_339=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value260=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_339->prev=((void*)0);
        litem_339->next=((void*)0);
        __dec_obj55=litem_339->item;
        litem_339->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_339;
        self->head=litem_339;
    }
    else if(    self->len==1) {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=self->head;
        litem_340->next=((void*)0);
        __dec_obj56=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_340;
        self->head->next=litem_340;
    }
    else {
        litem_341=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value262=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->tail;
        litem_341->next=((void*)0);
        __dec_obj57=litem_341->item;
        litem_341->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_341;
        self->tail=litem_341;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result235__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNodeph* result_342;
struct list_item$1sNodeph* it_343;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __result240__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_342=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_343=self->head;
    while(it_343!=((void*)0)) {
        list$1sNodephp_add(result_342,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_343->item)));
        it_343=it_343->next;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_342;
    come_call_finalizer3(result_342,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result236__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_344;
struct sNode* __dec_obj59;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj60;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj61;
struct list$1sNodeph* __result237__;
    if(    self->len==0) {
        litem_344=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj59=litem_344->item;
        litem_344->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj60=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj61=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result238__;
void* __right_value270 = (void*)0;
struct sNode* result_347;
struct sNode* __result239__;
    if(    self==(void*)0) {
        __result238__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_347=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_347->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_347->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_347->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_347->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_347->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_347->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_347->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_347->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_347->kind=self->kind;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_347;
    come_call_finalizer2((void*)0, result_347, result_347 ? ((struct sNode*)result_347)->finalize:(void*)0, result_347 ? ((struct sNode*)result_347)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result241__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* result_348;
struct list_item$1charph* it_349;
void* __right_value279 = (void*)0;
struct list$1charph* __result243__;
    if(    self==((void*)0)) {
        __result241__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_348=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_349=self->head;
    while(it_349!=((void*)0)) {
        list$1charphp_add(result_348,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_349->item)));
        it_349=it_349->next;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_348;
    come_call_finalizer3(result_348,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_350;
char* __dec_obj64;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj65;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_352;
char* __dec_obj66;
struct list$1charph* __result242__;
    if(    self->len==0) {
        litem_350=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_350->prev=((void*)0);
        litem_350->next=((void*)0);
        __dec_obj64=litem_350->item;
        litem_350->item=(char*)come_increment_ref_count(item);
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_350;
        self->head=litem_350;
    }
    else if(    self->len==1) {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=self->head;
        litem_351->next=((void*)0);
        __dec_obj65=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_351;
        self->head->next=litem_351;
    }
    else {
        litem_352=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=self->tail;
        litem_352->next=((void*)0);
        __dec_obj66=litem_352->item;
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_352;
        self->tail=litem_352;
    }
    self->len++;
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_361;
unsigned int it_362;
void* __result245__;
void* __result246__;
void* __result247__;
void* __result248__;
    hash_361=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_362=hash_361;
    while((_Bool)1) {
        if(        self->item_existance[it_362]) {
            if(            come_call_equals((void*)0, self->keys[it_362], key)) {
                __result245__ = gComeFunResultObject = __result_obj__ = self->items[it_362];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result245__;
            }
            it_362++;
            if(            it_362>=self->size) {
                it_362=0;
            }
            else if(            it_362==hash_361) {
                __result246__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result246__;
            }
        }
        else {
            __result247__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result247__;
        }
    }
    __result248__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_366;
void* __result249__;
void* __result250__;
void* result_367;
void* __result251__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_366,0,sizeof(void*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->it=self->head;
    if(    self->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_367,0,sizeof(void*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_369;
void* __result252__;
void* __result253__;
void* result_370;
void* __result254__;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_369,0,sizeof(void*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_369;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_370,0,sizeof(void*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj80;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj80=self->v1;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj81;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj81=self->v1;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphvoidp* __result255__;
void* __right_value303 = (void*)0;
struct tuple2$2charphvoidp* result_378;
void* __right_value304 = (void*)0;
char* __dec_obj82;
struct tuple2$2charphvoidp* __result256__;
    if(    self==(void*)0) {
        __result255__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    result_378=(struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "tuple2$2charphvoidp_clone", 3, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj82=result_378->v1;
        result_378->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_378->v2=self->v2;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_378;
    come_call_finalizer3(result_378,tuple2$2charphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self){
unsigned int result_377;
    result_377=0;
    result_377+=int_get_hash_key(((int)self->v1));
    result_377+=int_get_hash_key(((int)self->v2));
    return result_377;
}

static _Bool tuple2$2charphvoidp_equals(struct tuple2$2charphvoidp* left, struct tuple2$2charphvoidp* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj83;
struct tuple2$2charphvoidp* __result257__;
    __dec_obj83=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj84;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj84=self->v1;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_379;
unsigned int hash_380;
unsigned int it_381;
void* __result259__;
void* __result260__;
void* __result261__;
void* __result262__;
default_value_379 = (void*)0;
    memset(&default_value_379,0,sizeof(void*));
    hash_380=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_381=hash_380;
    while((_Bool)1) {
        if(        self->item_existance[it_381]) {
            if(            come_call_equals((void*)0, self->keys[it_381], ((char*)key))) {
                __result259__ = gComeFunResultObject = __result_obj__ = self->items[it_381];
                come_call_finalizer3(default_value_379, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
            it_381++;
            if(            it_381>=self->size) {
                it_381=0;
            }
            else if(            it_381==hash_380) {
                __result260__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_379);
                come_call_finalizer3(default_value_379, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
        }
        else {
            __result261__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_379);
            come_call_finalizer3(default_value_379, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result261__;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_379);
    come_call_finalizer3(default_value_379, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj86;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj86=self->v2;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_406;
int i_407;
void* __result264__;
void* default_value_408;
void* __result265__;
default_value_408 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_406=self->head;
    i_407=0;
    while(it_406!=((void*)0)) {
        if(        position==i_407) {
            __result264__ = gComeFunResultObject = __result_obj__ = it_406->item;
            gComeFunResultObject = (void*)0;
            return __result264__;
        }
        it_406=it_406->next;
        i_407++;
    }
    memset(&default_value_408,0,sizeof(void*));
    __result265__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_408);
    come_call_finalizer3(default_value_408, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj99;
struct sType* __dec_obj100;
char* __dec_obj101;
char* __dec_obj102;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj99=self->c_value;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj100=self->type;
            come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj101=self->c_value_without_right_value_objects;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj102=self->c_value_without_cast_object_value;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
struct list_item$1CVALUEph* litem_414;
struct CVALUE* __dec_obj103;
void* __right_value354 = (void*)0;
struct list_item$1CVALUEph* litem_415;
struct CVALUE* __dec_obj104;
void* __right_value355 = (void*)0;
struct list_item$1CVALUEph* litem_416;
struct CVALUE* __dec_obj105;
struct list$1CVALUEph* __result266__;
    if(    self->len==0) {
        litem_414=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value353=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=((void*)0);
        litem_414->next=((void*)0);
        __dec_obj103=litem_414->item;
        litem_414->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_414;
        self->head=litem_414;
    }
    else if(    self->len==1) {
        litem_415=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value354=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=self->head;
        litem_415->next=((void*)0);
        __dec_obj104=litem_415->item;
        litem_415->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_415;
        self->head->next=litem_415;
    }
    else {
        litem_416=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value355=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_416->prev=self->tail;
        litem_416->next=((void*)0);
        __dec_obj105=litem_416->item;
        litem_416->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_416;
        self->tail=litem_416;
    }
    self->len++;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
struct sNullNode* __result268__;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value356,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result269__;
    __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sNullNode")));
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value360 = (void*)0;
char* __dec_obj108;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj109;
_Bool __result270__;
    come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 212, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj108=come_value_417->c_value;
    come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj109=come_value_417->type;
    come_value_417->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 215, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_417->var=((void*)0);
    add_come_last_code(info,"%s",come_value_417->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
    __result270__ = (_Bool)1;
    come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result270__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj106;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj106=self->sname;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sNullNode_finalize(struct sNullNode* self){
char* __dec_obj107;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj107=self->sname;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sNode* __result273__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 228, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value364=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 228, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result273__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value367=_inf_value1));
    come_call_finalizer3(__right_value364,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value367) { __right_value367 = come_decrement_ref_count2(__right_value367, ((struct sNode*)__right_value367)->finalize, ((struct sNode*)__right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__=(void*)0;
struct sNullNode* __result271__;
void* __right_value365 = (void*)0;
struct sNullNode* result_419;
void* __right_value366 = (void*)0;
char* __dec_obj110;
struct sNullNode* __result272__;
    if(    self==(void*)0) {
        __result271__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    result_419=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode", sNullNode_finalize, sNullNode_clone, sNullNode_get_hash_key, sNullNode_equals));
    if(    self!=((void*)0)) {
        result_419->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj110=result_419->sname;
        result_419->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->sline_real=self->sline_real;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_419;
    come_call_finalizer3(result_419,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static unsigned int sNullNode_get_hash_key(struct sNullNode* self){
unsigned int result_418;
    result_418=0;
    result_418+=int_get_hash_key(((int)self->sline));
    result_418+=int_get_hash_key(((int)self->sname));
    result_418+=int_get_hash_key(((int)self->sline_real));
    return result_418;
}

static _Bool sNullNode_equals(struct sNullNode* left, struct sNullNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
struct sNilNode* __result274__;
    ((struct sNodeBase*)(__right_value368=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value368,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
char* __result275__;
    __result275__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value369=__builtin_string("sNilNode")));
    __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_420;
void* __right_value372 = (void*)0;
char* __dec_obj112;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* __dec_obj113;
_Bool __result276__;
    come_value_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 245, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj112=come_value_420->c_value;
    come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=come_value_420->type;
    come_value_420->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 248, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_420->type->mNullValue=(_Bool)1;
    come_value_420->var=((void*)0);
    add_come_last_code(info,"%s",come_value_420->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_420));
    __result276__ = (_Bool)1;
    come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result276__;
}

static void sNilNode_finalize(struct sNilNode* self){
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

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* __dec_obj114;
void* __right_value377 = (void*)0;
struct sNode* __dec_obj115;
struct sAddNode* __result277__;
    ((struct sNodeBase*)(__right_value375=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value375,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj114=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj115=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result277__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
char* __result278__;
    __result278__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value378=__builtin_string("sAddNode")));
    __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_421;
_Bool Value_422;
void* __right_value379 = (void*)0;
struct CVALUE* left_value_423;
struct sNode* right_node_424;
_Bool Value_425;
_Bool __result279__;
void* __right_value380 = (void*)0;
struct CVALUE* right_value_426;
struct sType* type_427;
char* fun_name_428;
_Bool calling_fun_429;
void* __right_value381 = (void*)0;
struct sType* result_type_430;
void* __right_value382 = (void*)0;
struct sType* __dec_obj119;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value385 = (void*)0;
char* __dec_obj120;
void* __right_value386 = (void*)0;
struct sType* __dec_obj121;
_Bool __result280__;
memset(&calling_fun_429, 0, sizeof(_Bool));
    left_node_421=self->mLeft;
    Value_422=node_compile(left_node_421,info);
    if(    !Value_422) {
        return (_Bool)0;
    }
    else {
    }
    left_value_423=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_424=self->mRight;
    Value_425=node_compile(right_node_424,info);
    if(    !Value_425) {
        __result279__ = (_Bool)0;
        come_call_finalizer3(left_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result279__;
    }
    else {
    }
    right_value_426=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_427=(struct sType*)come_increment_ref_count(left_value_423->type);
    fun_name_428="operator_add";
    if(    self->mQuote) {
        calling_fun_429=(_Bool)0;
    }
    else {
        calling_fun_429=operator_overload_fun(type_427,fun_name_428,left_value_423,right_value_426,(_Bool)0,info);
    }
    if(    !calling_fun_429) {
        result_type_430=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_423->type));
        if(        right_value_426->type->mPointerNum>0) {
            __dec_obj119=result_type_430;
            result_type_430=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_426->type));
            come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_431=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 314, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj120=come_value_431->c_value;
        come_value_431->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_423->c_value,right_value_426->c_value));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj121=come_value_431->type;
        come_value_431->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_430));
        come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_431->type->mHeap=(_Bool)0;
        come_value_431->var=((void*)0);
        add_come_last_code(info,"%s",come_value_431->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_431));
        come_call_finalizer3(result_type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result280__ = (_Bool)1;
    come_call_finalizer3(left_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

static void sAddNode_finalize(struct sAddNode* self){
char* __dec_obj116;
struct sNode* __dec_obj117;
struct sNode* __dec_obj118;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj116=self->sname;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj117=self->mLeft;
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj118=self->mRight;
            if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj122;
void* __right_value389 = (void*)0;
struct sNode* __dec_obj123;
struct sSubNode* __result281__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj122=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj123=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value390=__builtin_string("sSubNode")));
    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_432;
_Bool Value_433;
void* __right_value391 = (void*)0;
struct CVALUE* left_value_434;
struct sNode* right_node_435;
_Bool Value_436;
_Bool __result283__;
void* __right_value392 = (void*)0;
struct CVALUE* right_value_437;
struct sType* type_438;
char* fun_name_439;
_Bool calling_fun_440;
void* __right_value393 = (void*)0;
struct sType* result_type_441;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sType* __dec_obj127;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value398 = (void*)0;
char* __dec_obj128;
void* __right_value399 = (void*)0;
struct sType* __dec_obj129;
_Bool __result284__;
memset(&calling_fun_440, 0, sizeof(_Bool));
    left_node_432=self->mLeft;
    Value_433=node_compile(left_node_432,info);
    if(    !Value_433) {
        return (_Bool)0;
    }
    else {
    }
    left_value_434=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_435=self->mRight;
    Value_436=node_compile(right_node_435,info);
    if(    !Value_436) {
        __result283__ = (_Bool)0;
        come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result283__;
    }
    else {
    }
    right_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_438=(struct sType*)come_increment_ref_count(left_value_434->type);
    fun_name_439="operator_sub";
    if(    self->mQuote) {
        calling_fun_440=(_Bool)0;
    }
    else {
        calling_fun_440=operator_overload_fun(type_438,fun_name_439,left_value_434,right_value_437,(_Bool)0,info);
    }
    if(    !calling_fun_440) {
        result_type_441=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_434->type));
        if(        left_value_434->type->mPointerNum>0&&right_value_437->type->mPointerNum>0) {
            __dec_obj127=result_type_441;
            result_type_441=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 381, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 384, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj128=come_value_442->c_value;
        come_value_442->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_434->c_value,right_value_437->c_value));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj129=come_value_442->type;
        come_value_442->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_441));
        come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_442->type->mHeap=(_Bool)0;
        come_value_442->var=((void*)0);
        add_come_last_code(info,"%s",come_value_442->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_442));
        come_call_finalizer3(result_type_441,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result284__ = (_Bool)1;
    come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result284__;
}

static void sSubNode_finalize(struct sSubNode* self){
char* __dec_obj124;
struct sNode* __dec_obj125;
struct sNode* __dec_obj126;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj124=self->sname;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj125=self->mLeft;
            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj126=self->mRight;
            if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj130;
void* __right_value402 = (void*)0;
struct sNode* __dec_obj131;
struct sMultNode* __result285__;
    ((struct sNodeBase*)(__right_value400=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value400,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj130=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj131=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result285__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
char* __result286__;
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value403=__builtin_string("sMultNode")));
    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_443;
_Bool Value_444;
void* __right_value404 = (void*)0;
struct CVALUE* left_value_445;
struct sNode* right_node_446;
_Bool Value_447;
_Bool __result287__;
void* __right_value405 = (void*)0;
struct CVALUE* right_value_448;
struct sType* type_449;
char* fun_name_450;
_Bool calling_fun_451;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct CVALUE* come_value_452;
void* __right_value408 = (void*)0;
char* __dec_obj135;
void* __right_value409 = (void*)0;
struct sType* __dec_obj136;
_Bool __result288__;
memset(&calling_fun_451, 0, sizeof(_Bool));
    left_node_443=self->mLeft;
    Value_444=node_compile(left_node_443,info);
    if(    !Value_444) {
        return (_Bool)0;
    }
    else {
    }
    left_value_445=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_446=self->mRight;
    Value_447=node_compile(right_node_446,info);
    if(    !Value_447) {
        __result287__ = (_Bool)0;
        come_call_finalizer3(left_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result287__;
    }
    else {
    }
    right_value_448=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_449=(struct sType*)come_increment_ref_count(left_value_445->type);
    fun_name_450="operator_mult";
    if(    self->mQuote) {
        calling_fun_451=(_Bool)0;
    }
    else {
        calling_fun_451=operator_overload_fun(type_449,fun_name_450,left_value_445,right_value_448,(_Bool)0,info);
    }
    if(    !calling_fun_451) {
        come_value_452=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 449, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj135=come_value_452->c_value;
        come_value_452->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_445->c_value,right_value_448->c_value));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj136=come_value_452->type;
        come_value_452->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_445->type));
        come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_452->type->mHeap=(_Bool)0;
        come_value_452->var=((void*)0);
        add_come_last_code(info,"%s",come_value_452->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_452));
        come_call_finalizer3(come_value_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result288__ = (_Bool)1;
    come_call_finalizer3(left_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result288__;
}

static void sMultNode_finalize(struct sMultNode* self){
char* __dec_obj132;
struct sNode* __dec_obj133;
struct sNode* __dec_obj134;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj132=self->sname;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj133=self->mLeft;
            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj134=self->mRight;
            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj137;
void* __right_value412 = (void*)0;
struct sNode* __dec_obj138;
struct sDivNode* __result289__;
    ((struct sNodeBase*)(__right_value410=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value410,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj137=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj138=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__=(void*)0;
void* __right_value413 = (void*)0;
char* __result290__;
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value413=__builtin_string("sDivNode")));
    __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_453;
_Bool Value_454;
void* __right_value414 = (void*)0;
struct CVALUE* left_value_455;
struct sNode* right_node_456;
_Bool Value_457;
_Bool __result291__;
void* __right_value415 = (void*)0;
struct CVALUE* right_value_458;
struct sType* type_459;
char* fun_name_460;
_Bool calling_fun_461;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct CVALUE* come_value_462;
void* __right_value418 = (void*)0;
char* __dec_obj142;
void* __right_value419 = (void*)0;
struct sType* __dec_obj143;
_Bool __result292__;
memset(&calling_fun_461, 0, sizeof(_Bool));
    left_node_453=self->mLeft;
    Value_454=node_compile(left_node_453,info);
    if(    !Value_454) {
        return (_Bool)0;
    }
    else {
    }
    left_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_456=self->mRight;
    Value_457=node_compile(right_node_456,info);
    if(    !Value_457) {
        __result291__ = (_Bool)0;
        come_call_finalizer3(left_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result291__;
    }
    else {
    }
    right_value_458=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_459=(struct sType*)come_increment_ref_count(left_value_455->type);
    fun_name_460="operator_div";
    if(    self->mQuote) {
        calling_fun_461=(_Bool)0;
    }
    else {
        calling_fun_461=operator_overload_fun(type_459,fun_name_460,left_value_455,right_value_458,(_Bool)0,info);
    }
    if(    !calling_fun_461) {
        come_value_462=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 514, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj142=come_value_462->c_value;
        come_value_462->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_455->c_value,right_value_458->c_value));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj143=come_value_462->type;
        come_value_462->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_455->type));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_462->type->mHeap=(_Bool)0;
        come_value_462->var=((void*)0);
        add_come_last_code(info,"%s",come_value_462->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_462));
        come_call_finalizer3(come_value_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result292__ = (_Bool)1;
    come_call_finalizer3(left_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

static void sDivNode_finalize(struct sDivNode* self){
char* __dec_obj139;
struct sNode* __dec_obj140;
struct sNode* __dec_obj141;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj139=self->sname;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj140=self->mLeft;
            if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj141=self->mRight;
            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj144;
void* __right_value422 = (void*)0;
struct sNode* __dec_obj145;
struct sModNode* __result293__;
    ((struct sNodeBase*)(__right_value420=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value420,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj144=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj145=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__=(void*)0;
void* __right_value423 = (void*)0;
char* __result294__;
    __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value423=__builtin_string("sModNode")));
    __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_463;
_Bool Value_464;
void* __right_value424 = (void*)0;
struct CVALUE* left_value_465;
struct sNode* right_node_466;
_Bool Value_467;
_Bool __result295__;
void* __right_value425 = (void*)0;
struct CVALUE* right_value_468;
struct sType* type_469;
char* fun_name_470;
_Bool calling_fun_471;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct CVALUE* come_value_472;
void* __right_value428 = (void*)0;
char* __dec_obj149;
void* __right_value429 = (void*)0;
struct sType* __dec_obj150;
_Bool __result296__;
memset(&calling_fun_471, 0, sizeof(_Bool));
    left_node_463=self->mLeft;
    Value_464=node_compile(left_node_463,info);
    if(    !Value_464) {
        return (_Bool)0;
    }
    else {
    }
    left_value_465=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_466=self->mRight;
    Value_467=node_compile(right_node_466,info);
    if(    !Value_467) {
        __result295__ = (_Bool)0;
        come_call_finalizer3(left_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result295__;
    }
    else {
    }
    right_value_468=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_469=(struct sType*)come_increment_ref_count(left_value_465->type);
    fun_name_470="operator_mod";
    if(    self->mQuote) {
        calling_fun_471=(_Bool)0;
    }
    else {
        calling_fun_471=operator_overload_fun(type_469,fun_name_470,left_value_465,right_value_468,(_Bool)0,info);
    }
    if(    !calling_fun_471) {
        come_value_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 579, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj149=come_value_472->c_value;
        come_value_472->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_465->c_value,right_value_468->c_value));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj150=come_value_472->type;
        come_value_472->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_465->type));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_472->type->mHeap=(_Bool)0;
        come_value_472->var=((void*)0);
        add_come_last_code(info,"%s",come_value_472->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
        come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result296__ = (_Bool)1;
    come_call_finalizer3(left_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
}

static void sModNode_finalize(struct sModNode* self){
char* __dec_obj146;
struct sNode* __dec_obj147;
struct sNode* __dec_obj148;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj146=self->sname;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj147=self->mLeft;
            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj148=self->mRight;
            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj151;
void* __right_value432 = (void*)0;
struct sNode* __dec_obj152;
struct sLShiftNode* __result297__;
    ((struct sNodeBase*)(__right_value430=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value430,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj151=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj152=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
char* __result298__;
    __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value433=__builtin_string("sLShiftNode")));
    __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_473;
_Bool Value_474;
void* __right_value434 = (void*)0;
struct CVALUE* left_value_475;
struct sNode* right_node_476;
_Bool Value_477;
_Bool __result299__;
void* __right_value435 = (void*)0;
struct CVALUE* right_value_478;
struct sType* type_479;
char* fun_name_480;
_Bool calling_fun_481;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* come_value_482;
void* __right_value438 = (void*)0;
char* __dec_obj156;
void* __right_value439 = (void*)0;
struct sType* __dec_obj157;
_Bool __result300__;
memset(&calling_fun_481, 0, sizeof(_Bool));
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
        __result299__ = (_Bool)0;
        come_call_finalizer3(left_value_475,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result299__;
    }
    else {
    }
    right_value_478=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_479=(struct sType*)come_increment_ref_count(left_value_475->type);
    fun_name_480="operator_lshift";
    if(    self->mQuote) {
        calling_fun_481=(_Bool)0;
    }
    else {
        calling_fun_481=operator_overload_fun(type_479,fun_name_480,left_value_475,right_value_478,(_Bool)0,info);
    }
    if(    !calling_fun_481) {
        come_value_482=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 645, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj156=come_value_482->c_value;
        come_value_482->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_475->c_value,right_value_478->c_value));
        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj157=come_value_482->type;
        come_value_482->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_475->type));
        come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_482->type->mHeap=(_Bool)0;
        come_value_482->var=((void*)0);
        add_come_last_code(info,"%s",come_value_482->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_482));
        come_call_finalizer3(come_value_482,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result300__ = (_Bool)1;
    come_call_finalizer3(left_value_475,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result300__;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
char* __dec_obj153;
struct sNode* __dec_obj154;
struct sNode* __dec_obj155;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj153=self->sname;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj154=self->mLeft;
            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj155=self->mRight;
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj158;
void* __right_value442 = (void*)0;
struct sNode* __dec_obj159;
struct sRShiftNode* __result301__;
    ((struct sNodeBase*)(__right_value440=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value440,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj158=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj159=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result301__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value443 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value443=__builtin_string("sRShiftNode")));
    __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_483;
_Bool Value_484;
void* __right_value444 = (void*)0;
struct CVALUE* left_value_485;
struct sNode* right_node_486;
_Bool Value_487;
_Bool __result303__;
void* __right_value445 = (void*)0;
struct CVALUE* right_value_488;
struct sType* type_489;
char* fun_name_490;
_Bool calling_fun_491;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct CVALUE* come_value_492;
void* __right_value448 = (void*)0;
char* __dec_obj163;
void* __right_value449 = (void*)0;
struct sType* __dec_obj164;
_Bool __result304__;
memset(&calling_fun_491, 0, sizeof(_Bool));
    left_node_483=self->mLeft;
    Value_484=node_compile(left_node_483,info);
    if(    !Value_484) {
        return (_Bool)0;
    }
    else {
    }
    left_value_485=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_486=self->mRight;
    Value_487=node_compile(right_node_486,info);
    if(    !Value_487) {
        __result303__ = (_Bool)0;
        come_call_finalizer3(left_value_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result303__;
    }
    else {
    }
    right_value_488=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_489=(struct sType*)come_increment_ref_count(left_value_485->type);
    fun_name_490="operator_rshift";
    if(    self->mQuote) {
        calling_fun_491=(_Bool)0;
    }
    else {
        calling_fun_491=operator_overload_fun(type_489,fun_name_490,left_value_485,right_value_488,(_Bool)0,info);
    }
    if(    !calling_fun_491) {
        come_value_492=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 710, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj163=come_value_492->c_value;
        come_value_492->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_485->c_value,right_value_488->c_value));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj164=come_value_492->type;
        come_value_492->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_485->type));
        come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_492->type->mHeap=(_Bool)0;
        come_value_492->var=((void*)0);
        add_come_last_code(info,"%s",come_value_492->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_492));
        come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result304__ = (_Bool)1;
    come_call_finalizer3(left_value_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_489,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result304__;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
char* __dec_obj160;
struct sNode* __dec_obj161;
struct sNode* __dec_obj162;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj160=self->sname;
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj161=self->mLeft;
            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj162=self->mRight;
            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj165;
void* __right_value452 = (void*)0;
struct sNode* __dec_obj166;
struct sGtEqNode* __result305__;
    ((struct sNodeBase*)(__right_value450=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value450,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj165=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj166=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); };
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value453 = (void*)0;
char* __result306__;
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value453=__builtin_string("sGtEqNode")));
    __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_493;
_Bool Value_494;
void* __right_value454 = (void*)0;
struct CVALUE* left_value_495;
struct sNode* right_node_496;
_Bool Value_497;
_Bool __result307__;
void* __right_value455 = (void*)0;
struct CVALUE* right_value_498;
struct sType* type_499;
char* fun_name_500;
_Bool calling_fun_501;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct CVALUE* come_value_502;
void* __right_value458 = (void*)0;
char* __dec_obj170;
void* __right_value459 = (void*)0;
struct sType* __dec_obj171;
_Bool __result308__;
memset(&calling_fun_501, 0, sizeof(_Bool));
    left_node_493=self->mLeft;
    Value_494=node_compile(left_node_493,info);
    if(    !Value_494) {
        return (_Bool)0;
    }
    else {
    }
    left_value_495=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_496=self->mRight;
    Value_497=node_compile(right_node_496,info);
    if(    !Value_497) {
        __result307__ = (_Bool)0;
        come_call_finalizer3(left_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result307__;
    }
    else {
    }
    right_value_498=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_499=(struct sType*)come_increment_ref_count(left_value_495->type);
    fun_name_500="operator_gteq";
    if(    self->mQuote) {
        calling_fun_501=(_Bool)0;
    }
    else {
        calling_fun_501=operator_overload_fun(type_499,fun_name_500,left_value_495,right_value_498,(_Bool)0,info);
    }
    if(    !calling_fun_501) {
        come_value_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 775, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj170=come_value_502->c_value;
        come_value_502->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_495->c_value,right_value_498->c_value));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj171=come_value_502->type;
        come_value_502->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_495->type));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_502->type->mHeap=(_Bool)0;
        come_value_502->var=((void*)0);
        add_come_last_code(info,"%s",come_value_502->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_502));
        come_call_finalizer3(come_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result308__ = (_Bool)1;
    come_call_finalizer3(left_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_498,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_499,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result308__;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
char* __dec_obj167;
struct sNode* __dec_obj168;
struct sNode* __dec_obj169;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj167=self->sname;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj168=self->mLeft;
            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj169=self->mRight;
            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj172;
void* __right_value462 = (void*)0;
struct sNode* __dec_obj173;
struct sLtEqNode* __result309__;
    ((struct sNodeBase*)(__right_value460=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value460,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj172=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj173=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); };
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result309__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value463 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value463=__builtin_string("sLtEqNode")));
    __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_503;
_Bool Value_504;
void* __right_value464 = (void*)0;
struct CVALUE* left_value_505;
struct sNode* right_node_506;
_Bool Value_507;
_Bool __result311__;
void* __right_value465 = (void*)0;
struct CVALUE* right_value_508;
struct sType* type_509;
char* fun_name_510;
_Bool calling_fun_511;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct CVALUE* come_value_512;
void* __right_value468 = (void*)0;
char* __dec_obj177;
void* __right_value469 = (void*)0;
struct sType* __dec_obj178;
_Bool __result312__;
memset(&calling_fun_511, 0, sizeof(_Bool));
    left_node_503=self->mLeft;
    Value_504=node_compile(left_node_503,info);
    if(    !Value_504) {
        return (_Bool)0;
    }
    else {
    }
    left_value_505=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_506=self->mRight;
    Value_507=node_compile(right_node_506,info);
    if(    !Value_507) {
        __result311__ = (_Bool)0;
        come_call_finalizer3(left_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result311__;
    }
    else {
    }
    right_value_508=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_509=(struct sType*)come_increment_ref_count(left_value_505->type);
    fun_name_510="operator_lteq";
    if(    self->mQuote) {
        calling_fun_511=(_Bool)0;
    }
    else {
        calling_fun_511=operator_overload_fun(type_509,fun_name_510,left_value_505,right_value_508,(_Bool)0,info);
    }
    if(    !calling_fun_511) {
        come_value_512=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 840, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj177=come_value_512->c_value;
        come_value_512->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_505->c_value,right_value_508->c_value));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj178=come_value_512->type;
        come_value_512->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_505->type));
        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_512->type->mHeap=(_Bool)0;
        come_value_512->var=((void*)0);
        add_come_last_code(info,"%s",come_value_512->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_512));
        come_call_finalizer3(come_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result312__ = (_Bool)1;
    come_call_finalizer3(left_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result312__;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
char* __dec_obj174;
struct sNode* __dec_obj175;
struct sNode* __dec_obj176;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj174=self->sname;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj175=self->mLeft;
            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj176=self->mRight;
            if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj179;
void* __right_value472 = (void*)0;
struct sNode* __dec_obj180;
struct sLtNode* __result313__;
    ((struct sNodeBase*)(__right_value470=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value470,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj179=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj180=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result313__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__=(void*)0;
void* __right_value473 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value473=__builtin_string("sLtNode")));
    __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_513;
_Bool Value_514;
void* __right_value474 = (void*)0;
struct CVALUE* left_value_515;
struct sNode* right_node_516;
_Bool Value_517;
_Bool __result315__;
void* __right_value475 = (void*)0;
struct CVALUE* right_value_518;
struct sType* type_519;
char* fun_name_520;
_Bool calling_fun_521;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value478 = (void*)0;
char* __dec_obj184;
void* __right_value479 = (void*)0;
struct sType* __dec_obj185;
_Bool __result316__;
memset(&calling_fun_521, 0, sizeof(_Bool));
    left_node_513=self->mLeft;
    Value_514=node_compile(left_node_513,info);
    if(    !Value_514) {
        return (_Bool)0;
    }
    else {
    }
    left_value_515=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_516=self->mRight;
    Value_517=node_compile(right_node_516,info);
    if(    !Value_517) {
        __result315__ = (_Bool)0;
        come_call_finalizer3(left_value_515,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result315__;
    }
    else {
    }
    right_value_518=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_519=(struct sType*)come_increment_ref_count(left_value_515->type);
    fun_name_520="operator_lt";
    if(    self->mQuote) {
        calling_fun_521=(_Bool)0;
    }
    else {
        calling_fun_521=operator_overload_fun(type_519,fun_name_520,left_value_515,right_value_518,(_Bool)0,info);
    }
    if(    !calling_fun_521) {
        come_value_522=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 905, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj184=come_value_522->c_value;
        come_value_522->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_515->c_value,right_value_518->c_value));
        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj185=come_value_522->type;
        come_value_522->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_515->type));
        come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_522->type->mHeap=(_Bool)0;
        come_value_522->var=((void*)0);
        add_come_last_code(info,"%s",come_value_522->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_522));
        come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result316__ = (_Bool)1;
    come_call_finalizer3(left_value_515,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_519,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result316__;
}

static void sLtNode_finalize(struct sLtNode* self){
char* __dec_obj181;
struct sNode* __dec_obj182;
struct sNode* __dec_obj183;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj181=self->sname;
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj182=self->mLeft;
            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj183=self->mRight;
            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj186;
void* __right_value482 = (void*)0;
struct sNode* __dec_obj187;
struct sGtNode* __result317__;
    ((struct sNodeBase*)(__right_value480=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value480,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj186=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj187=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__=(void*)0;
void* __right_value483 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value483=__builtin_string("sGtNode")));
    __right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_523;
_Bool Value_524;
void* __right_value484 = (void*)0;
struct CVALUE* left_value_525;
struct sNode* right_node_526;
_Bool Value_527;
_Bool __result319__;
void* __right_value485 = (void*)0;
struct CVALUE* right_value_528;
struct sType* type_529;
char* fun_name_530;
_Bool calling_fun_531;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct CVALUE* come_value_532;
void* __right_value488 = (void*)0;
char* __dec_obj191;
void* __right_value489 = (void*)0;
struct sType* __dec_obj192;
_Bool __result320__;
memset(&calling_fun_531, 0, sizeof(_Bool));
    left_node_523=self->mLeft;
    Value_524=node_compile(left_node_523,info);
    if(    !Value_524) {
        return (_Bool)0;
    }
    else {
    }
    left_value_525=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_526=self->mRight;
    Value_527=node_compile(right_node_526,info);
    if(    !Value_527) {
        __result319__ = (_Bool)0;
        come_call_finalizer3(left_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result319__;
    }
    else {
    }
    right_value_528=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_529=(struct sType*)come_increment_ref_count(left_value_525->type);
    fun_name_530="operator_gt";
    if(    self->mQuote) {
        calling_fun_531=(_Bool)0;
    }
    else {
        calling_fun_531=operator_overload_fun(type_529,fun_name_530,left_value_525,right_value_528,(_Bool)0,info);
    }
    if(    !calling_fun_531) {
        come_value_532=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 970, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj191=come_value_532->c_value;
        come_value_532->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_525->c_value,right_value_528->c_value));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj192=come_value_532->type;
        come_value_532->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_525->type));
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_532->type->mHeap=(_Bool)0;
        come_value_532->var=((void*)0);
        add_come_last_code(info,"%s",come_value_532->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_532));
        come_call_finalizer3(come_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result320__ = (_Bool)1;
    come_call_finalizer3(left_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

static void sGtNode_finalize(struct sGtNode* self){
char* __dec_obj188;
struct sNode* __dec_obj189;
struct sNode* __dec_obj190;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj188=self->sname;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj189=self->mLeft;
            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj190=self->mRight;
            if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj193;
void* __right_value492 = (void*)0;
struct sNode* __dec_obj194;
struct sEqNode* __result321__;
    ((struct sNodeBase*)(__right_value490=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value490,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj193=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj194=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result321__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value493 = (void*)0;
char* __result322__;
    __result322__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value493=__builtin_string("sEqNode")));
    __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_533;
_Bool Value_534;
void* __right_value494 = (void*)0;
struct CVALUE* left_value_535;
struct sNode* right_node_536;
_Bool Value_537;
_Bool __result323__;
void* __right_value495 = (void*)0;
struct CVALUE* right_value_538;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct CVALUE* come_value_539;
void* __right_value498 = (void*)0;
char* __dec_obj198;
void* __right_value499 = (void*)0;
struct sType* __dec_obj199;
_Bool __result324__;
    left_node_533=self->mLeft;
    Value_534=node_compile(left_node_533,info);
    if(    !Value_534) {
        return (_Bool)0;
    }
    else {
    }
    left_value_535=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_536=self->mRight;
    Value_537=node_compile(right_node_536,info);
    if(    !Value_537) {
        __result323__ = (_Bool)0;
        come_call_finalizer3(left_value_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result323__;
    }
    else {
    }
    right_value_538=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_539=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1023, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj198=come_value_539->c_value;
    come_value_539->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_535->c_value,right_value_538->c_value));
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj199=come_value_539->type;
    come_value_539->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_535->type));
    come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_539->type->mHeap=(_Bool)0;
    come_value_539->var=((void*)0);
    add_come_last_code(info,"%s",come_value_539->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_539));
    __result324__ = (_Bool)1;
    come_call_finalizer3(left_value_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_538,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result324__;
}

static void sEqNode_finalize(struct sEqNode* self){
char* __dec_obj195;
struct sNode* __dec_obj196;
struct sNode* __dec_obj197;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj195=self->sname;
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj196=self->mLeft;
            if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj197=self->mRight;
            if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj200;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj201;
struct sNotEqNode* __result325__;
    ((struct sNodeBase*)(__right_value500=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value500,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj200=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj201=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); };
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result325__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value503 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value503=__builtin_string("sNotEqNode")));
    __right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_540;
_Bool Value_541;
void* __right_value504 = (void*)0;
struct CVALUE* left_value_542;
struct sNode* right_node_543;
_Bool Value_544;
_Bool __result327__;
void* __right_value505 = (void*)0;
struct CVALUE* right_value_545;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct CVALUE* come_value_546;
void* __right_value508 = (void*)0;
char* __dec_obj205;
void* __right_value509 = (void*)0;
struct sType* __dec_obj206;
_Bool __result328__;
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
        __result327__ = (_Bool)0;
        come_call_finalizer3(left_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result327__;
    }
    else {
    }
    right_value_545=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_546=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1075, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj205=come_value_546->c_value;
    come_value_546->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_542->c_value,right_value_545->c_value));
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj206=come_value_546->type;
    come_value_546->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_542->type));
    come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_546->type->mHeap=(_Bool)0;
    come_value_546->var=((void*)0);
    add_come_last_code(info,"%s",come_value_546->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_546));
    __result328__ = (_Bool)1;
    come_call_finalizer3(left_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_546,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result328__;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
char* __dec_obj202;
struct sNode* __dec_obj203;
struct sNode* __dec_obj204;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj202=self->sname;
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj203=self->mLeft;
            if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj204=self->mRight;
            if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj207;
void* __right_value512 = (void*)0;
struct sNode* __dec_obj208;
struct sEq2Node* __result329__;
    ((struct sNodeBase*)(__right_value510=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value510,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj207=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj208=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result329__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value513 = (void*)0;
char* __result330__;
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value513=__builtin_string("sEq2Node")));
    __right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_547;
_Bool Value_548;
void* __right_value514 = (void*)0;
struct CVALUE* left_value_549;
struct sNode* right_node_550;
_Bool Value_551;
_Bool __result331__;
void* __right_value515 = (void*)0;
struct CVALUE* right_value_552;
struct sType* type_553;
char* fun_name_554;
_Bool calling_fun_555;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct CVALUE* come_value_556;
void* __right_value518 = (void*)0;
char* __dec_obj212;
void* __right_value519 = (void*)0;
struct sType* __dec_obj213;
_Bool __result332__;
memset(&calling_fun_555, 0, sizeof(_Bool));
    left_node_547=self->mLeft;
    Value_548=node_compile(left_node_547,info);
    if(    !Value_548) {
        return (_Bool)0;
    }
    else {
    }
    left_value_549=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_550=self->mRight;
    Value_551=node_compile(right_node_550,info);
    if(    !Value_551) {
        __result331__ = (_Bool)0;
        come_call_finalizer3(left_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result331__;
    }
    else {
    }
    right_value_552=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_553=(struct sType*)come_increment_ref_count(left_value_549->type);
    fun_name_554="operator_equals";
    if(    self->mQuote) {
        calling_fun_555=(_Bool)0;
    }
    else {
        calling_fun_555=operator_overload_fun(type_553,fun_name_554,left_value_549,right_value_552,(_Bool)0,info);
    }
    if(    !calling_fun_555) {
        come_value_556=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1140, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj212=come_value_556->c_value;
        come_value_556->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_549->c_value,right_value_552->c_value));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj213=come_value_556->type;
        come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_549->type));
        come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_556->type->mHeap=(_Bool)0;
        come_value_556->var=((void*)0);
        add_come_last_code(info,"%s",come_value_556->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_556));
        come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result332__ = (_Bool)1;
    come_call_finalizer3(left_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result332__;
}

static void sEq2Node_finalize(struct sEq2Node* self){
char* __dec_obj209;
struct sNode* __dec_obj210;
struct sNode* __dec_obj211;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj210=self->mLeft;
            if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj211=self->mRight;
            if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj214;
void* __right_value522 = (void*)0;
struct sNode* __dec_obj215;
struct sNotEq2Node* __result333__;
    ((struct sNodeBase*)(__right_value520=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value520,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj214=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj215=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result333__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value523 = (void*)0;
char* __result334__;
    __result334__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value523=__builtin_string("sNotEq2Node")));
    __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_557;
_Bool Value_558;
void* __right_value524 = (void*)0;
struct CVALUE* left_value_559;
struct sNode* right_node_560;
_Bool Value_561;
_Bool __result335__;
void* __right_value525 = (void*)0;
struct CVALUE* right_value_562;
struct sType* type_563;
char* fun_name_564;
_Bool calling_fun_565;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct CVALUE* come_value_566;
void* __right_value528 = (void*)0;
char* __dec_obj219;
void* __right_value529 = (void*)0;
struct sType* __dec_obj220;
_Bool __result336__;
memset(&calling_fun_565, 0, sizeof(_Bool));
    left_node_557=self->mLeft;
    Value_558=node_compile(left_node_557,info);
    if(    !Value_558) {
        return (_Bool)0;
    }
    else {
    }
    left_value_559=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_560=self->mRight;
    Value_561=node_compile(right_node_560,info);
    if(    !Value_561) {
        __result335__ = (_Bool)0;
        come_call_finalizer3(left_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result335__;
    }
    else {
    }
    right_value_562=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_563=(struct sType*)come_increment_ref_count(left_value_559->type);
    fun_name_564="operator_not_equals";
    if(    self->mQuote) {
        calling_fun_565=(_Bool)0;
    }
    else {
        calling_fun_565=operator_overload_fun(type_563,fun_name_564,left_value_559,right_value_562,(_Bool)0,info);
    }
    if(    !calling_fun_565) {
        come_value_566=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1205, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj219=come_value_566->c_value;
        come_value_566->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_559->c_value,right_value_562->c_value));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj220=come_value_566->type;
        come_value_566->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_559->type));
        come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_566->type->mHeap=(_Bool)0;
        come_value_566->var=((void*)0);
        add_come_last_code(info,"%s",come_value_566->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_566));
        come_call_finalizer3(come_value_566,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result336__ = (_Bool)1;
    come_call_finalizer3(left_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result336__;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
char* __dec_obj216;
struct sNode* __dec_obj217;
struct sNode* __dec_obj218;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj216=self->sname;
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj217=self->mLeft;
            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj218=self->mRight;
            if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj221;
void* __right_value532 = (void*)0;
struct sNode* __dec_obj222;
struct sAndNode* __result337__;
    ((struct sNodeBase*)(__right_value530=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value530,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj221=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj222=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); };
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result337__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value533 = (void*)0;
char* __result338__;
    __result338__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value533=__builtin_string("sAndNode")));
    __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_567;
_Bool Value_568;
void* __right_value534 = (void*)0;
struct CVALUE* left_value_569;
struct sNode* right_node_570;
_Bool Value_571;
_Bool __result339__;
void* __right_value535 = (void*)0;
struct CVALUE* right_value_572;
struct sType* type_573;
char* fun_name_574;
_Bool calling_fun_575;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct CVALUE* come_value_576;
void* __right_value538 = (void*)0;
char* __dec_obj226;
void* __right_value539 = (void*)0;
struct sType* __dec_obj227;
_Bool __result340__;
memset(&calling_fun_575, 0, sizeof(_Bool));
    left_node_567=self->mLeft;
    Value_568=node_compile(left_node_567,info);
    if(    !Value_568) {
        return (_Bool)0;
    }
    else {
    }
    left_value_569=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_570=self->mRight;
    Value_571=node_compile(right_node_570,info);
    if(    !Value_571) {
        __result339__ = (_Bool)0;
        come_call_finalizer3(left_value_569,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result339__;
    }
    else {
    }
    right_value_572=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_573=(struct sType*)come_increment_ref_count(left_value_569->type);
    fun_name_574="operator_and";
    if(    self->mQuote) {
        calling_fun_575=(_Bool)0;
    }
    else {
        calling_fun_575=operator_overload_fun(type_573,fun_name_574,left_value_569,right_value_572,(_Bool)0,info);
    }
    if(    !calling_fun_575) {
        come_value_576=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1271, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj226=come_value_576->c_value;
        come_value_576->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_569->c_value,right_value_572->c_value));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj227=come_value_576->type;
        come_value_576->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_569->type));
        come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_576->type->mHeap=(_Bool)0;
        come_value_576->var=((void*)0);
        add_come_last_code(info,"%s",come_value_576->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_576));
        come_call_finalizer3(come_value_576,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result340__ = (_Bool)1;
    come_call_finalizer3(left_value_569,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_572,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result340__;
}

static void sAndNode_finalize(struct sAndNode* self){
char* __dec_obj223;
struct sNode* __dec_obj224;
struct sNode* __dec_obj225;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj223=self->sname;
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj224=self->mLeft;
            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj225=self->mRight;
            if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj228;
void* __right_value542 = (void*)0;
struct sNode* __dec_obj229;
struct sXOrNode* __result341__;
    ((struct sNodeBase*)(__right_value540=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value540,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj228=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj229=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result341__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value543 = (void*)0;
char* __result342__;
    __result342__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value543=__builtin_string("sXOrNode")));
    __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_577;
_Bool Value_578;
void* __right_value544 = (void*)0;
struct CVALUE* left_value_579;
struct sNode* right_node_580;
_Bool Value_581;
_Bool __result343__;
void* __right_value545 = (void*)0;
struct CVALUE* right_value_582;
struct sType* type_583;
char* fun_name_584;
_Bool calling_fun_585;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_586;
void* __right_value548 = (void*)0;
char* __dec_obj233;
void* __right_value549 = (void*)0;
struct sType* __dec_obj234;
_Bool __result344__;
memset(&calling_fun_585, 0, sizeof(_Bool));
    left_node_577=self->mLeft;
    Value_578=node_compile(left_node_577,info);
    if(    !Value_578) {
        return (_Bool)0;
    }
    else {
    }
    left_value_579=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_580=self->mRight;
    Value_581=node_compile(right_node_580,info);
    if(    !Value_581) {
        __result343__ = (_Bool)0;
        come_call_finalizer3(left_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result343__;
    }
    else {
    }
    right_value_582=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_583=(struct sType*)come_increment_ref_count(left_value_579->type);
    fun_name_584="operator_xor";
    if(    self->mQuote) {
        calling_fun_585=(_Bool)0;
    }
    else {
        calling_fun_585=operator_overload_fun(type_583,fun_name_584,left_value_579,right_value_582,(_Bool)0,info);
    }
    if(    !calling_fun_585) {
        come_value_586=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1336, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj233=come_value_586->c_value;
        come_value_586->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_579->c_value,right_value_582->c_value));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj234=come_value_586->type;
        come_value_586->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_579->type));
        come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_586->type->mHeap=(_Bool)0;
        come_value_586->var=((void*)0);
        add_come_last_code(info,"%s",come_value_586->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_586));
        come_call_finalizer3(come_value_586,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result344__ = (_Bool)1;
    come_call_finalizer3(left_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_582,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result344__;
}

static void sXOrNode_finalize(struct sXOrNode* self){
char* __dec_obj230;
struct sNode* __dec_obj231;
struct sNode* __dec_obj232;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj230=self->sname;
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj231=self->mLeft;
            if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj232=self->mRight;
            if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj235;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj236;
struct sOrNode* __result345__;
    ((struct sNodeBase*)(__right_value550=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value550,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj235=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj236=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result345__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value553 = (void*)0;
char* __result346__;
    __result346__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value553=__builtin_string("sOrNode")));
    __right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_587;
_Bool Value_588;
void* __right_value554 = (void*)0;
struct CVALUE* left_value_589;
struct sNode* right_node_590;
_Bool Value_591;
_Bool __result347__;
void* __right_value555 = (void*)0;
struct CVALUE* right_value_592;
struct sType* type_593;
char* fun_name_594;
_Bool calling_fun_595;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct CVALUE* come_value_596;
void* __right_value558 = (void*)0;
char* __dec_obj240;
void* __right_value559 = (void*)0;
struct sType* __dec_obj241;
_Bool __result348__;
memset(&calling_fun_595, 0, sizeof(_Bool));
    left_node_587=self->mLeft;
    Value_588=node_compile(left_node_587,info);
    if(    !Value_588) {
        return (_Bool)0;
    }
    else {
    }
    left_value_589=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_590=self->mRight;
    Value_591=node_compile(right_node_590,info);
    if(    !Value_591) {
        __result347__ = (_Bool)0;
        come_call_finalizer3(left_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result347__;
    }
    else {
    }
    right_value_592=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_593=(struct sType*)come_increment_ref_count(left_value_589->type);
    fun_name_594="operator_or";
    if(    self->mQuote) {
        calling_fun_595=(_Bool)0;
    }
    else {
        calling_fun_595=operator_overload_fun(type_593,fun_name_594,left_value_589,right_value_592,(_Bool)0,info);
    }
    if(    !calling_fun_595) {
        come_value_596=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1402, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj240=come_value_596->c_value;
        come_value_596->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_589->c_value,right_value_592->c_value));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj241=come_value_596->type;
        come_value_596->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_589->type));
        come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_596->type->mHeap=(_Bool)0;
        come_value_596->var=((void*)0);
        add_come_last_code(info,"%s",come_value_596->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_596));
        come_call_finalizer3(come_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result348__ = (_Bool)1;
    come_call_finalizer3(left_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result348__;
}

static void sOrNode_finalize(struct sOrNode* self){
char* __dec_obj237;
struct sNode* __dec_obj238;
struct sNode* __dec_obj239;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj237=self->sname;
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj238=self->mLeft;
            if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj239=self->mRight;
            if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj242;
void* __right_value562 = (void*)0;
struct sNode* __dec_obj243;
struct sAndAndNode* __result349__;
    ((struct sNodeBase*)(__right_value560=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value560,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj242=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj243=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); };
    __result349__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value563 = (void*)0;
char* __result350__;
    __result350__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value563=__builtin_string("sAndAndNode")));
    __right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_597;
_Bool Value_598;
void* __right_value564 = (void*)0;
struct CVALUE* left_value_599;
struct sNode* right_node_600;
_Bool Value_601;
_Bool __result351__;
void* __right_value565 = (void*)0;
struct CVALUE* right_value_602;
struct sType* type_603;
char* fun_name_604;
_Bool calling_fun_605;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_606;
void* __right_value568 = (void*)0;
char* __dec_obj247;
void* __right_value569 = (void*)0;
struct sType* __dec_obj248;
_Bool __result352__;
memset(&calling_fun_605, 0, sizeof(_Bool));
    left_node_597=self->mLeft;
    Value_598=node_compile(left_node_597,info);
    if(    !Value_598) {
        return (_Bool)0;
    }
    else {
    }
    left_value_599=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_600=self->mRight;
    Value_601=node_compile(right_node_600,info);
    if(    !Value_601) {
        __result351__ = (_Bool)0;
        come_call_finalizer3(left_value_599,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result351__;
    }
    else {
    }
    right_value_602=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_603=(struct sType*)come_increment_ref_count(left_value_599->type);
    fun_name_604="operator_andand";
    if(    self->mQuote) {
        calling_fun_605=(_Bool)0;
    }
    else {
        calling_fun_605=operator_overload_fun(type_603,fun_name_604,left_value_599,right_value_602,(_Bool)0,info);
    }
    if(    !calling_fun_605) {
        come_value_606=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1468, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj247=come_value_606->c_value;
        come_value_606->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_599->c_value,right_value_602->c_value));
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj248=come_value_606->type;
        come_value_606->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_599->type));
        come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_606->type->mHeap=(_Bool)0;
        come_value_606->var=left_value_599->var;
        add_come_last_code(info,"%s",come_value_606->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_606));
        come_call_finalizer3(come_value_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result352__ = (_Bool)1;
    come_call_finalizer3(left_value_599,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_602,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result352__;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
char* __dec_obj244;
struct sNode* __dec_obj245;
struct sNode* __dec_obj246;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj244=self->sname;
            __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj245=self->mLeft;
            if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj246=self->mRight;
            if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj249;
void* __right_value572 = (void*)0;
struct sNode* __dec_obj250;
struct sOrOrNode* __result353__;
    ((struct sNodeBase*)(__right_value570=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value570,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj249=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj250=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result353__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value573 = (void*)0;
char* __result354__;
    __result354__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value573=__builtin_string("sOrOrNode")));
    __right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_607;
_Bool Value_608;
void* __right_value574 = (void*)0;
struct CVALUE* left_value_609;
struct sNode* right_node_610;
_Bool Value_611;
_Bool __result355__;
void* __right_value575 = (void*)0;
struct CVALUE* right_value_612;
struct sType* type_613;
char* fun_name_614;
_Bool calling_fun_615;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_616;
void* __right_value578 = (void*)0;
char* __dec_obj254;
void* __right_value579 = (void*)0;
struct sType* __dec_obj255;
_Bool __result356__;
memset(&calling_fun_615, 0, sizeof(_Bool));
    left_node_607=self->mLeft;
    Value_608=node_compile(left_node_607,info);
    if(    !Value_608) {
        return (_Bool)0;
    }
    else {
    }
    left_value_609=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_610=self->mRight;
    Value_611=node_compile(right_node_610,info);
    if(    !Value_611) {
        __result355__ = (_Bool)0;
        come_call_finalizer3(left_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result355__;
    }
    else {
    }
    right_value_612=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_613=(struct sType*)come_increment_ref_count(left_value_609->type);
    fun_name_614="operator_oror";
    if(    self->mQuote) {
        calling_fun_615=(_Bool)0;
    }
    else {
        calling_fun_615=operator_overload_fun(type_613,fun_name_614,left_value_609,right_value_612,(_Bool)0,info);
    }
    if(    !calling_fun_615) {
        come_value_616=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1533, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj254=come_value_616->c_value;
        come_value_616->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_609->c_value,right_value_612->c_value));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj255=come_value_616->type;
        come_value_616->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_609->type));
        come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_616->type->mHeap=(_Bool)0;
        come_value_616->var=left_value_609->var;
        add_come_last_code(info,"%s",come_value_616->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_616));
        come_call_finalizer3(come_value_616,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result356__ = (_Bool)1;
    come_call_finalizer3(left_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_612,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result356__;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
char* __dec_obj251;
struct sNode* __dec_obj252;
struct sNode* __dec_obj253;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj251=self->sname;
            __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj252=self->mLeft;
            if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj253=self->mRight;
            if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj256;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj257;
struct sCommaNode* __result357__;
    ((struct sNodeBase*)(__right_value580=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value580,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj256=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj257=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
    __result357__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result357__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__=(void*)0;
void* __right_value583 = (void*)0;
char* __result358__;
    __result358__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value583=__builtin_string("sCommaNode")));
    __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_617;
_Bool Value_618;
void* __right_value584 = (void*)0;
struct CVALUE* left_value_619;
struct sNode* right_node_620;
_Bool Value_621;
_Bool __result359__;
void* __right_value585 = (void*)0;
struct CVALUE* right_value_622;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_623;
void* __right_value588 = (void*)0;
char* __dec_obj261;
void* __right_value589 = (void*)0;
struct sType* __dec_obj262;
_Bool __result360__;
    left_node_617=self->mLeft;
    Value_618=node_compile(left_node_617,info);
    if(    !Value_618) {
        return (_Bool)0;
    }
    else {
    }
    left_value_619=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_620=self->mRight;
    Value_621=node_compile(right_node_620,info);
    if(    !Value_621) {
        __result359__ = (_Bool)0;
        come_call_finalizer3(left_value_619,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result359__;
    }
    else {
    }
    right_value_622=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_623=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1585, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj261=come_value_623->c_value;
    come_value_623->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_619->c_value,right_value_622->c_value));
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj262=come_value_623->type;
    come_value_623->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_619->type));
    come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_623->var=((void*)0);
    add_come_last_code(info,"%s",come_value_623->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_623));
    __result360__ = (_Bool)1;
    come_call_finalizer3(left_value_619,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_622,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result360__;
}

static void sCommaNode_finalize(struct sCommaNode* self){
char* __dec_obj258;
struct sNode* __dec_obj259;
struct sNode* __dec_obj260;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj258=self->sname;
            __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj259=self->mLeft;
            if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj260=self->mRight;
            if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __dec_obj263;
void* __right_value592 = (void*)0;
struct sNode* __dec_obj264;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj265;
struct sConditionalNode* __result361__;
    ((struct sNodeBase*)(__right_value590=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value590,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj263=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value1));
    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj264=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value2));
    if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj265=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value3));
    if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
    __result361__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result361__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
void* __right_value594 = (void*)0;
char* __result362__;
    __result362__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value594=__builtin_string("sConditionalNode")));
    __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_624;
struct sNode* value1_625;
_Bool Value_626;
void* __right_value595 = (void*)0;
struct CVALUE* value1_value_627;
struct sNode* value2_628;
_Bool Value_629;
_Bool __result363__;
void* __right_value596 = (void*)0;
struct CVALUE* value2_value_630;
struct sNode* value3_631;
_Bool Value_632;
_Bool __result364__;
void* __right_value597 = (void*)0;
struct CVALUE* value3_value_633;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct CVALUE* come_value_634;
void* __right_value600 = (void*)0;
char* __dec_obj270;
void* __right_value601 = (void*)0;
struct sType* __dec_obj271;
_Bool __result365__;
    in_conditional_operator_624=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_625=self->mValue1;
    Value_626=node_compile(value1_625,info);
    if(    !Value_626) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_627=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value2_628=self->mValue2;
    Value_629=node_compile(value2_628,info);
    if(    !Value_629) {
        __result363__ = (_Bool)0;
        come_call_finalizer3(value1_value_627,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result363__;
    }
    else {
    }
    value2_value_630=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value3_631=self->mValue3;
    Value_632=node_compile(value3_631,info);
    if(    !Value_632) {
        __result364__ = (_Bool)0;
        come_call_finalizer3(value1_value_627,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_630,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result364__;
    }
    else {
    }
    value3_value_633=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_634=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1648, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj270=come_value_634->c_value;
    come_value_634->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_627->c_value,value2_value_630->c_value,value3_value_633->c_value));
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj271=come_value_634->type;
    come_value_634->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value2_value_630->type));
    come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_634->var=((void*)0);
    add_come_last_code(info,"%s",come_value_634->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_634));
    info->in_conditional_operator=in_conditional_operator_624;
    __result365__ = (_Bool)1;
    come_call_finalizer3(value1_value_627,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_630,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_633,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_634,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result365__;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
char* __dec_obj266;
struct sNode* __dec_obj267;
struct sNode* __dec_obj268;
struct sNode* __dec_obj269;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj266=self->sname;
            __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        if(        self->mValue1==gComeFunResultObject) {
            __dec_obj267=self->mValue1;
            if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        if(        self->mValue2==gComeFunResultObject) {
            __dec_obj268=self->mValue2;
            if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        if(        self->mValue3==gComeFunResultObject) {
            __dec_obj269=self->mValue3;
            if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sNode* __result368__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1666, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value603=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1666, "struct sConditionalNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result368__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value609=_inf_value2));
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value603,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value609) { __right_value609 = come_decrement_ref_count2(__right_value609, ((struct sNode*)__right_value609)->finalize, ((struct sNode*)__right_value609)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
struct sConditionalNode* __result366__;
void* __right_value604 = (void*)0;
struct sConditionalNode* result_636;
void* __right_value605 = (void*)0;
char* __dec_obj272;
void* __right_value606 = (void*)0;
struct sNode* __dec_obj273;
void* __right_value607 = (void*)0;
struct sNode* __dec_obj274;
void* __right_value608 = (void*)0;
struct sNode* __dec_obj275;
struct sConditionalNode* __result367__;
    if(    self==(void*)0) {
        __result366__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    result_636=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode", sConditionalNode_finalize, sConditionalNode_clone, sConditionalNode_get_hash_key, sConditionalNode_equals));
    if(    self!=((void*)0)) {
        result_636->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_636->sname;
        result_636->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_636->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj273=result_636->mValue1;
        result_636->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue1));
        if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj274=result_636->mValue2;
        result_636->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue2));
        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj275=result_636->mValue3;
        result_636->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue3));
        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result367__ = gComeFunResultObject = __result_obj__ = result_636;
    come_call_finalizer3(result_636,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static unsigned int sConditionalNode_get_hash_key(struct sConditionalNode* self){
unsigned int result_635;
    result_635=0;
    result_635+=int_get_hash_key(((int)self->sline));
    result_635+=int_get_hash_key(((int)self->sname));
    result_635+=int_get_hash_key(((int)self->sline_real));
    result_635+=int_get_hash_key(((int)self->mValue1));
    result_635+=int_get_hash_key(((int)self->mValue2));
    result_635+=int_get_hash_key(((int)self->mValue3));
    return result_635;
}

static _Bool sConditionalNode_equals(struct sConditionalNode* left, struct sConditionalNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mValue1,right->mValue1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mValue2,right->mValue2)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mValue3,right->mValue3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value610 = (void*)0;
struct sNode* node_637;
int sline_real_638;
void* __right_value611 = (void*)0;
struct sNode* right_639;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value618 = (void*)0;
struct sNode* __result371__;
int sline_real_642;
void* __right_value619 = (void*)0;
struct sNode* right_643;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value626 = (void*)0;
struct sNode* __result374__;
int sline_real_646;
void* __right_value627 = (void*)0;
struct sNode* right_647;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value634 = (void*)0;
struct sNode* __result377__;
int sline_real_650;
void* __right_value635 = (void*)0;
struct sNode* right_651;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value638 = (void*)0;
struct sNode* __result378__;
int sline_real_652;
void* __right_value639 = (void*)0;
struct sNode* right_653;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value642 = (void*)0;
struct sNode* __result379__;
int sline_real_654;
void* __right_value643 = (void*)0;
struct sNode* right_655;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value646 = (void*)0;
struct sNode* __result380__;
struct sNode* __result381__;
    node_637=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_637->terminated(node_637->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real_638=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_639=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_638;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1686, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value613=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1686, "struct sMultNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_637),(struct sNode*)come_increment_ref_count(right_639),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result371__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value618=_inf_value3));
            if(right_639) { right_639 = come_decrement_ref_count2(right_639, ((struct sNode*)right_639)->finalize, ((struct sNode*)right_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value613,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value618) { __right_value618 = come_decrement_ref_count2(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result371__;
            if(right_639) { right_639 = come_decrement_ref_count2(right_639, ((struct sNode*)right_639)->finalize, ((struct sNode*)right_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_642=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_643=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_642;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1697, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value621=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1697, "struct sDivNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_637),(struct sNode*)come_increment_ref_count(right_643),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __result374__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value626=_inf_value4));
            if(right_643) { right_643 = come_decrement_ref_count2(right_643, ((struct sNode*)right_643)->finalize, ((struct sNode*)right_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value621,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value626) { __right_value626 = come_decrement_ref_count2(__right_value626, ((struct sNode*)__right_value626)->finalize, ((struct sNode*)__right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result374__;
            if(right_643) { right_643 = come_decrement_ref_count2(right_643, ((struct sNode*)right_643)->finalize, ((struct sNode*)right_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_646=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_647=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_646;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1708, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value629=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1708, "struct sModNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_637),(struct sNode*)come_increment_ref_count(right_647),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __result377__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value634=_inf_value5));
            if(right_647) { right_647 = come_decrement_ref_count2(right_647, ((struct sNode*)right_647)->finalize, ((struct sNode*)right_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value629,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value634) { __right_value634 = come_decrement_ref_count2(__right_value634, ((struct sNode*)__right_value634)->finalize, ((struct sNode*)__right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result377__;
            if(right_647) { right_647 = come_decrement_ref_count2(right_647, ((struct sNode*)right_647)->finalize, ((struct sNode*)right_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_637->terminated(node_637->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_650=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_651=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_650;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1719, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value637=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1719, "struct sMultNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_637),(struct sNode*)come_increment_ref_count(right_651),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value638=_inf_value6));
            if(right_651) { right_651 = come_decrement_ref_count2(right_651, ((struct sNode*)right_651)->finalize, ((struct sNode*)right_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value637,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value638) { __right_value638 = come_decrement_ref_count2(__right_value638, ((struct sNode*)__right_value638)->finalize, ((struct sNode*)__right_value638)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result378__;
            if(right_651) { right_651 = come_decrement_ref_count2(right_651, ((struct sNode*)right_651)->finalize, ((struct sNode*)right_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_652=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_653=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_652;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1730, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value641=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1730, "struct sDivNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_637),(struct sNode*)come_increment_ref_count(right_653),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value642=_inf_value7));
            if(right_653) { right_653 = come_decrement_ref_count2(right_653, ((struct sNode*)right_653)->finalize, ((struct sNode*)right_653)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value641,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value642) { __right_value642 = come_decrement_ref_count2(__right_value642, ((struct sNode*)__right_value642)->finalize, ((struct sNode*)__right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result379__;
            if(right_653) { right_653 = come_decrement_ref_count2(right_653, ((struct sNode*)right_653)->finalize, ((struct sNode*)right_653)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_654=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_655=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_654;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1741, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value645=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1741, "struct sModNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_637),(struct sNode*)come_increment_ref_count(right_655),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value646=_inf_value8));
            if(right_655) { right_655 = come_decrement_ref_count2(right_655, ((struct sNode*)right_655)->finalize, ((struct sNode*)right_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value645,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value646) { __right_value646 = come_decrement_ref_count2(__right_value646, ((struct sNode*)__right_value646)->finalize, ((struct sNode*)__right_value646)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result380__;
            if(right_655) { right_655 = come_decrement_ref_count2(right_655, ((struct sNode*)right_655)->finalize, ((struct sNode*)right_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result381__ = gComeFunResultObject = __result_obj__ = node_637;
    if(node_637) { node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__=(void*)0;
struct sMultNode* __result369__;
void* __right_value614 = (void*)0;
struct sMultNode* result_641;
void* __right_value615 = (void*)0;
char* __dec_obj276;
void* __right_value616 = (void*)0;
struct sNode* __dec_obj277;
void* __right_value617 = (void*)0;
struct sNode* __dec_obj278;
struct sMultNode* __result370__;
    if(    self==(void*)0) {
        __result369__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    result_641=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode", sMultNode_finalize, sMultNode_clone, sMultNode_get_hash_key, sMultNode_equals));
    if(    self!=((void*)0)) {
        result_641->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj276=result_641->sname;
        result_641->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_641->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_641->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj277=result_641->mLeft;
        result_641->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj278=result_641->mRight;
        result_641->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result370__ = gComeFunResultObject = __result_obj__ = result_641;
    come_call_finalizer3(result_641,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static unsigned int sMultNode_get_hash_key(struct sMultNode* self){
unsigned int result_640;
    result_640=0;
    result_640+=int_get_hash_key(((int)self->sline));
    result_640+=int_get_hash_key(((int)self->sname));
    result_640+=int_get_hash_key(((int)self->sline_real));
    result_640+=int_get_hash_key(((int)self->mQuote));
    result_640+=int_get_hash_key(((int)self->mLeft));
    result_640+=int_get_hash_key(((int)self->mRight));
    return result_640;
}

static _Bool sMultNode_equals(struct sMultNode* left, struct sMultNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__=(void*)0;
struct sDivNode* __result372__;
void* __right_value622 = (void*)0;
struct sDivNode* result_645;
void* __right_value623 = (void*)0;
char* __dec_obj279;
void* __right_value624 = (void*)0;
struct sNode* __dec_obj280;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj281;
struct sDivNode* __result373__;
    if(    self==(void*)0) {
        __result372__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    result_645=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode", sDivNode_finalize, sDivNode_clone, sDivNode_get_hash_key, sDivNode_equals));
    if(    self!=((void*)0)) {
        result_645->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_645->sname;
        result_645->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_645->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_645->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj280=result_645->mLeft;
        result_645->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj281=result_645->mRight;
        result_645->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result373__ = gComeFunResultObject = __result_obj__ = result_645;
    come_call_finalizer3(result_645,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static unsigned int sDivNode_get_hash_key(struct sDivNode* self){
unsigned int result_644;
    result_644=0;
    result_644+=int_get_hash_key(((int)self->sline));
    result_644+=int_get_hash_key(((int)self->sname));
    result_644+=int_get_hash_key(((int)self->sline_real));
    result_644+=int_get_hash_key(((int)self->mQuote));
    result_644+=int_get_hash_key(((int)self->mLeft));
    result_644+=int_get_hash_key(((int)self->mRight));
    return result_644;
}

static _Bool sDivNode_equals(struct sDivNode* left, struct sDivNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__=(void*)0;
struct sModNode* __result375__;
void* __right_value630 = (void*)0;
struct sModNode* result_649;
void* __right_value631 = (void*)0;
char* __dec_obj282;
void* __right_value632 = (void*)0;
struct sNode* __dec_obj283;
void* __right_value633 = (void*)0;
struct sNode* __dec_obj284;
struct sModNode* __result376__;
    if(    self==(void*)0) {
        __result375__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    result_649=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode", sModNode_finalize, sModNode_clone, sModNode_get_hash_key, sModNode_equals));
    if(    self!=((void*)0)) {
        result_649->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj282=result_649->sname;
        result_649->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_649->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_649->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj283=result_649->mLeft;
        result_649->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj284=result_649->mRight;
        result_649->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result376__ = gComeFunResultObject = __result_obj__ = result_649;
    come_call_finalizer3(result_649,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static unsigned int sModNode_get_hash_key(struct sModNode* self){
unsigned int result_648;
    result_648=0;
    result_648+=int_get_hash_key(((int)self->sline));
    result_648+=int_get_hash_key(((int)self->sname));
    result_648+=int_get_hash_key(((int)self->sline_real));
    result_648+=int_get_hash_key(((int)self->mQuote));
    result_648+=int_get_hash_key(((int)self->mLeft));
    result_648+=int_get_hash_key(((int)self->mRight));
    return result_648;
}

static _Bool sModNode_equals(struct sModNode* left, struct sModNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value647 = (void*)0;
struct sNode* node_656;
int sline_real_657;
void* __right_value648 = (void*)0;
struct sNode* right_658;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value655 = (void*)0;
struct sNode* __result384__;
int sline_real_661;
void* __right_value656 = (void*)0;
struct sNode* right_662;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value663 = (void*)0;
struct sNode* __result387__;
int sline_real_665;
void* __right_value664 = (void*)0;
struct sNode* right_666;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value667 = (void*)0;
struct sNode* __result388__;
int sline_real_667;
void* __right_value668 = (void*)0;
struct sNode* right_668;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value671 = (void*)0;
struct sNode* __result389__;
struct sNode* __result390__;
    node_656=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real_657=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_658=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_657;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1770, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value650=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1770, "struct sAddNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_656),(struct sNode*)come_increment_ref_count(right_658),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value655=_inf_value9));
            if(right_658) { right_658 = come_decrement_ref_count2(right_658, ((struct sNode*)right_658)->finalize, ((struct sNode*)right_658)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_656) { node_656 = come_decrement_ref_count2(node_656, ((struct sNode*)node_656)->finalize, ((struct sNode*)node_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value650,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value655) { __right_value655 = come_decrement_ref_count2(__right_value655, ((struct sNode*)__right_value655)->finalize, ((struct sNode*)__right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result384__;
            if(right_658) { right_658 = come_decrement_ref_count2(right_658, ((struct sNode*)right_658)->finalize, ((struct sNode*)right_658)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_661=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_662=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_661;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1782, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value658=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1782, "struct sSubNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_656),(struct sNode*)come_increment_ref_count(right_662),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value663=_inf_value10));
            if(right_662) { right_662 = come_decrement_ref_count2(right_662, ((struct sNode*)right_662)->finalize, ((struct sNode*)right_662)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_656) { node_656 = come_decrement_ref_count2(node_656, ((struct sNode*)node_656)->finalize, ((struct sNode*)node_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value658,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value663) { __right_value663 = come_decrement_ref_count2(__right_value663, ((struct sNode*)__right_value663)->finalize, ((struct sNode*)__right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result387__;
            if(right_662) { right_662 = come_decrement_ref_count2(right_662, ((struct sNode*)right_662)->finalize, ((struct sNode*)right_662)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_665=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_666=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_665;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1794, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value666=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1794, "struct sAddNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_656),(struct sNode*)come_increment_ref_count(right_666),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value667=_inf_value11));
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_656) { node_656 = come_decrement_ref_count2(node_656, ((struct sNode*)node_656)->finalize, ((struct sNode*)node_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value666,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value667) { __right_value667 = come_decrement_ref_count2(__right_value667, ((struct sNode*)__right_value667)->finalize, ((struct sNode*)__right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result388__;
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_667=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_668=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_667;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1806, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value670=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1806, "struct sSubNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_656),(struct sNode*)come_increment_ref_count(right_668),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value671=_inf_value12));
            if(right_668) { right_668 = come_decrement_ref_count2(right_668, ((struct sNode*)right_668)->finalize, ((struct sNode*)right_668)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_656) { node_656 = come_decrement_ref_count2(node_656, ((struct sNode*)node_656)->finalize, ((struct sNode*)node_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value670,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value671) { __right_value671 = come_decrement_ref_count2(__right_value671, ((struct sNode*)__right_value671)->finalize, ((struct sNode*)__right_value671)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result389__;
            if(right_668) { right_668 = come_decrement_ref_count2(right_668, ((struct sNode*)right_668)->finalize, ((struct sNode*)right_668)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result390__ = gComeFunResultObject = __result_obj__ = node_656;
    if(node_656) { node_656 = come_decrement_ref_count2(node_656, ((struct sNode*)node_656)->finalize, ((struct sNode*)node_656)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__=(void*)0;
struct sAddNode* __result382__;
void* __right_value651 = (void*)0;
struct sAddNode* result_660;
void* __right_value652 = (void*)0;
char* __dec_obj285;
void* __right_value653 = (void*)0;
struct sNode* __dec_obj286;
void* __right_value654 = (void*)0;
struct sNode* __dec_obj287;
struct sAddNode* __result383__;
    if(    self==(void*)0) {
        __result382__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    result_660=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode", sAddNode_finalize, sAddNode_clone, sAddNode_get_hash_key, sAddNode_equals));
    if(    self!=((void*)0)) {
        result_660->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj285=result_660->sname;
        result_660->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_660->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj286=result_660->mLeft;
        result_660->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj287=result_660->mRight;
        result_660->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_660->mQuote=self->mQuote;
    }
    __result383__ = gComeFunResultObject = __result_obj__ = result_660;
    come_call_finalizer3(result_660,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static unsigned int sAddNode_get_hash_key(struct sAddNode* self){
unsigned int result_659;
    result_659=0;
    result_659+=int_get_hash_key(((int)self->sline));
    result_659+=int_get_hash_key(((int)self->sname));
    result_659+=int_get_hash_key(((int)self->sline_real));
    result_659+=int_get_hash_key(((int)self->mLeft));
    result_659+=int_get_hash_key(((int)self->mRight));
    result_659+=int_get_hash_key(((int)self->mQuote));
    return result_659;
}

static _Bool sAddNode_equals(struct sAddNode* left, struct sAddNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__=(void*)0;
struct sSubNode* __result385__;
void* __right_value659 = (void*)0;
struct sSubNode* result_664;
void* __right_value660 = (void*)0;
char* __dec_obj288;
void* __right_value661 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value662 = (void*)0;
struct sNode* __dec_obj290;
struct sSubNode* __result386__;
    if(    self==(void*)0) {
        __result385__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    result_664=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode", sSubNode_finalize, sSubNode_clone, sSubNode_get_hash_key, sSubNode_equals));
    if(    self!=((void*)0)) {
        result_664->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj288=result_664->sname;
        result_664->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj289=result_664->mLeft;
        result_664->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj290=result_664->mRight;
        result_664->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_664->mQuote=self->mQuote;
    }
    __result386__ = gComeFunResultObject = __result_obj__ = result_664;
    come_call_finalizer3(result_664,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static unsigned int sSubNode_get_hash_key(struct sSubNode* self){
unsigned int result_663;
    result_663=0;
    result_663+=int_get_hash_key(((int)self->sline));
    result_663+=int_get_hash_key(((int)self->sname));
    result_663+=int_get_hash_key(((int)self->sline_real));
    result_663+=int_get_hash_key(((int)self->mLeft));
    result_663+=int_get_hash_key(((int)self->mRight));
    result_663+=int_get_hash_key(((int)self->mQuote));
    return result_663;
}

static _Bool sSubNode_equals(struct sSubNode* left, struct sSubNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value672 = (void*)0;
struct sNode* node_669;
int sline_real_670;
void* __right_value673 = (void*)0;
struct sNode* right_671;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value680 = (void*)0;
struct sNode* __result393__;
int sline_real_674;
void* __right_value681 = (void*)0;
struct sNode* right_675;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value688 = (void*)0;
struct sNode* __result396__;
int sline_real_678;
void* __right_value689 = (void*)0;
struct sNode* right_679;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value692 = (void*)0;
struct sNode* __result397__;
int sline_real_680;
void* __right_value693 = (void*)0;
struct sNode* right_681;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value696 = (void*)0;
struct sNode* __result398__;
struct sNode* __result399__;
    parse_sharp_v5(info);
    node_669=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_670=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_671=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_670;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1836, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value675=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1836, "struct sLShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_669),(struct sNode*)come_increment_ref_count(right_671),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value680=_inf_value13));
            if(right_671) { right_671 = come_decrement_ref_count2(right_671, ((struct sNode*)right_671)->finalize, ((struct sNode*)right_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value675,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value680) { __right_value680 = come_decrement_ref_count2(__right_value680, ((struct sNode*)__right_value680)->finalize, ((struct sNode*)__right_value680)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result393__;
            if(right_671) { right_671 = come_decrement_ref_count2(right_671, ((struct sNode*)right_671)->finalize, ((struct sNode*)right_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_674=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_675=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_674;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1847, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value683=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1847, "struct sRShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_669),(struct sNode*)come_increment_ref_count(right_675),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __result396__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value688=_inf_value14));
            if(right_675) { right_675 = come_decrement_ref_count2(right_675, ((struct sNode*)right_675)->finalize, ((struct sNode*)right_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value683,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value688) { __right_value688 = come_decrement_ref_count2(__right_value688, ((struct sNode*)__right_value688)->finalize, ((struct sNode*)__right_value688)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result396__;
            if(right_675) { right_675 = come_decrement_ref_count2(right_675, ((struct sNode*)right_675)->finalize, ((struct sNode*)right_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_678=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_679=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_678;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1858, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value691=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1858, "struct sLShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_669),(struct sNode*)come_increment_ref_count(right_679),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __result397__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value692=_inf_value15));
            if(right_679) { right_679 = come_decrement_ref_count2(right_679, ((struct sNode*)right_679)->finalize, ((struct sNode*)right_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value691,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value692) { __right_value692 = come_decrement_ref_count2(__right_value692, ((struct sNode*)__right_value692)->finalize, ((struct sNode*)__right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result397__;
            if(right_679) { right_679 = come_decrement_ref_count2(right_679, ((struct sNode*)right_679)->finalize, ((struct sNode*)right_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_680=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_681=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_680;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1869, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value695=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1869, "struct sRShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_669),(struct sNode*)come_increment_ref_count(right_681),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __result398__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value696=_inf_value16));
            if(right_681) { right_681 = come_decrement_ref_count2(right_681, ((struct sNode*)right_681)->finalize, ((struct sNode*)right_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value695,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value696) { __right_value696 = come_decrement_ref_count2(__right_value696, ((struct sNode*)__right_value696)->finalize, ((struct sNode*)__right_value696)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result398__;
            if(right_681) { right_681 = come_decrement_ref_count2(right_681, ((struct sNode*)right_681)->finalize, ((struct sNode*)right_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result399__ = gComeFunResultObject = __result_obj__ = node_669;
    if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
struct sLShiftNode* __result391__;
void* __right_value676 = (void*)0;
struct sLShiftNode* result_673;
void* __right_value677 = (void*)0;
char* __dec_obj291;
void* __right_value678 = (void*)0;
struct sNode* __dec_obj292;
void* __right_value679 = (void*)0;
struct sNode* __dec_obj293;
struct sLShiftNode* __result392__;
    if(    self==(void*)0) {
        __result391__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    result_673=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode", sLShiftNode_finalize, sLShiftNode_clone, sLShiftNode_get_hash_key, sLShiftNode_equals));
    if(    self!=((void*)0)) {
        result_673->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj291=result_673->sname;
        result_673->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_673->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_673->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj292=result_673->mLeft;
        result_673->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj293=result_673->mRight;
        result_673->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result392__ = gComeFunResultObject = __result_obj__ = result_673;
    come_call_finalizer3(result_673,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static unsigned int sLShiftNode_get_hash_key(struct sLShiftNode* self){
unsigned int result_672;
    result_672=0;
    result_672+=int_get_hash_key(((int)self->sline));
    result_672+=int_get_hash_key(((int)self->sname));
    result_672+=int_get_hash_key(((int)self->sline_real));
    result_672+=int_get_hash_key(((int)self->mQuote));
    result_672+=int_get_hash_key(((int)self->mLeft));
    result_672+=int_get_hash_key(((int)self->mRight));
    return result_672;
}

static _Bool sLShiftNode_equals(struct sLShiftNode* left, struct sLShiftNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
struct sRShiftNode* __result394__;
void* __right_value684 = (void*)0;
struct sRShiftNode* result_677;
void* __right_value685 = (void*)0;
char* __dec_obj294;
void* __right_value686 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value687 = (void*)0;
struct sNode* __dec_obj296;
struct sRShiftNode* __result395__;
    if(    self==(void*)0) {
        __result394__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    result_677=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode", sRShiftNode_finalize, sRShiftNode_clone, sRShiftNode_get_hash_key, sRShiftNode_equals));
    if(    self!=((void*)0)) {
        result_677->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj294=result_677->sname;
        result_677->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_677->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_677->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj295=result_677->mLeft;
        result_677->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj296=result_677->mRight;
        result_677->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result395__ = gComeFunResultObject = __result_obj__ = result_677;
    come_call_finalizer3(result_677,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static unsigned int sRShiftNode_get_hash_key(struct sRShiftNode* self){
unsigned int result_676;
    result_676=0;
    result_676+=int_get_hash_key(((int)self->sline));
    result_676+=int_get_hash_key(((int)self->sname));
    result_676+=int_get_hash_key(((int)self->sline_real));
    result_676+=int_get_hash_key(((int)self->mQuote));
    result_676+=int_get_hash_key(((int)self->mLeft));
    result_676+=int_get_hash_key(((int)self->mRight));
    return result_676;
}

static _Bool sRShiftNode_equals(struct sRShiftNode* left, struct sRShiftNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value697 = (void*)0;
struct sNode* node_682;
int sline_real_683;
void* __right_value698 = (void*)0;
struct sNode* right_684;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value705 = (void*)0;
struct sNode* __result402__;
int sline_real_687;
void* __right_value706 = (void*)0;
struct sNode* right_688;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value713 = (void*)0;
struct sNode* __result405__;
int sline_real_691;
void* __right_value714 = (void*)0;
struct sNode* right_692;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value721 = (void*)0;
struct sNode* __result408__;
int sline_real_695;
void* __right_value722 = (void*)0;
struct sNode* right_696;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value729 = (void*)0;
struct sNode* __result411__;
int sline_real_699;
void* __right_value730 = (void*)0;
struct sNode* right_700;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value733 = (void*)0;
struct sNode* __result412__;
int sline_real_701;
void* __right_value734 = (void*)0;
struct sNode* right_702;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value737 = (void*)0;
struct sNode* __result413__;
int sline_real_703;
void* __right_value738 = (void*)0;
struct sNode* right_704;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value741 = (void*)0;
struct sNode* __result414__;
int sline_real_705;
void* __right_value742 = (void*)0;
struct sNode* right_706;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value745 = (void*)0;
struct sNode* __result415__;
struct sNode* __result416__;
    parse_sharp_v5(info);
    node_682=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_683=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_684=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_683;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1899, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value700=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1899, "struct sGtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_682),(struct sNode*)come_increment_ref_count(right_684),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result402__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value705=_inf_value17));
            if(right_684) { right_684 = come_decrement_ref_count2(right_684, ((struct sNode*)right_684)->finalize, ((struct sNode*)right_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value700,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value705) { __right_value705 = come_decrement_ref_count2(__right_value705, ((struct sNode*)__right_value705)->finalize, ((struct sNode*)__right_value705)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result402__;
            if(right_684) { right_684 = come_decrement_ref_count2(right_684, ((struct sNode*)right_684)->finalize, ((struct sNode*)right_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_687=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_688=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_687;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1910, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value708=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1910, "struct sLtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_682),(struct sNode*)come_increment_ref_count(right_688),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __result405__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value713=_inf_value18));
            if(right_688) { right_688 = come_decrement_ref_count2(right_688, ((struct sNode*)right_688)->finalize, ((struct sNode*)right_688)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value708,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value713) { __right_value713 = come_decrement_ref_count2(__right_value713, ((struct sNode*)__right_value713)->finalize, ((struct sNode*)__right_value713)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result405__;
            if(right_688) { right_688 = come_decrement_ref_count2(right_688, ((struct sNode*)right_688)->finalize, ((struct sNode*)right_688)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_691=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_692=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_691;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1921, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value716=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1921, "struct sGtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_682),(struct sNode*)come_increment_ref_count(right_692),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __result408__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value721=_inf_value19));
            if(right_692) { right_692 = come_decrement_ref_count2(right_692, ((struct sNode*)right_692)->finalize, ((struct sNode*)right_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value716,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value721) { __right_value721 = come_decrement_ref_count2(__right_value721, ((struct sNode*)__right_value721)->finalize, ((struct sNode*)__right_value721)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result408__;
            if(right_692) { right_692 = come_decrement_ref_count2(right_692, ((struct sNode*)right_692)->finalize, ((struct sNode*)right_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_695=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_696=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_695;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1932, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value724=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1932, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_682),(struct sNode*)come_increment_ref_count(right_696),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __result411__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value729=_inf_value20));
            if(right_696) { right_696 = come_decrement_ref_count2(right_696, ((struct sNode*)right_696)->finalize, ((struct sNode*)right_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value724,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value729) { __right_value729 = come_decrement_ref_count2(__right_value729, ((struct sNode*)__right_value729)->finalize, ((struct sNode*)__right_value729)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result411__;
            if(right_696) { right_696 = come_decrement_ref_count2(right_696, ((struct sNode*)right_696)->finalize, ((struct sNode*)right_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_699=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_700=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_699;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1943, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value732=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1943, "struct sGtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_682),(struct sNode*)come_increment_ref_count(right_700),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __result412__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value733=_inf_value21));
            if(right_700) { right_700 = come_decrement_ref_count2(right_700, ((struct sNode*)right_700)->finalize, ((struct sNode*)right_700)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value732,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value733) { __right_value733 = come_decrement_ref_count2(__right_value733, ((struct sNode*)__right_value733)->finalize, ((struct sNode*)__right_value733)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result412__;
            if(right_700) { right_700 = come_decrement_ref_count2(right_700, ((struct sNode*)right_700)->finalize, ((struct sNode*)right_700)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_701=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_702=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_701;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1954, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value736=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1954, "struct sLtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_682),(struct sNode*)come_increment_ref_count(right_702),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __result413__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value737=_inf_value22));
            if(right_702) { right_702 = come_decrement_ref_count2(right_702, ((struct sNode*)right_702)->finalize, ((struct sNode*)right_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value736,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value737) { __right_value737 = come_decrement_ref_count2(__right_value737, ((struct sNode*)__right_value737)->finalize, ((struct sNode*)__right_value737)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result413__;
            if(right_702) { right_702 = come_decrement_ref_count2(right_702, ((struct sNode*)right_702)->finalize, ((struct sNode*)right_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_703=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_704=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_703;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1965, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value740=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1965, "struct sGtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_682),(struct sNode*)come_increment_ref_count(right_704),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __result414__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value741=_inf_value23));
            if(right_704) { right_704 = come_decrement_ref_count2(right_704, ((struct sNode*)right_704)->finalize, ((struct sNode*)right_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value740,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value741) { __right_value741 = come_decrement_ref_count2(__right_value741, ((struct sNode*)__right_value741)->finalize, ((struct sNode*)__right_value741)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result414__;
            if(right_704) { right_704 = come_decrement_ref_count2(right_704, ((struct sNode*)right_704)->finalize, ((struct sNode*)right_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_705=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_706=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_705;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1976, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value744=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1976, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_682),(struct sNode*)come_increment_ref_count(right_706),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __result415__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value745=_inf_value24));
            if(right_706) { right_706 = come_decrement_ref_count2(right_706, ((struct sNode*)right_706)->finalize, ((struct sNode*)right_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value744,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value745) { __right_value745 = come_decrement_ref_count2(__right_value745, ((struct sNode*)__right_value745)->finalize, ((struct sNode*)__right_value745)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result415__;
            if(right_706) { right_706 = come_decrement_ref_count2(right_706, ((struct sNode*)right_706)->finalize, ((struct sNode*)right_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result416__ = gComeFunResultObject = __result_obj__ = node_682;
    if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result416__;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
struct sGtEqNode* __result400__;
void* __right_value701 = (void*)0;
struct sGtEqNode* result_686;
void* __right_value702 = (void*)0;
char* __dec_obj297;
void* __right_value703 = (void*)0;
struct sNode* __dec_obj298;
void* __right_value704 = (void*)0;
struct sNode* __dec_obj299;
struct sGtEqNode* __result401__;
    if(    self==(void*)0) {
        __result400__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    result_686=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode", sGtEqNode_finalize, sGtEqNode_clone, sGtEqNode_get_hash_key, sGtEqNode_equals));
    if(    self!=((void*)0)) {
        result_686->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj297=result_686->sname;
        result_686->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_686->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_686->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj298=result_686->mLeft;
        result_686->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj299=result_686->mRight;
        result_686->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result401__ = gComeFunResultObject = __result_obj__ = result_686;
    come_call_finalizer3(result_686,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static unsigned int sGtEqNode_get_hash_key(struct sGtEqNode* self){
unsigned int result_685;
    result_685=0;
    result_685+=int_get_hash_key(((int)self->sline));
    result_685+=int_get_hash_key(((int)self->sname));
    result_685+=int_get_hash_key(((int)self->sline_real));
    result_685+=int_get_hash_key(((int)self->mQuote));
    result_685+=int_get_hash_key(((int)self->mLeft));
    result_685+=int_get_hash_key(((int)self->mRight));
    return result_685;
}

static _Bool sGtEqNode_equals(struct sGtEqNode* left, struct sGtEqNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
struct sLtEqNode* __result403__;
void* __right_value709 = (void*)0;
struct sLtEqNode* result_690;
void* __right_value710 = (void*)0;
char* __dec_obj300;
void* __right_value711 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value712 = (void*)0;
struct sNode* __dec_obj302;
struct sLtEqNode* __result404__;
    if(    self==(void*)0) {
        __result403__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    result_690=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode", sLtEqNode_finalize, sLtEqNode_clone, sLtEqNode_get_hash_key, sLtEqNode_equals));
    if(    self!=((void*)0)) {
        result_690->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj300=result_690->sname;
        result_690->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_690->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_690->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj301=result_690->mLeft;
        result_690->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj302=result_690->mRight;
        result_690->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result404__ = gComeFunResultObject = __result_obj__ = result_690;
    come_call_finalizer3(result_690,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static unsigned int sLtEqNode_get_hash_key(struct sLtEqNode* self){
unsigned int result_689;
    result_689=0;
    result_689+=int_get_hash_key(((int)self->sline));
    result_689+=int_get_hash_key(((int)self->sname));
    result_689+=int_get_hash_key(((int)self->sline_real));
    result_689+=int_get_hash_key(((int)self->mQuote));
    result_689+=int_get_hash_key(((int)self->mLeft));
    result_689+=int_get_hash_key(((int)self->mRight));
    return result_689;
}

static _Bool sLtEqNode_equals(struct sLtEqNode* left, struct sLtEqNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__=(void*)0;
struct sGtNode* __result406__;
void* __right_value717 = (void*)0;
struct sGtNode* result_694;
void* __right_value718 = (void*)0;
char* __dec_obj303;
void* __right_value719 = (void*)0;
struct sNode* __dec_obj304;
void* __right_value720 = (void*)0;
struct sNode* __dec_obj305;
struct sGtNode* __result407__;
    if(    self==(void*)0) {
        __result406__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    result_694=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode", sGtNode_finalize, sGtNode_clone, sGtNode_get_hash_key, sGtNode_equals));
    if(    self!=((void*)0)) {
        result_694->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj303=result_694->sname;
        result_694->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_694->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_694->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj304=result_694->mLeft;
        result_694->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj305=result_694->mRight;
        result_694->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result407__ = gComeFunResultObject = __result_obj__ = result_694;
    come_call_finalizer3(result_694,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

static unsigned int sGtNode_get_hash_key(struct sGtNode* self){
unsigned int result_693;
    result_693=0;
    result_693+=int_get_hash_key(((int)self->sline));
    result_693+=int_get_hash_key(((int)self->sname));
    result_693+=int_get_hash_key(((int)self->sline_real));
    result_693+=int_get_hash_key(((int)self->mQuote));
    result_693+=int_get_hash_key(((int)self->mLeft));
    result_693+=int_get_hash_key(((int)self->mRight));
    return result_693;
}

static _Bool sGtNode_equals(struct sGtNode* left, struct sGtNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__=(void*)0;
struct sLtNode* __result409__;
void* __right_value725 = (void*)0;
struct sLtNode* result_698;
void* __right_value726 = (void*)0;
char* __dec_obj306;
void* __right_value727 = (void*)0;
struct sNode* __dec_obj307;
void* __right_value728 = (void*)0;
struct sNode* __dec_obj308;
struct sLtNode* __result410__;
    if(    self==(void*)0) {
        __result409__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    result_698=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode", sLtNode_finalize, sLtNode_clone, sLtNode_get_hash_key, sLtNode_equals));
    if(    self!=((void*)0)) {
        result_698->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj306=result_698->sname;
        result_698->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_698->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_698->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj307=result_698->mLeft;
        result_698->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj308=result_698->mRight;
        result_698->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result410__ = gComeFunResultObject = __result_obj__ = result_698;
    come_call_finalizer3(result_698,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

static unsigned int sLtNode_get_hash_key(struct sLtNode* self){
unsigned int result_697;
    result_697=0;
    result_697+=int_get_hash_key(((int)self->sline));
    result_697+=int_get_hash_key(((int)self->sname));
    result_697+=int_get_hash_key(((int)self->sline_real));
    result_697+=int_get_hash_key(((int)self->mQuote));
    result_697+=int_get_hash_key(((int)self->mLeft));
    result_697+=int_get_hash_key(((int)self->mRight));
    return result_697;
}

static _Bool sLtNode_equals(struct sLtNode* left, struct sLtNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value746 = (void*)0;
struct sNode* node_707;
int sline_real_708;
void* __right_value747 = (void*)0;
struct sNode* right_709;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value754 = (void*)0;
struct sNode* __result419__;
int sline_real_712;
void* __right_value755 = (void*)0;
struct sNode* right_713;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value762 = (void*)0;
struct sNode* __result422__;
int sline_real_716;
void* __right_value763 = (void*)0;
struct sNode* right_717;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value770 = (void*)0;
struct sNode* __result425__;
int sline_real_720;
void* __right_value771 = (void*)0;
struct sNode* right_721;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value778 = (void*)0;
struct sNode* __result428__;
int sline_real_724;
void* __right_value779 = (void*)0;
struct sNode* right_725;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value782 = (void*)0;
struct sNode* __result429__;
int sline_real_726;
void* __right_value783 = (void*)0;
struct sNode* right_727;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value786 = (void*)0;
struct sNode* __result430__;
int sline_real_728;
void* __right_value787 = (void*)0;
struct sNode* right_729;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value790 = (void*)0;
struct sNode* __result431__;
int sline_real_730;
void* __right_value791 = (void*)0;
struct sNode* right_731;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value794 = (void*)0;
struct sNode* __result432__;
struct sNode* __result433__;
    parse_sharp_v5(info);
    node_707=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_708=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_709=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_708;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2006, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value749=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2006, "struct sEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_707),(struct sNode*)come_increment_ref_count(right_709),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result419__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value754=_inf_value25));
            if(right_709) { right_709 = come_decrement_ref_count2(right_709, ((struct sNode*)right_709)->finalize, ((struct sNode*)right_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value749,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value754) { __right_value754 = come_decrement_ref_count2(__right_value754, ((struct sNode*)__right_value754)->finalize, ((struct sNode*)__right_value754)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result419__;
            if(right_709) { right_709 = come_decrement_ref_count2(right_709, ((struct sNode*)right_709)->finalize, ((struct sNode*)right_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_712=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_713=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_712;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2017, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value757=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2017, "struct sEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_707),(struct sNode*)come_increment_ref_count(right_713),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __result422__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value762=_inf_value26));
            if(right_713) { right_713 = come_decrement_ref_count2(right_713, ((struct sNode*)right_713)->finalize, ((struct sNode*)right_713)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value757,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value762) { __right_value762 = come_decrement_ref_count2(__right_value762, ((struct sNode*)__right_value762)->finalize, ((struct sNode*)__right_value762)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result422__;
            if(right_713) { right_713 = come_decrement_ref_count2(right_713, ((struct sNode*)right_713)->finalize, ((struct sNode*)right_713)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_716=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_717=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_716;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2028, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value765=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2028, "struct sNotEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_707),(struct sNode*)come_increment_ref_count(right_717),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __result425__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value770=_inf_value27));
            if(right_717) { right_717 = come_decrement_ref_count2(right_717, ((struct sNode*)right_717)->finalize, ((struct sNode*)right_717)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value765,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value770) { __right_value770 = come_decrement_ref_count2(__right_value770, ((struct sNode*)__right_value770)->finalize, ((struct sNode*)__right_value770)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result425__;
            if(right_717) { right_717 = come_decrement_ref_count2(right_717, ((struct sNode*)right_717)->finalize, ((struct sNode*)right_717)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_720=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_721=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_720;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2039, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value773=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2039, "struct sNotEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_707),(struct sNode*)come_increment_ref_count(right_721),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __result428__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value778=_inf_value28));
            if(right_721) { right_721 = come_decrement_ref_count2(right_721, ((struct sNode*)right_721)->finalize, ((struct sNode*)right_721)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value773,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value778) { __right_value778 = come_decrement_ref_count2(__right_value778, ((struct sNode*)__right_value778)->finalize, ((struct sNode*)__right_value778)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result428__;
            if(right_721) { right_721 = come_decrement_ref_count2(right_721, ((struct sNode*)right_721)->finalize, ((struct sNode*)right_721)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_724=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_725=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_724;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2050, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value781=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2050, "struct sEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_707),(struct sNode*)come_increment_ref_count(right_725),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __result429__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value782=_inf_value29));
            if(right_725) { right_725 = come_decrement_ref_count2(right_725, ((struct sNode*)right_725)->finalize, ((struct sNode*)right_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value781,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value782) { __right_value782 = come_decrement_ref_count2(__right_value782, ((struct sNode*)__right_value782)->finalize, ((struct sNode*)__right_value782)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result429__;
            if(right_725) { right_725 = come_decrement_ref_count2(right_725, ((struct sNode*)right_725)->finalize, ((struct sNode*)right_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_726=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_727=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_726;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2061, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value785=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2061, "struct sEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_707),(struct sNode*)come_increment_ref_count(right_727),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __result430__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value786=_inf_value30));
            if(right_727) { right_727 = come_decrement_ref_count2(right_727, ((struct sNode*)right_727)->finalize, ((struct sNode*)right_727)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value785,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value786) { __right_value786 = come_decrement_ref_count2(__right_value786, ((struct sNode*)__right_value786)->finalize, ((struct sNode*)__right_value786)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result430__;
            if(right_727) { right_727 = come_decrement_ref_count2(right_727, ((struct sNode*)right_727)->finalize, ((struct sNode*)right_727)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_728=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_729=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_728;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2072, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value789=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2072, "struct sNotEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_707),(struct sNode*)come_increment_ref_count(right_729),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __result431__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value790=_inf_value31));
            if(right_729) { right_729 = come_decrement_ref_count2(right_729, ((struct sNode*)right_729)->finalize, ((struct sNode*)right_729)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value789,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value790) { __right_value790 = come_decrement_ref_count2(__right_value790, ((struct sNode*)__right_value790)->finalize, ((struct sNode*)__right_value790)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result431__;
            if(right_729) { right_729 = come_decrement_ref_count2(right_729, ((struct sNode*)right_729)->finalize, ((struct sNode*)right_729)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_730=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_731=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_730;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2083, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value793=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2083, "struct sNotEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_707),(struct sNode*)come_increment_ref_count(right_731),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __result432__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value794=_inf_value32));
            if(right_731) { right_731 = come_decrement_ref_count2(right_731, ((struct sNode*)right_731)->finalize, ((struct sNode*)right_731)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value793,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value794) { __right_value794 = come_decrement_ref_count2(__right_value794, ((struct sNode*)__right_value794)->finalize, ((struct sNode*)__right_value794)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result432__;
            if(right_731) { right_731 = come_decrement_ref_count2(right_731, ((struct sNode*)right_731)->finalize, ((struct sNode*)right_731)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result433__ = gComeFunResultObject = __result_obj__ = node_707;
    if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result433__;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__=(void*)0;
struct sEq2Node* __result417__;
void* __right_value750 = (void*)0;
struct sEq2Node* result_711;
void* __right_value751 = (void*)0;
char* __dec_obj309;
void* __right_value752 = (void*)0;
struct sNode* __dec_obj310;
void* __right_value753 = (void*)0;
struct sNode* __dec_obj311;
struct sEq2Node* __result418__;
    if(    self==(void*)0) {
        __result417__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result417__;
    }
    result_711=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node", sEq2Node_finalize, sEq2Node_clone, sEq2Node_get_hash_key, sEq2Node_equals));
    if(    self!=((void*)0)) {
        result_711->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj309=result_711->sname;
        result_711->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_711->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_711->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj310=result_711->mLeft;
        result_711->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj311=result_711->mRight;
        result_711->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result418__ = gComeFunResultObject = __result_obj__ = result_711;
    come_call_finalizer3(result_711,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

static unsigned int sEq2Node_get_hash_key(struct sEq2Node* self){
unsigned int result_710;
    result_710=0;
    result_710+=int_get_hash_key(((int)self->sline));
    result_710+=int_get_hash_key(((int)self->sname));
    result_710+=int_get_hash_key(((int)self->sline_real));
    result_710+=int_get_hash_key(((int)self->mQuote));
    result_710+=int_get_hash_key(((int)self->mLeft));
    result_710+=int_get_hash_key(((int)self->mRight));
    return result_710;
}

static _Bool sEq2Node_equals(struct sEq2Node* left, struct sEq2Node* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__=(void*)0;
struct sEqNode* __result420__;
void* __right_value758 = (void*)0;
struct sEqNode* result_715;
void* __right_value759 = (void*)0;
char* __dec_obj312;
void* __right_value760 = (void*)0;
struct sNode* __dec_obj313;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj314;
struct sEqNode* __result421__;
    if(    self==(void*)0) {
        __result420__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result420__;
    }
    result_715=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode", sEqNode_finalize, sEqNode_clone, sEqNode_get_hash_key, sEqNode_equals));
    if(    self!=((void*)0)) {
        result_715->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_715->sname;
        result_715->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_715->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_715->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj313=result_715->mLeft;
        result_715->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj314=result_715->mRight;
        result_715->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result421__ = gComeFunResultObject = __result_obj__ = result_715;
    come_call_finalizer3(result_715,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

static unsigned int sEqNode_get_hash_key(struct sEqNode* self){
unsigned int result_714;
    result_714=0;
    result_714+=int_get_hash_key(((int)self->sline));
    result_714+=int_get_hash_key(((int)self->sname));
    result_714+=int_get_hash_key(((int)self->sline_real));
    result_714+=int_get_hash_key(((int)self->mQuote));
    result_714+=int_get_hash_key(((int)self->mLeft));
    result_714+=int_get_hash_key(((int)self->mRight));
    return result_714;
}

static _Bool sEqNode_equals(struct sEqNode* left, struct sEqNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
struct sNotEq2Node* __result423__;
void* __right_value766 = (void*)0;
struct sNotEq2Node* result_719;
void* __right_value767 = (void*)0;
char* __dec_obj315;
void* __right_value768 = (void*)0;
struct sNode* __dec_obj316;
void* __right_value769 = (void*)0;
struct sNode* __dec_obj317;
struct sNotEq2Node* __result424__;
    if(    self==(void*)0) {
        __result423__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result423__;
    }
    result_719=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node", sNotEq2Node_finalize, sNotEq2Node_clone, sNotEq2Node_get_hash_key, sNotEq2Node_equals));
    if(    self!=((void*)0)) {
        result_719->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_719->sname;
        result_719->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_719->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_719->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj316=result_719->mLeft;
        result_719->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj317=result_719->mRight;
        result_719->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result424__ = gComeFunResultObject = __result_obj__ = result_719;
    come_call_finalizer3(result_719,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result424__;
}

static unsigned int sNotEq2Node_get_hash_key(struct sNotEq2Node* self){
unsigned int result_718;
    result_718=0;
    result_718+=int_get_hash_key(((int)self->sline));
    result_718+=int_get_hash_key(((int)self->sname));
    result_718+=int_get_hash_key(((int)self->sline_real));
    result_718+=int_get_hash_key(((int)self->mQuote));
    result_718+=int_get_hash_key(((int)self->mLeft));
    result_718+=int_get_hash_key(((int)self->mRight));
    return result_718;
}

static _Bool sNotEq2Node_equals(struct sNotEq2Node* left, struct sNotEq2Node* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
struct sNotEqNode* __result426__;
void* __right_value774 = (void*)0;
struct sNotEqNode* result_723;
void* __right_value775 = (void*)0;
char* __dec_obj318;
void* __right_value776 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value777 = (void*)0;
struct sNode* __dec_obj320;
struct sNotEqNode* __result427__;
    if(    self==(void*)0) {
        __result426__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result426__;
    }
    result_723=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode", sNotEqNode_finalize, sNotEqNode_clone, sNotEqNode_get_hash_key, sNotEqNode_equals));
    if(    self!=((void*)0)) {
        result_723->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj318=result_723->sname;
        result_723->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_723->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_723->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj319=result_723->mLeft;
        result_723->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj320=result_723->mRight;
        result_723->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result427__ = gComeFunResultObject = __result_obj__ = result_723;
    come_call_finalizer3(result_723,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result427__;
}

static unsigned int sNotEqNode_get_hash_key(struct sNotEqNode* self){
unsigned int result_722;
    result_722=0;
    result_722+=int_get_hash_key(((int)self->sline));
    result_722+=int_get_hash_key(((int)self->sname));
    result_722+=int_get_hash_key(((int)self->sline_real));
    result_722+=int_get_hash_key(((int)self->mQuote));
    result_722+=int_get_hash_key(((int)self->mLeft));
    result_722+=int_get_hash_key(((int)self->mRight));
    return result_722;
}

static _Bool sNotEqNode_equals(struct sNotEqNode* left, struct sNotEqNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value795 = (void*)0;
struct sNode* node_732;
int sline_real_733;
void* __right_value796 = (void*)0;
struct sNode* right_734;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value803 = (void*)0;
struct sNode* __result436__;
int sline_real_737;
void* __right_value804 = (void*)0;
struct sNode* right_738;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value807 = (void*)0;
struct sNode* __result437__;
struct sNode* __result438__;
    parse_sharp_v5(info);
    node_732=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_732->terminated(node_732->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real_733=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_734=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_733;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2113, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value798=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2113, "struct sAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_732),(struct sNode*)come_increment_ref_count(right_734),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result436__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value803=_inf_value33));
            if(right_734) { right_734 = come_decrement_ref_count2(right_734, ((struct sNode*)right_734)->finalize, ((struct sNode*)right_734)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_732) { node_732 = come_decrement_ref_count2(node_732, ((struct sNode*)node_732)->finalize, ((struct sNode*)node_732)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value798,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value803) { __right_value803 = come_decrement_ref_count2(__right_value803, ((struct sNode*)__right_value803)->finalize, ((struct sNode*)__right_value803)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result436__;
            if(right_734) { right_734 = come_decrement_ref_count2(right_734, ((struct sNode*)right_734)->finalize, ((struct sNode*)right_734)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_732->terminated(node_732->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_737=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_738=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_737;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2124, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value806=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2124, "struct sAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_732),(struct sNode*)come_increment_ref_count(right_738),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __result437__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value807=_inf_value34));
            if(right_738) { right_738 = come_decrement_ref_count2(right_738, ((struct sNode*)right_738)->finalize, ((struct sNode*)right_738)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_732) { node_732 = come_decrement_ref_count2(node_732, ((struct sNode*)node_732)->finalize, ((struct sNode*)node_732)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value806,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value807) { __right_value807 = come_decrement_ref_count2(__right_value807, ((struct sNode*)__right_value807)->finalize, ((struct sNode*)__right_value807)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result437__;
            if(right_738) { right_738 = come_decrement_ref_count2(right_738, ((struct sNode*)right_738)->finalize, ((struct sNode*)right_738)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result438__ = gComeFunResultObject = __result_obj__ = node_732;
    if(node_732) { node_732 = come_decrement_ref_count2(node_732, ((struct sNode*)node_732)->finalize, ((struct sNode*)node_732)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result438__;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__=(void*)0;
struct sAndNode* __result434__;
void* __right_value799 = (void*)0;
struct sAndNode* result_736;
void* __right_value800 = (void*)0;
char* __dec_obj321;
void* __right_value801 = (void*)0;
struct sNode* __dec_obj322;
void* __right_value802 = (void*)0;
struct sNode* __dec_obj323;
struct sAndNode* __result435__;
    if(    self==(void*)0) {
        __result434__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result434__;
    }
    result_736=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode", sAndNode_finalize, sAndNode_clone, sAndNode_get_hash_key, sAndNode_equals));
    if(    self!=((void*)0)) {
        result_736->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj321=result_736->sname;
        result_736->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_736->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_736->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj322=result_736->mLeft;
        result_736->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj323=result_736->mRight;
        result_736->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj323) { __dec_obj323 = come_decrement_ref_count2(__dec_obj323, ((struct sNode*)__dec_obj323)->finalize, ((struct sNode*)__dec_obj323)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result435__ = gComeFunResultObject = __result_obj__ = result_736;
    come_call_finalizer3(result_736,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

static unsigned int sAndNode_get_hash_key(struct sAndNode* self){
unsigned int result_735;
    result_735=0;
    result_735+=int_get_hash_key(((int)self->sline));
    result_735+=int_get_hash_key(((int)self->sname));
    result_735+=int_get_hash_key(((int)self->sline_real));
    result_735+=int_get_hash_key(((int)self->mQuote));
    result_735+=int_get_hash_key(((int)self->mLeft));
    result_735+=int_get_hash_key(((int)self->mRight));
    return result_735;
}

static _Bool sAndNode_equals(struct sAndNode* left, struct sAndNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value808 = (void*)0;
struct sNode* node_739;
int sline_real_740;
void* __right_value809 = (void*)0;
struct sNode* right_741;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value816 = (void*)0;
struct sNode* __result441__;
int sline_real_744;
void* __right_value817 = (void*)0;
struct sNode* right_745;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value820 = (void*)0;
struct sNode* __result442__;
struct sNode* __result443__;
    parse_sharp_v5(info);
    node_739=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real_740=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_741=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_740;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2154, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value811=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2154, "struct sXOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_739),(struct sNode*)come_increment_ref_count(right_741),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result441__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value816=_inf_value35));
            if(right_741) { right_741 = come_decrement_ref_count2(right_741, ((struct sNode*)right_741)->finalize, ((struct sNode*)right_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_739) { node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value811,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value816) { __right_value816 = come_decrement_ref_count2(__right_value816, ((struct sNode*)__right_value816)->finalize, ((struct sNode*)__right_value816)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result441__;
            if(right_741) { right_741 = come_decrement_ref_count2(right_741, ((struct sNode*)right_741)->finalize, ((struct sNode*)right_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_744=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_745=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_744;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2165, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value819=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2165, "struct sXOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_739),(struct sNode*)come_increment_ref_count(right_745),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __result442__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value820=_inf_value36));
            if(right_745) { right_745 = come_decrement_ref_count2(right_745, ((struct sNode*)right_745)->finalize, ((struct sNode*)right_745)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_739) { node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value819,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value820) { __right_value820 = come_decrement_ref_count2(__right_value820, ((struct sNode*)__right_value820)->finalize, ((struct sNode*)__right_value820)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result442__;
            if(right_745) { right_745 = come_decrement_ref_count2(right_745, ((struct sNode*)right_745)->finalize, ((struct sNode*)right_745)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result443__ = gComeFunResultObject = __result_obj__ = node_739;
    if(node_739) { node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result443__;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__=(void*)0;
struct sXOrNode* __result439__;
void* __right_value812 = (void*)0;
struct sXOrNode* result_743;
void* __right_value813 = (void*)0;
char* __dec_obj324;
void* __right_value814 = (void*)0;
struct sNode* __dec_obj325;
void* __right_value815 = (void*)0;
struct sNode* __dec_obj326;
struct sXOrNode* __result440__;
    if(    self==(void*)0) {
        __result439__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result439__;
    }
    result_743=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode", sXOrNode_finalize, sXOrNode_clone, sXOrNode_get_hash_key, sXOrNode_equals));
    if(    self!=((void*)0)) {
        result_743->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj324=result_743->sname;
        result_743->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_743->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_743->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj325=result_743->mLeft;
        result_743->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj326=result_743->mRight;
        result_743->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result440__ = gComeFunResultObject = __result_obj__ = result_743;
    come_call_finalizer3(result_743,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result440__;
}

static unsigned int sXOrNode_get_hash_key(struct sXOrNode* self){
unsigned int result_742;
    result_742=0;
    result_742+=int_get_hash_key(((int)self->sline));
    result_742+=int_get_hash_key(((int)self->sname));
    result_742+=int_get_hash_key(((int)self->sline_real));
    result_742+=int_get_hash_key(((int)self->mQuote));
    result_742+=int_get_hash_key(((int)self->mLeft));
    result_742+=int_get_hash_key(((int)self->mRight));
    return result_742;
}

static _Bool sXOrNode_equals(struct sXOrNode* left, struct sXOrNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value821 = (void*)0;
struct sNode* node_746;
int sline_real_747;
void* __right_value822 = (void*)0;
struct sNode* right_748;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value829 = (void*)0;
struct sNode* __result446__;
int sline_real_751;
void* __right_value830 = (void*)0;
struct sNode* right_752;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value833 = (void*)0;
struct sNode* __result447__;
struct sNode* __result448__;
    parse_sharp_v5(info);
    node_746=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real_747=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_748=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_747;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2195, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value824=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2195, "struct sOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_746),(struct sNode*)come_increment_ref_count(right_748),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value829=_inf_value37));
            if(right_748) { right_748 = come_decrement_ref_count2(right_748, ((struct sNode*)right_748)->finalize, ((struct sNode*)right_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_746) { node_746 = come_decrement_ref_count2(node_746, ((struct sNode*)node_746)->finalize, ((struct sNode*)node_746)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value824,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value829) { __right_value829 = come_decrement_ref_count2(__right_value829, ((struct sNode*)__right_value829)->finalize, ((struct sNode*)__right_value829)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result446__;
            if(right_748) { right_748 = come_decrement_ref_count2(right_748, ((struct sNode*)right_748)->finalize, ((struct sNode*)right_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_751=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_752=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_751;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2206, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value832=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2206, "struct sOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_746),(struct sNode*)come_increment_ref_count(right_752),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __result447__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value833=_inf_value38));
            if(right_752) { right_752 = come_decrement_ref_count2(right_752, ((struct sNode*)right_752)->finalize, ((struct sNode*)right_752)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_746) { node_746 = come_decrement_ref_count2(node_746, ((struct sNode*)node_746)->finalize, ((struct sNode*)node_746)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value832,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value833) { __right_value833 = come_decrement_ref_count2(__right_value833, ((struct sNode*)__right_value833)->finalize, ((struct sNode*)__right_value833)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result447__;
            if(right_752) { right_752 = come_decrement_ref_count2(right_752, ((struct sNode*)right_752)->finalize, ((struct sNode*)right_752)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result448__ = gComeFunResultObject = __result_obj__ = node_746;
    if(node_746) { node_746 = come_decrement_ref_count2(node_746, ((struct sNode*)node_746)->finalize, ((struct sNode*)node_746)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result448__;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__=(void*)0;
struct sOrNode* __result444__;
void* __right_value825 = (void*)0;
struct sOrNode* result_750;
void* __right_value826 = (void*)0;
char* __dec_obj327;
void* __right_value827 = (void*)0;
struct sNode* __dec_obj328;
void* __right_value828 = (void*)0;
struct sNode* __dec_obj329;
struct sOrNode* __result445__;
    if(    self==(void*)0) {
        __result444__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result444__;
    }
    result_750=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode", sOrNode_finalize, sOrNode_clone, sOrNode_get_hash_key, sOrNode_equals));
    if(    self!=((void*)0)) {
        result_750->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj327=result_750->sname;
        result_750->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_750->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_750->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj328=result_750->mLeft;
        result_750->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj329=result_750->mRight;
        result_750->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result445__ = gComeFunResultObject = __result_obj__ = result_750;
    come_call_finalizer3(result_750,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result445__;
}

static unsigned int sOrNode_get_hash_key(struct sOrNode* self){
unsigned int result_749;
    result_749=0;
    result_749+=int_get_hash_key(((int)self->sline));
    result_749+=int_get_hash_key(((int)self->sname));
    result_749+=int_get_hash_key(((int)self->sline_real));
    result_749+=int_get_hash_key(((int)self->mQuote));
    result_749+=int_get_hash_key(((int)self->mLeft));
    result_749+=int_get_hash_key(((int)self->mRight));
    return result_749;
}

static _Bool sOrNode_equals(struct sOrNode* left, struct sOrNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value834 = (void*)0;
struct sNode* node_753;
int sline_real_754;
void* __right_value835 = (void*)0;
struct sNode* right_755;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value842 = (void*)0;
struct sNode* __result451__;
int sline_real_758;
void* __right_value843 = (void*)0;
struct sNode* right_759;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value846 = (void*)0;
struct sNode* __result452__;
struct sNode* __result453__;
    parse_sharp_v5(info);
    node_753=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real_754=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_755=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_754;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2236, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value837=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2236, "struct sAndAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_753),(struct sNode*)come_increment_ref_count(right_755),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result451__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value842=_inf_value39));
            if(right_755) { right_755 = come_decrement_ref_count2(right_755, ((struct sNode*)right_755)->finalize, ((struct sNode*)right_755)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_753) { node_753 = come_decrement_ref_count2(node_753, ((struct sNode*)node_753)->finalize, ((struct sNode*)node_753)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value837,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value842) { __right_value842 = come_decrement_ref_count2(__right_value842, ((struct sNode*)__right_value842)->finalize, ((struct sNode*)__right_value842)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result451__;
            if(right_755) { right_755 = come_decrement_ref_count2(right_755, ((struct sNode*)right_755)->finalize, ((struct sNode*)right_755)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_758=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_759=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_758;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2247, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value845=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2247, "struct sAndAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_753),(struct sNode*)come_increment_ref_count(right_759),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __result452__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=_inf_value40));
            if(right_759) { right_759 = come_decrement_ref_count2(right_759, ((struct sNode*)right_759)->finalize, ((struct sNode*)right_759)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_753) { node_753 = come_decrement_ref_count2(node_753, ((struct sNode*)node_753)->finalize, ((struct sNode*)node_753)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value845,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value846) { __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result452__;
            if(right_759) { right_759 = come_decrement_ref_count2(right_759, ((struct sNode*)right_759)->finalize, ((struct sNode*)right_759)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result453__ = gComeFunResultObject = __result_obj__ = node_753;
    if(node_753) { node_753 = come_decrement_ref_count2(node_753, ((struct sNode*)node_753)->finalize, ((struct sNode*)node_753)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result453__;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
struct sAndAndNode* __result449__;
void* __right_value838 = (void*)0;
struct sAndAndNode* result_757;
void* __right_value839 = (void*)0;
char* __dec_obj330;
void* __right_value840 = (void*)0;
struct sNode* __dec_obj331;
void* __right_value841 = (void*)0;
struct sNode* __dec_obj332;
struct sAndAndNode* __result450__;
    if(    self==(void*)0) {
        __result449__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result449__;
    }
    result_757=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode", sAndAndNode_finalize, sAndAndNode_clone, sAndAndNode_get_hash_key, sAndAndNode_equals));
    if(    self!=((void*)0)) {
        result_757->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj330=result_757->sname;
        result_757->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_757->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_757->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj331=result_757->mLeft;
        result_757->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj332=result_757->mRight;
        result_757->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj332) { __dec_obj332 = come_decrement_ref_count2(__dec_obj332, ((struct sNode*)__dec_obj332)->finalize, ((struct sNode*)__dec_obj332)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result450__ = gComeFunResultObject = __result_obj__ = result_757;
    come_call_finalizer3(result_757,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result450__;
}

static unsigned int sAndAndNode_get_hash_key(struct sAndAndNode* self){
unsigned int result_756;
    result_756=0;
    result_756+=int_get_hash_key(((int)self->sline));
    result_756+=int_get_hash_key(((int)self->sname));
    result_756+=int_get_hash_key(((int)self->sline_real));
    result_756+=int_get_hash_key(((int)self->mQuote));
    result_756+=int_get_hash_key(((int)self->mLeft));
    result_756+=int_get_hash_key(((int)self->mRight));
    return result_756;
}

static _Bool sAndAndNode_equals(struct sAndAndNode* left, struct sAndAndNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value847 = (void*)0;
struct sNode* node_760;
int sline_real_761;
void* __right_value848 = (void*)0;
struct sNode* right_762;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value855 = (void*)0;
struct sNode* __result456__;
int sline_real_765;
void* __right_value856 = (void*)0;
struct sNode* right_766;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value859 = (void*)0;
struct sNode* __result457__;
struct sNode* __result458__;
    parse_sharp_v5(info);
    node_760=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real_761=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_762=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_761;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2277, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value850=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2277, "struct sOrOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_760),(struct sNode*)come_increment_ref_count(right_762),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result456__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value855=_inf_value41));
            if(right_762) { right_762 = come_decrement_ref_count2(right_762, ((struct sNode*)right_762)->finalize, ((struct sNode*)right_762)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_760) { node_760 = come_decrement_ref_count2(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value850,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value855) { __right_value855 = come_decrement_ref_count2(__right_value855, ((struct sNode*)__right_value855)->finalize, ((struct sNode*)__right_value855)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result456__;
            if(right_762) { right_762 = come_decrement_ref_count2(right_762, ((struct sNode*)right_762)->finalize, ((struct sNode*)right_762)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_765=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_766=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_765;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2288, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value858=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2288, "struct sOrOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_760),(struct sNode*)come_increment_ref_count(right_766),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __result457__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value859=_inf_value42));
            if(right_766) { right_766 = come_decrement_ref_count2(right_766, ((struct sNode*)right_766)->finalize, ((struct sNode*)right_766)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_760) { node_760 = come_decrement_ref_count2(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value858,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value859) { __right_value859 = come_decrement_ref_count2(__right_value859, ((struct sNode*)__right_value859)->finalize, ((struct sNode*)__right_value859)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result457__;
            if(right_766) { right_766 = come_decrement_ref_count2(right_766, ((struct sNode*)right_766)->finalize, ((struct sNode*)right_766)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result458__ = gComeFunResultObject = __result_obj__ = node_760;
    if(node_760) { node_760 = come_decrement_ref_count2(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result458__;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
struct sOrOrNode* __result454__;
void* __right_value851 = (void*)0;
struct sOrOrNode* result_764;
void* __right_value852 = (void*)0;
char* __dec_obj333;
void* __right_value853 = (void*)0;
struct sNode* __dec_obj334;
void* __right_value854 = (void*)0;
struct sNode* __dec_obj335;
struct sOrOrNode* __result455__;
    if(    self==(void*)0) {
        __result454__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result454__;
    }
    result_764=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode", sOrOrNode_finalize, sOrOrNode_clone, sOrOrNode_get_hash_key, sOrOrNode_equals));
    if(    self!=((void*)0)) {
        result_764->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj333=result_764->sname;
        result_764->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_764->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_764->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj334=result_764->mLeft;
        result_764->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj335=result_764->mRight;
        result_764->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result455__ = gComeFunResultObject = __result_obj__ = result_764;
    come_call_finalizer3(result_764,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result455__;
}

static unsigned int sOrOrNode_get_hash_key(struct sOrOrNode* self){
unsigned int result_763;
    result_763=0;
    result_763+=int_get_hash_key(((int)self->sline));
    result_763+=int_get_hash_key(((int)self->sname));
    result_763+=int_get_hash_key(((int)self->sline_real));
    result_763+=int_get_hash_key(((int)self->mQuote));
    result_763+=int_get_hash_key(((int)self->mLeft));
    result_763+=int_get_hash_key(((int)self->mRight));
    return result_763;
}

static _Bool sOrOrNode_equals(struct sOrOrNode* left, struct sOrOrNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value860 = (void*)0;
struct sNode* node_767;
int sline_real_768;
void* __right_value861 = (void*)0;
struct sNode* node2_769;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value868 = (void*)0;
struct sNode* __result461__;
struct sNode* __result462__;
    parse_sharp_v5(info);
    node_767=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !info->no_comma&&*info->p==44) {
            info->p++;
            sline_real_768=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_769=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_768;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2318, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value863=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2318, "struct sCommaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_767),(struct sNode*)come_increment_ref_count(node2_769),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result461__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value868=_inf_value43));
            if(node2_769) { node2_769 = come_decrement_ref_count2(node2_769, ((struct sNode*)node2_769)->finalize, ((struct sNode*)node2_769)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_767) { node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value863,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value868) { __right_value868 = come_decrement_ref_count2(__right_value868, ((struct sNode*)__right_value868)->finalize, ((struct sNode*)__right_value868)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result461__;
            if(node2_769) { node2_769 = come_decrement_ref_count2(node2_769, ((struct sNode*)node2_769)->finalize, ((struct sNode*)node2_769)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result462__ = gComeFunResultObject = __result_obj__ = node_767;
    if(node_767) { node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result462__;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__=(void*)0;
struct sCommaNode* __result459__;
void* __right_value864 = (void*)0;
struct sCommaNode* result_771;
void* __right_value865 = (void*)0;
char* __dec_obj336;
void* __right_value866 = (void*)0;
struct sNode* __dec_obj337;
void* __right_value867 = (void*)0;
struct sNode* __dec_obj338;
struct sCommaNode* __result460__;
    if(    self==(void*)0) {
        __result459__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result459__;
    }
    result_771=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode", sCommaNode_finalize, sCommaNode_clone, sCommaNode_get_hash_key, sCommaNode_equals));
    if(    self!=((void*)0)) {
        result_771->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj336=result_771->sname;
        result_771->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_771->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj337=result_771->mLeft;
        result_771->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj338=result_771->mRight;
        result_771->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj338) { __dec_obj338 = come_decrement_ref_count2(__dec_obj338, ((struct sNode*)__dec_obj338)->finalize, ((struct sNode*)__dec_obj338)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result460__ = gComeFunResultObject = __result_obj__ = result_771;
    come_call_finalizer3(result_771,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result460__;
}

static unsigned int sCommaNode_get_hash_key(struct sCommaNode* self){
unsigned int result_770;
    result_770=0;
    result_770+=int_get_hash_key(((int)self->sline));
    result_770+=int_get_hash_key(((int)self->sname));
    result_770+=int_get_hash_key(((int)self->sline_real));
    result_770+=int_get_hash_key(((int)self->mLeft));
    result_770+=int_get_hash_key(((int)self->mRight));
    return result_770;
}

static _Bool sCommaNode_equals(struct sCommaNode* left, struct sCommaNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value869 = (void*)0;
struct sNode* node_772;
int sline_real_773;
struct sNode* value1_774;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value872 = (void*)0;
struct sNode* __dec_obj339;
_Bool no_label_775;
void* __right_value873 = (void*)0;
struct sNode* __dec_obj340;
void* __right_value874 = (void*)0;
struct sNode* value2_776;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value877 = (void*)0;
struct sNode* __result463__;
struct sNode* __result464__;
value1_774 = (void*)0;
    parse_sharp_v5(info);
    node_772=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==63) {
            info->p++;
            sline_real_773=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2349, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value871=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2349, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj339=value1_774;
                value1_774=(struct sNode*)come_increment_ref_count(_inf_value44);
                if(__dec_obj339) { __dec_obj339 = come_decrement_ref_count2(__dec_obj339, ((struct sNode*)__dec_obj339)->finalize, ((struct sNode*)__dec_obj339)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value871,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                no_label_775=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj340=value1_774;
                value1_774=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_label=no_label_775;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_776=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_773;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2367, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value876=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2367, "struct sConditionalNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_772),(struct sNode*)come_increment_ref_count(value1_774),(struct sNode*)come_increment_ref_count(value2_776),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result463__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value877=_inf_value45));
            if(value1_774) { value1_774 = come_decrement_ref_count2(value1_774, ((struct sNode*)value1_774)->finalize, ((struct sNode*)value1_774)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_776) { value2_776 = come_decrement_ref_count2(value2_776, ((struct sNode*)value2_776)->finalize, ((struct sNode*)value2_776)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_772) { node_772 = come_decrement_ref_count2(node_772, ((struct sNode*)node_772)->finalize, ((struct sNode*)node_772)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value876,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value877) { __right_value877 = come_decrement_ref_count2(__right_value877, ((struct sNode*)__right_value877)->finalize, ((struct sNode*)__right_value877)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result463__;
            if(value1_774) { value1_774 = come_decrement_ref_count2(value1_774, ((struct sNode*)value1_774)->finalize, ((struct sNode*)value1_774)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_776) { value2_776 = come_decrement_ref_count2(value2_776, ((struct sNode*)value2_776)->finalize, ((struct sNode*)value2_776)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result464__ = gComeFunResultObject = __result_obj__ = node_772;
    if(node_772) { node_772 = come_decrement_ref_count2(node_772, ((struct sNode*)node_772)->finalize, ((struct sNode*)node_772)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result464__;
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value878 = (void*)0;
struct sNode* node_777;
struct sNode* __result465__;
    parse_sharp_v5(info);
    node_777=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result465__ = gComeFunResultObject = __result_obj__ = node_777;
    if(node_777) { node_777 = come_decrement_ref_count2(node_777, ((struct sNode*)node_777)->finalize, ((struct sNode*)node_777)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result465__;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value881 = (void*)0;
struct sNode* __result466__;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value886 = (void*)0;
struct sNode* __result469__;
void* __right_value887 = (void*)0;
struct sNode* __result470__;
    if(    !gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2391, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value880=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2391, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result466__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value881=_inf_value46));
        come_call_finalizer3(__right_value880,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value881) { __right_value881 = come_decrement_ref_count2(__right_value881, ((struct sNode*)__right_value881)->finalize, ((struct sNode*)__right_value881)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result466__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")) {
        _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2394, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value883=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2394, "struct sNilNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sline_real=(void*)sNodeBase_sline_real;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result469__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value886=_inf_value47));
        come_call_finalizer3(__right_value883,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value886) { __right_value886 = come_decrement_ref_count2(__right_value886, ((struct sNode*)__right_value886)->finalize, ((struct sNode*)__right_value886)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result469__;
    }
    __result470__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value887=string_node_v12(buf,head,head_sline,info)));
    if(__right_value887) { __right_value887 = come_decrement_ref_count2(__right_value887, ((struct sNode*)__right_value887)->finalize, ((struct sNode*)__right_value887)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result470__;
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__=(void*)0;
struct sNilNode* __result467__;
void* __right_value884 = (void*)0;
struct sNilNode* result_779;
void* __right_value885 = (void*)0;
char* __dec_obj341;
struct sNilNode* __result468__;
    if(    self==(void*)0) {
        __result467__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result467__;
    }
    result_779=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode", sNilNode_finalize, sNilNode_clone, sNilNode_get_hash_key, sNilNode_equals));
    if(    self!=((void*)0)) {
        result_779->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj341=result_779->sname;
        result_779->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_779->sline_real=self->sline_real;
    }
    __result468__ = gComeFunResultObject = __result_obj__ = result_779;
    come_call_finalizer3(result_779,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result468__;
}

static unsigned int sNilNode_get_hash_key(struct sNilNode* self){
unsigned int result_778;
    result_778=0;
    result_778+=int_get_hash_key(((int)self->sline));
    result_778+=int_get_hash_key(((int)self->sname));
    result_778+=int_get_hash_key(((int)self->sline_real));
    return result_778;
}

static _Bool sNilNode_equals(struct sNilNode* left, struct sNilNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value890 = (void*)0;
struct sNode* __result471__;
    _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2402, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value889=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2402, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sline_real=(void*)sNodeBase_sline_real;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result471__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value890=_inf_value48));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value889,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value890) { __right_value890 = come_decrement_ref_count2(__right_value890, ((struct sNode*)__right_value890)->finalize, ((struct sNode*)__right_value890)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result471__;
}

