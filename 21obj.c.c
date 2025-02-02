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
struct sNewNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    struct list$1tuple2$2charphsNodephph* initializer;
};

struct sImplementsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj_exp;
    struct sType* inf_type;
};

struct sProtocolObject
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj_exp;
};

struct sAppendNoRefference
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj_exp;
};

struct sTrueNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSizeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sSizeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sTypeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignAsExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sIsPointer
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
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
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
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
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sProtocolObject* sProtocolObject_initialize(struct sProtocolObject* self, struct sNode* obj_exp, struct sInfo* info);
char* sProtocolObject_kind(struct sProtocolObject* self);
_Bool sProtocolObject_compile(struct sProtocolObject* self, struct sInfo* info);
static void sProtocolObject_finalize(struct sProtocolObject* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sAppendNoRefference* sAppendNoRefference_initialize(struct sAppendNoRefference* self, struct sNode* obj_exp, struct sInfo* info);
char* sAppendNoRefference_kind(struct sAppendNoRefference* self);
_Bool sAppendNoRefference_compile(struct sAppendNoRefference* self, struct sInfo* info);
static void sAppendNoRefference_finalize(struct sAppendNoRefference* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo* info);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo* info);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info);
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
static struct sProtocolObject* sProtocolObject_clone(struct sProtocolObject* self);
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

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* __dec_obj80;
struct list$1tuple2$2charphsNodephph* __dec_obj81;
struct sNewNode* __result231__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj80=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj81=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer);
    come_call_finalizer3(__dec_obj81,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
char* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value290=__builtin_string("sNewNode")));
    __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_304;
struct list$1tuple2$2charphsNodephph* initializer_305;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct CVALUE* come_value_306;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct buffer* num_string_307;
struct list$1sNodeph* o2_saved_308;
struct sNode* it_311;
_Bool Value_314;
_Bool __result239__;
void* __right_value295 = (void*)0;
struct CVALUE* cvalue_315;
void* __right_value296 = (void*)0;
struct sType* type2_316;
void* __right_value297 = (void*)0;
char* type_name_319;
void* __right_value298 = (void*)0;
char* type_name2_320;
void* __right_value299 = (void*)0;
char* var_name_322;
void* __right_value300 = (void*)0;
struct sType* type3_323;
void* __right_value301 = (void*)0;
char* type_name3_324;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct buffer* buf_325;
char* obj_326;
struct sType* refference_type_327;
void* __right_value305 = (void*)0;
char* finalizer_name_328;
void* __right_value306 = (void*)0;
char* cloner_name_329;
void* __right_value307 = (void*)0;
_Bool _if_conditional1;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
_Bool _if_conditional2;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
char* __dec_obj109;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* __dec_obj110;
struct sClass* klass_333;
int i_334;
struct list$1tuple2$2charphsNodephph* o2_saved_335;
struct tuple2$2charphsNodeph* it_338;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* name_341=0;
struct sNode* exp_342=0;
_Bool Value_343;
_Bool __result251__;
void* __right_value315 = (void*)0;
struct CVALUE* come_value2_344;
struct sType* left_type_345;
struct list$1tuple2$2charphsTypephph* o2_saved_346;
struct tuple2$2charphsTypeph* it2_349;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* field_name_352=0;
struct sType* field_type_353=0;
void* __right_value316 = (void*)0;
struct sType* __dec_obj111;
_Bool __result258__;
struct sType* right_type_356;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sType* __dec_obj115;
void* __right_value319 = (void*)0;
char* c_value_357;
void* __right_value320 = (void*)0;
char* __dec_obj116;
void* __right_value321 = (void*)0;
struct sType* __dec_obj117;
void* __right_value325 = (void*)0;
struct sType* type3_361;
void* __right_value326 = (void*)0;
char* type_name3_362;
char* obj_363;
struct sType* refference_type_364;
void* __right_value327 = (void*)0;
char* finalizer_name_365;
void* __right_value328 = (void*)0;
char* cloner_name_366;
void* __right_value329 = (void*)0;
_Bool _if_conditional3;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
_Bool _if_conditional4;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* __dec_obj121;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* __dec_obj122;
void* __right_value337 = (void*)0;
struct sType* __dec_obj123;
_Bool __result260__;
obj_326 = (void*)0;
obj_363 = (void*)0;
    type_304=self->type;
    initializer_305=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    come_value_306=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 23, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_307=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 25, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_307,"1");
    for(    o2_saved_308=(struct list$1sNodeph*)come_increment_ref_count((type_304->mArrayNum)),it_311=list$1sNodeph_begin((o2_saved_308));    !list$1sNodeph_end((o2_saved_308));    it_311=list$1sNodeph_next((o2_saved_308))    ){
        Value_314=node_compile(it_311,info);
        if(        !Value_314) {
            __result239__ = (_Bool)0;
            come_call_finalizer3(o2_saved_308,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_305,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_306,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_307,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result239__;
        }
        else {
        }
        cvalue_315=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_format(num_string_307,"*(%s)",cvalue_315->c_value);
        come_call_finalizer3(cvalue_315,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_308,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    type2_316=(struct sType*)come_increment_ref_count(solve_generics(type_304,info->generics_type,info));
    list$1sNodeph_reset(type2_316->mArrayNum);
    type_name_319=(char*)come_increment_ref_count(make_type_name_string(type2_316,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_320=(char*)come_increment_ref_count(make_come_type_name_string(type2_316,info));
    if(    initializer_305) {
        static int var_num_321=1;
        var_num_321++;
        var_name_322=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_321));
        type3_323=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_316));
        type3_323->mPointerNum++;
        if(        type3_323->mNoSolvedGenericsType&&type3_323->mNoSolvedGenericsType->v1) {
            type3_323->mNoSolvedGenericsType->v1->mPointerNum++;
        }
        type_name3_324=(char*)come_increment_ref_count(make_type_name_string(type3_323,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value302=make_define_var(type3_323,var_name_322,(_Bool)0,info))));
        __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buf_325=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 69, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_325,"(");
        if(        type_304->mRefferenceOriginalType&&type_304->mRefferenceOriginalType->v1) {
            refference_type_327=(struct sType*)come_increment_ref_count(type_304->mRefferenceOriginalType->v1);
            finalizer_name_328=(char*)come_increment_ref_count(create_method_name(refference_type_327,(_Bool)0,"finalize",info,(_Bool)1));
            cloner_name_329=(char*)come_increment_ref_count(create_method_name(refference_type_327,(_Bool)0,"clone",info,(_Bool)1));
            if(            (_if_conditional1=(((struct sFun*)(__right_value307=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_328)))==((void*)0))),            come_call_finalizer3(__right_value307,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value308=create_finalizer_automatically(refference_type_327,"finalize",info)));
                come_call_finalizer3(__right_value308,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional2=(((struct sFun*)(__right_value309=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_329)))==((void*)0))),            come_call_finalizer3(__right_value309,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional2) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value310=create_cloner_automatically(refference_type_327,"clone",info)));
                come_call_finalizer3(__right_value310,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            __dec_obj109=obj_326;
            obj_326=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s)",var_name_322,type_name_319,type_name_319,((char*)(__right_value311=buffer_to_string(num_string_307))),info->sname,info->sline,type_name3_324,finalizer_name_328,cloner_name_329));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(refference_type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_328 = come_decrement_ref_count2(finalizer_name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_329 = come_decrement_ref_count2(cloner_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj110=obj_326;
            obj_326=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",var_name_322,type_name_319,type_name_319,((char*)(__right_value313=buffer_to_string(num_string_307))),info->sname,info->sline,type_name3_324));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        buffer_append_str(buf_325,obj_326);
        buffer_append_str(buf_325,",");
        klass_333=type3_323->mClass;
        i_334=0;
        for(        o2_saved_335=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_305)),it_338=list$1tuple2$2charphsNodephph_begin((o2_saved_335));        !list$1tuple2$2charphsNodephph_end((o2_saved_335));        it_338=list$1tuple2$2charphsNodephph_next((o2_saved_335))        ){
            multiple_assign_var1=it_338;
            name_341=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            exp_342=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_343=node_compile(exp_342,info);
            if(            !Value_343) {
                __result251__ = (_Bool)0;
                name_341 = come_decrement_ref_count2(name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_342) { exp_342 = come_decrement_ref_count2(exp_342, ((struct sNode*)exp_342)->finalize, ((struct sNode*)exp_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_335,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_322 = come_decrement_ref_count2(var_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type3_323,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name3_324 = come_decrement_ref_count2(type_name3_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_326 = come_decrement_ref_count2(obj_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_305,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_306,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_307,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_319 = come_decrement_ref_count2(type_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_320 = come_decrement_ref_count2(type_name2_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result251__;
            }
            else {
            }
            come_value2_344=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            left_type_345=((void*)0);
            for(            o2_saved_346=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_333->mFields)),it2_349=list$1tuple2$2charphsTypephph_begin((o2_saved_346));            !list$1tuple2$2charphsTypephph_end((o2_saved_346));            it2_349=list$1tuple2$2charphsTypephph_next((o2_saved_346))            ){
                multiple_assign_var2=it2_349;
                field_name_352=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                field_type_353=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
                if(                string_operator_equals(name_341,field_name_352)) {
                    __dec_obj111=left_type_345;
                    left_type_345=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_353));
                    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name_352 = come_decrement_ref_count2(field_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name_352 = come_decrement_ref_count2(field_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_346,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_345==((void*)0)) {
                err_msg(info,"field %s is not defined",name_341);
                __result258__ = (_Bool)0;
                name_341 = come_decrement_ref_count2(name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_342) { exp_342 = come_decrement_ref_count2(exp_342, ((struct sNode*)exp_342)->finalize, ((struct sNode*)exp_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value2_344,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_335,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_322 = come_decrement_ref_count2(var_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type3_323,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name3_324 = come_decrement_ref_count2(type_name3_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_326 = come_decrement_ref_count2(obj_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_305,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_306,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_307,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_319 = come_decrement_ref_count2(type_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_320 = come_decrement_ref_count2(type_name2_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result258__;
            }
            right_type_356=(struct sType*)come_increment_ref_count(come_value2_344->type);
            check_assign_type(((char*)(__right_value318=xsprintf("\%s is assining to",((char*)(__right_value317=string_to_string(name_341)))))),left_type_345,right_type_356,come_value2_344,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj115=right_type_356;
            right_type_356=(struct sType*)come_increment_ref_count(come_value2_344->type);
            come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_345->mHeap&&right_type_356->mHeap&&left_type_345->mPointerNum>0&&right_type_356->mPointerNum>0) {
                c_value_357=(char*)come_increment_ref_count(increment_ref_count_object(left_type_345,come_value2_344->c_value,info));
                buffer_append_format(buf_325,"%s->%s = %s",var_name_322,name_341,c_value_357);
                c_value_357 = come_decrement_ref_count2(c_value_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                buffer_append_format(buf_325,"%s->%s = %s",var_name_322,name_341,come_value2_344->c_value);
            }
            buffer_append_str(buf_325,",");
            i_334++;
            name_341 = come_decrement_ref_count2(name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_342) { exp_342 = come_decrement_ref_count2(exp_342, ((struct sNode*)exp_342)->finalize, ((struct sNode*)exp_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_344,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_335,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_325,var_name_322);
        buffer_append_str(buf_325,")");
        __dec_obj116=come_value_306->c_value;
        come_value_306->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_325));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        type2_316->mHeap=(_Bool)1;
        type2_316->mPointerNum++;
        if(        type2_316->mNoSolvedGenericsType->v1) {
            type2_316->mNoSolvedGenericsType->v1->mPointerNum++;
            type2_316->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        __dec_obj117=come_value_306->type;
        come_value_306->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_316));
        come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_306->var=((void*)0);
        append_object_to_right_values2(come_value_306,(struct sType*)come_increment_ref_count(type2_316),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_306->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_306));
        var_name_322 = come_decrement_ref_count2(var_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_323,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name3_324 = come_decrement_ref_count2(type_name3_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
        obj_326 = come_decrement_ref_count2(obj_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        type3_361=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_316));
        type3_361->mPointerNum++;
        type3_361->mHeap=(_Bool)1;
        if(        type3_361->mNoSolvedGenericsType&&type3_361->mNoSolvedGenericsType->v1) {
            type3_361->mNoSolvedGenericsType->v1->mPointerNum++;
            type3_361->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        type_name3_362=(char*)come_increment_ref_count(make_type_name_string(type3_361,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        type_304->mRefferenceOriginalType&&type_304->mRefferenceOriginalType->v1) {
            refference_type_364=(struct sType*)come_increment_ref_count(type_304->mRefferenceOriginalType->v1);
            finalizer_name_365=(char*)come_increment_ref_count(create_method_name(refference_type_364,(_Bool)0,"finalize",info,(_Bool)1));
            cloner_name_366=(char*)come_increment_ref_count(create_method_name(refference_type_364,(_Bool)0,"clone",info,(_Bool)1));
            if(            (_if_conditional3=(((struct sFun*)(__right_value329=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_365)))==((void*)0))),            come_call_finalizer3(__right_value329,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value330=create_finalizer_automatically(refference_type_364,"finalize",info)));
                come_call_finalizer3(__right_value330,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional4=(((struct sFun*)(__right_value331=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_366)))==((void*)0))),            come_call_finalizer3(__right_value331,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value332=create_cloner_automatically(refference_type_364,"clone",info)));
                come_call_finalizer3(__right_value332,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            __dec_obj121=come_value_306->c_value;
            come_value_306->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s)",type_name_319,type_name_319,((char*)(__right_value333=buffer_to_string(num_string_307))),info->sname,info->sline,type_name3_362,finalizer_name_365,cloner_name_366));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(refference_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_365 = come_decrement_ref_count2(finalizer_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_366 = come_decrement_ref_count2(cloner_name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj122=come_value_306->c_value;
            come_value_306->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",type_name_319,type_name_319,((char*)(__right_value335=buffer_to_string(num_string_307))),info->sname,info->sline,type_name3_362));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        type2_316->mHeap=(_Bool)1;
        type2_316->mPointerNum++;
        if(        type2_316->mNoSolvedGenericsType->v1) {
            type2_316->mNoSolvedGenericsType->v1->mPointerNum++;
            type2_316->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        __dec_obj123=come_value_306->type;
        come_value_306->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_316));
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_306->var=((void*)0);
        append_object_to_right_values2(come_value_306,(struct sType*)come_increment_ref_count(type2_316),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_306->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_306));
        come_call_finalizer3(type3_361,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name3_362 = come_decrement_ref_count2(type_name3_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        obj_363 = come_decrement_ref_count2(obj_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result260__ = (_Bool)1;
    come_call_finalizer3(initializer_305,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_306,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_307,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_319 = come_decrement_ref_count2(type_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_320 = come_decrement_ref_count2(type_name2_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result260__;
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
void* __right_value250 = (void*)0;
struct sType* result_272;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj55;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj56;
void* __right_value256 = (void*)0;
char* __dec_obj57;
void* __right_value257 = (void*)0;
char* __dec_obj58;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __dec_obj62;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj66;
void* __right_value273 = (void*)0;
struct list$1sTypeph* __dec_obj67;
void* __right_value280 = (void*)0;
struct list$1charph* __dec_obj71;
void* __right_value281 = (void*)0;
struct tuple1$1sTypeph* __dec_obj72;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value283 = (void*)0;
struct tuple1$1sTypeph* __dec_obj74;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value285 = (void*)0;
char* __dec_obj76;
void* __right_value286 = (void*)0;
char* __dec_obj77;
void* __right_value287 = (void*)0;
char* __dec_obj78;
void* __right_value288 = (void*)0;
char* __dec_obj79;
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
        __dec_obj54=result_272->mNoSolvedGenericsType;
        result_272->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj55=result_272->mOriginalLoadVarType;
        result_272->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj56=result_272->mRefferenceOriginalType;
        result_272->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj57=result_272->mInterfaceName;
        result_272->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj58=result_272->mGenericsName;
        result_272->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj62=result_272->mGenericsTypes;
        result_272->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj62,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj66=result_272->mArrayNum;
        result_272->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj66,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj67=result_272->mParamTypes;
        result_272->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj71=result_272->mParamNames;
        result_272->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj71,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj72=result_272->mResultType;
        result_272->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj72,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj73=result_272->mAlignas;
        result_272->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj74=result_272->mChannelType;
        result_272->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj74,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
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
        __dec_obj75=result_272->mSizeNum;
        result_272->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_272->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj76=result_272->mOriginalTypeName;
        result_272->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj77=result_272->mAsmName;
        result_272->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj78=result_272->mTupleName;
        result_272->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj79=result_272->mAttribute;
        result_272->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value251 = (void*)0;
struct tuple1$1sTypeph* result_273;
void* __right_value252 = (void*)0;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result216__;
    if(    self==(void*)0) {
        __result215__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    result_273=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj32=result_273->v1;
        result_273->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_273;
    come_call_finalizer3(result_273,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj36;
char* __dec_obj37;
char* __dec_obj38;
struct list$1sTypeph* __dec_obj39;
struct list$1sNodeph* __dec_obj41;
struct list$1sTypeph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct tuple1$1sTypeph* __dec_obj45;
struct sNode* __dec_obj46;
struct tuple1$1sTypeph* __dec_obj47;
struct sNode* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj33=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj33,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj37=self->mInterfaceName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj38=self->mGenericsName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj39=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj39,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj41=self->mArrayNum;
            come_call_finalizer3(__dec_obj41,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj43=self->mParamTypes;
            come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj44=self->mParamNames;
            come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj45=self->mResultType;
            come_call_finalizer3(__dec_obj45,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj46=self->mAlignas;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj47=self->mChannelType;
            come_call_finalizer3(__dec_obj47,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj48=self->mSizeNum;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj49=self->mOriginalTypeName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj50=self->mAsmName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj51=self->mTupleName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj52=self->mAttribute;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj34;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj34=self->v1;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sType* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
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

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result217__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sTypeph* result_284;
struct list_item$1sTypeph* it_285;
void* __right_value263 = (void*)0;
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
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_286;
struct sType* __dec_obj59;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_287;
struct sType* __dec_obj60;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_288;
struct sType* __dec_obj61;
struct list$1sTypeph* __result219__;
    if(    self->len==0) {
        litem_286=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj59=litem_286->item;
        litem_286->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj60=litem_287->item;
        litem_287->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj61=litem_288->item;
        litem_288->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNodeph* result_289;
struct list_item$1sNodeph* it_290;
void* __right_value271 = (void*)0;
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
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_291;
struct sNode* __dec_obj63;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_292;
struct sNode* __dec_obj64;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_293;
struct sNode* __dec_obj65;
struct list$1sNodeph* __result223__;
    if(    self->len==0) {
        litem_291=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj63=litem_291->item;
        litem_291->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj64=litem_292->item;
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj65=litem_293->item;
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
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
void* __right_value270 = (void*)0;
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
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* result_295;
struct list_item$1charph* it_296;
void* __right_value279 = (void*)0;
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
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_297;
char* __dec_obj68;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_298;
char* __dec_obj69;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_299;
char* __dec_obj70;
struct list$1charph* __result228__;
    if(    self->len==0) {
        litem_297=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_297->prev=((void*)0);
        litem_297->next=((void*)0);
        __dec_obj68=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_297;
        self->head=litem_297;
    }
    else if(    self->len==1) {
        litem_298=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_298->prev=self->head;
        litem_298->next=((void*)0);
        __dec_obj69=litem_298->item;
        litem_298->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_298;
        self->head->next=litem_298;
    }
    else {
        litem_299=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_299->prev=self->tail;
        litem_299->next=((void*)0);
        __dec_obj70=litem_299->item;
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_299;
        self->tail=litem_299;
    }
    self->len++;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_300;
struct list_item$1tuple2$2charphsNodephph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj82;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj82=self->item;
            come_call_finalizer3(__dec_obj82,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj83;
struct sNode* __dec_obj84;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj83=self->v1;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj84=self->v2;
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sNewNode_finalize(struct sNewNode* self){
char* __dec_obj85;
struct sType* __dec_obj86;
struct list$1tuple2$2charphsNodephph* __dec_obj87;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj85=self->sname;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj86=self->type;
            come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj87=self->initializer;
            come_call_finalizer3(__dec_obj87,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_302;
struct list_item$1tuple2$2charphsNodephph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_309;
struct sNode* __result233__;
struct sNode* __result234__;
struct sNode* result_310;
struct sNode* __result235__;
result_309 = (void*)0;
result_310 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_309,0,sizeof(struct sNode*));
        __result233__ = gComeFunResultObject = __result_obj__ = result_309;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    self->it=self->head;
    if(    self->it) {
        __result234__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    memset(&result_310,0,sizeof(struct sNode*));
    __result235__ = gComeFunResultObject = __result_obj__ = result_310;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_312;
struct sNode* __result236__;
struct sNode* __result237__;
struct sNode* result_313;
struct sNode* __result238__;
result_312 = (void*)0;
result_313 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_312,0,sizeof(struct sNode*));
        __result236__ = gComeFunResultObject = __result_obj__ = result_312;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result237__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    memset(&result_313,0,sizeof(struct sNode*));
    __result238__ = gComeFunResultObject = __result_obj__ = result_313;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj88;
struct sType* __dec_obj89;
char* __dec_obj90;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj88=self->c_value;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj89=self->type;
            come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj90=self->c_value_without_right_value_objects;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_317;
struct list_item$1sNodeph* prev_it_318;
struct list$1sNodeph* __result240__;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_330;
unsigned int hash_331;
unsigned int it_332;
struct sFun* __result241__;
struct sFun* __result242__;
struct sFun* __result243__;
struct sFun* __result244__;
default_value_330 = (void*)0;
    memset(&default_value_330,0,sizeof(struct sFun*));
    hash_331=charp_get_hash_key(((char*)key))%self->size;
    it_332=hash_331;
    while((_Bool)1) {
        if(        self->item_existance[it_332]) {
            if(            charp_equals(self->keys[it_332],key)) {
                __result241__ = gComeFunResultObject = __result_obj__ = self->items[it_332];
                come_call_finalizer3(default_value_330,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
            it_332++;
            if(            it_332>=self->size) {
                it_332=0;
            }
            else if(            it_332==hash_331) {
                __result242__ = gComeFunResultObject = __result_obj__ = default_value_330;
                come_call_finalizer3(default_value_330,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
        }
        else {
            __result243__ = gComeFunResultObject = __result_obj__ = default_value_330;
            come_call_finalizer3(default_value_330,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result243__;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = default_value_330;
    come_call_finalizer3(default_value_330,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
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

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_336;
struct tuple2$2charphsNodeph* __result245__;
struct tuple2$2charphsNodeph* __result246__;
struct tuple2$2charphsNodeph* result_337;
struct tuple2$2charphsNodeph* __result247__;
result_336 = (void*)0;
result_337 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_336,0,sizeof(struct tuple2$2charphsNodeph*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_336;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->it=self->head;
    if(    self->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_337,0,sizeof(struct tuple2$2charphsNodeph*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_337;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_339;
struct tuple2$2charphsNodeph* __result248__;
struct tuple2$2charphsNodeph* __result249__;
struct tuple2$2charphsNodeph* result_340;
struct tuple2$2charphsNodeph* __result250__;
result_339 = (void*)0;
result_340 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_339,0,sizeof(struct tuple2$2charphsNodeph*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_339;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_340,0,sizeof(struct tuple2$2charphsNodeph*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_340;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_347;
struct tuple2$2charphsTypeph* __result252__;
struct tuple2$2charphsTypeph* __result253__;
struct tuple2$2charphsTypeph* result_348;
struct tuple2$2charphsTypeph* __result254__;
result_347 = (void*)0;
result_348 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_347,0,sizeof(struct tuple2$2charphsTypeph*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_347;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->it=self->head;
    if(    self->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_348,0,sizeof(struct tuple2$2charphsTypeph*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_348;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_350;
struct tuple2$2charphsTypeph* __result255__;
struct tuple2$2charphsTypeph* __result256__;
struct tuple2$2charphsTypeph* result_351;
struct tuple2$2charphsTypeph* __result257__;
result_350 = (void*)0;
result_351 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_350,0,sizeof(struct tuple2$2charphsTypeph*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_350;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_351,0,sizeof(struct tuple2$2charphsTypeph*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_351;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_354;
struct list_item$1tuple2$2charphsTypephph* prev_it_355;
    it_354=self->head;
    while(it_354!=((void*)0)) {
        prev_it_355=it_354;
        it_354=it_354->next;
        come_call_finalizer3(prev_it_355,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj112;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj112=self->item;
            come_call_finalizer3(__dec_obj112,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
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

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
struct list_item$1CVALUEph* litem_358;
struct CVALUE* __dec_obj118;
void* __right_value323 = (void*)0;
struct list_item$1CVALUEph* litem_359;
struct CVALUE* __dec_obj119;
void* __right_value324 = (void*)0;
struct list_item$1CVALUEph* litem_360;
struct CVALUE* __dec_obj120;
struct list$1CVALUEph* __result259__;
    if(    self->len==0) {
        litem_358=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value322=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1305, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_358->prev=((void*)0);
        litem_358->next=((void*)0);
        __dec_obj118=litem_358->item;
        litem_358->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_358;
        self->head=litem_358;
    }
    else if(    self->len==1) {
        litem_359=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value323=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1315, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_359->prev=self->head;
        litem_359->next=((void*)0);
        __dec_obj119=litem_359->item;
        litem_359->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_359;
        self->head->next=litem_359;
    }
    else {
        litem_360=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value324=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1325, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_360->prev=self->tail;
        litem_360->next=((void*)0);
        __dec_obj120=litem_360->item;
        litem_360->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_360;
        self->tail=litem_360;
    }
    self->len++;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* __dec_obj124;
void* __right_value340 = (void*)0;
struct sType* __dec_obj125;
struct sImplementsNode* __result261__;
    ((struct sNodeBase*)(__right_value338=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value338,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj124=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj125=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type));
    come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
char* __result262__;
    __result262__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value341=__builtin_string("sImplementsNode")));
    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value342 = (void*)0;
struct sNode* obj_exp_367;
void* __right_value343 = (void*)0;
struct sType* inf_type_368;
_Bool Value_369;
_Bool __result263__;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_370;
void* __right_value345 = (void*)0;
struct sType* type_371;
struct sClass* klass_372;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct CVALUE* come_value2_373;
void* __right_value348 = (void*)0;
struct sType* type2_374;
void* __right_value349 = (void*)0;
char* type_name_375;
void* __right_value350 = (void*)0;
char* type_name2_376;
int inf_num_stack_378;
void* __right_value351 = (void*)0;
char* buf_379;
void* __right_value352 = (void*)0;
char* buf2_380;
void* __right_value353 = (void*)0;
char* c_value_381;
void* __right_value354 = (void*)0;
struct sType* typeX_382;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
int i_383;
void* __right_value357 = (void*)0;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_387=0;
struct sType* field_type_388=0;
void* __right_value358 = (void*)0;
char* method_name_389;
void* __right_value359 = (void*)0;
struct sFun* fun_390;
void* __right_value360 = (void*)0;
struct sType* type2_393;
void* __right_value361 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_394=0;
char* real_fun_name_395=0;
char* __dec_obj129;
void* __right_value362 = (void*)0;
struct sType* type2_396;
void* __right_value363 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_397=0;
char* real_fun_name_398=0;
char* __dec_obj130;
void* __right_value364 = (void*)0;
struct sClass* klass2_399;
void* __right_value365 = (void*)0;
_Bool _while_condtional1;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* __dec_obj136;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
char* __dec_obj137;
void* __right_value370 = (void*)0;
struct sType* type3_405;
void* __right_value371 = (void*)0;
struct sType* __dec_obj138;
_Bool __result274__;
    obj_exp_367=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    inf_type_368=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
    Value_369=node_compile(obj_exp_367,info);
    if(    !Value_369) {
        __result263__ = (_Bool)0;
        if(obj_exp_367) { obj_exp_367 = come_decrement_ref_count2(obj_exp_367, ((struct sNode*)obj_exp_367)->finalize, ((struct sNode*)obj_exp_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(inf_type_368,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result263__;
    }
    else {
    }
    come_value_370=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_371=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_370->type));
    type_371->mPointerNum--;
    type_371->mHeap=(_Bool)0;
    klass_372=inf_type_368->mClass;
    come_value2_373=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 252, "struct CVALUE*", (void*)0, (void*)0))));
    type2_374=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_368));
    type_name_375=(char*)come_increment_ref_count(make_type_name_string(inf_type_368,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_376=(char*)come_increment_ref_count(make_type_name_string(type_371,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_377=0;
    ++inf_num_377;
    inf_num_stack_378=inf_num_377;
    buf_379=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_375,inf_num_stack_378));
    add_come_code_at_function_head(info,buf_379);
    buf2_380=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_376,inf_num_stack_378));
    add_come_code_at_function_head(info,buf2_380);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0);\n",inf_num_stack_378,type_name_375,type_name_375,info->sname,info->sline,type_name_375);
    c_value_381=(char*)come_increment_ref_count(increment_ref_count_object(come_value_370->type,come_value_370->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack_378,c_value_381);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack_378,inf_num_stack_378);
    typeX_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_371));
    typeX_382->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(__right_value355=create_finalizer_automatically(typeX_382,"finalize",info)));
    come_call_finalizer3(__right_value355,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    ((struct tuple2$2sFunpcharph*)(__right_value356=create_cloner_automatically(typeX_382,"clone",info)));
    come_call_finalizer3(__right_value356,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_383=1;    i_383<list$1tuple2$2charphsTypephph_length(klass_372->mFields);    i_383++    ){
        multiple_assign_var3=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)(__right_value357=list$1tuple2$2charphsTypephphp_operator_load_element(klass_372->mFields,i_383))), "21obj.c", 281, 0));
        name_387=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_388=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer3(__right_value357,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        method_name_389=(char*)come_increment_ref_count(create_method_name(type_371,(_Bool)0,name_387,info,(_Bool)1));
        fun_390=((struct sFun*)(__right_value359=map$2charphsFunph_at(info->funcs,method_name_389,((void*)0))));
        come_call_finalizer3(__right_value359,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_390==((void*)0)&&string_operator_equals(name_387,"to_string")) {
            type2_393=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_371));
            type2_393->mPointerNum++;
            multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value361=create_to_string_automatically(type2_393,name_387,info)));
            fun2_394=multiple_assign_var4->v1;
            real_fun_name_395=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer3(__right_value361,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_390=fun2_394;
            __dec_obj129=method_name_389;
            method_name_389=(char*)come_increment_ref_count(real_fun_name_395);
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_393,sType_finalize, 0, 0, 0, 0, (void*)0);
            real_fun_name_395 = come_decrement_ref_count2(real_fun_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        fun_390==((void*)0)&&string_operator_equals(name_387,"equals")) {
            type2_396=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_371));
            type2_396->mPointerNum++;
            multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value363=create_equals_automatically(type2_396,name_387,info)));
            fun2_397=multiple_assign_var5->v1;
            real_fun_name_398=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer3(__right_value363,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_390=fun2_397;
            __dec_obj130=method_name_389;
            method_name_389=(char*)come_increment_ref_count(real_fun_name_398);
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_396,sType_finalize, 0, 0, 0, 0, (void*)0);
            real_fun_name_398 = come_decrement_ref_count2(real_fun_name_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        fun_390==((void*)0)) {
            klass2_399=((struct sClass*)come_null_check(((struct sClass*)(__right_value364=map$2charphsClassphp_operator_load_element(info->classes,type_371->mClass->mName))), "21obj.c", 307, 1));
            come_call_finalizer3(__right_value364,sClass_finalize, 0, 1, 0, 0, (void*)0);
            while((_while_condtional1=(((struct sClass*)(__right_value365=map$2charphsClassphp_operator_load_element(info->classes,klass2_399->mParentClassName))))),            come_call_finalizer3(__right_value365,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass2_399=((struct sClass*)(__right_value366=map$2charphsClassphp_operator_load_element(info->classes,klass2_399->mParentClassName)));
                come_call_finalizer3(__right_value366,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj136=method_name_389;
                method_name_389=(char*)come_increment_ref_count(create_method_name_using_class(klass2_399,(_Bool)0,name_387,info,(_Bool)1));
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_390=((struct sFun*)(__right_value368=map$2charphsFunph_at(info->funcs,method_name_389,((void*)0))));
                come_call_finalizer3(__right_value368,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_390) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_378,name_387,method_name_389);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_378,name_387,method_name_389);
        }
        name_387 = come_decrement_ref_count2(name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_389 = come_decrement_ref_count2(method_name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj137=come_value2_373->c_value;
    come_value2_373->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack_378));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    type3_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_368));
    type3_405->mPointerNum++;
    type3_405->mHeap=(_Bool)1;
    type2_374->mHeap=(_Bool)1;
    __dec_obj138=come_value2_373->type;
    come_value2_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_374));
    come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_373->type->mPointerNum++;
    come_value2_373->var=((void*)0);
    append_object_to_right_values2(come_value2_373,(struct sType*)come_increment_ref_count(type3_405),info,(_Bool)0);
    add_come_last_code(info,"%s",come_value2_373->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_373));
    __result274__ = (_Bool)1;
    if(obj_exp_367) { obj_exp_367 = come_decrement_ref_count2(obj_exp_367, ((struct sNode*)obj_exp_367)->finalize, ((struct sNode*)obj_exp_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type_368,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_370,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_371,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_374,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_375 = come_decrement_ref_count2(type_name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_376 = come_decrement_ref_count2(type_name2_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_379 = come_decrement_ref_count2(buf_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_380 = come_decrement_ref_count2(buf2_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    c_value_381 = come_decrement_ref_count2(c_value_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(typeX_382,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_405,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result274__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
char* __dec_obj126;
struct sNode* __dec_obj127;
struct sType* __dec_obj128;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj126=self->sname;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj127=self->obj_exp;
            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        if(        self->inf_type==gComeFunResultObject) {
            __dec_obj128=self->inf_type;
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1tuple2$2charphsTypephph* it_384;
int i_385;
struct tuple2$2charphsTypeph* __result264__;
struct tuple2$2charphsTypeph* default_value_386;
struct tuple2$2charphsTypeph* __result265__;
default_value_386 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_384=self->head;
    i_385=0;
    while(it_384!=((void*)0)) {
        if(        position==i_385) {
            __result264__ = gComeFunResultObject = __result_obj__ = it_384->item;
            gComeFunResultObject = (void*)0;
            return __result264__;
        }
        it_384=it_384->next;
        i_385++;
    }
    memset(&default_value_386,0,sizeof(struct tuple2$2charphsTypeph*));
    __result265__ = gComeFunResultObject = __result_obj__ = default_value_386;
    come_call_finalizer3(default_value_386,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_391;
unsigned int it_392;
struct sFun* __result266__;
struct sFun* __result267__;
struct sFun* __result268__;
struct sFun* __result269__;
    hash_391=charp_get_hash_key(((char*)key))%self->size;
    it_392=hash_391;
    while((_Bool)1) {
        if(        self->item_existance[it_392]) {
            if(            charp_equals(self->keys[it_392],key)) {
                __result266__ = gComeFunResultObject = __result_obj__ = self->items[it_392];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
            it_392++;
            if(            it_392>=self->size) {
                it_392=0;
            }
            else if(            it_392==hash_391) {
                __result267__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
        }
        else {
            __result268__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result268__;
        }
    }
    __result269__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_400;
unsigned int hash_401;
unsigned int it_402;
struct sClass* __result270__;
struct sClass* __result271__;
struct sClass* __result272__;
struct sClass* __result273__;
default_value_400 = (void*)0;
    memset(&default_value_400,0,sizeof(struct sClass*));
    hash_401=charp_get_hash_key(((char*)key))%self->size;
    it_402=hash_401;
    while((_Bool)1) {
        if(        self->item_existance[it_402]) {
            if(            charp_equals(self->keys[it_402],key)) {
                __result270__ = gComeFunResultObject = __result_obj__ = self->items[it_402];
                come_call_finalizer3(default_value_400,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result270__;
            }
            it_402++;
            if(            it_402>=self->size) {
                it_402=0;
            }
            else if(            it_402==hash_401) {
                __result271__ = gComeFunResultObject = __result_obj__ = default_value_400;
                come_call_finalizer3(default_value_400,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result271__;
            }
        }
        else {
            __result272__ = gComeFunResultObject = __result_obj__ = default_value_400;
            come_call_finalizer3(default_value_400,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result272__;
        }
    }
    __result273__ = gComeFunResultObject = __result_obj__ = default_value_400;
    come_call_finalizer3(default_value_400,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj131;
struct list$1tuple2$2charphsTypephph* __dec_obj132;
char* __dec_obj133;
char* __dec_obj134;
char* __dec_obj135;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj131=self->mName;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj132=self->mFields;
            come_call_finalizer3(__dec_obj132,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj133=self->mDeclareSName;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj134=self->mParentClassName;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj135=self->mAttribute;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_403;
struct list_item$1tuple2$2charphsTypephph* prev_it_404;
    it_403=self->head;
    while(it_403!=((void*)0)) {
        prev_it_404=it_403;
        it_403=it_403->next;
        come_call_finalizer3(prev_it_404,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sProtocolObject* sProtocolObject_initialize(struct sProtocolObject* self, struct sNode* obj_exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj139;
struct sProtocolObject* __result275__;
    ((struct sNodeBase*)(__right_value372=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value372,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj139=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sProtocolObject_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result275__;
}

char* sProtocolObject_kind(struct sProtocolObject* self){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
char* __result276__;
    __result276__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value374=__builtin_string("sProtocolObject")));
    __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

_Bool sProtocolObject_compile(struct sProtocolObject* self, struct sInfo* info){
void* __right_value375 = (void*)0;
struct sNode* obj_exp_406;
_Bool Value_407;
_Bool __result277__;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_408;
void* __right_value381 = (void*)0;
struct CVALUE* come_value2_409;
void* __right_value382 = (void*)0;
struct sType* obj_type_411;
struct sType* refference_type_412;
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
char* __dec_obj145;
struct sType* __dec_obj146;
_Bool __result280__;
    obj_exp_406=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    Value_407=node_compile(obj_exp_406,info);
    if(    !Value_407) {
        __result277__ = (_Bool)0;
        if(obj_exp_406) { obj_exp_406 = come_decrement_ref_count2(obj_exp_406, ((struct sNode*)obj_exp_406)->finalize, ((struct sNode*)obj_exp_406)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result277__;
    }
    else {
    }
    come_value_408=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_409=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_408));
    obj_type_411=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_408->type));
    if(    obj_type_411->mClass->mProtocol&&obj_type_411->mRefferenceOriginalType) {
        refference_type_412=(struct sType*)come_increment_ref_count(obj_type_411->mRefferenceOriginalType->v1);
        if(        refference_type_412) {
            static int i_413=0;
            i_413++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value385=make_define_var(obj_type_411,((char*)(__right_value384=xsprintf("__tmp_infY\%s",((char*)(__right_value383=int_to_string(i_413)))))),(_Bool)0,info))));
            __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj145=come_value2_409->c_value;
            come_value2_409->c_value=(char*)come_increment_ref_count(xsprintf("((__tmp_infY\%s=\%s),((\%s)(__tmp_infY\%s ? __tmp_infY\%s->_protocol_obj:(void*)0)))",((char*)(__right_value386=int_to_string(i_413))),((char*)(__right_value387=string_to_string(come_value2_409->c_value))),((char*)(__right_value389=string_to_string(((char*)(__right_value388=make_type_name_string(refference_type_412,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))))),((char*)(__right_value390=int_to_string(i_413))),((char*)(__right_value391=int_to_string(i_413)))));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj146=come_value2_409->type;
            come_value2_409->type=(struct sType*)come_increment_ref_count(refference_type_412);
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(refference_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value2_409->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_409));
    __result280__ = (_Bool)1;
    if(obj_exp_406) { obj_exp_406 = come_decrement_ref_count2(obj_exp_406, ((struct sNode*)obj_exp_406)->finalize, ((struct sNode*)obj_exp_406)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_409,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

static void sProtocolObject_finalize(struct sProtocolObject* self){
char* __dec_obj140;
struct sNode* __dec_obj141;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj140=self->sname;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj141=self->obj_exp;
            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result278__;
void* __right_value377 = (void*)0;
struct CVALUE* result_410;
void* __right_value378 = (void*)0;
char* __dec_obj142;
void* __right_value379 = (void*)0;
struct sType* __dec_obj143;
void* __right_value380 = (void*)0;
char* __dec_obj144;
struct CVALUE* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_410=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj142=result_410->c_value;
        result_410->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj143=result_410->type;
        result_410->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_410->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_410->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj144=result_410->c_value_without_right_value_objects;
        result_410->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_410;
    come_call_finalizer3(result_410,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

struct sAppendNoRefference* sAppendNoRefference_initialize(struct sAppendNoRefference* self, struct sNode* obj_exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sNode* __dec_obj147;
struct sAppendNoRefference* __result281__;
    ((struct sNodeBase*)(__right_value393=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value393,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj147=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); };
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAppendNoRefference_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sAppendNoRefference_kind(struct sAppendNoRefference* self){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value395=__builtin_string("sAppendNoRefference")));
    __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sAppendNoRefference_compile(struct sAppendNoRefference* self, struct sInfo* info){
void* __right_value396 = (void*)0;
struct sNode* obj_exp_414;
_Bool Value_415;
_Bool __result283__;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_416;
_Bool __result284__;
    obj_exp_414=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    Value_415=node_compile(obj_exp_414,info);
    if(    !Value_415) {
        __result283__ = (_Bool)0;
        if(obj_exp_414) { obj_exp_414 = come_decrement_ref_count2(obj_exp_414, ((struct sNode*)obj_exp_414)->finalize, ((struct sNode*)obj_exp_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result283__;
    }
    else {
    }
    come_value_416=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_416->type->mNoRefference=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_416));
    __result284__ = (_Bool)1;
    if(obj_exp_414) { obj_exp_414 = come_decrement_ref_count2(obj_exp_414, ((struct sNode*)obj_exp_414)->finalize, ((struct sNode*)obj_exp_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result284__;
}

static void sAppendNoRefference_finalize(struct sAppendNoRefference* self){
char* __dec_obj148;
struct sNode* __dec_obj149;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj148=self->sname;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj149=self->obj_exp;
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
struct sTrueNode* __result285__;
    ((struct sNodeBase*)(__right_value398=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value398,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
char* __result286__;
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value399=__builtin_string("sTrueNode")));
    __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value402 = (void*)0;
char* __dec_obj151;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sType* __dec_obj152;
_Bool __result287__;
    come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 446, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj151=come_value_417->c_value;
    come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj152=come_value_417->type;
    come_value_417->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 449, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_417->var=((void*)0);
    add_come_last_code(info,"%s",come_value_417->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
    __result287__ = (_Bool)1;
    come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result287__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
char* __dec_obj150;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj150=self->sname;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value409 = (void*)0;
struct sNode* __result290__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 462, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value406=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 462, "struct sTrueNode*", (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result290__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value409=_inf_value1));
    come_call_finalizer3(__right_value406,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value409) { __right_value409 = come_decrement_ref_count2(__right_value409, ((struct sNode*)__right_value409)->finalize, ((struct sNode*)__right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__=(void*)0;
struct sTrueNode* __result288__;
void* __right_value407 = (void*)0;
struct sTrueNode* result_418;
void* __right_value408 = (void*)0;
char* __dec_obj153;
struct sTrueNode* __result289__;
    if(    self==(void*)0) {
        __result288__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    result_418=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_418->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result_418->sname;
        result_418->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_418->sline_real=self->sline_real;
    }
    __result289__ = gComeFunResultObject = __result_obj__ = result_418;
    come_call_finalizer3(result_418,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
struct sFalseNode* __result291__;
    ((struct sNodeBase*)(__right_value410=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value410,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
char* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value411=__builtin_string("sFalseNode")));
    __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value414 = (void*)0;
char* __dec_obj155;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sType* __dec_obj156;
_Bool __result293__;
    come_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 479, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj155=come_value_419->c_value;
    come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj156=come_value_419->type;
    come_value_419->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 482, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_419->var=((void*)0);
    add_come_last_code(info,"%s",come_value_419->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
    __result293__ = (_Bool)1;
    come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result293__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
char* __dec_obj154;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj154=self->sname;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value421 = (void*)0;
struct sNode* __result296__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 495, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value418=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 495, "struct sFalseNode*", (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result296__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value421=_inf_value2));
    come_call_finalizer3(__right_value418,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value421) { __right_value421 = come_decrement_ref_count2(__right_value421, ((struct sNode*)__right_value421)->finalize, ((struct sNode*)__right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__=(void*)0;
struct sFalseNode* __result294__;
void* __right_value419 = (void*)0;
struct sFalseNode* result_420;
void* __right_value420 = (void*)0;
char* __dec_obj157;
struct sFalseNode* __result295__;
    if(    self==(void*)0) {
        __result294__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    result_420=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_420->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_420->sname;
        result_420->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->sline_real=self->sline_real;
    }
    __result295__ = gComeFunResultObject = __result_obj__ = result_420;
    come_call_finalizer3(result_420,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* __dec_obj158;
struct sSizeOfNode* __result297__;
    ((struct sNodeBase*)(__right_value422=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value422,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj158=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value424 = (void*)0;
char* __result298__;
    __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value424=__builtin_string("sSizeOfNode")));
    __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_421;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value427 = (void*)0;
struct sType* type2_423;
void* __right_value428 = (void*)0;
char* type_name_424;
void* __right_value429 = (void*)0;
char* __dec_obj161;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sType* __dec_obj162;
_Bool __result299__;
    type_421=self->type;
    come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 516, "struct CVALUE*", (void*)0, (void*)0))));
    type2_423=(struct sType*)come_increment_ref_count(solve_generics(type_421,info->generics_type,info));
    type_name_424=(char*)come_increment_ref_count(make_type_name_string(type2_423,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj161=come_value_422->c_value;
    come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_424));
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj162=come_value_422->type;
    come_value_422->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 523, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_422->type->mUnsigned=(_Bool)1;
    come_value_422->var=((void*)0);
    add_come_last_code(info,"%s",come_value_422->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
    __result299__ = (_Bool)1;
    come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_423,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_424 = come_decrement_ref_count2(type_name_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result299__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
char* __dec_obj159;
struct sType* __dec_obj160;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj159=self->sname;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj160=self->type;
            come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* __dec_obj163;
struct sSizeOfExpNode* __result300__;
struct sSizeOfExpNode* __result301__;
    ((struct sNodeBase*)(__right_value432=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value432,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj163=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result300__;
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result301__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value434=__builtin_string("sSizeOfExpNode")));
    __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_425;
_Bool Value_426;
_Bool __result303__;
void* __right_value435 = (void*)0;
struct CVALUE* come_value_427;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* come_value2_428;
void* __right_value438 = (void*)0;
char* __dec_obj166;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sType* __dec_obj167;
_Bool __result304__;
    exp_425=(struct sNode*)come_increment_ref_count(self->exp);
    Value_426=node_compile(exp_425,info);
    if(    !Value_426) {
        __result303__ = (_Bool)0;
        if(exp_425) { exp_425 = come_decrement_ref_count2(exp_425, ((struct sNode*)exp_425)->finalize, ((struct sNode*)exp_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result303__;
    }
    else {
    }
    come_value_427=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_428=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 562, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj166=come_value2_428->c_value;
    come_value2_428->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_427->c_value));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=come_value2_428->type;
    come_value2_428->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 565, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_428->type->mUnsigned=(_Bool)1;
    come_value2_428->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_428->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_428));
    __result304__ = (_Bool)1;
    if(exp_425) { exp_425 = come_decrement_ref_count2(exp_425, ((struct sNode*)exp_425)->finalize, ((struct sNode*)exp_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result304__;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
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

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sType* __dec_obj168;
struct sTypeOfNode* __result305__;
    ((struct sNodeBase*)(__right_value441=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value441,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj168=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value443 = (void*)0;
char* __result306__;
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value443=__builtin_string("sTypeOfNode")));
    __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_429;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct CVALUE* come_value_430;
void* __right_value446 = (void*)0;
struct sType* type2_431;
void* __right_value447 = (void*)0;
char* type_name_432;
void* __right_value448 = (void*)0;
char* __dec_obj171;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sType* __dec_obj172;
_Bool __result307__;
    type_429=self->type;
    come_value_430=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 595, "struct CVALUE*", (void*)0, (void*)0))));
    type2_431=(struct sType*)come_increment_ref_count(solve_generics(type_429,info->generics_type,info));
    type_name_432=(char*)come_increment_ref_count(make_type_name_string(type2_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj171=come_value_430->c_value;
    come_value_430->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_432));
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj172=come_value_430->type;
    come_value_430->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 602, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_430->var=((void*)0);
    add_come_last_code(info,"%s",come_value_430->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_430));
    __result307__ = (_Bool)1;
    come_call_finalizer3(come_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_432 = come_decrement_ref_count2(type_name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result307__;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
char* __dec_obj169;
struct sType* __dec_obj170;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj169=self->sname;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj170=self->type;
            come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sNode* __dec_obj173;
struct sTypeOfExpNode* __result308__;
    ((struct sNodeBase*)(__right_value451=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value451,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj173=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); };
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result308__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value453 = (void*)0;
char* __result309__;
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value453=__builtin_string("sTypeOfExpNode")));
    __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_433;
_Bool Value_434;
_Bool __result310__;
void* __right_value454 = (void*)0;
struct CVALUE* come_value_435;
void* __right_value455 = (void*)0;
struct sType* type_436;
void* __right_value456 = (void*)0;
struct sType* type2_437;
void* __right_value457 = (void*)0;
char* type_name_438;
void* __right_value458 = (void*)0;
char* __dec_obj176;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* __dec_obj177;
_Bool __result311__;
    exp_433=(struct sNode*)come_increment_ref_count(self->exp);
    Value_434=node_compile(exp_433,info);
    if(    !Value_434) {
        __result310__ = (_Bool)0;
        if(exp_433) { exp_433 = come_decrement_ref_count2(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result310__;
    }
    else {
    }
    come_value_435=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_436=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_435->type));
    type2_437=(struct sType*)come_increment_ref_count(solve_generics(type_436,info->generics_type,info));
    type_name_438=(char*)come_increment_ref_count(make_type_name_string(type2_437,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj176=come_value_435->c_value;
    come_value_435->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_438));
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj177=come_value_435->type;
    come_value_435->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 645, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_435->var=((void*)0);
    add_come_last_code(info,"%s",come_value_435->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_435));
    __result311__ = (_Bool)1;
    if(exp_433) { exp_433 = come_decrement_ref_count2(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_438 = come_decrement_ref_count2(type_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result311__;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
char* __dec_obj174;
struct sNode* __dec_obj175;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj174=self->sname;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj175=self->exp;
            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* __dec_obj178;
struct sDynamicTypeOf* __result312__;
    ((struct sNodeBase*)(__right_value461=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value461,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj178=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result312__;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
void* __right_value463 = (void*)0;
char* __result313__;
    __result313__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value463=__builtin_string("sDynamicTypeOf")));
    __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp_439;
_Bool Value_440;
_Bool __result314__;
void* __right_value464 = (void*)0;
struct CVALUE* come_value_441;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct CVALUE* come_value2_442;
void* __right_value467 = (void*)0;
char* __dec_obj181;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sType* __dec_obj182;
_Bool __result315__;
    exp_439=(struct sNode*)come_increment_ref_count(self->exp);
    Value_440=node_compile(exp_439,info);
    if(    !Value_440) {
        __result314__ = (_Bool)0;
        if(exp_439) { exp_439 = come_decrement_ref_count2(exp_439, ((struct sNode*)exp_439)->finalize, ((struct sNode*)exp_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result314__;
    }
    else {
    }
    come_value_441=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    come_value_441->type->mPointerNum>0&&come_value_441->type->mHeap) {
        come_value2_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 682, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj181=come_value2_442->c_value;
        come_value2_442->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_441->c_value));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj182=come_value2_442->type;
        come_value2_442->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 685, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_442->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_442->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_442));
        come_call_finalizer3(come_value2_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result315__ = (_Bool)1;
    if(exp_439) { exp_439 = come_decrement_ref_count2(exp_439, ((struct sNode*)exp_439)->finalize, ((struct sNode*)exp_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result315__;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
char* __dec_obj179;
struct sNode* __dec_obj180;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj179=self->sname;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj180=self->exp;
            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* __dec_obj183;
struct sAlignOfNode* __result316__;
struct sAlignOfNode* __result317__;
    ((struct sNodeBase*)(__right_value470=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value470,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj183=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value472 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value472=__builtin_string("sAlignOfNode")));
    __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_443;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct CVALUE* come_value_444;
void* __right_value475 = (void*)0;
struct sType* type2_445;
void* __right_value476 = (void*)0;
char* type_name_446;
void* __right_value477 = (void*)0;
char* __dec_obj186;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* __dec_obj187;
_Bool __result319__;
    type_443=self->type;
    come_value_444=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 717, "struct CVALUE*", (void*)0, (void*)0))));
    type2_445=(struct sType*)come_increment_ref_count(solve_generics(type_443,info->generics_type,info));
    type_name_446=(char*)come_increment_ref_count(make_type_name_string(type2_445,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj186=come_value_444->c_value;
    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_446));
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj187=come_value_444->type;
    come_value_444->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 724, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_444->type->mUnsigned=(_Bool)1;
    come_value_444->var=((void*)0);
    add_come_last_code(info,"%s",come_value_444->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_444));
    __result319__ = (_Bool)1;
    come_call_finalizer3(come_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_445,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_446 = come_decrement_ref_count2(type_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result319__;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
char* __dec_obj184;
struct sType* __dec_obj185;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj184=self->sname;
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj185=self->type;
            come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* __dec_obj188;
struct sAlignOfExpNode* __result320__;
    ((struct sNodeBase*)(__right_value480=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value480,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj188=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result320__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value482 = (void*)0;
char* __result321__;
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value482=__builtin_string("sAlignOfExpNode")));
    __right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_447;
_Bool Value_448;
_Bool __result322__;
void* __right_value483 = (void*)0;
struct CVALUE* come_value_449;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct CVALUE* come_value2_450;
void* __right_value486 = (void*)0;
char* __dec_obj191;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj192;
_Bool __result323__;
    exp_447=(struct sNode*)come_increment_ref_count(self->exp);
    Value_448=node_compile(exp_447,info);
    if(    !Value_448) {
        __result322__ = (_Bool)0;
        if(exp_447) { exp_447 = come_decrement_ref_count2(exp_447, ((struct sNode*)exp_447)->finalize, ((struct sNode*)exp_447)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result322__;
    }
    else {
    }
    come_value_449=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_450=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 761, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj191=come_value2_450->c_value;
    come_value2_450->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_449->c_value));
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj192=come_value2_450->type;
    come_value2_450->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 764, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_450->type->mUnsigned=(_Bool)1;
    come_value2_450->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_450->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_450));
    __result323__ = (_Bool)1;
    if(exp_447) { exp_447 = come_decrement_ref_count2(exp_447, ((struct sNode*)exp_447)->finalize, ((struct sNode*)exp_447)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result323__;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
char* __dec_obj189;
struct sNode* __dec_obj190;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj189=self->sname;
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj190=self->exp;
            if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sType* __dec_obj193;
struct sAlignOfNode2* __result324__;
    ((struct sNodeBase*)(__right_value489=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value489,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj193=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
void* __right_value491 = (void*)0;
char* __result325__;
    __result325__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value491=__builtin_string("sAlignOfNode2")));
    __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_451;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct CVALUE* come_value_452;
void* __right_value494 = (void*)0;
struct sType* type2_453;
void* __right_value495 = (void*)0;
char* type_name_454;
void* __right_value496 = (void*)0;
char* __dec_obj196;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj197;
_Bool __result326__;
    type_451=self->type;
    come_value_452=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 794, "struct CVALUE*", (void*)0, (void*)0))));
    type2_453=(struct sType*)come_increment_ref_count(solve_generics(type_451,info->generics_type,info));
    type_name_454=(char*)come_increment_ref_count(make_type_name_string(type2_453,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj196=come_value_452->c_value;
    come_value_452->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_454));
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj197=come_value_452->type;
    come_value_452->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 801, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_452->type->mUnsigned=(_Bool)1;
    come_value_452->var=((void*)0);
    add_come_last_code(info,"%s",come_value_452->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_452));
    __result326__ = (_Bool)1;
    come_call_finalizer3(come_value_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_453,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result326__;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
char* __dec_obj194;
struct sType* __dec_obj195;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj194=self->sname;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj195=self->type;
            come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sNode* __dec_obj198;
struct sAlignOfExpNode2* __result327__;
    ((struct sNodeBase*)(__right_value499=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value499,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj198=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); };
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result327__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
void* __right_value501 = (void*)0;
char* __result328__;
    __result328__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value501=__builtin_string("sAlignOfExpNode2")));
    __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_455;
_Bool Value_456;
_Bool __result329__;
void* __right_value502 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct CVALUE* come_value2_458;
void* __right_value505 = (void*)0;
char* __dec_obj201;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj202;
_Bool __result330__;
    exp_455=(struct sNode*)come_increment_ref_count(self->exp);
    Value_456=node_compile(exp_455,info);
    if(    !Value_456) {
        __result329__ = (_Bool)0;
        if(exp_455) { exp_455 = come_decrement_ref_count2(exp_455, ((struct sNode*)exp_455)->finalize, ((struct sNode*)exp_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result329__;
    }
    else {
    }
    come_value_457=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 838, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj201=come_value2_458->c_value;
    come_value2_458->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_457->c_value));
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj202=come_value2_458->type;
    come_value2_458->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 841, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_458->type->mUnsigned=(_Bool)1;
    come_value2_458->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_458->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_458));
    __result330__ = (_Bool)1;
    if(exp_455) { exp_455 = come_decrement_ref_count2(exp_455, ((struct sNode*)exp_455)->finalize, ((struct sNode*)exp_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_457,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result330__;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
char* __dec_obj199;
struct sNode* __dec_obj200;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj199=self->sname;
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj200=self->exp;
            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj203;
struct sAlignAsNode* __result331__;
    ((struct sNodeBase*)(__right_value508=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value508,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj203=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
void* __right_value510 = (void*)0;
char* __result332__;
    __result332__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value510=__builtin_string("sAlignAsNode")));
    __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_459;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct CVALUE* come_value_460;
void* __right_value513 = (void*)0;
struct sType* type2_461;
void* __right_value514 = (void*)0;
char* type_name_462;
void* __right_value515 = (void*)0;
char* __dec_obj206;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj207;
_Bool __result333__;
    type_459=self->type;
    come_value_460=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 871, "struct CVALUE*", (void*)0, (void*)0))));
    type2_461=(struct sType*)come_increment_ref_count(solve_generics(type_459,info->generics_type,info));
    type_name_462=(char*)come_increment_ref_count(make_type_name_string(type2_461,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj206=come_value_460->c_value;
    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_462));
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=come_value_460->type;
    come_value_460->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 878, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_460->type->mUnsigned=(_Bool)1;
    come_value_460->var=((void*)0);
    add_come_last_code(info,"%s",come_value_460->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_460));
    __result333__ = (_Bool)1;
    come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_461,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_462 = come_decrement_ref_count2(type_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result333__;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
char* __dec_obj204;
struct sType* __dec_obj205;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj204=self->sname;
            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj205=self->type;
            come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* __dec_obj208;
struct sAlignAsExpNode* __result334__;
    ((struct sNodeBase*)(__right_value518=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value518,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj208=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result334__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value520 = (void*)0;
char* __result335__;
    __result335__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value520=__builtin_string("sAlignAsExpNode")));
    __right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_463;
_Bool Value_464;
_Bool __result336__;
void* __right_value521 = (void*)0;
struct CVALUE* come_value_465;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct CVALUE* come_value2_466;
void* __right_value524 = (void*)0;
char* __dec_obj211;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj212;
_Bool __result337__;
    exp_463=(struct sNode*)come_increment_ref_count(self->exp);
    Value_464=node_compile(exp_463,info);
    if(    !Value_464) {
        __result336__ = (_Bool)0;
        if(exp_463) { exp_463 = come_decrement_ref_count2(exp_463, ((struct sNode*)exp_463)->finalize, ((struct sNode*)exp_463)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result336__;
    }
    else {
    }
    come_value_465=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_466=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 915, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj211=come_value2_466->c_value;
    come_value2_466->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_465->c_value));
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj212=come_value2_466->type;
    come_value2_466->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 918, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_466->type->mUnsigned=(_Bool)1;
    come_value2_466->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_466->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_466));
    __result337__ = (_Bool)1;
    if(exp_463) { exp_463 = come_decrement_ref_count2(exp_463, ((struct sNode*)exp_463)->finalize, ((struct sNode*)exp_463)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result337__;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
char* __dec_obj209;
struct sNode* __dec_obj210;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj210=self->exp;
            if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sNode* __dec_obj213;
struct sDeleteNode* __result338__;
    ((struct sNodeBase*)(__right_value527=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value527,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj213=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result338__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value529 = (void*)0;
char* __result339__;
    __result339__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value529=__builtin_string("sDeleteNode")));
    __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_467;
_Bool Value_468;
void* __right_value530 = (void*)0;
struct CVALUE* come_value_469;
_Bool __result340__;
    node_467=self->node;
    Value_468=node_compile(node_467,info);
    if(    !Value_468) {
        return (_Bool)0;
    }
    else {
    }
    come_value_469=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_469->type,come_value_469->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result340__ = (_Bool)1;
    come_call_finalizer3(come_value_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result340__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
char* __dec_obj214;
struct sNode* __dec_obj215;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj214=self->sname;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj215=self->node;
            if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sNode* __dec_obj216;
struct sBorrowNode* __result341__;
struct sBorrowNode* __result342__;
    ((struct sNodeBase*)(__right_value531=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value531,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj216=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result341__;
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result342__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
void* __right_value533 = (void*)0;
char* __result343__;
    __result343__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value533=__builtin_string("sBorrowNode")));
    __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_470;
_Bool Value_471;
void* __right_value534 = (void*)0;
struct CVALUE* come_value_472;
struct sRightValueObject* right_value_objects_473;
int right_value_id_474;
_Bool __result344__;
    node_470=self->node;
    Value_471=node_compile(node_470,info);
    if(    !Value_471) {
        return (_Bool)0;
    }
    else {
    }
    come_value_472=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_472->type->mHeap=(_Bool)0;
    right_value_objects_473=come_value_472->right_value_objects;
    if(    right_value_objects_473) {
        right_value_id_474=right_value_objects_473->mID;
        if(        right_value_id_474!=-1) {
            remove_object_from_right_values(right_value_id_474,info);
        }
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
    __result344__ = (_Bool)1;
    come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result344__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
char* __dec_obj217;
struct sNode* __dec_obj218;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj217=self->sname;
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj218=self->node;
            if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sNode* __dec_obj219;
struct sCloneNode* __result345__;
    ((struct sNodeBase*)(__right_value535=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value535,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj219=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result345__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__=(void*)0;
void* __right_value537 = (void*)0;
char* __result346__;
    __result346__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value537=__builtin_string("sCloneNode")));
    __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_475;
_Bool Value_476;
void* __right_value538 = (void*)0;
struct CVALUE* left_value_477;
void* __right_value539 = (void*)0;
struct sType* left_type_478;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct CVALUE* come_value_479;
void* __right_value542 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6 = (void*)0;
struct sType* result_type_480=0;
char* c_value_481=0;
char* __dec_obj224;
void* __right_value543 = (void*)0;
struct sType* __dec_obj225;
_Bool __result347__;
    node_475=self->node;
    Value_476=node_compile(node_475,info);
    if(    !Value_476) {
        return (_Bool)0;
    }
    else {
    }
    left_value_477=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_478=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_477->type));
    if(    left_type_478->mPointerNum==1&&string_operator_equals(left_type_478->mClass->mName,"void")&&left_type_478->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_477));
    }
    else if(    left_type_478->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_477));
    }
    else if(    left_type_478->mPointerNum>0) {
        come_value_479=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1039, "struct CVALUE*", (void*)0, (void*)0))));
        multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value542=clone_object(left_type_478,left_value_477->c_value,info)));
        result_type_480=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        c_value_481=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer3(__right_value542,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj224=come_value_479->c_value;
        come_value_479->c_value=(char*)come_increment_ref_count(c_value_481);
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj225=come_value_479->type;
        come_value_479->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_478));
        come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_479->type->mHeap=(_Bool)1;
        come_value_479->var=((void*)0);
        append_object_to_right_values2(come_value_479,(struct sType*)come_increment_ref_count(left_type_478),info,(_Bool)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_479));
        come_call_finalizer3(come_value_479,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_480,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_481 = come_decrement_ref_count2(c_value_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result347__ = (_Bool)1;
    come_call_finalizer3(left_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_478,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result347__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
char* __dec_obj220;
struct sNode* __dec_obj221;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj220=self->sname;
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj221=self->node;
            if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj222;
char* __dec_obj223;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj222=self->v1;
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj223=self->v2;
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sNode* __dec_obj226;
struct sDupeNode* __result348__;
    ((struct sNodeBase*)(__right_value544=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value544,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj226=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result348__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__=(void*)0;
void* __right_value546 = (void*)0;
char* __result349__;
    __result349__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value546=__builtin_string("sDupeNode")));
    __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_482;
_Bool Value_483;
void* __right_value547 = (void*)0;
struct CVALUE* left_value_484;
void* __right_value548 = (void*)0;
struct sType* left_type_485;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct CVALUE* come_value_486;
void* __right_value551 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7 = (void*)0;
struct sType* result_type_487=0;
char* c_value_488=0;
char* __dec_obj229;
void* __right_value552 = (void*)0;
struct sType* __dec_obj230;
_Bool __result350__;
    node_482=self->node;
    Value_483=node_compile(node_482,info);
    if(    !Value_483) {
        return (_Bool)0;
    }
    else {
    }
    left_value_484=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_485=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_484->type));
    if(    left_type_485->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_484));
    }
    else if(    left_type_485->mPointerNum>0&&left_type_485->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_484));
    }
    else if(    left_type_485->mPointerNum>0) {
        come_value_486=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1090, "struct CVALUE*", (void*)0, (void*)0))));
        multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value551=clone_object(left_type_485,left_value_484->c_value,info)));
        result_type_487=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        c_value_488=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer3(__right_value551,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj229=come_value_486->c_value;
        come_value_486->c_value=(char*)come_increment_ref_count(c_value_488);
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj230=come_value_486->type;
        come_value_486->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_485));
        come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_486->type->mHeap=(_Bool)1;
        come_value_486->var=((void*)0);
        append_object_to_right_values2(come_value_486,(struct sType*)come_increment_ref_count(left_type_485),info,(_Bool)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_486));
        come_call_finalizer3(come_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_488 = come_decrement_ref_count2(c_value_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result350__ = (_Bool)1;
    come_call_finalizer3(left_value_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result350__;
}

static void sDupeNode_finalize(struct sDupeNode* self){
char* __dec_obj227;
struct sNode* __dec_obj228;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj227=self->sname;
            __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj228=self->node;
            if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sNode* __dec_obj231;
struct sDummyHeapNode* __result351__;
    ((struct sNodeBase*)(__right_value553=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value553,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj231=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result351__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
void* __right_value555 = (void*)0;
char* __result352__;
    __result352__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value555=__builtin_string("sDummyHeapNode")));
    __right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_489;
_Bool Value_490;
void* __right_value556 = (void*)0;
struct CVALUE* come_value_491;
_Bool __result353__;
    node_489=self->node;
    Value_490=node_compile(node_489,info);
    if(    !Value_490) {
        return (_Bool)0;
    }
    else {
    }
    come_value_491=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_491->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_491));
    __result353__ = (_Bool)1;
    come_call_finalizer3(come_value_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result353__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
char* __dec_obj232;
struct sNode* __dec_obj233;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj232=self->sname;
            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj233=self->node;
            if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sNode* __dec_obj234;
struct sGCIncNode* __result354__;
    ((struct sNodeBase*)(__right_value557=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value557,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj234=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    __result354__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result354__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
void* __right_value559 = (void*)0;
char* __result355__;
    __result355__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value559=__builtin_string("sGCIncNode")));
    __right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_492;
_Bool Value_493;
void* __right_value560 = (void*)0;
struct CVALUE* come_value_494;
struct sType* type_495;
void* __right_value561 = (void*)0;
char* type_name_496;
void* __right_value562 = (void*)0;
char* __dec_obj237;
_Bool __result356__;
    node_492=self->node;
    Value_493=node_compile(node_492,info);
    if(    !Value_493) {
        return (_Bool)0;
    }
    else {
    }
    come_value_494=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_495=come_value_494->type;
    if(    come_value_494->type->mHeap) {
        type_name_496=(char*)come_increment_ref_count(make_type_name_string(type_495,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj237=come_value_494->c_value;
        come_value_494->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_494->type,come_value_494->c_value,info));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        type_name_496 = come_decrement_ref_count2(type_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_494));
    __result356__ = (_Bool)1;
    come_call_finalizer3(come_value_494,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result356__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
char* __dec_obj235;
struct sNode* __dec_obj236;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj235=self->sname;
            __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj236=self->node;
            if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sNode* __dec_obj238;
struct sGCDecNode* __result357__;
    ((struct sNodeBase*)(__right_value563=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value563,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj238=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
    __result357__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result357__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
void* __right_value565 = (void*)0;
char* __result358__;
    __result358__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value565=__builtin_string("sGCDecNode")));
    __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_497;
_Bool Value_498;
void* __right_value566 = (void*)0;
struct CVALUE* come_value_499;
struct sType* type_500;
_Bool __result359__;
    node_497=self->node;
    Value_498=node_compile(node_497,info);
    if(    !Value_498) {
        return (_Bool)0;
    }
    else {
    }
    come_value_499=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_500=come_value_499->type;
    decrement_ref_count_object(type_500,come_value_499->c_value,info,(_Bool)0,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
    __result359__ = (_Bool)1;
    come_call_finalizer3(come_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result359__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
char* __dec_obj239;
struct sNode* __dec_obj240;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj239=self->sname;
            __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj240=self->node;
            if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sType* __dec_obj241;
struct sIsHeap* __result360__;
    ((struct sNodeBase*)(__right_value567=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value567,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj241=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__=(void*)0;
void* __right_value569 = (void*)0;
char* __result361__;
    __result361__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value569=__builtin_string("sIsHeap")));
    __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_501;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct CVALUE* come_value_502;
void* __right_value572 = (void*)0;
char* __dec_obj244;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sType* __dec_obj245;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct CVALUE* come_value_503;
void* __right_value577 = (void*)0;
char* __dec_obj246;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* __dec_obj247;
    node_501=self->type;
    if(    self->type->mHeap) {
        come_value_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1232, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj244=come_value_502->c_value;
        come_value_502->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj245=come_value_502->type;
        come_value_502->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1235, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_502->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_502));
        add_come_last_code(info,"%s",come_value_502->c_value);
        come_call_finalizer3(come_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_503=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1243, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj246=come_value_503->c_value;
        come_value_503->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj247=come_value_503->type;
        come_value_503->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1246, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_503->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_503));
        add_come_last_code(info,"%s",come_value_503->c_value);
        come_call_finalizer3(come_value_503,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
char* __dec_obj242;
struct sType* __dec_obj243;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj242=self->sname;
            __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj243=self->type;
            come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sType* __dec_obj248;
struct sIsPointer* __result362__;
    ((struct sNodeBase*)(__right_value580=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value580,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj248=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__=(void*)0;
void* __right_value582 = (void*)0;
char* __result363__;
    __result363__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value582=__builtin_string("sIsPointer")));
    __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_504;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value585 = (void*)0;
char* __dec_obj251;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sType* __dec_obj252;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_506;
void* __right_value590 = (void*)0;
char* __dec_obj253;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sType* __dec_obj254;
    node_504=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1278, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj251=come_value_505->c_value;
        come_value_505->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj252=come_value_505->type;
        come_value_505->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1281, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_505->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_505));
        add_come_last_code(info,"%s",come_value_505->c_value);
        come_call_finalizer3(come_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_506=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1289, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj253=come_value_506->c_value;
        come_value_506->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj254=come_value_506->type;
        come_value_506->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1292, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_506->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_506));
        add_come_last_code(info,"%s",come_value_506->c_value);
        come_call_finalizer3(come_value_506,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
char* __dec_obj249;
struct sType* __dec_obj250;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj249=self->sname;
            __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj250=self->type;
            come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj255;
struct sGCDecNoFreeNode* __result364__;
    ((struct sNodeBase*)(__right_value593=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value593,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj255=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result364__;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
void* __right_value595 = (void*)0;
char* __result365__;
    __result365__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value595=__builtin_string("sGCDecNoFreeNode")));
    __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_507;
_Bool Value_508;
void* __right_value596 = (void*)0;
struct CVALUE* come_value_509;
struct sType* type_510;
_Bool __result366__;
    node_507=self->node;
    Value_508=node_compile(node_507,info);
    if(    !Value_508) {
        return (_Bool)0;
    }
    else {
    }
    come_value_509=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_510=come_value_509->type;
    decrement_ref_count_object(type_510,come_value_509->c_value,info,(_Bool)0,(_Bool)1);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_509));
    __result366__ = (_Bool)1;
    come_call_finalizer3(come_value_509,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result366__;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
char* __dec_obj256;
struct sNode* __dec_obj257;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj256=self->sname;
            __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj257=self->node;
            if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value597 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type_511=0;
char* name_512=0;
_Bool err_513=0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value613 = (void*)0;
struct sNode* obj_514;
void* __right_value614 = (void*)0;
char* fun_name_522;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* __result375__;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_523;
void* __right_value619 = (void*)0;
char* word_524;
_Bool no_comma_525;
void* __right_value620 = (void*)0;
struct sNode* exp_526;
void* __right_value621 = (void*)0;
_Bool _if_conditional5;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sNode* value_node_527;
void* __right_value624 = (void*)0;
struct sNode* __dec_obj270;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sNode* exp_528;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sNode* __result377__;
struct sNode* __result378__;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value632 = (void*)0;
struct sNode* __result379__;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value635 = (void*)0;
struct sNode* __result380__;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
void* __right_value638 = (void*)0;
struct sNode* __result381__;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
void* __right_value641 = (void*)0;
struct sNode* __result382__;
void* __right_value642 = (void*)0;
struct sNode* node_529;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
void* __right_value648 = (void*)0;
struct sNode* __result385__;
void* __right_value649 = (void*)0;
struct sNode* node_531;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
void* __right_value655 = (void*)0;
struct sNode* __result388__;
void* __right_value656 = (void*)0;
struct sNode* node_533;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
void* __right_value662 = (void*)0;
struct sNode* __result391__;
void* __right_value663 = (void*)0;
struct sNode* node_535;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
void* __right_value669 = (void*)0;
struct sNode* __result394__;
void* __right_value670 = (void*)0;
struct sNode* node_537;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* __right_value676 = (void*)0;
struct sNode* __result397__;
void* __right_value677 = (void*)0;
struct sNode* node_539;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* __right_value683 = (void*)0;
struct sNode* __result400__;
void* __right_value684 = (void*)0;
struct sNode* node_541;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* __right_value690 = (void*)0;
struct sNode* __result403__;
void* __right_value691 = (void*)0;
struct sNode* node_543;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
void* __right_value697 = (void*)0;
struct sNode* __result406__;
void* __right_value698 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* param_type_545=0;
char* param_name_546=0;
_Bool err_547=0;
void* __right_value699 = (void*)0;
struct sType* type2_548;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct sNode* _inf_value16;
struct sIsHeap* _inf_obj_value16;
void* __right_value705 = (void*)0;
struct sNode* __result409__;
void* __right_value706 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* param_type_550=0;
char* param_name_551=0;
_Bool err_552=0;
void* __right_value707 = (void*)0;
struct sType* type2_553;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sNode* _inf_value17;
struct sIsPointer* _inf_obj_value17;
void* __right_value713 = (void*)0;
struct sNode* __result412__;
void* __right_value714 = (void*)0;
struct sNode* __result413__;
void* __right_value715 = (void*)0;
struct sNode* __result414__;
void* __right_value716 = (void*)0;
struct sNode* __result415__;
void* __right_value717 = (void*)0;
struct sNode* __result416__;
_Bool come_c_555;
void* __right_value718 = (void*)0;
struct sNode* node_556;
struct sNode* __result417__;
void* __right_value719 = (void*)0;
struct sNode* __result418__;
void* __right_value720 = (void*)0;
struct sNode* __result419__;
void* __right_value721 = (void*)0;
struct sNode* __result420__;
void* __right_value722 = (void*)0;
struct sNode* __result421__;
void* __right_value723 = (void*)0;
struct sNode* __result422__;
_Bool paren_557;
_Bool is_type_name_flag_558;
char* p_559;
int sline_560;
void* __right_value724 = (void*)0;
char* word_561;
void* __right_value725 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* type_562=0;
char* name_563=0;
_Bool err_564=0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sNode* _inf_value18;
struct sSizeOfNode* _inf_obj_value18;
void* __right_value731 = (void*)0;
struct sNode* __result425__;
struct sNode* exp_566;
_Bool no_comma_567;
void* __right_value732 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj296;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sNode* _inf_value19;
struct sSizeOfExpNode* _inf_obj_value19;
void* __right_value739 = (void*)0;
struct sNode* __result428__;
_Bool paren_569;
_Bool is_type_name_flag_570;
char* p_571;
int sline_572;
void* __right_value740 = (void*)0;
char* word_573;
void* __right_value741 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12 = (void*)0;
struct sType* type_574=0;
char* name_575=0;
_Bool err_576=0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sNode* _inf_value20;
struct sTypeOfNode* _inf_obj_value20;
void* __right_value747 = (void*)0;
struct sNode* __result431__;
struct sNode* exp_578;
_Bool no_comma_579;
void* __right_value748 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value749 = (void*)0;
struct sNode* __dec_obj302;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sNode* _inf_value21;
struct sTypeOfExpNode* _inf_obj_value21;
void* __right_value755 = (void*)0;
struct sNode* __result434__;
_Bool paren_581;
struct sNode* exp_582;
_Bool no_comma_583;
void* __right_value756 = (void*)0;
struct sNode* __dec_obj305;
void* __right_value757 = (void*)0;
struct sNode* __dec_obj306;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sNode* _inf_value22;
struct sDynamicTypeOf* _inf_obj_value22;
void* __right_value763 = (void*)0;
struct sNode* __result437__;
_Bool paren_585;
_Bool is_type_name_flag_586;
char* p_587;
int sline_588;
void* __right_value764 = (void*)0;
char* word_589;
void* __right_value765 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var13 = (void*)0;
struct sType* type_590=0;
char* name_591=0;
_Bool err_592=0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value23;
struct sAlignOfNode* _inf_obj_value23;
void* __right_value771 = (void*)0;
struct sNode* __result440__;
struct sNode* exp_594;
_Bool no_comma_595;
void* __right_value772 = (void*)0;
struct sNode* __dec_obj311;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj312;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sNode* _inf_value24;
struct sAlignOfExpNode* _inf_obj_value24;
void* __right_value779 = (void*)0;
struct sNode* __result443__;
_Bool paren_597;
_Bool is_type_name_flag_598;
char* p_599;
int sline_600;
void* __right_value780 = (void*)0;
char* word_601;
void* __right_value781 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14 = (void*)0;
struct sType* type_602=0;
char* name_603=0;
_Bool err_604=0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfNode2* _inf_obj_value25;
void* __right_value787 = (void*)0;
struct sNode* __result446__;
struct sNode* exp_606;
_Bool no_comma_607;
void* __right_value788 = (void*)0;
struct sNode* __dec_obj317;
void* __right_value789 = (void*)0;
struct sNode* __dec_obj318;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfExpNode2* _inf_obj_value26;
void* __right_value795 = (void*)0;
struct sNode* __result449__;
_Bool is_type_name_flag_609;
char* p_610;
int sline_611;
void* __right_value796 = (void*)0;
char* word_612;
void* __right_value797 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_613=0;
char* name_614=0;
_Bool err_615=0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sNode* _inf_value27;
struct sAlignAsNode* _inf_obj_value27;
void* __right_value803 = (void*)0;
struct sNode* __result452__;
void* __right_value804 = (void*)0;
struct sNode* exp_617;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sNode* _inf_value28;
struct sAlignAsExpNode* _inf_obj_value28;
void* __right_value810 = (void*)0;
struct sNode* __result455__;
void* __right_value811 = (void*)0;
struct sNode* __result456__;
exp_566 = (void*)0;
exp_578 = (void*)0;
exp_582 = (void*)0;
exp_594 = (void*)0;
exp_606 = (void*)0;
    if(    !gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value597=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_511=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_512=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_513=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value597,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_513) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(        *info->p==40) {
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1349, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value599=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1349, "struct sNewNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_511),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            obj_514=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer3(__right_value599,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name_522=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value616=parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_514)),(char*)come_increment_ref_count(fun_name_522),info)));
            if(obj_514) { obj_514 = come_decrement_ref_count2(obj_514, ((struct sNode*)obj_514)->finalize, ((struct sNode*)obj_514)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value616) { __right_value616 = come_decrement_ref_count2(__right_value616, ((struct sNode*)__right_value616)->finalize, ((struct sNode*)__right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result375__;
            if(obj_514) { obj_514 = come_decrement_ref_count2(obj_514, ((struct sNode*)obj_514)->finalize, ((struct sNode*)obj_514)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_523=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "21obj.c", 1358, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
            while((_Bool)1) {
                word_524=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_525=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_526=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_525;
                    if(                    (_if_conditional5=(string_operator_equals(((char*)(__right_value621=exp_526->kind(exp_526->_protocol_obj))),"sWildCard"))),                    (__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                    _if_conditional5) {
                        value_node_527=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value622=xsprintf("Value"))),info));
                        __right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj270=exp_526;
                        exp_526=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_527),(char*)come_increment_ref_count(word_524),info));
                        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
                        if(value_node_527) { value_node_527 = come_decrement_ref_count2(value_node_527, ((struct sNode*)value_node_527)->finalize, ((struct sNode*)value_node_527)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    list$1tuple2$2charphsNodephph_add(initializer_523,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1377, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(word_524),(struct sNode*)come_increment_ref_count(exp_526))));
                    if(exp_526) { exp_526 = come_decrement_ref_count2(exp_526, ((struct sNode*)exp_526)->finalize, ((struct sNode*)exp_526)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==44) {
                    exp_528=(struct sNode*)come_increment_ref_count(create_load_var(word_524,info));
                    list$1tuple2$2charphsNodephph_add(initializer_523,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1382, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(word_524),(struct sNode*)come_increment_ref_count(exp_528))));
                    if(exp_528) { exp_528 = come_decrement_ref_count2(exp_528, ((struct sNode*)exp_528)->finalize, ((struct sNode*)exp_528)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"invalid character(21) %c\n",*info->p);
                    __result377__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_524 = come_decrement_ref_count2(word_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(initializer_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result377__;
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    word_524 = come_decrement_ref_count2(word_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    __result378__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_524 = come_decrement_ref_count2(word_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(initializer_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result378__;
                }
                word_524 = come_decrement_ref_count2(word_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1403, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value631=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1403, "struct sNewNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_511),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_523),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value632=_inf_value4));
            come_call_finalizer3(initializer_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value631,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value632) { __right_value632 = come_decrement_ref_count2(__right_value632, ((struct sNode*)__right_value632)->finalize, ((struct sNode*)__right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result379__;
            come_call_finalizer3(initializer_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1406, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value634=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1406, "struct sNewNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_511),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value635=_inf_value5));
            come_call_finalizer3(type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value634,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value635) { __right_value635 = come_decrement_ref_count2(__right_value635, ((struct sNode*)__right_value635)->finalize, ((struct sNode*)__right_value635)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result380__;
        }
        come_call_finalizer3(type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"true")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1410, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value637=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1410, "struct sTrueNode*", (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value638=_inf_value6));
        come_call_finalizer3(__right_value637,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value638) { __right_value638 = come_decrement_ref_count2(__right_value638, ((struct sNode*)__right_value638)->finalize, ((struct sNode*)__right_value638)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"false")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1413, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value640=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1413, "struct sFalseNode*", (void*)0, (void*)0)),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value641=_inf_value7));
        come_call_finalizer3(__right_value640,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value641) { __right_value641 = come_decrement_ref_count2(__right_value641, ((struct sNode*)__right_value641)->finalize, ((struct sNode*)__right_value641)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"delete")) {
        node_529=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1418, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value644=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1418, "struct sDeleteNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_529),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value648=_inf_value8));
        if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value644,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value648) { __right_value648 = come_decrement_ref_count2(__right_value648, ((struct sNode*)__right_value648)->finalize, ((struct sNode*)__right_value648)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result385__;
        if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"borrow")) {
        node_531=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1423, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value651=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1423, "struct sBorrowNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_531),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value655=_inf_value9));
        if(node_531) { node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value651,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value655) { __right_value655 = come_decrement_ref_count2(__right_value655, ((struct sNode*)__right_value655)->finalize, ((struct sNode*)__right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result388__;
        if(node_531) { node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"clone")) {
        node_533=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1428, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value658=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1428, "struct sCloneNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_533),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value662=_inf_value10));
        if(node_533) { node_533 = come_decrement_ref_count2(node_533, ((struct sNode*)node_533)->finalize, ((struct sNode*)node_533)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value658,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value662) { __right_value662 = come_decrement_ref_count2(__right_value662, ((struct sNode*)__right_value662)->finalize, ((struct sNode*)__right_value662)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
        if(node_533) { node_533 = come_decrement_ref_count2(node_533, ((struct sNode*)node_533)->finalize, ((struct sNode*)node_533)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dupe")) {
        node_535=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1433, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value665=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1433, "struct sDupeNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_535),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value669=_inf_value11));
        if(node_535) { node_535 = come_decrement_ref_count2(node_535, ((struct sNode*)node_535)->finalize, ((struct sNode*)node_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value665,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value669) { __right_value669 = come_decrement_ref_count2(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result394__;
        if(node_535) { node_535 = come_decrement_ref_count2(node_535, ((struct sNode*)node_535)->finalize, ((struct sNode*)node_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_537=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1438, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value672=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1438, "struct sDummyHeapNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_537),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        __result397__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value676=_inf_value12));
        if(node_537) { node_537 = come_decrement_ref_count2(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value672,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value676) { __right_value676 = come_decrement_ref_count2(__right_value676, ((struct sNode*)__right_value676)->finalize, ((struct sNode*)__right_value676)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result397__;
        if(node_537) { node_537 = come_decrement_ref_count2(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_539=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1448, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value679=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1448, "struct sGCIncNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_539),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        __result400__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value683=_inf_value13));
        if(node_539) { node_539 = come_decrement_ref_count2(node_539, ((struct sNode*)node_539)->finalize, ((struct sNode*)node_539)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value679,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value683) { __right_value683 = come_decrement_ref_count2(__right_value683, ((struct sNode*)__right_value683)->finalize, ((struct sNode*)__right_value683)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result400__;
        if(node_539) { node_539 = come_decrement_ref_count2(node_539, ((struct sNode*)node_539)->finalize, ((struct sNode*)node_539)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_541=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1458, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value686=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1458, "struct sGCDecNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_541),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        __result403__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value690=_inf_value14));
        if(node_541) { node_541 = come_decrement_ref_count2(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value686,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value690) { __right_value690 = come_decrement_ref_count2(__right_value690, ((struct sNode*)__right_value690)->finalize, ((struct sNode*)__right_value690)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result403__;
        if(node_541) { node_541 = come_decrement_ref_count2(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_543=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1468, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value693=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1468, "struct sGCDecNoFreeNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_543),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        __result406__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value697=_inf_value15));
        if(node_543) { node_543 = come_decrement_ref_count2(node_543, ((struct sNode*)node_543)->finalize, ((struct sNode*)node_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value693,sGCDecNoFreeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value697) { __right_value697 = come_decrement_ref_count2(__right_value697, ((struct sNode*)__right_value697)->finalize, ((struct sNode*)__right_value697)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result406__;
        if(node_543) { node_543 = come_decrement_ref_count2(node_543, ((struct sNode*)node_543)->finalize, ((struct sNode*)node_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value698=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_545=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        param_name_546=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        err_547=multiple_assign_var9->v3;
        come_call_finalizer3(__right_value698,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_547) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_548=(struct sType*)come_increment_ref_count(solve_generics(param_type_545,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1484, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value16=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value701=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1484, "struct sIsHeap*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_548),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sIsHeap_finalize;
        _inf_value16->clone=(void*)sIsHeap_clone;
        _inf_value16->compile=(void*)sIsHeap_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sIsHeap_kind;
        __result409__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value705=_inf_value16));
        come_call_finalizer3(param_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_546 = come_decrement_ref_count2(param_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_548,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value701,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value705) { __right_value705 = come_decrement_ref_count2(__right_value705, ((struct sNode*)__right_value705)->finalize, ((struct sNode*)__right_value705)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result409__;
        come_call_finalizer3(param_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_546 = come_decrement_ref_count2(param_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_548,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value706=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_550=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        param_name_551=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_552=multiple_assign_var10->v3;
        come_call_finalizer3(__right_value706,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_552) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_553=(struct sType*)come_increment_ref_count(solve_generics(param_type_550,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1500, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value17=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value709=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1500, "struct sIsPointer*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_553),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsPointer_finalize;
        _inf_value17->clone=(void*)sIsPointer_clone;
        _inf_value17->compile=(void*)sIsPointer_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsPointer_kind;
        __result412__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value713=_inf_value17));
        come_call_finalizer3(param_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_551 = come_decrement_ref_count2(param_name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_553,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value709,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value713) { __right_value713 = come_decrement_ref_count2(__right_value713, ((struct sNode*)__right_value713)->finalize, ((struct sNode*)__right_value713)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result412__;
        come_call_finalizer3(param_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_551 = come_decrement_ref_count2(param_name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_553,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result413__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value714=create_nothing_node(info)));
            if(__right_value714) { __right_value714 = come_decrement_ref_count2(__right_value714, ((struct sNode*)__right_value714)->finalize, ((struct sNode*)__right_value714)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result413__;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result414__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value715=create_nothing_node(info)));
            if(__right_value715) { __right_value715 = come_decrement_ref_count2(__right_value715, ((struct sNode*)__right_value715)->finalize, ((struct sNode*)__right_value715)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result414__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result415__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value716=create_nothing_node(info)));
            if(__right_value716) { __right_value716 = come_decrement_ref_count2(__right_value716, ((struct sNode*)__right_value716)->finalize, ((struct sNode*)__right_value716)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result415__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result416__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value717=create_nothing_node(info)));
            if(__right_value717) { __right_value717 = come_decrement_ref_count2(__right_value717, ((struct sNode*)__right_value717)->finalize, ((struct sNode*)__right_value717)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result416__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_555=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_556=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info));
                gComeC=come_c_555;
                __result417__ = gComeFunResultObject = __result_obj__ = node_556;
                if(node_556) { node_556 = come_decrement_ref_count2(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0, 1, 0, (void*)0); } 
                gComeFunResultObject = (void*)0;
                return __result417__;
                if(node_556) { node_556 = come_decrement_ref_count2(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value719=create_nothing_node(info)));
                if(__right_value719) { __right_value719 = come_decrement_ref_count2(__right_value719, ((struct sNode*)__right_value719)->finalize, ((struct sNode*)__right_value719)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result418__;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result419__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value720=create_nothing_node(info)));
            if(__right_value720) { __right_value720 = come_decrement_ref_count2(__right_value720, ((struct sNode*)__right_value720)->finalize, ((struct sNode*)__right_value720)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result419__;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result420__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value721=create_nothing_node(info)));
            if(__right_value721) { __right_value721 = come_decrement_ref_count2(__right_value721, ((struct sNode*)__right_value721)->finalize, ((struct sNode*)__right_value721)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result420__;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result421__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value722=create_nothing_node(info)));
            if(__right_value722) { __right_value722 = come_decrement_ref_count2(__right_value722, ((struct sNode*)__right_value722)->finalize, ((struct sNode*)__right_value722)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result421__;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result422__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value723=create_nothing_node(info)));
            if(__right_value723) { __right_value723 = come_decrement_ref_count2(__right_value723, ((struct sNode*)__right_value723)->finalize, ((struct sNode*)__right_value723)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result422__;
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_557=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_557=(_Bool)1;
        }
        is_type_name_flag_558=(_Bool)0;
        {
            p_559=info->p;
            sline_560=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_561=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_561,info)) {
                    is_type_name_flag_558=(_Bool)1;
                }
                word_561 = come_decrement_ref_count2(word_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_559;
            info->sline=sline_560;
        }
        if(        is_type_name_flag_558) {
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value725=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_562=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_563=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_564=multiple_assign_var11->v3;
            come_call_finalizer3(__right_value725,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_564) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_557&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1624, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value18=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value727=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1624, "struct sSizeOfNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_562),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sSizeOfNode_finalize;
            _inf_value18->clone=(void*)sSizeOfNode_clone;
            _inf_value18->compile=(void*)sSizeOfNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sSizeOfNode_kind;
            __result425__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value731=_inf_value18));
            come_call_finalizer3(type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_563 = come_decrement_ref_count2(name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value727,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value731) { __right_value731 = come_decrement_ref_count2(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result425__;
            come_call_finalizer3(type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_563 = come_decrement_ref_count2(name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_557) {
                no_comma_567=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj295=exp_566;
                exp_566=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_567;
            }
            else {
                __dec_obj296=exp_566;
                exp_566=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_557&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1645, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value19=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value735=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1645, "struct sSizeOfExpNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_566),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value19->clone=(void*)sSizeOfExpNode_clone;
            _inf_value19->compile=(void*)sSizeOfExpNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSizeOfExpNode_kind;
            __result428__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value739=_inf_value19));
            if(exp_566) { exp_566 = come_decrement_ref_count2(exp_566, ((struct sNode*)exp_566)->finalize, ((struct sNode*)exp_566)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value735,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value739) { __right_value739 = come_decrement_ref_count2(__right_value739, ((struct sNode*)__right_value739)->finalize, ((struct sNode*)__right_value739)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result428__;
            if(exp_566) { exp_566 = come_decrement_ref_count2(exp_566, ((struct sNode*)exp_566)->finalize, ((struct sNode*)exp_566)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_569=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_569=(_Bool)1;
        }
        is_type_name_flag_570=(_Bool)0;
        {
            p_571=info->p;
            sline_572=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_573=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_573,info)) {
                    is_type_name_flag_570=(_Bool)1;
                }
                word_573 = come_decrement_ref_count2(word_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_571;
            info->sline=sline_572;
        }
        if(        is_type_name_flag_570) {
            multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value741=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_574=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
            name_575=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            err_576=multiple_assign_var12->v3;
            come_call_finalizer3(__right_value741,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_576) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_569&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1690, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value20=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value743=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1690, "struct sTypeOfNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_574),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sTypeOfNode_finalize;
            _inf_value20->clone=(void*)sTypeOfNode_clone;
            _inf_value20->compile=(void*)sTypeOfNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sTypeOfNode_kind;
            __result431__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value747=_inf_value20));
            come_call_finalizer3(type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_575 = come_decrement_ref_count2(name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value743,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value747) { __right_value747 = come_decrement_ref_count2(__right_value747, ((struct sNode*)__right_value747)->finalize, ((struct sNode*)__right_value747)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result431__;
            come_call_finalizer3(type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_575 = come_decrement_ref_count2(name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_569) {
                no_comma_579=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj301=exp_578;
                exp_578=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_579;
            }
            else {
                __dec_obj302=exp_578;
                exp_578=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_569&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1711, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value21=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value751=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1711, "struct sTypeOfExpNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_578),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value21->clone=(void*)sTypeOfExpNode_clone;
            _inf_value21->compile=(void*)sTypeOfExpNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sTypeOfExpNode_kind;
            __result434__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value755=_inf_value21));
            if(exp_578) { exp_578 = come_decrement_ref_count2(exp_578, ((struct sNode*)exp_578)->finalize, ((struct sNode*)exp_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value751,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value755) { __right_value755 = come_decrement_ref_count2(__right_value755, ((struct sNode*)__right_value755)->finalize, ((struct sNode*)__right_value755)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result434__;
            if(exp_578) { exp_578 = come_decrement_ref_count2(exp_578, ((struct sNode*)exp_578)->finalize, ((struct sNode*)exp_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"dynamic_typeof")) {
        paren_581=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_581=(_Bool)1;
        }
        if(        !paren_581) {
            no_comma_583=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj305=exp_582;
            exp_582=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_583;
        }
        else {
            __dec_obj306=exp_582;
            exp_582=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
        }
        if(        paren_581&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1742, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value22=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value759=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1742, "struct sDynamicTypeOf*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_582),info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value22->clone=(void*)sDynamicTypeOf_clone;
        _inf_value22->compile=(void*)sDynamicTypeOf_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sDynamicTypeOf_kind;
        __result437__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value763=_inf_value22));
        if(exp_582) { exp_582 = come_decrement_ref_count2(exp_582, ((struct sNode*)exp_582)->finalize, ((struct sNode*)exp_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value759,sDynamicTypeOf_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value763) { __right_value763 = come_decrement_ref_count2(__right_value763, ((struct sNode*)__right_value763)->finalize, ((struct sNode*)__right_value763)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result437__;
        if(exp_582) { exp_582 = come_decrement_ref_count2(exp_582, ((struct sNode*)exp_582)->finalize, ((struct sNode*)exp_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        paren_585=(_Bool)0;
        if(        *info->p==40) {
            paren_585=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_586=(_Bool)0;
        {
            p_587=info->p;
            sline_588=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_589=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_589,info)) {
                    is_type_name_flag_586=(_Bool)1;
                }
                word_589 = come_decrement_ref_count2(word_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_587;
            info->sline=sline_588;
        }
        if(        is_type_name_flag_586) {
            multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(__right_value765=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_590=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_591=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_592=multiple_assign_var13->v3;
            come_call_finalizer3(__right_value765,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_592) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            if(            paren_585&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1783, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value23=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value767=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1783, "struct sAlignOfNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_590),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sAlignOfNode_finalize;
            _inf_value23->clone=(void*)sAlignOfNode_clone;
            _inf_value23->compile=(void*)sAlignOfNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sAlignOfNode_kind;
            __result440__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value771=_inf_value23));
            come_call_finalizer3(type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_591 = come_decrement_ref_count2(name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value767,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value771) { __right_value771 = come_decrement_ref_count2(__right_value771, ((struct sNode*)__right_value771)->finalize, ((struct sNode*)__right_value771)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result440__;
            come_call_finalizer3(type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_591 = come_decrement_ref_count2(name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_585) {
                no_comma_595=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj311=exp_594;
                exp_594=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_595;
            }
            else {
                __dec_obj312=exp_594;
                exp_594=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1797, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value24=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value775=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1797, "struct sAlignOfExpNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_594),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value24->clone=(void*)sAlignOfExpNode_clone;
            _inf_value24->compile=(void*)sAlignOfExpNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sAlignOfExpNode_kind;
            __result443__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value779=_inf_value24));
            if(exp_594) { exp_594 = come_decrement_ref_count2(exp_594, ((struct sNode*)exp_594)->finalize, ((struct sNode*)exp_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value775,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value779) { __right_value779 = come_decrement_ref_count2(__right_value779, ((struct sNode*)__right_value779)->finalize, ((struct sNode*)__right_value779)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result443__;
            if(exp_594) { exp_594 = come_decrement_ref_count2(exp_594, ((struct sNode*)exp_594)->finalize, ((struct sNode*)exp_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        paren_597=(_Bool)0;
        if(        *info->p==40) {
            paren_597=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_598=(_Bool)0;
        {
            p_599=info->p;
            sline_600=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_601=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_601,info)) {
                    is_type_name_flag_598=(_Bool)1;
                }
                word_601 = come_decrement_ref_count2(word_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_599;
            info->sline=sline_600;
        }
        if(        is_type_name_flag_598) {
            multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value781=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_602=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name_603=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err_604=multiple_assign_var14->v3;
            come_call_finalizer3(__right_value781,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_604) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_597&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1838, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value25=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value783=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1838, "struct sAlignOfNode2*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_602),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value25->clone=(void*)sAlignOfNode2_clone;
            _inf_value25->compile=(void*)sAlignOfNode2_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfNode2_kind;
            __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value787=_inf_value25));
            come_call_finalizer3(type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_603 = come_decrement_ref_count2(name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value783,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value787) { __right_value787 = come_decrement_ref_count2(__right_value787, ((struct sNode*)__right_value787)->finalize, ((struct sNode*)__right_value787)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result446__;
            come_call_finalizer3(type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_603 = come_decrement_ref_count2(name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_597) {
                no_comma_607=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj317=exp_606;
                exp_606=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_607;
            }
            else {
                __dec_obj318=exp_606;
                exp_606=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1852, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value26=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value791=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1852, "struct sAlignOfExpNode2*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_606),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value26->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value26->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfExpNode2_kind;
            __result449__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value795=_inf_value26));
            if(exp_606) { exp_606 = come_decrement_ref_count2(exp_606, ((struct sNode*)exp_606)->finalize, ((struct sNode*)exp_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value791,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value795) { __right_value795 = come_decrement_ref_count2(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result449__;
            if(exp_606) { exp_606 = come_decrement_ref_count2(exp_606, ((struct sNode*)exp_606)->finalize, ((struct sNode*)exp_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_609=(_Bool)0;
        {
            p_610=info->p;
            sline_611=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_612=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_612,info)) {
                    is_type_name_flag_609=(_Bool)1;
                }
                word_612 = come_decrement_ref_count2(word_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_610;
            info->sline=sline_611;
        }
        if(        is_type_name_flag_609) {
            multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value797=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_613=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            name_614=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            err_615=multiple_assign_var15->v3;
            come_call_finalizer3(__right_value797,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_615) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1885, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value27=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value799=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1885, "struct sAlignAsNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_613),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignAsNode_finalize;
            _inf_value27->clone=(void*)sAlignAsNode_clone;
            _inf_value27->compile=(void*)sAlignAsNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignAsNode_kind;
            __result452__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value803=_inf_value27));
            come_call_finalizer3(type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value799,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value803) { __right_value803 = come_decrement_ref_count2(__right_value803, ((struct sNode*)__right_value803)->finalize, ((struct sNode*)__right_value803)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result452__;
            come_call_finalizer3(type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_617=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1892, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value28=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value806=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1892, "struct sAlignAsExpNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_617),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value28->clone=(void*)sAlignAsExpNode_clone;
            _inf_value28->compile=(void*)sAlignAsExpNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignAsExpNode_kind;
            __result455__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value810=_inf_value28));
            if(exp_617) { exp_617 = come_decrement_ref_count2(exp_617, ((struct sNode*)exp_617)->finalize, ((struct sNode*)exp_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value806,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value810) { __right_value810 = come_decrement_ref_count2(__right_value810, ((struct sNode*)__right_value810)->finalize, ((struct sNode*)__right_value810)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result455__;
            if(exp_617) { exp_617 = come_decrement_ref_count2(exp_617, ((struct sNode*)exp_617)->finalize, ((struct sNode*)exp_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result456__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value811=string_node_v20(buf,head,head_sline,info)));
    if(__right_value811) { __right_value811 = come_decrement_ref_count2(__right_value811, ((struct sNode*)__right_value811)->finalize, ((struct sNode*)__right_value811)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result456__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj258;
char* __dec_obj259;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj258=self->v1;
            come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj259=self->v2;
            __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__=(void*)0;
struct sNewNode* __result367__;
void* __right_value600 = (void*)0;
struct sNewNode* result_515;
void* __right_value601 = (void*)0;
char* __dec_obj260;
void* __right_value602 = (void*)0;
struct sType* __dec_obj261;
void* __right_value612 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj269;
struct sNewNode* __result374__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_515=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_515->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj260=result_515->sname;
        result_515->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_515->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj261=result_515->type;
        result_515->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj269=result_515->initializer;
        result_515->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj269,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result374__ = gComeFunResultObject = __result_obj__ = result_515;
    come_call_finalizer3(result_515,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result368__;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_516;
struct list_item$1tuple2$2charphsNodephph* it_517;
void* __right_value611 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result373__;
    if(    self==((void*)0)) {
        __result368__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    result_516=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1221, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_517=self->head;
    while(it_517!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_516,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodephp_clone, it_517->item)));
        it_517=it_517->next;
    }
    __result373__ = gComeFunResultObject = __result_obj__ = result_516;
    come_call_finalizer3(result_516,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result369__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value605 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_518;
struct tuple2$2charphsNodeph* __dec_obj262;
void* __right_value606 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_519;
struct tuple2$2charphsNodeph* __dec_obj263;
void* __right_value607 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_520;
struct tuple2$2charphsNodeph* __dec_obj264;
struct list$1tuple2$2charphsNodephph* __result370__;
    if(    self->len==0) {
        litem_518=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value605=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1235, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_518->prev=((void*)0);
        litem_518->next=((void*)0);
        __dec_obj262=litem_518->item;
        litem_518->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj262,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_518;
        self->head=litem_518;
    }
    else if(    self->len==1) {
        litem_519=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value606=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1245, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_519->prev=self->head;
        litem_519->next=((void*)0);
        __dec_obj263=litem_519->item;
        litem_519->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj263,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_519;
        self->head->next=litem_519;
    }
    else {
        litem_520=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value607=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1255, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_520->prev=self->tail;
        litem_520->next=((void*)0);
        __dec_obj264=litem_520->item;
        litem_520->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj264,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_520;
        self->tail=litem_520;
    }
    self->len++;
    __result370__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result371__;
void* __right_value608 = (void*)0;
struct tuple2$2charphsNodeph* result_521;
void* __right_value609 = (void*)0;
char* __dec_obj265;
void* __right_value610 = (void*)0;
struct sNode* __dec_obj266;
struct tuple2$2charphsNodeph* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_521=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj265=result_521->v1;
        result_521->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj266=result_521->v2;
        result_521->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_521;
    come_call_finalizer3(result_521,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj267;
struct sNode* __dec_obj268;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj267=self->v1;
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj268=self->v2;
            if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj271;
struct sNode* __dec_obj272;
struct tuple2$2charphsNodeph* __result376__;
    __dec_obj271=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj272=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
    __result376__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
struct sDeleteNode* __result383__;
void* __right_value645 = (void*)0;
struct sDeleteNode* result_530;
void* __right_value646 = (void*)0;
char* __dec_obj273;
void* __right_value647 = (void*)0;
struct sNode* __dec_obj274;
struct sDeleteNode* __result384__;
    if(    self==(void*)0) {
        __result383__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    result_530=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_530->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj273=result_530->sname;
        result_530->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_530->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj274=result_530->node;
        result_530->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result384__ = gComeFunResultObject = __result_obj__ = result_530;
    come_call_finalizer3(result_530,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
struct sBorrowNode* __result386__;
void* __right_value652 = (void*)0;
struct sBorrowNode* result_532;
void* __right_value653 = (void*)0;
char* __dec_obj275;
void* __right_value654 = (void*)0;
struct sNode* __dec_obj276;
struct sBorrowNode* __result387__;
    if(    self==(void*)0) {
        __result386__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    result_532=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_532->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj275=result_532->sname;
        result_532->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_532->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj276=result_532->node;
        result_532->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result387__ = gComeFunResultObject = __result_obj__ = result_532;
    come_call_finalizer3(result_532,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__=(void*)0;
struct sCloneNode* __result389__;
void* __right_value659 = (void*)0;
struct sCloneNode* result_534;
void* __right_value660 = (void*)0;
char* __dec_obj277;
void* __right_value661 = (void*)0;
struct sNode* __dec_obj278;
struct sCloneNode* __result390__;
    if(    self==(void*)0) {
        __result389__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result389__;
    }
    result_534=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_534->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj277=result_534->sname;
        result_534->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_534->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj278=result_534->node;
        result_534->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result390__ = gComeFunResultObject = __result_obj__ = result_534;
    come_call_finalizer3(result_534,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__=(void*)0;
struct sDupeNode* __result392__;
void* __right_value666 = (void*)0;
struct sDupeNode* result_536;
void* __right_value667 = (void*)0;
char* __dec_obj279;
void* __right_value668 = (void*)0;
struct sNode* __dec_obj280;
struct sDupeNode* __result393__;
    if(    self==(void*)0) {
        __result392__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result392__;
    }
    result_536=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_536->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_536->sname;
        result_536->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_536->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj280=result_536->node;
        result_536->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result393__ = gComeFunResultObject = __result_obj__ = result_536;
    come_call_finalizer3(result_536,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
struct sDummyHeapNode* __result395__;
void* __right_value673 = (void*)0;
struct sDummyHeapNode* result_538;
void* __right_value674 = (void*)0;
char* __dec_obj281;
void* __right_value675 = (void*)0;
struct sNode* __dec_obj282;
struct sDummyHeapNode* __result396__;
    if(    self==(void*)0) {
        __result395__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result395__;
    }
    result_538=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_538->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj281=result_538->sname;
        result_538->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_538->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj282=result_538->node;
        result_538->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result396__ = gComeFunResultObject = __result_obj__ = result_538;
    come_call_finalizer3(result_538,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
struct sGCIncNode* __result398__;
void* __right_value680 = (void*)0;
struct sGCIncNode* result_540;
void* __right_value681 = (void*)0;
char* __dec_obj283;
void* __right_value682 = (void*)0;
struct sNode* __dec_obj284;
struct sGCIncNode* __result399__;
    if(    self==(void*)0) {
        __result398__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result398__;
    }
    result_540=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_540->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_540->sname;
        result_540->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_540->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj284=result_540->node;
        result_540->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result399__ = gComeFunResultObject = __result_obj__ = result_540;
    come_call_finalizer3(result_540,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNode* __result401__;
void* __right_value687 = (void*)0;
struct sGCDecNode* result_542;
void* __right_value688 = (void*)0;
char* __dec_obj285;
void* __right_value689 = (void*)0;
struct sNode* __dec_obj286;
struct sGCDecNode* __result402__;
    if(    self==(void*)0) {
        __result401__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result401__;
    }
    result_542=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_542->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj285=result_542->sname;
        result_542->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_542->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj286=result_542->node;
        result_542->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result402__ = gComeFunResultObject = __result_obj__ = result_542;
    come_call_finalizer3(result_542,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNoFreeNode* __result404__;
void* __right_value694 = (void*)0;
struct sGCDecNoFreeNode* result_544;
void* __right_value695 = (void*)0;
char* __dec_obj287;
void* __right_value696 = (void*)0;
struct sNode* __dec_obj288;
struct sGCDecNoFreeNode* __result405__;
    if(    self==(void*)0) {
        __result404__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result404__;
    }
    result_544=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_544->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj287=result_544->sname;
        result_544->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_544->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj288=result_544->node;
        result_544->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result405__ = gComeFunResultObject = __result_obj__ = result_544;
    come_call_finalizer3(result_544,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__=(void*)0;
struct sIsHeap* __result407__;
void* __right_value702 = (void*)0;
struct sIsHeap* result_549;
void* __right_value703 = (void*)0;
char* __dec_obj289;
void* __right_value704 = (void*)0;
struct sType* __dec_obj290;
struct sIsHeap* __result408__;
    if(    self==(void*)0) {
        __result407__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result407__;
    }
    result_549=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_549->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj289=result_549->sname;
        result_549->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_549->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj290=result_549->type;
        result_549->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj290,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result408__ = gComeFunResultObject = __result_obj__ = result_549;
    come_call_finalizer3(result_549,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__=(void*)0;
struct sIsPointer* __result410__;
void* __right_value710 = (void*)0;
struct sIsPointer* result_554;
void* __right_value711 = (void*)0;
char* __dec_obj291;
void* __right_value712 = (void*)0;
struct sType* __dec_obj292;
struct sIsPointer* __result411__;
    if(    self==(void*)0) {
        __result410__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result410__;
    }
    result_554=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_554->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj291=result_554->sname;
        result_554->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_554->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj292=result_554->type;
        result_554->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj292,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result411__ = gComeFunResultObject = __result_obj__ = result_554;
    come_call_finalizer3(result_554,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfNode* __result423__;
void* __right_value728 = (void*)0;
struct sSizeOfNode* result_565;
void* __right_value729 = (void*)0;
char* __dec_obj293;
void* __right_value730 = (void*)0;
struct sType* __dec_obj294;
struct sSizeOfNode* __result424__;
    if(    self==(void*)0) {
        __result423__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result423__;
    }
    result_565=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_565->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj293=result_565->sname;
        result_565->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_565->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj294=result_565->type;
        result_565->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj294,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result424__ = gComeFunResultObject = __result_obj__ = result_565;
    come_call_finalizer3(result_565,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result424__;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfExpNode* __result426__;
void* __right_value736 = (void*)0;
struct sSizeOfExpNode* result_568;
void* __right_value737 = (void*)0;
char* __dec_obj297;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj298;
struct sSizeOfExpNode* __result427__;
    if(    self==(void*)0) {
        __result426__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result426__;
    }
    result_568=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_568->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj297=result_568->sname;
        result_568->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_568->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj298=result_568->exp;
        result_568->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result427__ = gComeFunResultObject = __result_obj__ = result_568;
    come_call_finalizer3(result_568,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result427__;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfNode* __result429__;
void* __right_value744 = (void*)0;
struct sTypeOfNode* result_577;
void* __right_value745 = (void*)0;
char* __dec_obj299;
void* __right_value746 = (void*)0;
struct sType* __dec_obj300;
struct sTypeOfNode* __result430__;
    if(    self==(void*)0) {
        __result429__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result429__;
    }
    result_577=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_577->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_577->sname;
        result_577->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_577->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj300=result_577->type;
        result_577->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj300,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result430__ = gComeFunResultObject = __result_obj__ = result_577;
    come_call_finalizer3(result_577,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfExpNode* __result432__;
void* __right_value752 = (void*)0;
struct sTypeOfExpNode* result_580;
void* __right_value753 = (void*)0;
char* __dec_obj303;
void* __right_value754 = (void*)0;
struct sNode* __dec_obj304;
struct sTypeOfExpNode* __result433__;
    if(    self==(void*)0) {
        __result432__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result432__;
    }
    result_580=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_580->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj303=result_580->sname;
        result_580->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_580->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj304=result_580->exp;
        result_580->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result433__ = gComeFunResultObject = __result_obj__ = result_580;
    come_call_finalizer3(result_580,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result433__;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
struct sDynamicTypeOf* __result435__;
void* __right_value760 = (void*)0;
struct sDynamicTypeOf* result_584;
void* __right_value761 = (void*)0;
char* __dec_obj307;
void* __right_value762 = (void*)0;
struct sNode* __dec_obj308;
struct sDynamicTypeOf* __result436__;
    if(    self==(void*)0) {
        __result435__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result435__;
    }
    result_584=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_584->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj307=result_584->sname;
        result_584->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj308=result_584->exp;
        result_584->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result436__ = gComeFunResultObject = __result_obj__ = result_584;
    come_call_finalizer3(result_584,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result436__;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode* __result438__;
void* __right_value768 = (void*)0;
struct sAlignOfNode* result_593;
void* __right_value769 = (void*)0;
char* __dec_obj309;
void* __right_value770 = (void*)0;
struct sType* __dec_obj310;
struct sAlignOfNode* __result439__;
    if(    self==(void*)0) {
        __result438__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result438__;
    }
    result_593=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_593->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj309=result_593->sname;
        result_593->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_593->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj310=result_593->type;
        result_593->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj310,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result439__ = gComeFunResultObject = __result_obj__ = result_593;
    come_call_finalizer3(result_593,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result439__;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode* __result441__;
void* __right_value776 = (void*)0;
struct sAlignOfExpNode* result_596;
void* __right_value777 = (void*)0;
char* __dec_obj313;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj314;
struct sAlignOfExpNode* __result442__;
    if(    self==(void*)0) {
        __result441__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result441__;
    }
    result_596=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_596->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj313=result_596->sname;
        result_596->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_596->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj314=result_596->exp;
        result_596->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result442__ = gComeFunResultObject = __result_obj__ = result_596;
    come_call_finalizer3(result_596,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result442__;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode2* __result444__;
void* __right_value784 = (void*)0;
struct sAlignOfNode2* result_605;
void* __right_value785 = (void*)0;
char* __dec_obj315;
void* __right_value786 = (void*)0;
struct sType* __dec_obj316;
struct sAlignOfNode2* __result445__;
    if(    self==(void*)0) {
        __result444__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result444__;
    }
    result_605=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_605->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_605->sname;
        result_605->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_605->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj316=result_605->type;
        result_605->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj316,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result445__ = gComeFunResultObject = __result_obj__ = result_605;
    come_call_finalizer3(result_605,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result445__;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode2* __result447__;
void* __right_value792 = (void*)0;
struct sAlignOfExpNode2* result_608;
void* __right_value793 = (void*)0;
char* __dec_obj319;
void* __right_value794 = (void*)0;
struct sNode* __dec_obj320;
struct sAlignOfExpNode2* __result448__;
    if(    self==(void*)0) {
        __result447__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result447__;
    }
    result_608=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_608->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj319=result_608->sname;
        result_608->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_608->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj320=result_608->exp;
        result_608->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result448__ = gComeFunResultObject = __result_obj__ = result_608;
    come_call_finalizer3(result_608,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result448__;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsNode* __result450__;
void* __right_value800 = (void*)0;
struct sAlignAsNode* result_616;
void* __right_value801 = (void*)0;
char* __dec_obj321;
void* __right_value802 = (void*)0;
struct sType* __dec_obj322;
struct sAlignAsNode* __result451__;
    if(    self==(void*)0) {
        __result450__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result450__;
    }
    result_616=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_616->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj321=result_616->sname;
        result_616->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_616->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj322=result_616->type;
        result_616->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj322,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result451__ = gComeFunResultObject = __result_obj__ = result_616;
    come_call_finalizer3(result_616,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result451__;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsExpNode* __result453__;
void* __right_value807 = (void*)0;
struct sAlignAsExpNode* result_618;
void* __right_value808 = (void*)0;
char* __dec_obj323;
void* __right_value809 = (void*)0;
struct sNode* __dec_obj324;
struct sAlignAsExpNode* __result454__;
    if(    self==(void*)0) {
        __result453__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result453__;
    }
    result_618=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_618->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj323=result_618->sname;
        result_618->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_618->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj324=result_618->exp;
        result_618->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result454__ = gComeFunResultObject = __result_obj__ = result_618;
    come_call_finalizer3(result_618,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result454__;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value812 = (void*)0;
struct sNode* __result457__;
void* __right_value813 = (void*)0;
struct sNode* __result458__;
void* __right_value814 = (void*)0;
struct sNode* __result459__;
_Bool come_c_619;
void* __right_value815 = (void*)0;
struct sNode* __result460__;
void* __right_value816 = (void*)0;
struct sNode* __result461__;
    if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result457__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value812=create_nothing_node(info)));
            if(__right_value812) { __right_value812 = come_decrement_ref_count2(__right_value812, ((struct sNode*)__right_value812)->finalize, ((struct sNode*)__right_value812)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result457__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result458__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value813=create_nothing_node(info)));
            if(__right_value813) { __right_value813 = come_decrement_ref_count2(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result458__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result459__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value814=create_nothing_node(info)));
            if(__right_value814) { __right_value814 = come_decrement_ref_count2(__right_value814, ((struct sNode*)__right_value814)->finalize, ((struct sNode*)__right_value814)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result459__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_619=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_619;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
        __result460__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value815=create_nothing_node(info)));
        if(__right_value815) { __right_value815 = come_decrement_ref_count2(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result460__;
    }
    __result461__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value816=top_level_v93(buf,head,head_sline,info)));
    if(__right_value816) { __right_value816 = come_decrement_ref_count2(__right_value816, ((struct sNode*)__right_value816)->finalize, ((struct sNode*)__right_value816)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result461__;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct sNode* _inf_value29;
struct sImplementsNode* _inf_obj_value29;
void* __right_value823 = (void*)0;
struct sNode* __result464__;
    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1976, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value29=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value818=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1976, "struct sImplementsNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value29->_protocol_obj=_inf_obj_value29;
    _inf_value29->finalize=(void*)sImplementsNode_finalize;
    _inf_value29->clone=(void*)sImplementsNode_clone;
    _inf_value29->compile=(void*)sImplementsNode_compile;
    _inf_value29->sline=(void*)sNodeBase_sline;
    _inf_value29->sline_real=(void*)sNodeBase_sline_real;
    _inf_value29->sname=(void*)sNodeBase_sname;
    _inf_value29->terminated=(void*)sNodeBase_terminated;
    _inf_value29->kind=(void*)sImplementsNode_kind;
    __result464__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value823=_inf_value29));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value818,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value823) { __right_value823 = come_decrement_ref_count2(__right_value823, ((struct sNode*)__right_value823)->finalize, ((struct sNode*)__right_value823)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result464__;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
struct sImplementsNode* __result462__;
void* __right_value819 = (void*)0;
struct sImplementsNode* result_620;
void* __right_value820 = (void*)0;
char* __dec_obj325;
void* __right_value821 = (void*)0;
struct sNode* __dec_obj326;
void* __right_value822 = (void*)0;
struct sType* __dec_obj327;
struct sImplementsNode* __result463__;
    if(    self==(void*)0) {
        __result462__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result462__;
    }
    result_620=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_620->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj325=result_620->sname;
        result_620->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_620->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj326=result_620->obj_exp;
        result_620->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
        if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj327=result_620->inf_type;
        result_620->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
        come_call_finalizer3(__dec_obj327,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result463__ = gComeFunResultObject = __result_obj__ = result_620;
    come_call_finalizer3(result_620,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result463__;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value824 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* type3_621=0;
char* name2_622=0;
_Bool err_623=0;
void* __right_value825 = (void*)0;
struct sType* inf_type_624;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct sNode* _inf_value30;
struct sImplementsNode* _inf_obj_value30;
void* __right_value828 = (void*)0;
struct sNode* __result465__;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sNode* _inf_value31;
struct sProtocolObject* _inf_obj_value31;
void* __right_value834 = (void*)0;
struct sNode* __result468__;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sType* inf_type_626;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct sNode* _inf_value32;
struct sImplementsNode* _inf_obj_value32;
void* __right_value839 = (void*)0;
struct sNode* __result469__;
void* __right_value840 = (void*)0;
struct sNode* __result470__;
    if(    !gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value824=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_621=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        name2_622=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        err_623=multiple_assign_var16->v3;
        come_call_finalizer3(__right_value824,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_623) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_624=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_621));
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1993, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value827=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1993, "struct sImplementsNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_624),info))));
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sImplementsNode_finalize;
        _inf_value30->clone=(void*)sImplementsNode_clone;
        _inf_value30->compile=(void*)sImplementsNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sImplementsNode_kind;
        __result465__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value828=_inf_value30));
        come_call_finalizer3(type3_621,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_622 = come_decrement_ref_count2(name2_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value827,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value828) { __right_value828 = come_decrement_ref_count2(__right_value828, ((struct sNode*)__right_value828)->finalize, ((struct sNode*)__right_value828)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result465__;
        come_call_finalizer3(type3_621,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_622 = come_decrement_ref_count2(name2_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==126&&*(info->p+1)==126) {
        info->p+=2;
        skip_spaces_and_lf(info);
        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1999, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value31=(struct sProtocolObject*)come_increment_ref_count(((struct sProtocolObject*)(__right_value830=sProtocolObject_initialize((struct sProtocolObject*)come_increment_ref_count((struct sProtocolObject*)come_calloc(1, sizeof(struct sProtocolObject)*(1), "21obj.c", 1999, "struct sProtocolObject*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value31->_protocol_obj=_inf_obj_value31;
        _inf_value31->finalize=(void*)sProtocolObject_finalize;
        _inf_value31->clone=(void*)sProtocolObject_clone;
        _inf_value31->compile=(void*)sProtocolObject_compile;
        _inf_value31->sline=(void*)sNodeBase_sline;
        _inf_value31->sline_real=(void*)sNodeBase_sline_real;
        _inf_value31->sname=(void*)sNodeBase_sname;
        _inf_value31->terminated=(void*)sNodeBase_terminated;
        _inf_value31->kind=(void*)sProtocolObject_kind;
        __result468__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value834=_inf_value31));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value830,sProtocolObject_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value834) { __right_value834 = come_decrement_ref_count2(__right_value834, ((struct sNode*)__right_value834)->finalize, ((struct sNode*)__right_value834)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result468__;
    }
    else if(    *info->p==126) {
        info->p++;
        skip_spaces_and_lf(info);
        inf_type_626=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 2005, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2007, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value32=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value838=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2007, "struct sImplementsNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_626),info))));
        _inf_value32->_protocol_obj=_inf_obj_value32;
        _inf_value32->finalize=(void*)sImplementsNode_finalize;
        _inf_value32->clone=(void*)sImplementsNode_clone;
        _inf_value32->compile=(void*)sImplementsNode_compile;
        _inf_value32->sline=(void*)sNodeBase_sline;
        _inf_value32->sline_real=(void*)sNodeBase_sline_real;
        _inf_value32->sname=(void*)sNodeBase_sname;
        _inf_value32->terminated=(void*)sNodeBase_terminated;
        _inf_value32->kind=(void*)sImplementsNode_kind;
        __result469__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=_inf_value32));
        come_call_finalizer3(inf_type_626,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value838,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value839) { __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result469__;
        come_call_finalizer3(inf_type_626,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result470__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value840=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value840) { __right_value840 = come_decrement_ref_count2(__right_value840, ((struct sNode*)__right_value840)->finalize, ((struct sNode*)__right_value840)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result470__;
}

static struct sProtocolObject* sProtocolObject_clone(struct sProtocolObject* self){
void* __result_obj__=(void*)0;
struct sProtocolObject* __result466__;
void* __right_value831 = (void*)0;
struct sProtocolObject* result_625;
void* __right_value832 = (void*)0;
char* __dec_obj328;
void* __right_value833 = (void*)0;
struct sNode* __dec_obj329;
struct sProtocolObject* __result467__;
    if(    self==(void*)0) {
        __result466__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result466__;
    }
    result_625=(struct sProtocolObject*)come_increment_ref_count((struct sProtocolObject*)come_calloc(1, sizeof(struct sProtocolObject)*(1), "sProtocolObject_clone", 3, "struct sProtocolObject*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_625->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj328=result_625->sname;
        result_625->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_625->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj329=result_625->obj_exp;
        result_625->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
        if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result467__ = gComeFunResultObject = __result_obj__ = result_625;
    come_call_finalizer3(result_625,sProtocolObject_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

