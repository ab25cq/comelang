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

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value290 = (void*)0;
struct sType* __dec_obj82;
struct list$1tuple2$2charphsNodephph* __dec_obj83;
struct sNewNode* __result236__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj82=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj83=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer);
    come_call_finalizer3(__dec_obj83,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
char* __result237__;
    __result237__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value291=__builtin_string("sNewNode")));
    __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_322;
struct list$1tuple2$2charphsNodephph* initializer_323;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct CVALUE* come_value_324;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct buffer* num_string_325;
struct list$1sNodeph* o2_saved_326;
struct sNode* it_329;
_Bool Value_332;
_Bool __result244__;
void* __right_value296 = (void*)0;
struct CVALUE* cvalue_333;
void* __right_value297 = (void*)0;
struct sType* type2_334;
void* __right_value298 = (void*)0;
char* type_name_337;
void* __right_value299 = (void*)0;
char* type_name2_338;
void* __right_value300 = (void*)0;
char* var_name_340;
void* __right_value301 = (void*)0;
struct sType* type3_341;
void* __right_value302 = (void*)0;
char* type_name3_342;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct buffer* buf_343;
char* obj_344;
void* __right_value306 = (void*)0;
struct sType* any_type_345;
void* __right_value307 = (void*)0;
char* finalizer_name_346;
void* __right_value308 = (void*)0;
char* cloner_name_347;
void* __right_value309 = (void*)0;
_Bool _if_conditional1;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
_Bool _if_conditional2;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* any_type_name_351;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj111;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* __dec_obj112;
struct sClass* klass_352;
int i_353;
struct list$1tuple2$2charphsNodephph* o2_saved_354;
struct tuple2$2charphsNodeph* it_357;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* name_360=0;
struct sNode* exp_361=0;
_Bool Value_362;
_Bool __result256__;
void* __right_value318 = (void*)0;
struct CVALUE* come_value2_363;
struct sType* left_type_364;
struct list$1tuple2$2charphsTypephph* o2_saved_365;
struct tuple2$2charphsTypeph* it2_368;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* field_name_371=0;
struct sType* field_type_372=0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj113;
_Bool __result263__;
struct sType* right_type_375;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* __dec_obj117;
void* __right_value322 = (void*)0;
char* c_value_376;
void* __right_value323 = (void*)0;
char* __dec_obj118;
void* __right_value324 = (void*)0;
struct sType* __dec_obj119;
void* __right_value328 = (void*)0;
struct sType* type3_380;
void* __right_value329 = (void*)0;
char* type_name3_381;
char* obj_382;
void* __right_value330 = (void*)0;
struct sType* any_type_383;
void* __right_value331 = (void*)0;
char* finalizer_name_384;
void* __right_value332 = (void*)0;
char* cloner_name_385;
void* __right_value333 = (void*)0;
_Bool _if_conditional3;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
_Bool _if_conditional4;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* any_type_name_386;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
char* __dec_obj123;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* __dec_obj124;
void* __right_value342 = (void*)0;
struct sType* __dec_obj125;
_Bool __result265__;
obj_344 = (void*)0;
obj_382 = (void*)0;
    type_322=self->type;
    initializer_323=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    come_value_324=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 23, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_325=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 25, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_325,"1");
    for(    o2_saved_326=(struct list$1sNodeph*)come_increment_ref_count((type_322->mArrayNum)),it_329=list$1sNodeph_begin((o2_saved_326));    !list$1sNodeph_end((o2_saved_326));    it_329=list$1sNodeph_next((o2_saved_326))    ){
        Value_332=node_compile(it_329,info);
        if(        !Value_332) {
            __result244__ = (_Bool)0;
            come_call_finalizer3(o2_saved_326,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_323,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result244__;
        }
        else {
        }
        cvalue_333=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_format(num_string_325,"*(%s)",cvalue_333->c_value);
        come_call_finalizer3(cvalue_333,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_326,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    type2_334=(struct sType*)come_increment_ref_count(solve_generics(type_322,info->generics_type,info));
    list$1sNodeph_reset(type2_334->mArrayNum);
    type_name_337=(char*)come_increment_ref_count(make_type_name_string(type2_334,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_338=(char*)come_increment_ref_count(make_come_type_name_string(type2_334,info));
    if(    initializer_323) {
        static int var_num_339=1;
        var_num_339++;
        var_name_340=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_339));
        type3_341=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_334));
        type3_341->mPointerNum++;
        if(        type3_341->mNoSolvedGenericsType&&type3_341->mNoSolvedGenericsType->v1) {
            type3_341->mNoSolvedGenericsType->v1->mPointerNum++;
        }
        type_name3_342=(char*)come_increment_ref_count(make_type_name_string(type3_341,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value303=make_define_var(type3_341,var_name_340,(_Bool)0,info))));
        __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buf_343=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 69, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_343,"(");
        if(        type2_334->mAnyClass&&type2_334->mAnyOriginalType) {
            any_type_345=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_334->mAnyOriginalType));
            finalizer_name_346=(char*)come_increment_ref_count(create_method_name(any_type_345,(_Bool)0,"finalize",info,(_Bool)1));
            cloner_name_347=(char*)come_increment_ref_count(create_method_name(any_type_345,(_Bool)0,"clone",info,(_Bool)1));
            if(            (_if_conditional1=(((struct sFun*)(__right_value309=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_346)))==((void*)0))),            come_call_finalizer3(__right_value309,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value310=create_finalizer_automatically(any_type_345,"finalize",info)));
                come_call_finalizer3(__right_value310,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional2=(((struct sFun*)(__right_value311=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_347)))==((void*)0))),            come_call_finalizer3(__right_value311,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional2) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value312=create_cloner_automatically(any_type_345,"clone",info)));
                come_call_finalizer3(__right_value312,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            any_type_345->mPointerNum--;
            any_type_name_351=(char*)come_increment_ref_count(make_type_name_string(any_type_345,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj111=obj_344;
            obj_344=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s)",var_name_340,any_type_name_351,type_name_337,((char*)(__right_value314=buffer_to_string(num_string_325))),info->sname,info->sline,any_type_name_351,finalizer_name_346,cloner_name_347));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(any_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_346 = come_decrement_ref_count2(finalizer_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_347 = come_decrement_ref_count2(cloner_name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_351 = come_decrement_ref_count2(any_type_name_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj112=obj_344;
            obj_344=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",var_name_340,type_name_337,type_name_337,((char*)(__right_value316=buffer_to_string(num_string_325))),info->sname,info->sline,type_name3_342));
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        buffer_append_str(buf_343,obj_344);
        buffer_append_str(buf_343,",");
        klass_352=type3_341->mClass;
        i_353=0;
        for(        o2_saved_354=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_323)),it_357=list$1tuple2$2charphsNodephph_begin((o2_saved_354));        !list$1tuple2$2charphsNodephph_end((o2_saved_354));        it_357=list$1tuple2$2charphsNodephph_next((o2_saved_354))        ){
            multiple_assign_var1=it_357;
            name_360=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            exp_361=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_362=node_compile(exp_361,info);
            if(            !Value_362) {
                __result256__ = (_Bool)0;
                name_360 = come_decrement_ref_count2(name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_361) { exp_361 = come_decrement_ref_count2(exp_361, ((struct sNode*)exp_361)->finalize, ((struct sNode*)exp_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_354,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_340 = come_decrement_ref_count2(var_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type3_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name3_342 = come_decrement_ref_count2(type_name3_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_343,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_344 = come_decrement_ref_count2(obj_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_323,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_334,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_337 = come_decrement_ref_count2(type_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_338 = come_decrement_ref_count2(type_name2_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result256__;
            }
            else {
            }
            come_value2_363=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            left_type_364=((void*)0);
            for(            o2_saved_365=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_352->mFields)),it2_368=list$1tuple2$2charphsTypephph_begin((o2_saved_365));            !list$1tuple2$2charphsTypephph_end((o2_saved_365));            it2_368=list$1tuple2$2charphsTypephph_next((o2_saved_365))            ){
                multiple_assign_var2=it2_368;
                field_name_371=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                field_type_372=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
                if(                string_operator_equals(name_360,field_name_371)) {
                    __dec_obj113=left_type_364;
                    left_type_364=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_372));
                    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name_371 = come_decrement_ref_count2(field_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name_371 = come_decrement_ref_count2(field_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_365,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_364==((void*)0)) {
                err_msg(info,"field %s is not defined",name_360);
                __result263__ = (_Bool)0;
                name_360 = come_decrement_ref_count2(name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_361) { exp_361 = come_decrement_ref_count2(exp_361, ((struct sNode*)exp_361)->finalize, ((struct sNode*)exp_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value2_363,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_354,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_340 = come_decrement_ref_count2(var_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type3_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name3_342 = come_decrement_ref_count2(type_name3_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_343,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_344 = come_decrement_ref_count2(obj_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_323,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_334,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_337 = come_decrement_ref_count2(type_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_338 = come_decrement_ref_count2(type_name2_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result263__;
            }
            right_type_375=(struct sType*)come_increment_ref_count(come_value2_363->type);
            check_assign_type(((char*)(__right_value321=xsprintf("\%s is assining to",((char*)(__right_value320=string_to_string(name_360)))))),left_type_364,right_type_375,come_value2_363,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj117=right_type_375;
            right_type_375=(struct sType*)come_increment_ref_count(come_value2_363->type);
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_364->mHeap&&right_type_375->mHeap&&left_type_364->mPointerNum>0&&right_type_375->mPointerNum>0) {
                c_value_376=(char*)come_increment_ref_count(increment_ref_count_object(left_type_364,come_value2_363->c_value,info));
                buffer_append_format(buf_343,"%s->%s = %s",var_name_340,name_360,c_value_376);
                c_value_376 = come_decrement_ref_count2(c_value_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                buffer_append_format(buf_343,"%s->%s = %s",var_name_340,name_360,come_value2_363->c_value);
            }
            buffer_append_str(buf_343,",");
            i_353++;
            name_360 = come_decrement_ref_count2(name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_361) { exp_361 = come_decrement_ref_count2(exp_361, ((struct sNode*)exp_361)->finalize, ((struct sNode*)exp_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_363,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type_375,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_354,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_343,var_name_340);
        buffer_append_str(buf_343,")");
        __dec_obj118=come_value_324->c_value;
        come_value_324->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_343));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        type2_334->mHeap=(_Bool)1;
        type2_334->mPointerNum++;
        if(        type2_334->mNoSolvedGenericsType->v1) {
            type2_334->mNoSolvedGenericsType->v1->mPointerNum++;
            type2_334->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        __dec_obj119=come_value_324->type;
        come_value_324->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_334));
        come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_324->var=((void*)0);
        append_object_to_right_values2(come_value_324,(struct sType*)come_increment_ref_count(type2_334),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_324->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_324));
        var_name_340 = come_decrement_ref_count2(var_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_341,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name3_342 = come_decrement_ref_count2(type_name3_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_343,buffer_finalize, 0, 0, 0, 0, (void*)0);
        obj_344 = come_decrement_ref_count2(obj_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        type3_380=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_334));
        type3_380->mPointerNum++;
        type3_380->mHeap=(_Bool)1;
        if(        type3_380->mNoSolvedGenericsType&&type3_380->mNoSolvedGenericsType->v1) {
            type3_380->mNoSolvedGenericsType->v1->mPointerNum++;
            type3_380->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        type_name3_381=(char*)come_increment_ref_count(make_type_name_string(type3_380,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        type2_334->mAnyClass&&type2_334->mAnyOriginalType) {
            any_type_383=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_334->mAnyOriginalType));
            finalizer_name_384=(char*)come_increment_ref_count(create_method_name(any_type_383,(_Bool)0,"finalize",info,(_Bool)1));
            cloner_name_385=(char*)come_increment_ref_count(create_method_name(any_type_383,(_Bool)0,"clone",info,(_Bool)1));
            if(            (_if_conditional3=(((struct sFun*)(__right_value333=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_384)))==((void*)0))),            come_call_finalizer3(__right_value333,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value334=create_finalizer_automatically(any_type_383,"finalize",info)));
                come_call_finalizer3(__right_value334,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional4=(((struct sFun*)(__right_value335=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_385)))==((void*)0))),            come_call_finalizer3(__right_value335,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value336=create_cloner_automatically(any_type_383,"clone",info)));
                come_call_finalizer3(__right_value336,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            any_type_383->mPointerNum--;
            any_type_name_386=(char*)come_increment_ref_count(make_type_name_string(any_type_383,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj123=come_value_324->c_value;
            come_value_324->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s)",any_type_name_386,any_type_name_386,((char*)(__right_value338=buffer_to_string(num_string_325))),info->sname,info->sline,any_type_name_386,finalizer_name_384,cloner_name_385));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            type2_334->mPointerNum--;
            come_call_finalizer3(any_type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_384 = come_decrement_ref_count2(finalizer_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_385 = come_decrement_ref_count2(cloner_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_386 = come_decrement_ref_count2(any_type_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj124=come_value_324->c_value;
            come_value_324->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",type_name_337,type_name_337,((char*)(__right_value340=buffer_to_string(num_string_325))),info->sname,info->sline,type_name3_381));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        type2_334->mHeap=(_Bool)1;
        type2_334->mPointerNum++;
        if(        type2_334->mNoSolvedGenericsType->v1) {
            type2_334->mNoSolvedGenericsType->v1->mPointerNum++;
            type2_334->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        __dec_obj125=come_value_324->type;
        come_value_324->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_334));
        come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_324->var=((void*)0);
        append_object_to_right_values2(come_value_324,(struct sType*)come_increment_ref_count(type2_334),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_324->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_324));
        come_call_finalizer3(type3_380,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name3_381 = come_decrement_ref_count2(type_name3_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        obj_382 = come_decrement_ref_count2(obj_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result265__ = (_Bool)1;
    come_call_finalizer3(initializer_323,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_334,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_337 = come_decrement_ref_count2(type_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_338 = come_decrement_ref_count2(type_name2_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result265__;
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
struct sType* __result219__;
void* __right_value250 = (void*)0;
struct sType* result_290;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* __dec_obj55;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj56;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value256 = (void*)0;
struct sType* __dec_obj58;
void* __right_value257 = (void*)0;
char* __dec_obj59;
void* __right_value258 = (void*)0;
char* __dec_obj60;
void* __right_value265 = (void*)0;
struct list$1sTypeph* __dec_obj64;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __dec_obj68;
void* __right_value274 = (void*)0;
struct list$1sTypeph* __dec_obj69;
void* __right_value281 = (void*)0;
struct list$1charph* __dec_obj73;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj74;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value286 = (void*)0;
char* __dec_obj78;
void* __right_value287 = (void*)0;
char* __dec_obj79;
void* __right_value288 = (void*)0;
char* __dec_obj80;
void* __right_value289 = (void*)0;
char* __dec_obj81;
struct sType* __result235__;
    if(    self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_290=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_290->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj55=result_290->mNoSolvedGenericsType;
        result_290->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj56=result_290->mOriginalLoadVarType;
        result_290->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj57=result_290->mRefferenceOriginalType;
        result_290->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj58=result_290->mAnyOriginalType;
        result_290->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj59=result_290->mInterfaceName;
        result_290->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_290->mGenericsName;
        result_290->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_290->mGenericsTypes;
        result_290->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj64,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj68=result_290->mArrayNum;
        result_290->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj68,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj69=result_290->mParamTypes;
        result_290->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj73=result_290->mParamNames;
        result_290->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj73,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj74=result_290->mResultType;
        result_290->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj74,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj75=result_290->mAlignas;
        result_290->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj76=result_290->mChannelType;
        result_290->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_290->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_290->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_290->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_290->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_290->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_290->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_290->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_290->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_290->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_290->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_290->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_290->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_290->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_290->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_290->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_290->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_290->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_290->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_290->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_290->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_290->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_290->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj77=result_290->mSizeNum;
        result_290->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_290->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj78=result_290->mOriginalTypeName;
        result_290->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_290->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_290->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_290->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_290->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_290->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_290->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj79=result_290->mAsmName;
        result_290->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_290->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_290->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_290->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_290->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_290->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj80=result_290->mTupleName;
        result_290->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj81=result_290->mAttribute;
        result_290->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_290;
    come_call_finalizer3(result_290,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result220__;
void* __right_value251 = (void*)0;
struct tuple1$1sTypeph* result_291;
void* __right_value252 = (void*)0;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result221__;
    if(    self==(void*)0) {
        __result220__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_291=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj32=result_291->v1;
        result_291->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(result_291,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj36;
struct sType* __dec_obj37;
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
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj37=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_292;
struct list_item$1sTypeph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        come_call_finalizer3(prev_it_293,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_294;
struct list_item$1sTypeph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_296;
struct list_item$1sNodeph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_298;
struct list_item$1sNodeph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_300;
struct list_item$1charph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1sTypeph* __result222__;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1sTypeph* result_302;
struct list_item$1sTypeph* it_303;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __result225__;
    if(    self==((void*)0)) {
        __result222__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_302=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_303=self->head;
    while(it_303!=((void*)0)) {
        list$1sTypeph_add(result_302,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_303->item)));
        it_303=it_303->next;
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_302;
    come_call_finalizer3(result_302,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result223__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_304;
struct sType* __dec_obj61;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_305;
struct sType* __dec_obj62;
void* __right_value263 = (void*)0;
struct list_item$1sTypeph* litem_306;
struct sType* __dec_obj63;
struct list$1sTypeph* __result224__;
    if(    self->len==0) {
        litem_304=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj61=litem_304->item;
        litem_304->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj62=litem_305->item;
        litem_305->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value263=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj63=litem_306->item;
        litem_306->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result226__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1sNodeph* result_307;
struct list_item$1sNodeph* it_308;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __result231__;
    if(    self==((void*)0)) {
        __result226__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_307=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_308=self->head;
    while(it_308!=((void*)0)) {
        list$1sNodeph_add(result_307,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_308->item)));
        it_308=it_308->next;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_307;
    come_call_finalizer3(result_307,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result227__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_309;
struct sNode* __dec_obj65;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_310;
struct sNode* __dec_obj66;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_311;
struct sNode* __dec_obj67;
struct list$1sNodeph* __result228__;
    if(    self->len==0) {
        litem_309=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_309->prev=((void*)0);
        litem_309->next=((void*)0);
        __dec_obj65=litem_309->item;
        litem_309->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_309;
        self->head=litem_309;
    }
    else if(    self->len==1) {
        litem_310=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_310->prev=self->head;
        litem_310->next=((void*)0);
        __dec_obj66=litem_310->item;
        litem_310->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_310;
        self->head->next=litem_310;
    }
    else {
        litem_311=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_311->prev=self->tail;
        litem_311->next=((void*)0);
        __dec_obj67=litem_311->item;
        litem_311->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_311;
        self->tail=litem_311;
    }
    self->len++;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result229__;
void* __right_value271 = (void*)0;
struct sNode* result_312;
struct sNode* __result230__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
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
    __result230__ = gComeFunResultObject = __result_obj__ = result_312;
    if(result_312) { result_312 = come_decrement_ref_count2(result_312, ((struct sNode*)result_312)->finalize, ((struct sNode*)result_312)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result232__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1charph* result_313;
struct list_item$1charph* it_314;
void* __right_value280 = (void*)0;
struct list$1charph* __result234__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_313=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_314=self->head;
    while(it_314!=((void*)0)) {
        list$1charph_add(result_313,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_314->item)));
        it_314=it_314->next;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_313;
    come_call_finalizer3(result_313,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_315;
char* __dec_obj70;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_316;
char* __dec_obj71;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_317;
char* __dec_obj72;
struct list$1charph* __result233__;
    if(    self->len==0) {
        litem_315=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_315->prev=((void*)0);
        litem_315->next=((void*)0);
        __dec_obj70=litem_315->item;
        litem_315->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_315;
        self->head=litem_315;
    }
    else if(    self->len==1) {
        litem_316=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_316->prev=self->head;
        litem_316->next=((void*)0);
        __dec_obj71=litem_316->item;
        litem_316->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_316;
        self->head->next=litem_316;
    }
    else {
        litem_317=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_317->prev=self->tail;
        litem_317->next=((void*)0);
        __dec_obj72=litem_317->item;
        litem_317->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_317;
        self->tail=litem_317;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_318;
struct list_item$1tuple2$2charphsNodephph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        come_call_finalizer3(prev_it_319,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj84;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj84=self->item;
            come_call_finalizer3(__dec_obj84,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj85;
struct sNode* __dec_obj86;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj85=self->v1;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj86=self->v2;
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sNewNode_finalize(struct sNewNode* self){
char* __dec_obj87;
struct sType* __dec_obj88;
struct list$1tuple2$2charphsNodephph* __dec_obj89;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj87=self->sname;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj88=self->type;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj89=self->initializer;
            come_call_finalizer3(__dec_obj89,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_320;
struct list_item$1tuple2$2charphsNodephph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        come_call_finalizer3(prev_it_321,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_327;
struct sNode* __result238__;
struct sNode* __result239__;
struct sNode* result_328;
struct sNode* __result240__;
result_327 = (void*)0;
result_328 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_327,0,sizeof(struct sNode*));
        __result238__ = gComeFunResultObject = __result_obj__ = result_327;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    self->it=self->head;
    if(    self->it) {
        __result239__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    memset(&result_328,0,sizeof(struct sNode*));
    __result240__ = gComeFunResultObject = __result_obj__ = result_328;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_330;
struct sNode* __result241__;
struct sNode* __result242__;
struct sNode* result_331;
struct sNode* __result243__;
result_330 = (void*)0;
result_331 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_330,0,sizeof(struct sNode*));
        __result241__ = gComeFunResultObject = __result_obj__ = result_330;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result242__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    memset(&result_331,0,sizeof(struct sNode*));
    __result243__ = gComeFunResultObject = __result_obj__ = result_331;
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj90;
struct sType* __dec_obj91;
char* __dec_obj92;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj90=self->c_value;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj91=self->type;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj92=self->c_value_without_right_value_objects;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_335;
struct list_item$1sNodeph* prev_it_336;
struct list$1sNodeph* __result245__;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        come_call_finalizer3(prev_it_336,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_348;
unsigned int hash_349;
unsigned int it_350;
struct sFun* __result246__;
struct sFun* __result247__;
struct sFun* __result248__;
struct sFun* __result249__;
default_value_348 = (void*)0;
    memset(&default_value_348,0,sizeof(struct sFun*));
    hash_349=charp_get_hash_key(((char*)key))%self->size;
    it_350=hash_349;
    while((_Bool)1) {
        if(        self->item_existance[it_350]) {
            if(            charp_equals(self->keys[it_350],key)) {
                __result246__ = gComeFunResultObject = __result_obj__ = self->items[it_350];
                come_call_finalizer3(default_value_348,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result246__;
            }
            it_350++;
            if(            it_350>=self->size) {
                it_350=0;
            }
            else if(            it_350==hash_349) {
                __result247__ = gComeFunResultObject = __result_obj__ = default_value_348;
                come_call_finalizer3(default_value_348,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result247__;
            }
        }
        else {
            __result248__ = gComeFunResultObject = __result_obj__ = default_value_348;
            come_call_finalizer3(default_value_348,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result248__;
        }
    }
    __result249__ = gComeFunResultObject = __result_obj__ = default_value_348;
    come_call_finalizer3(default_value_348,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj93;
struct sType* __dec_obj94;
struct list$1sTypeph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct list$1charph* __dec_obj97;
struct sType* __dec_obj98;
struct sBlock* __dec_obj99;
struct buffer* __dec_obj102;
struct buffer* __dec_obj103;
struct buffer* __dec_obj104;
struct buffer* __dec_obj105;
char* __dec_obj106;
char* __dec_obj107;
char* __dec_obj108;
char* __dec_obj109;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj93=self->mName;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj94=self->mResultType;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj95=self->mParamTypes;
            come_call_finalizer3(__dec_obj95,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj96=self->mParamNames;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj97=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj98=self->mLambdaType;
            come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj99=self->mBlock;
            come_call_finalizer3(__dec_obj99,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj102=self->mSource;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj103=self->mSourceHead;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj104=self->mSourceHead2;
            come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj105=self->mSourceDefer;
            come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj106=self->mComeHeader;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj107=self->mDeclareSName;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj108=self->mAttribute;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj109=self->mFunAttribute;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj100;
struct sVarTable* __dec_obj101;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj100=self->mNodes;
            come_call_finalizer3(__dec_obj100,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj101=self->mVarTable;
            come_call_finalizer3(__dec_obj101,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj110;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj110=self->v2;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_355;
struct tuple2$2charphsNodeph* __result250__;
struct tuple2$2charphsNodeph* __result251__;
struct tuple2$2charphsNodeph* result_356;
struct tuple2$2charphsNodeph* __result252__;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_355,0,sizeof(struct tuple2$2charphsNodeph*));
        __result250__ = gComeFunResultObject = __result_obj__ = result_355;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    self->it=self->head;
    if(    self->it) {
        __result251__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    memset(&result_356,0,sizeof(struct tuple2$2charphsNodeph*));
    __result252__ = gComeFunResultObject = __result_obj__ = result_356;
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_358;
struct tuple2$2charphsNodeph* __result253__;
struct tuple2$2charphsNodeph* __result254__;
struct tuple2$2charphsNodeph* result_359;
struct tuple2$2charphsNodeph* __result255__;
result_358 = (void*)0;
result_359 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_358,0,sizeof(struct tuple2$2charphsNodeph*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_358;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_359,0,sizeof(struct tuple2$2charphsNodeph*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_359;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_366;
struct tuple2$2charphsTypeph* __result257__;
struct tuple2$2charphsTypeph* __result258__;
struct tuple2$2charphsTypeph* result_367;
struct tuple2$2charphsTypeph* __result259__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_366,0,sizeof(struct tuple2$2charphsTypeph*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->head;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_367,0,sizeof(struct tuple2$2charphsTypeph*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_369;
struct tuple2$2charphsTypeph* __result260__;
struct tuple2$2charphsTypeph* __result261__;
struct tuple2$2charphsTypeph* result_370;
struct tuple2$2charphsTypeph* __result262__;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_369,0,sizeof(struct tuple2$2charphsTypeph*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_369;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_370,0,sizeof(struct tuple2$2charphsTypeph*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_373;
struct list_item$1tuple2$2charphsTypephph* prev_it_374;
    it_373=self->head;
    while(it_373!=((void*)0)) {
        prev_it_374=it_373;
        it_373=it_373->next;
        come_call_finalizer3(prev_it_374,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj114;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj114=self->item;
            come_call_finalizer3(__dec_obj114,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
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

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value325 = (void*)0;
struct list_item$1CVALUEph* litem_377;
struct CVALUE* __dec_obj120;
void* __right_value326 = (void*)0;
struct list_item$1CVALUEph* litem_378;
struct CVALUE* __dec_obj121;
void* __right_value327 = (void*)0;
struct list_item$1CVALUEph* litem_379;
struct CVALUE* __dec_obj122;
struct list$1CVALUEph* __result264__;
    if(    self->len==0) {
        litem_377=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value325=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_377->prev=((void*)0);
        litem_377->next=((void*)0);
        __dec_obj120=litem_377->item;
        litem_377->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_377;
        self->head=litem_377;
    }
    else if(    self->len==1) {
        litem_378=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value326=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_378->prev=self->head;
        litem_378->next=((void*)0);
        __dec_obj121=litem_378->item;
        litem_378->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_378;
        self->head->next=litem_378;
    }
    else {
        litem_379=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value327=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_379->prev=self->tail;
        litem_379->next=((void*)0);
        __dec_obj122=litem_379->item;
        litem_379->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_379;
        self->tail=litem_379;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sNode* __dec_obj126;
void* __right_value345 = (void*)0;
struct sType* __dec_obj127;
struct sImplementsNode* __result266__;
    ((struct sNodeBase*)(__right_value343=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value343,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj126=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj127=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
void* __right_value346 = (void*)0;
char* __result267__;
    __result267__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value346=__builtin_string("sImplementsNode")));
    __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value347 = (void*)0;
struct sNode* obj_exp_387;
void* __right_value348 = (void*)0;
struct sType* inf_type_388;
_Bool Value_389;
_Bool __result268__;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value350 = (void*)0;
struct sType* type_391;
struct sClass* klass_392;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct CVALUE* come_value2_393;
void* __right_value353 = (void*)0;
struct sType* type2_394;
void* __right_value354 = (void*)0;
char* type_name_395;
void* __right_value355 = (void*)0;
char* type_name2_396;
int inf_num_stack_398;
void* __right_value356 = (void*)0;
char* buf_399;
void* __right_value357 = (void*)0;
char* buf2_400;
void* __right_value358 = (void*)0;
char* c_value_401;
void* __right_value359 = (void*)0;
struct sType* typeX_402;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
int i_403;
void* __right_value362 = (void*)0;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_407=0;
struct sType* field_type_408=0;
void* __right_value363 = (void*)0;
char* method_name_409;
void* __right_value364 = (void*)0;
struct sFun* fun_410;
void* __right_value365 = (void*)0;
struct sType* type2_413;
void* __right_value366 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_414=0;
char* real_fun_name_415=0;
char* __dec_obj131;
void* __right_value367 = (void*)0;
struct sType* type2_416;
void* __right_value368 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_417=0;
char* real_fun_name_418=0;
char* __dec_obj132;
void* __right_value369 = (void*)0;
struct sClass* klass2_419;
void* __right_value370 = (void*)0;
_Bool _while_condtional1;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
char* __dec_obj138;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
char* __dec_obj139;
void* __right_value375 = (void*)0;
struct sType* type3_425;
void* __right_value376 = (void*)0;
struct sType* __dec_obj140;
_Bool __result279__;
    obj_exp_387=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    inf_type_388=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
    Value_389=node_compile(obj_exp_387,info);
    if(    !Value_389) {
        __result268__ = (_Bool)0;
        if(obj_exp_387) { obj_exp_387 = come_decrement_ref_count2(obj_exp_387, ((struct sNode*)obj_exp_387)->finalize, ((struct sNode*)obj_exp_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(inf_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result268__;
    }
    else {
    }
    come_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_391=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_390->type));
    type_391->mPointerNum--;
    type_391->mHeap=(_Bool)0;
    klass_392=inf_type_388->mClass;
    come_value2_393=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 261, "struct CVALUE*", (void*)0, (void*)0))));
    type2_394=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_388));
    type_name_395=(char*)come_increment_ref_count(make_type_name_string(inf_type_388,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_396=(char*)come_increment_ref_count(make_type_name_string(type_391,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_397=0;
    ++inf_num_397;
    inf_num_stack_398=inf_num_397;
    buf_399=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_395,inf_num_stack_398));
    add_come_code_at_function_head(info,buf_399);
    buf2_400=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_396,inf_num_stack_398));
    add_come_code_at_function_head(info,buf2_400);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0);\n",inf_num_stack_398,type_name_395,type_name_395,info->sname,info->sline,type_name_395);
    c_value_401=(char*)come_increment_ref_count(increment_ref_count_object(come_value_390->type,come_value_390->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack_398,c_value_401);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack_398,inf_num_stack_398);
    typeX_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_391));
    typeX_402->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(__right_value360=create_finalizer_automatically(typeX_402,"finalize",info)));
    come_call_finalizer3(__right_value360,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    ((struct tuple2$2sFunpcharph*)(__right_value361=create_cloner_automatically(typeX_402,"clone",info)));
    come_call_finalizer3(__right_value361,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_403=1;    i_403<list$1tuple2$2charphsTypephph_length(klass_392->mFields);    i_403++    ){
        multiple_assign_var3=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)(__right_value362=list$1tuple2$2charphsTypephphp_operator_load_element(klass_392->mFields,i_403))), "21obj.c", 290, 0));
        name_407=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_408=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer3(__right_value362,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        method_name_409=(char*)come_increment_ref_count(create_method_name(type_391,(_Bool)0,name_407,info,(_Bool)1));
        fun_410=((struct sFun*)(__right_value364=map$2charphsFunph_at(info->funcs,method_name_409,((void*)0))));
        come_call_finalizer3(__right_value364,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_410==((void*)0)&&string_operator_equals(name_407,"to_string")) {
            type2_413=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_391));
            type2_413->mPointerNum++;
            multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value366=create_to_string_automatically(type2_413,name_407,info)));
            fun2_414=multiple_assign_var4->v1;
            real_fun_name_415=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer3(__right_value366,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_410=fun2_414;
            __dec_obj131=method_name_409;
            method_name_409=(char*)come_increment_ref_count(real_fun_name_415);
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_413,sType_finalize, 0, 0, 0, 0, (void*)0);
            real_fun_name_415 = come_decrement_ref_count2(real_fun_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        fun_410==((void*)0)&&string_operator_equals(name_407,"equals")) {
            type2_416=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_391));
            type2_416->mPointerNum++;
            multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value368=create_equals_automatically(type2_416,name_407,info)));
            fun2_417=multiple_assign_var5->v1;
            real_fun_name_418=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer3(__right_value368,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_410=fun2_417;
            __dec_obj132=method_name_409;
            method_name_409=(char*)come_increment_ref_count(real_fun_name_418);
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_416,sType_finalize, 0, 0, 0, 0, (void*)0);
            real_fun_name_418 = come_decrement_ref_count2(real_fun_name_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        fun_410==((void*)0)) {
            klass2_419=((struct sClass*)come_null_check(((struct sClass*)(__right_value369=map$2charphsClassphp_operator_load_element(info->classes,type_391->mClass->mName))), "21obj.c", 316, 1));
            come_call_finalizer3(__right_value369,sClass_finalize, 0, 1, 0, 0, (void*)0);
            while((_while_condtional1=(((struct sClass*)(__right_value370=map$2charphsClassphp_operator_load_element(info->classes,klass2_419->mParentClassName))))),            come_call_finalizer3(__right_value370,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass2_419=((struct sClass*)(__right_value371=map$2charphsClassphp_operator_load_element(info->classes,klass2_419->mParentClassName)));
                come_call_finalizer3(__right_value371,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj138=method_name_409;
                method_name_409=(char*)come_increment_ref_count(create_method_name_using_class(klass2_419,(_Bool)0,name_407,info,(_Bool)1));
                __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_410=((struct sFun*)(__right_value373=map$2charphsFunph_at(info->funcs,method_name_409,((void*)0))));
                come_call_finalizer3(__right_value373,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_410) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_398,name_407,method_name_409);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_398,name_407,method_name_409);
        }
        name_407 = come_decrement_ref_count2(name_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_409 = come_decrement_ref_count2(method_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj139=come_value2_393->c_value;
    come_value2_393->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack_398));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    type3_425=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_388));
    type3_425->mPointerNum++;
    type3_425->mHeap=(_Bool)1;
    type2_394->mHeap=(_Bool)1;
    __dec_obj140=come_value2_393->type;
    come_value2_393->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_394));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_393->type->mPointerNum++;
    come_value2_393->var=((void*)0);
    append_object_to_right_values2(come_value2_393,(struct sType*)come_increment_ref_count(type3_425),info,(_Bool)0);
    add_come_last_code(info,"%s",come_value2_393->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_393));
    __result279__ = (_Bool)1;
    if(obj_exp_387) { obj_exp_387 = come_decrement_ref_count2(obj_exp_387, ((struct sNode*)obj_exp_387)->finalize, ((struct sNode*)obj_exp_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_391,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_394,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_395 = come_decrement_ref_count2(type_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_396 = come_decrement_ref_count2(type_name2_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_399 = come_decrement_ref_count2(buf_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_400 = come_decrement_ref_count2(buf2_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    c_value_401 = come_decrement_ref_count2(c_value_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(typeX_402,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_425,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result279__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
char* __dec_obj128;
struct sNode* __dec_obj129;
struct sType* __dec_obj130;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj128=self->sname;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj129=self->obj_exp;
            if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        if(        self->inf_type==gComeFunResultObject) {
            __dec_obj130=self->inf_type;
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_404;
int i_405;
struct tuple2$2charphsTypeph* __result269__;
struct tuple2$2charphsTypeph* default_value_406;
struct tuple2$2charphsTypeph* __result270__;
default_value_406 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_404=self->head;
    i_405=0;
    while(it_404!=((void*)0)) {
        if(        position==i_405) {
            __result269__ = gComeFunResultObject = __result_obj__ = it_404->item;
            gComeFunResultObject = (void*)0;
            return __result269__;
        }
        it_404=it_404->next;
        i_405++;
    }
    memset(&default_value_406,0,sizeof(struct tuple2$2charphsTypeph*));
    __result270__ = gComeFunResultObject = __result_obj__ = default_value_406;
    come_call_finalizer3(default_value_406,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_411;
unsigned int it_412;
struct sFun* __result271__;
struct sFun* __result272__;
struct sFun* __result273__;
struct sFun* __result274__;
    hash_411=charp_get_hash_key(((char*)key))%self->size;
    it_412=hash_411;
    while((_Bool)1) {
        if(        self->item_existance[it_412]) {
            if(            charp_equals(self->keys[it_412],key)) {
                __result271__ = gComeFunResultObject = __result_obj__ = self->items[it_412];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result271__;
            }
            it_412++;
            if(            it_412>=self->size) {
                it_412=0;
            }
            else if(            it_412==hash_411) {
                __result272__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result272__;
            }
        }
        else {
            __result273__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result273__;
        }
    }
    __result274__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_420;
unsigned int hash_421;
unsigned int it_422;
struct sClass* __result275__;
struct sClass* __result276__;
struct sClass* __result277__;
struct sClass* __result278__;
default_value_420 = (void*)0;
    memset(&default_value_420,0,sizeof(struct sClass*));
    hash_421=charp_get_hash_key(((char*)key))%self->size;
    it_422=hash_421;
    while((_Bool)1) {
        if(        self->item_existance[it_422]) {
            if(            charp_equals(self->keys[it_422],key)) {
                __result275__ = gComeFunResultObject = __result_obj__ = self->items[it_422];
                come_call_finalizer3(default_value_420,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result275__;
            }
            it_422++;
            if(            it_422>=self->size) {
                it_422=0;
            }
            else if(            it_422==hash_421) {
                __result276__ = gComeFunResultObject = __result_obj__ = default_value_420;
                come_call_finalizer3(default_value_420,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result276__;
            }
        }
        else {
            __result277__ = gComeFunResultObject = __result_obj__ = default_value_420;
            come_call_finalizer3(default_value_420,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result277__;
        }
    }
    __result278__ = gComeFunResultObject = __result_obj__ = default_value_420;
    come_call_finalizer3(default_value_420,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj133;
struct list$1tuple2$2charphsTypephph* __dec_obj134;
char* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj133=self->mName;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj134=self->mFields;
            come_call_finalizer3(__dec_obj134,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj135=self->mDeclareSName;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj136=self->mParentClassName;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj137=self->mAttribute;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_423;
struct list_item$1tuple2$2charphsTypephph* prev_it_424;
    it_423=self->head;
    while(it_423!=((void*)0)) {
        prev_it_424=it_423;
        it_423=it_423->next;
        come_call_finalizer3(prev_it_424,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sProtocolObject* sProtocolObject_initialize(struct sProtocolObject* self, struct sNode* obj_exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sNode* __dec_obj141;
struct sProtocolObject* __result280__;
    ((struct sNodeBase*)(__right_value377=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value377,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj141=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sProtocolObject_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result280__;
}

char* sProtocolObject_kind(struct sProtocolObject* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result281__;
    __result281__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sProtocolObject")));
    __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

_Bool sProtocolObject_compile(struct sProtocolObject* self, struct sInfo* info){
void* __right_value380 = (void*)0;
struct sNode* obj_exp_426;
_Bool Value_427;
_Bool __result282__;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_428;
void* __right_value386 = (void*)0;
struct CVALUE* come_value2_429;
void* __right_value387 = (void*)0;
struct sType* obj_type_431;
struct sType* refference_type_432;
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
char* __dec_obj147;
struct sType* __dec_obj148;
_Bool __result285__;
    obj_exp_426=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    Value_427=node_compile(obj_exp_426,info);
    if(    !Value_427) {
        __result282__ = (_Bool)0;
        if(obj_exp_426) { obj_exp_426 = come_decrement_ref_count2(obj_exp_426, ((struct sNode*)obj_exp_426)->finalize, ((struct sNode*)obj_exp_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result282__;
    }
    else {
    }
    come_value_428=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_429=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_428));
    obj_type_431=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_428->type));
    if(    obj_type_431->mClass->mProtocol&&obj_type_431->mRefferenceOriginalType) {
        refference_type_432=(struct sType*)come_increment_ref_count(obj_type_431->mRefferenceOriginalType->v1);
        if(        refference_type_432) {
            static int i_433=0;
            i_433++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value390=make_define_var(obj_type_431,((char*)(__right_value389=xsprintf("__tmp_infY\%s",((char*)(__right_value388=int_to_string(i_433)))))),(_Bool)0,info))));
            __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj147=come_value2_429->c_value;
            come_value2_429->c_value=(char*)come_increment_ref_count(xsprintf("((__tmp_infY\%s=\%s),((\%s)(__tmp_infY\%s ? __tmp_infY\%s->_protocol_obj:(void*)0)))",((char*)(__right_value391=int_to_string(i_433))),((char*)(__right_value392=string_to_string(come_value2_429->c_value))),((char*)(__right_value394=string_to_string(((char*)(__right_value393=make_type_name_string(refference_type_432,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))))),((char*)(__right_value395=int_to_string(i_433))),((char*)(__right_value396=int_to_string(i_433)))));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj148=come_value2_429->type;
            come_value2_429->type=(struct sType*)come_increment_ref_count(refference_type_432);
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(refference_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value2_429->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_429));
    __result285__ = (_Bool)1;
    if(obj_exp_426) { obj_exp_426 = come_decrement_ref_count2(obj_exp_426, ((struct sNode*)obj_exp_426)->finalize, ((struct sNode*)obj_exp_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result285__;
}

static void sProtocolObject_finalize(struct sProtocolObject* self){
char* __dec_obj142;
struct sNode* __dec_obj143;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj142=self->sname;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj143=self->obj_exp;
            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result283__;
void* __right_value382 = (void*)0;
struct CVALUE* result_430;
void* __right_value383 = (void*)0;
char* __dec_obj144;
void* __right_value384 = (void*)0;
struct sType* __dec_obj145;
void* __right_value385 = (void*)0;
char* __dec_obj146;
struct CVALUE* __result284__;
    if(    self==(void*)0) {
        __result283__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    result_430=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj144=result_430->c_value;
        result_430->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj145=result_430->type;
        result_430->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_430->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_430->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj146=result_430->c_value_without_right_value_objects;
        result_430->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_430;
    come_call_finalizer3(result_430,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

struct sAppendNoRefference* sAppendNoRefference_initialize(struct sAppendNoRefference* self, struct sNode* obj_exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sNode* __dec_obj149;
struct sAppendNoRefference* __result286__;
    ((struct sNodeBase*)(__right_value398=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value398,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj149=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAppendNoRefference_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result286__;
}

char* sAppendNoRefference_kind(struct sAppendNoRefference* self){
void* __result_obj__=(void*)0;
void* __right_value400 = (void*)0;
char* __result287__;
    __result287__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value400=__builtin_string("sAppendNoRefference")));
    __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

_Bool sAppendNoRefference_compile(struct sAppendNoRefference* self, struct sInfo* info){
void* __right_value401 = (void*)0;
struct sNode* obj_exp_434;
_Bool Value_435;
_Bool __result288__;
void* __right_value402 = (void*)0;
struct CVALUE* come_value_436;
_Bool __result289__;
    obj_exp_434=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    Value_435=node_compile(obj_exp_434,info);
    if(    !Value_435) {
        __result288__ = (_Bool)0;
        if(obj_exp_434) { obj_exp_434 = come_decrement_ref_count2(obj_exp_434, ((struct sNode*)obj_exp_434)->finalize, ((struct sNode*)obj_exp_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result288__;
    }
    else {
    }
    come_value_436=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_436->type->mNoRefference=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_436));
    __result289__ = (_Bool)1;
    if(obj_exp_434) { obj_exp_434 = come_decrement_ref_count2(obj_exp_434, ((struct sNode*)obj_exp_434)->finalize, ((struct sNode*)obj_exp_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result289__;
}

static void sAppendNoRefference_finalize(struct sAppendNoRefference* self){
char* __dec_obj150;
struct sNode* __dec_obj151;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj150=self->sname;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj151=self->obj_exp;
            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
struct sTrueNode* __result290__;
    ((struct sNodeBase*)(__right_value403=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value403,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* __result291__;
    __result291__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value404=__builtin_string("sTrueNode")));
    __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value407 = (void*)0;
char* __dec_obj153;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* __dec_obj154;
_Bool __result292__;
    come_value_437=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 455, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj153=come_value_437->c_value;
    come_value_437->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj154=come_value_437->type;
    come_value_437->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 458, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_437->var=((void*)0);
    add_come_last_code(info,"%s",come_value_437->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_437));
    __result292__ = (_Bool)1;
    come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
char* __dec_obj152;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj152=self->sname;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value414 = (void*)0;
struct sNode* __result295__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 471, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value411=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 471, "struct sTrueNode*", (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result295__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value414=_inf_value1));
    come_call_finalizer3(__right_value411,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value414) { __right_value414 = come_decrement_ref_count2(__right_value414, ((struct sNode*)__right_value414)->finalize, ((struct sNode*)__right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__=(void*)0;
struct sTrueNode* __result293__;
void* __right_value412 = (void*)0;
struct sTrueNode* result_438;
void* __right_value413 = (void*)0;
char* __dec_obj155;
struct sTrueNode* __result294__;
    if(    self==(void*)0) {
        __result293__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_438=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_438->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_438->sname;
        result_438->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_438->sline_real=self->sline_real;
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_438;
    come_call_finalizer3(result_438,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value415 = (void*)0;
struct sFalseNode* __result296__;
    ((struct sNodeBase*)(__right_value415=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value415,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
char* __result297__;
    __result297__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value416=__builtin_string("sFalseNode")));
    __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_439;
void* __right_value419 = (void*)0;
char* __dec_obj157;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* __dec_obj158;
_Bool __result298__;
    come_value_439=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 488, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj157=come_value_439->c_value;
    come_value_439->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj158=come_value_439->type;
    come_value_439->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 491, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_439->var=((void*)0);
    add_come_last_code(info,"%s",come_value_439->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_439));
    __result298__ = (_Bool)1;
    come_call_finalizer3(come_value_439,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result298__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
char* __dec_obj156;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj156=self->sname;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value426 = (void*)0;
struct sNode* __result301__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 504, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value423=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 504, "struct sFalseNode*", (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result301__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value426=_inf_value2));
    come_call_finalizer3(__right_value423,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value426) { __right_value426 = come_decrement_ref_count2(__right_value426, ((struct sNode*)__right_value426)->finalize, ((struct sNode*)__right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__=(void*)0;
struct sFalseNode* __result299__;
void* __right_value424 = (void*)0;
struct sFalseNode* result_440;
void* __right_value425 = (void*)0;
char* __dec_obj159;
struct sFalseNode* __result300__;
    if(    self==(void*)0) {
        __result299__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    result_440=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_440->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj159=result_440->sname;
        result_440->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_440->sline_real=self->sline_real;
    }
    __result300__ = gComeFunResultObject = __result_obj__ = result_440;
    come_call_finalizer3(result_440,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sType* __dec_obj160;
struct sSizeOfNode* __result302__;
    ((struct sNodeBase*)(__right_value427=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value427,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj160=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value429 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value429=__builtin_string("sSizeOfNode")));
    __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_441;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value432 = (void*)0;
struct sType* type2_443;
void* __right_value433 = (void*)0;
char* type_name_444;
void* __right_value434 = (void*)0;
char* __dec_obj163;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sType* __dec_obj164;
_Bool __result304__;
    type_441=self->type;
    come_value_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 525, "struct CVALUE*", (void*)0, (void*)0))));
    type2_443=(struct sType*)come_increment_ref_count(solve_generics(type_441,info->generics_type,info));
    type_name_444=(char*)come_increment_ref_count(make_type_name_string(type2_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj163=come_value_442->c_value;
    come_value_442->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_444));
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj164=come_value_442->type;
    come_value_442->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 532, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_442->type->mUnsigned=(_Bool)1;
    come_value_442->var=((void*)0);
    add_come_last_code(info,"%s",come_value_442->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_442));
    __result304__ = (_Bool)1;
    come_call_finalizer3(come_value_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_444 = come_decrement_ref_count2(type_name_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result304__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
char* __dec_obj161;
struct sType* __dec_obj162;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj161=self->sname;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj162=self->type;
            come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj165;
struct sSizeOfExpNode* __result305__;
struct sSizeOfExpNode* __result306__;
    ((struct sNodeBase*)(__right_value437=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value437,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj165=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value439 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value439=__builtin_string("sSizeOfExpNode")));
    __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_445;
_Bool Value_446;
_Bool __result308__;
void* __right_value440 = (void*)0;
struct CVALUE* come_value_447;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct CVALUE* come_value2_448;
void* __right_value443 = (void*)0;
char* __dec_obj168;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* __dec_obj169;
_Bool __result309__;
    exp_445=(struct sNode*)come_increment_ref_count(self->exp);
    Value_446=node_compile(exp_445,info);
    if(    !Value_446) {
        __result308__ = (_Bool)0;
        if(exp_445) { exp_445 = come_decrement_ref_count2(exp_445, ((struct sNode*)exp_445)->finalize, ((struct sNode*)exp_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result308__;
    }
    else {
    }
    come_value_447=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 571, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj168=come_value2_448->c_value;
    come_value2_448->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_447->c_value));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj169=come_value2_448->type;
    come_value2_448->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 574, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_448->type->mUnsigned=(_Bool)1;
    come_value2_448->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_448->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_448));
    __result309__ = (_Bool)1;
    if(exp_445) { exp_445 = come_decrement_ref_count2(exp_445, ((struct sNode*)exp_445)->finalize, ((struct sNode*)exp_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_447,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result309__;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
char* __dec_obj166;
struct sNode* __dec_obj167;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj166=self->sname;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj167=self->exp;
            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* __dec_obj170;
struct sTypeOfNode* __result310__;
    ((struct sNodeBase*)(__right_value446=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value446,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj170=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value448 = (void*)0;
char* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value448=__builtin_string("sTypeOfNode")));
    __right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_449;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct CVALUE* come_value_450;
void* __right_value451 = (void*)0;
struct sType* type2_451;
void* __right_value452 = (void*)0;
char* type_name_452;
void* __right_value453 = (void*)0;
char* __dec_obj173;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sType* __dec_obj174;
_Bool __result312__;
    type_449=self->type;
    come_value_450=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 604, "struct CVALUE*", (void*)0, (void*)0))));
    type2_451=(struct sType*)come_increment_ref_count(solve_generics(type_449,info->generics_type,info));
    type_name_452=(char*)come_increment_ref_count(make_type_name_string(type2_451,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj173=come_value_450->c_value;
    come_value_450->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_452));
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj174=come_value_450->type;
    come_value_450->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 611, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_450->var=((void*)0);
    add_come_last_code(info,"%s",come_value_450->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_450));
    __result312__ = (_Bool)1;
    come_call_finalizer3(come_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_451,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_452 = come_decrement_ref_count2(type_name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result312__;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
char* __dec_obj171;
struct sType* __dec_obj172;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj171=self->sname;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj172=self->type;
            come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sNode* __dec_obj175;
struct sTypeOfExpNode* __result313__;
    ((struct sNodeBase*)(__right_value456=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value456,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj175=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); };
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result313__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value458 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value458=__builtin_string("sTypeOfExpNode")));
    __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_453;
_Bool Value_454;
_Bool __result315__;
void* __right_value459 = (void*)0;
struct CVALUE* come_value_455;
void* __right_value460 = (void*)0;
struct sType* type_456;
void* __right_value461 = (void*)0;
struct sType* type2_457;
void* __right_value462 = (void*)0;
char* type_name_458;
void* __right_value463 = (void*)0;
char* __dec_obj178;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* __dec_obj179;
_Bool __result316__;
    exp_453=(struct sNode*)come_increment_ref_count(self->exp);
    Value_454=node_compile(exp_453,info);
    if(    !Value_454) {
        __result315__ = (_Bool)0;
        if(exp_453) { exp_453 = come_decrement_ref_count2(exp_453, ((struct sNode*)exp_453)->finalize, ((struct sNode*)exp_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result315__;
    }
    else {
    }
    come_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_456=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_455->type));
    type2_457=(struct sType*)come_increment_ref_count(solve_generics(type_456,info->generics_type,info));
    type_name_458=(char*)come_increment_ref_count(make_type_name_string(type2_457,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj178=come_value_455->c_value;
    come_value_455->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_458));
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj179=come_value_455->type;
    come_value_455->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 654, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_455->var=((void*)0);
    add_come_last_code(info,"%s",come_value_455->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_455));
    __result316__ = (_Bool)1;
    if(exp_453) { exp_453 = come_decrement_ref_count2(exp_453, ((struct sNode*)exp_453)->finalize, ((struct sNode*)exp_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_457,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_458 = come_decrement_ref_count2(type_name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result316__;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
char* __dec_obj176;
struct sNode* __dec_obj177;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj176=self->sname;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj177=self->exp;
            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sNode* __dec_obj180;
struct sDynamicTypeOf* __result317__;
    ((struct sNodeBase*)(__right_value466=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value466,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj180=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
void* __right_value468 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value468=__builtin_string("sDynamicTypeOf")));
    __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp_459;
_Bool Value_460;
_Bool __result319__;
void* __right_value469 = (void*)0;
struct CVALUE* come_value_461;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct CVALUE* come_value2_462;
void* __right_value472 = (void*)0;
char* __dec_obj183;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sType* __dec_obj184;
_Bool __result320__;
    exp_459=(struct sNode*)come_increment_ref_count(self->exp);
    Value_460=node_compile(exp_459,info);
    if(    !Value_460) {
        __result319__ = (_Bool)0;
        if(exp_459) { exp_459 = come_decrement_ref_count2(exp_459, ((struct sNode*)exp_459)->finalize, ((struct sNode*)exp_459)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result319__;
    }
    else {
    }
    come_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    come_value_461->type->mPointerNum>0&&come_value_461->type->mHeap) {
        come_value2_462=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 691, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj183=come_value2_462->c_value;
        come_value2_462->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_461->c_value));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj184=come_value2_462->type;
        come_value2_462->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 694, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_462->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_462->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_462));
        come_call_finalizer3(come_value2_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result320__ = (_Bool)1;
    if(exp_459) { exp_459 = come_decrement_ref_count2(exp_459, ((struct sNode*)exp_459)->finalize, ((struct sNode*)exp_459)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
char* __dec_obj181;
struct sNode* __dec_obj182;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj181=self->sname;
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj182=self->exp;
            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* __dec_obj185;
struct sAlignOfNode* __result321__;
struct sAlignOfNode* __result322__;
    ((struct sNodeBase*)(__right_value475=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value475,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj185=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value477 = (void*)0;
char* __result323__;
    __result323__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value477=__builtin_string("sAlignOfNode")));
    __right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_463;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct CVALUE* come_value_464;
void* __right_value480 = (void*)0;
struct sType* type2_465;
void* __right_value481 = (void*)0;
char* type_name_466;
void* __right_value482 = (void*)0;
char* __dec_obj188;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* __dec_obj189;
_Bool __result324__;
    type_463=self->type;
    come_value_464=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 726, "struct CVALUE*", (void*)0, (void*)0))));
    type2_465=(struct sType*)come_increment_ref_count(solve_generics(type_463,info->generics_type,info));
    type_name_466=(char*)come_increment_ref_count(make_type_name_string(type2_465,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj188=come_value_464->c_value;
    come_value_464->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_466));
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj189=come_value_464->type;
    come_value_464->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 733, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_464->type->mUnsigned=(_Bool)1;
    come_value_464->var=((void*)0);
    add_come_last_code(info,"%s",come_value_464->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_464));
    __result324__ = (_Bool)1;
    come_call_finalizer3(come_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_465,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_466 = come_decrement_ref_count2(type_name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result324__;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
char* __dec_obj186;
struct sType* __dec_obj187;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj186=self->sname;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj187=self->type;
            come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* __dec_obj190;
struct sAlignOfExpNode* __result325__;
    ((struct sNodeBase*)(__right_value485=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value485,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj190=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); };
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result325__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value487 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value487=__builtin_string("sAlignOfExpNode")));
    __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_467;
_Bool Value_468;
_Bool __result327__;
void* __right_value488 = (void*)0;
struct CVALUE* come_value_469;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct CVALUE* come_value2_470;
void* __right_value491 = (void*)0;
char* __dec_obj193;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __dec_obj194;
_Bool __result328__;
    exp_467=(struct sNode*)come_increment_ref_count(self->exp);
    Value_468=node_compile(exp_467,info);
    if(    !Value_468) {
        __result327__ = (_Bool)0;
        if(exp_467) { exp_467 = come_decrement_ref_count2(exp_467, ((struct sNode*)exp_467)->finalize, ((struct sNode*)exp_467)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result327__;
    }
    else {
    }
    come_value_469=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_470=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 770, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj193=come_value2_470->c_value;
    come_value2_470->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_469->c_value));
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj194=come_value2_470->type;
    come_value2_470->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 773, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_470->type->mUnsigned=(_Bool)1;
    come_value2_470->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_470->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_470));
    __result328__ = (_Bool)1;
    if(exp_467) { exp_467 = come_decrement_ref_count2(exp_467, ((struct sNode*)exp_467)->finalize, ((struct sNode*)exp_467)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_470,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result328__;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
char* __dec_obj191;
struct sNode* __dec_obj192;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj191=self->sname;
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj192=self->exp;
            if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj195;
struct sAlignOfNode2* __result329__;
    ((struct sNodeBase*)(__right_value494=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value494,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj195=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
void* __right_value496 = (void*)0;
char* __result330__;
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value496=__builtin_string("sAlignOfNode2")));
    __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_471;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct CVALUE* come_value_472;
void* __right_value499 = (void*)0;
struct sType* type2_473;
void* __right_value500 = (void*)0;
char* type_name_474;
void* __right_value501 = (void*)0;
char* __dec_obj198;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj199;
_Bool __result331__;
    type_471=self->type;
    come_value_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 803, "struct CVALUE*", (void*)0, (void*)0))));
    type2_473=(struct sType*)come_increment_ref_count(solve_generics(type_471,info->generics_type,info));
    type_name_474=(char*)come_increment_ref_count(make_type_name_string(type2_473,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj198=come_value_472->c_value;
    come_value_472->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_474));
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj199=come_value_472->type;
    come_value_472->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 810, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_472->type->mUnsigned=(_Bool)1;
    come_value_472->var=((void*)0);
    add_come_last_code(info,"%s",come_value_472->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
    __result331__ = (_Bool)1;
    come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_473,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_474 = come_decrement_ref_count2(type_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result331__;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
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

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* __dec_obj200;
struct sAlignOfExpNode2* __result332__;
    ((struct sNodeBase*)(__right_value504=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value504,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj200=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result332__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
void* __right_value506 = (void*)0;
char* __result333__;
    __result333__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value506=__builtin_string("sAlignOfExpNode2")));
    __right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_475;
_Bool Value_476;
_Bool __result334__;
void* __right_value507 = (void*)0;
struct CVALUE* come_value_477;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct CVALUE* come_value2_478;
void* __right_value510 = (void*)0;
char* __dec_obj203;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj204;
_Bool __result335__;
    exp_475=(struct sNode*)come_increment_ref_count(self->exp);
    Value_476=node_compile(exp_475,info);
    if(    !Value_476) {
        __result334__ = (_Bool)0;
        if(exp_475) { exp_475 = come_decrement_ref_count2(exp_475, ((struct sNode*)exp_475)->finalize, ((struct sNode*)exp_475)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result334__;
    }
    else {
    }
    come_value_477=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 847, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj203=come_value2_478->c_value;
    come_value2_478->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_477->c_value));
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj204=come_value2_478->type;
    come_value2_478->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 850, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_478->type->mUnsigned=(_Bool)1;
    come_value2_478->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_478->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_478));
    __result335__ = (_Bool)1;
    if(exp_475) { exp_475 = come_decrement_ref_count2(exp_475, ((struct sNode*)exp_475)->finalize, ((struct sNode*)exp_475)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result335__;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
char* __dec_obj201;
struct sNode* __dec_obj202;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj201=self->sname;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj202=self->exp;
            if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* __dec_obj205;
struct sAlignAsNode* __result336__;
    ((struct sNodeBase*)(__right_value513=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value513,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj205=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
void* __right_value515 = (void*)0;
char* __result337__;
    __result337__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value515=__builtin_string("sAlignAsNode")));
    __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_479;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct CVALUE* come_value_480;
void* __right_value518 = (void*)0;
struct sType* type2_481;
void* __right_value519 = (void*)0;
char* type_name_482;
void* __right_value520 = (void*)0;
char* __dec_obj208;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj209;
_Bool __result338__;
    type_479=self->type;
    come_value_480=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 880, "struct CVALUE*", (void*)0, (void*)0))));
    type2_481=(struct sType*)come_increment_ref_count(solve_generics(type_479,info->generics_type,info));
    type_name_482=(char*)come_increment_ref_count(make_type_name_string(type2_481,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj208=come_value_480->c_value;
    come_value_480->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_482));
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj209=come_value_480->type;
    come_value_480->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 887, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_480->type->mUnsigned=(_Bool)1;
    come_value_480->var=((void*)0);
    add_come_last_code(info,"%s",come_value_480->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_480));
    __result338__ = (_Bool)1;
    come_call_finalizer3(come_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_481,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_482 = come_decrement_ref_count2(type_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result338__;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
char* __dec_obj206;
struct sType* __dec_obj207;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj206=self->sname;
            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj207=self->type;
            come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sNode* __dec_obj210;
struct sAlignAsExpNode* __result339__;
    ((struct sNodeBase*)(__right_value523=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value523,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj210=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result339__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value525 = (void*)0;
char* __result340__;
    __result340__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value525=__builtin_string("sAlignAsExpNode")));
    __right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_483;
_Bool Value_484;
_Bool __result341__;
void* __right_value526 = (void*)0;
struct CVALUE* come_value_485;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct CVALUE* come_value2_486;
void* __right_value529 = (void*)0;
char* __dec_obj213;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj214;
_Bool __result342__;
    exp_483=(struct sNode*)come_increment_ref_count(self->exp);
    Value_484=node_compile(exp_483,info);
    if(    !Value_484) {
        __result341__ = (_Bool)0;
        if(exp_483) { exp_483 = come_decrement_ref_count2(exp_483, ((struct sNode*)exp_483)->finalize, ((struct sNode*)exp_483)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result341__;
    }
    else {
    }
    come_value_485=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_486=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 924, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj213=come_value2_486->c_value;
    come_value2_486->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_485->c_value));
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj214=come_value2_486->type;
    come_value2_486->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 927, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_486->type->mUnsigned=(_Bool)1;
    come_value2_486->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_486->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_486));
    __result342__ = (_Bool)1;
    if(exp_483) { exp_483 = come_decrement_ref_count2(exp_483, ((struct sNode*)exp_483)->finalize, ((struct sNode*)exp_483)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result342__;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
char* __dec_obj211;
struct sNode* __dec_obj212;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj211=self->sname;
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj212=self->exp;
            if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sNode* __dec_obj215;
struct sDeleteNode* __result343__;
    ((struct sNodeBase*)(__right_value532=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value532,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj215=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result343__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value534 = (void*)0;
char* __result344__;
    __result344__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value534=__builtin_string("sDeleteNode")));
    __right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_487;
_Bool Value_488;
void* __right_value535 = (void*)0;
struct CVALUE* come_value_489;
_Bool __result345__;
    node_487=self->node;
    Value_488=node_compile(node_487,info);
    if(    !Value_488) {
        return (_Bool)0;
    }
    else {
    }
    come_value_489=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_489->type,come_value_489->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result345__ = (_Bool)1;
    come_call_finalizer3(come_value_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result345__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
char* __dec_obj216;
struct sNode* __dec_obj217;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj216=self->sname;
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj217=self->node;
            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sNode* __dec_obj218;
struct sBorrowNode* __result346__;
struct sBorrowNode* __result347__;
    ((struct sNodeBase*)(__right_value536=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value536,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj218=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result346__;
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result347__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
void* __right_value538 = (void*)0;
char* __result348__;
    __result348__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value538=__builtin_string("sBorrowNode")));
    __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_490;
_Bool Value_491;
void* __right_value539 = (void*)0;
struct CVALUE* come_value_492;
struct sRightValueObject* right_value_objects_493;
int right_value_id_494;
_Bool __result349__;
    node_490=self->node;
    Value_491=node_compile(node_490,info);
    if(    !Value_491) {
        return (_Bool)0;
    }
    else {
    }
    come_value_492=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_492->type->mHeap=(_Bool)0;
    right_value_objects_493=come_value_492->right_value_objects;
    if(    right_value_objects_493) {
        right_value_id_494=right_value_objects_493->mID;
        if(        right_value_id_494!=-1) {
            remove_object_from_right_values(right_value_id_494,info);
        }
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_492));
    __result349__ = (_Bool)1;
    come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result349__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
char* __dec_obj219;
struct sNode* __dec_obj220;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj219=self->sname;
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj220=self->node;
            if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sNode* __dec_obj221;
struct sCloneNode* __result350__;
    ((struct sNodeBase*)(__right_value540=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value540,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj221=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result350__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__=(void*)0;
void* __right_value542 = (void*)0;
char* __result351__;
    __result351__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value542=__builtin_string("sCloneNode")));
    __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_495;
_Bool Value_496;
void* __right_value543 = (void*)0;
struct CVALUE* left_value_497;
void* __right_value544 = (void*)0;
struct sType* left_type_498;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct CVALUE* come_value_499;
void* __right_value547 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6 = (void*)0;
struct sType* result_type_500=0;
char* c_value_501=0;
char* __dec_obj226;
void* __right_value548 = (void*)0;
struct sType* __dec_obj227;
_Bool __result352__;
    node_495=self->node;
    Value_496=node_compile(node_495,info);
    if(    !Value_496) {
        return (_Bool)0;
    }
    else {
    }
    left_value_497=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_498=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_497->type));
    if(    left_type_498->mPointerNum==1&&string_operator_equals(left_type_498->mClass->mName,"void")&&left_type_498->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_497));
    }
    else if(    left_type_498->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_497));
    }
    else if(    left_type_498->mPointerNum>0) {
        come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1048, "struct CVALUE*", (void*)0, (void*)0))));
        multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value547=clone_object(left_type_498,left_value_497->c_value,info)));
        result_type_500=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        c_value_501=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer3(__right_value547,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj226=come_value_499->c_value;
        come_value_499->c_value=(char*)come_increment_ref_count(c_value_501);
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj227=come_value_499->type;
        come_value_499->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_498));
        come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_499->type->mHeap=(_Bool)1;
        come_value_499->var=((void*)0);
        append_object_to_right_values2(come_value_499,(struct sType*)come_increment_ref_count(left_type_498),info,(_Bool)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
        come_call_finalizer3(come_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_501 = come_decrement_ref_count2(c_value_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result352__ = (_Bool)1;
    come_call_finalizer3(left_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_498,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result352__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
char* __dec_obj222;
struct sNode* __dec_obj223;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj222=self->sname;
            __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj223=self->node;
            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj224;
char* __dec_obj225;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj224=self->v1;
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj225=self->v2;
            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sNode* __dec_obj228;
struct sDupeNode* __result353__;
    ((struct sNodeBase*)(__right_value549=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value549,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj228=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result353__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__=(void*)0;
void* __right_value551 = (void*)0;
char* __result354__;
    __result354__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value551=__builtin_string("sDupeNode")));
    __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_502;
_Bool Value_503;
void* __right_value552 = (void*)0;
struct CVALUE* left_value_504;
void* __right_value553 = (void*)0;
struct sType* left_type_505;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct CVALUE* come_value_506;
void* __right_value556 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7 = (void*)0;
struct sType* result_type_507=0;
char* c_value_508=0;
char* __dec_obj231;
void* __right_value557 = (void*)0;
struct sType* __dec_obj232;
_Bool __result355__;
    node_502=self->node;
    Value_503=node_compile(node_502,info);
    if(    !Value_503) {
        return (_Bool)0;
    }
    else {
    }
    left_value_504=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_505=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_504->type));
    if(    left_type_505->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_504));
    }
    else if(    left_type_505->mPointerNum>0&&left_type_505->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_504));
    }
    else if(    left_type_505->mPointerNum>0) {
        come_value_506=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1099, "struct CVALUE*", (void*)0, (void*)0))));
        multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value556=clone_object(left_type_505,left_value_504->c_value,info)));
        result_type_507=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        c_value_508=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer3(__right_value556,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj231=come_value_506->c_value;
        come_value_506->c_value=(char*)come_increment_ref_count(c_value_508);
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj232=come_value_506->type;
        come_value_506->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_505));
        come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_506->type->mHeap=(_Bool)1;
        come_value_506->var=((void*)0);
        append_object_to_right_values2(come_value_506,(struct sType*)come_increment_ref_count(left_type_505),info,(_Bool)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_506));
        come_call_finalizer3(come_value_506,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_508 = come_decrement_ref_count2(c_value_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result355__ = (_Bool)1;
    come_call_finalizer3(left_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result355__;
}

static void sDupeNode_finalize(struct sDupeNode* self){
char* __dec_obj229;
struct sNode* __dec_obj230;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj229=self->sname;
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj230=self->node;
            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sNode* __dec_obj233;
struct sDummyHeapNode* __result356__;
    ((struct sNodeBase*)(__right_value558=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value558,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj233=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
    __result356__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result356__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
void* __right_value560 = (void*)0;
char* __result357__;
    __result357__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value560=__builtin_string("sDummyHeapNode")));
    __right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_509;
_Bool Value_510;
void* __right_value561 = (void*)0;
struct CVALUE* come_value_511;
_Bool __result358__;
    node_509=self->node;
    Value_510=node_compile(node_509,info);
    if(    !Value_510) {
        return (_Bool)0;
    }
    else {
    }
    come_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_511->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_511));
    __result358__ = (_Bool)1;
    come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result358__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
char* __dec_obj234;
struct sNode* __dec_obj235;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj234=self->sname;
            __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj235=self->node;
            if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sNode* __dec_obj236;
struct sGCIncNode* __result359__;
    ((struct sNodeBase*)(__right_value562=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value562,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj236=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
    __result359__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result359__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
void* __right_value564 = (void*)0;
char* __result360__;
    __result360__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value564=__builtin_string("sGCIncNode")));
    __right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_512;
_Bool Value_513;
void* __right_value565 = (void*)0;
struct CVALUE* come_value_514;
struct sType* type_515;
void* __right_value566 = (void*)0;
char* type_name_516;
void* __right_value567 = (void*)0;
char* __dec_obj239;
_Bool __result361__;
    node_512=self->node;
    Value_513=node_compile(node_512,info);
    if(    !Value_513) {
        return (_Bool)0;
    }
    else {
    }
    come_value_514=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_515=come_value_514->type;
    if(    come_value_514->type->mHeap) {
        type_name_516=(char*)come_increment_ref_count(make_type_name_string(type_515,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj239=come_value_514->c_value;
        come_value_514->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_514->type,come_value_514->c_value,info));
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        type_name_516 = come_decrement_ref_count2(type_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_514));
    __result361__ = (_Bool)1;
    come_call_finalizer3(come_value_514,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result361__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
char* __dec_obj237;
struct sNode* __dec_obj238;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj237=self->sname;
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj238=self->node;
            if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sNode* __dec_obj240;
struct sGCDecNode* __result362__;
    ((struct sNodeBase*)(__right_value568=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value568,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj240=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); };
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result362__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
void* __right_value570 = (void*)0;
char* __result363__;
    __result363__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value570=__builtin_string("sGCDecNode")));
    __right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_517;
_Bool Value_518;
void* __right_value571 = (void*)0;
struct CVALUE* come_value_519;
struct sType* type_520;
_Bool __result364__;
    node_517=self->node;
    Value_518=node_compile(node_517,info);
    if(    !Value_518) {
        return (_Bool)0;
    }
    else {
    }
    come_value_519=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_520=come_value_519->type;
    decrement_ref_count_object(type_520,come_value_519->c_value,info,(_Bool)0,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_519));
    __result364__ = (_Bool)1;
    come_call_finalizer3(come_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result364__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
char* __dec_obj241;
struct sNode* __dec_obj242;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj241=self->sname;
            __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj242=self->node;
            if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __dec_obj243;
struct sIsHeap* __result365__;
    ((struct sNodeBase*)(__right_value572=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value572,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj243=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result365__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__=(void*)0;
void* __right_value574 = (void*)0;
char* __result366__;
    __result366__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value574=__builtin_string("sIsHeap")));
    __right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_521;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value577 = (void*)0;
char* __dec_obj246;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* __dec_obj247;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct CVALUE* come_value_523;
void* __right_value582 = (void*)0;
char* __dec_obj248;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sType* __dec_obj249;
    node_521=self->type;
    if(    self->type->mHeap) {
        come_value_522=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1241, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj246=come_value_522->c_value;
        come_value_522->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj247=come_value_522->type;
        come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1244, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_522->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_522));
        add_come_last_code(info,"%s",come_value_522->c_value);
        come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_523=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1252, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj248=come_value_523->c_value;
        come_value_523->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj249=come_value_523->type;
        come_value_523->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1255, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_523->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_523));
        add_come_last_code(info,"%s",come_value_523->c_value);
        come_call_finalizer3(come_value_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
char* __dec_obj244;
struct sType* __dec_obj245;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj244=self->sname;
            __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj245=self->type;
            come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __dec_obj250;
struct sIsPointer* __result367__;
    ((struct sNodeBase*)(__right_value585=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value585,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj250=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result367__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__=(void*)0;
void* __right_value587 = (void*)0;
char* __result368__;
    __result368__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value587=__builtin_string("sIsPointer")));
    __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_524;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_525;
void* __right_value590 = (void*)0;
char* __dec_obj253;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sType* __dec_obj254;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct CVALUE* come_value_526;
void* __right_value595 = (void*)0;
char* __dec_obj255;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sType* __dec_obj256;
    node_524=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_525=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1287, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj253=come_value_525->c_value;
        come_value_525->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj254=come_value_525->type;
        come_value_525->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1290, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_525->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_525));
        add_come_last_code(info,"%s",come_value_525->c_value);
        come_call_finalizer3(come_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_526=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1298, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj255=come_value_526->c_value;
        come_value_526->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj256=come_value_526->type;
        come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1301, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_526->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_526));
        add_come_last_code(info,"%s",come_value_526->c_value);
        come_call_finalizer3(come_value_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
char* __dec_obj251;
struct sType* __dec_obj252;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj251=self->sname;
            __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj252=self->type;
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sNode* __dec_obj257;
struct sGCDecNoFreeNode* __result369__;
    ((struct sNodeBase*)(__right_value598=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value598,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj257=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result369__;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
void* __right_value600 = (void*)0;
char* __result370__;
    __result370__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value600=__builtin_string("sGCDecNoFreeNode")));
    __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_527;
_Bool Value_528;
void* __right_value601 = (void*)0;
struct CVALUE* come_value_529;
struct sType* type_530;
_Bool __result371__;
    node_527=self->node;
    Value_528=node_compile(node_527,info);
    if(    !Value_528) {
        return (_Bool)0;
    }
    else {
    }
    come_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_530=come_value_529->type;
    decrement_ref_count_object(type_530,come_value_529->c_value,info,(_Bool)0,(_Bool)1);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_529));
    __result371__ = (_Bool)1;
    come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result371__;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
char* __dec_obj258;
struct sNode* __dec_obj259;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj258=self->sname;
            __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj259=self->node;
            if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value602 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type_531=0;
char* name_532=0;
_Bool err_533=0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value618 = (void*)0;
struct sNode* obj_534;
void* __right_value619 = (void*)0;
char* fun_name_542;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* __result380__;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_543;
void* __right_value624 = (void*)0;
char* word_544;
_Bool no_comma_545;
void* __right_value625 = (void*)0;
struct sNode* exp_546;
void* __right_value626 = (void*)0;
_Bool _if_conditional5;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sNode* value_node_547;
void* __right_value629 = (void*)0;
struct sNode* __dec_obj272;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* exp_548;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sNode* __result382__;
struct sNode* __result383__;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value637 = (void*)0;
struct sNode* __result384__;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value640 = (void*)0;
struct sNode* __result385__;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
void* __right_value643 = (void*)0;
struct sNode* __result386__;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
void* __right_value646 = (void*)0;
struct sNode* __result387__;
void* __right_value647 = (void*)0;
struct sNode* node_549;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
void* __right_value653 = (void*)0;
struct sNode* __result390__;
void* __right_value654 = (void*)0;
struct sNode* node_551;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
void* __right_value660 = (void*)0;
struct sNode* __result393__;
void* __right_value661 = (void*)0;
struct sNode* node_553;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
void* __right_value667 = (void*)0;
struct sNode* __result396__;
void* __right_value668 = (void*)0;
struct sNode* node_555;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
void* __right_value674 = (void*)0;
struct sNode* __result399__;
void* __right_value675 = (void*)0;
struct sNode* node_557;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* __right_value681 = (void*)0;
struct sNode* __result402__;
void* __right_value682 = (void*)0;
struct sNode* node_559;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* __right_value688 = (void*)0;
struct sNode* __result405__;
void* __right_value689 = (void*)0;
struct sNode* node_561;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* __right_value695 = (void*)0;
struct sNode* __result408__;
void* __right_value696 = (void*)0;
struct sNode* node_563;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
void* __right_value702 = (void*)0;
struct sNode* __result411__;
void* __right_value703 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* param_type_565=0;
char* param_name_566=0;
_Bool err_567=0;
void* __right_value704 = (void*)0;
struct sType* type2_568;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sNode* _inf_value16;
struct sIsHeap* _inf_obj_value16;
void* __right_value710 = (void*)0;
struct sNode* __result414__;
void* __right_value711 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* param_type_570=0;
char* param_name_571=0;
_Bool err_572=0;
void* __right_value712 = (void*)0;
struct sType* type2_573;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sNode* _inf_value17;
struct sIsPointer* _inf_obj_value17;
void* __right_value718 = (void*)0;
struct sNode* __result417__;
void* __right_value719 = (void*)0;
struct sNode* __result418__;
void* __right_value720 = (void*)0;
struct sNode* __result419__;
void* __right_value721 = (void*)0;
struct sNode* __result420__;
void* __right_value722 = (void*)0;
struct sNode* __result421__;
_Bool come_c_575;
void* __right_value723 = (void*)0;
struct sNode* node_576;
struct sNode* __result422__;
void* __right_value724 = (void*)0;
struct sNode* __result423__;
void* __right_value725 = (void*)0;
struct sNode* __result424__;
void* __right_value726 = (void*)0;
struct sNode* __result425__;
void* __right_value727 = (void*)0;
struct sNode* __result426__;
void* __right_value728 = (void*)0;
struct sNode* __result427__;
_Bool paren_577;
_Bool is_type_name_flag_578;
char* p_579;
int sline_580;
void* __right_value729 = (void*)0;
char* word_581;
void* __right_value730 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* type_582=0;
char* name_583=0;
_Bool err_584=0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value18;
struct sSizeOfNode* _inf_obj_value18;
void* __right_value736 = (void*)0;
struct sNode* __result430__;
struct sNode* exp_586;
_Bool no_comma_587;
void* __right_value737 = (void*)0;
struct sNode* __dec_obj297;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj298;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sNode* _inf_value19;
struct sSizeOfExpNode* _inf_obj_value19;
void* __right_value744 = (void*)0;
struct sNode* __result433__;
_Bool paren_589;
_Bool is_type_name_flag_590;
char* p_591;
int sline_592;
void* __right_value745 = (void*)0;
char* word_593;
void* __right_value746 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12 = (void*)0;
struct sType* type_594=0;
char* name_595=0;
_Bool err_596=0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct sNode* _inf_value20;
struct sTypeOfNode* _inf_obj_value20;
void* __right_value752 = (void*)0;
struct sNode* __result436__;
struct sNode* exp_598;
_Bool no_comma_599;
void* __right_value753 = (void*)0;
struct sNode* __dec_obj303;
void* __right_value754 = (void*)0;
struct sNode* __dec_obj304;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sNode* _inf_value21;
struct sTypeOfExpNode* _inf_obj_value21;
void* __right_value760 = (void*)0;
struct sNode* __result439__;
_Bool paren_601;
struct sNode* exp_602;
_Bool no_comma_603;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj307;
void* __right_value762 = (void*)0;
struct sNode* __dec_obj308;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sNode* _inf_value22;
struct sDynamicTypeOf* _inf_obj_value22;
void* __right_value768 = (void*)0;
struct sNode* __result442__;
_Bool paren_605;
_Bool is_type_name_flag_606;
char* p_607;
int sline_608;
void* __right_value769 = (void*)0;
char* word_609;
void* __right_value770 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var13 = (void*)0;
struct sType* type_610=0;
char* name_611=0;
_Bool err_612=0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sNode* _inf_value23;
struct sAlignOfNode* _inf_obj_value23;
void* __right_value776 = (void*)0;
struct sNode* __result445__;
struct sNode* exp_614;
_Bool no_comma_615;
void* __right_value777 = (void*)0;
struct sNode* __dec_obj313;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj314;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sNode* _inf_value24;
struct sAlignOfExpNode* _inf_obj_value24;
void* __right_value784 = (void*)0;
struct sNode* __result448__;
_Bool paren_617;
_Bool is_type_name_flag_618;
char* p_619;
int sline_620;
void* __right_value785 = (void*)0;
char* word_621;
void* __right_value786 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14 = (void*)0;
struct sType* type_622=0;
char* name_623=0;
_Bool err_624=0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfNode2* _inf_obj_value25;
void* __right_value792 = (void*)0;
struct sNode* __result451__;
struct sNode* exp_626;
_Bool no_comma_627;
void* __right_value793 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value794 = (void*)0;
struct sNode* __dec_obj320;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfExpNode2* _inf_obj_value26;
void* __right_value800 = (void*)0;
struct sNode* __result454__;
_Bool is_type_name_flag_629;
char* p_630;
int sline_631;
void* __right_value801 = (void*)0;
char* word_632;
void* __right_value802 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_633=0;
char* name_634=0;
_Bool err_635=0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sNode* _inf_value27;
struct sAlignAsNode* _inf_obj_value27;
void* __right_value808 = (void*)0;
struct sNode* __result457__;
void* __right_value809 = (void*)0;
struct sNode* exp_637;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value28;
struct sAlignAsExpNode* _inf_obj_value28;
void* __right_value815 = (void*)0;
struct sNode* __result460__;
void* __right_value816 = (void*)0;
struct sNode* __result461__;
exp_586 = (void*)0;
exp_598 = (void*)0;
exp_602 = (void*)0;
exp_614 = (void*)0;
exp_626 = (void*)0;
    if(    !gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value602=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_531=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_532=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_533=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value602,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_533) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(        *info->p==40) {
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1358, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value604=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1358, "struct sNewNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_531),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            obj_534=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer3(__right_value604,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name_542=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value621=parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_534)),(char*)come_increment_ref_count(fun_name_542),info)));
            if(obj_534) { obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_542 = come_decrement_ref_count2(fun_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value621) { __right_value621 = come_decrement_ref_count2(__right_value621, ((struct sNode*)__right_value621)->finalize, ((struct sNode*)__right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result380__;
            if(obj_534) { obj_534 = come_decrement_ref_count2(obj_534, ((struct sNode*)obj_534)->finalize, ((struct sNode*)obj_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_542 = come_decrement_ref_count2(fun_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_543=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "21obj.c", 1367, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
            while((_Bool)1) {
                word_544=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_545=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_546=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_545;
                    if(                    (_if_conditional5=(string_operator_equals(((char*)(__right_value626=exp_546->kind(exp_546->_protocol_obj))),"sWildCard"))),                    (__right_value626 = come_decrement_ref_count2(__right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                    _if_conditional5) {
                        value_node_547=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value627=xsprintf("Value"))),info));
                        __right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj272=exp_546;
                        exp_546=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_547),(char*)come_increment_ref_count(word_544),info));
                        if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
                        if(value_node_547) { value_node_547 = come_decrement_ref_count2(value_node_547, ((struct sNode*)value_node_547)->finalize, ((struct sNode*)value_node_547)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    list$1tuple2$2charphsNodephph_add(initializer_543,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1386, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(word_544),(struct sNode*)come_increment_ref_count(exp_546))));
                    if(exp_546) { exp_546 = come_decrement_ref_count2(exp_546, ((struct sNode*)exp_546)->finalize, ((struct sNode*)exp_546)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==44) {
                    exp_548=(struct sNode*)come_increment_ref_count(create_load_var(word_544,info));
                    list$1tuple2$2charphsNodephph_add(initializer_543,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1391, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(word_544),(struct sNode*)come_increment_ref_count(exp_548))));
                    if(exp_548) { exp_548 = come_decrement_ref_count2(exp_548, ((struct sNode*)exp_548)->finalize, ((struct sNode*)exp_548)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"invalid character(21) %c\n",*info->p);
                    __result382__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_544 = come_decrement_ref_count2(word_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(initializer_543,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result382__;
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    word_544 = come_decrement_ref_count2(word_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    __result383__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_544 = come_decrement_ref_count2(word_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(initializer_543,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result383__;
                }
                word_544 = come_decrement_ref_count2(word_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1412, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value636=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1412, "struct sNewNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_531),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_543),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value637=_inf_value4));
            come_call_finalizer3(initializer_543,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value636,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value637) { __right_value637 = come_decrement_ref_count2(__right_value637, ((struct sNode*)__right_value637)->finalize, ((struct sNode*)__right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result384__;
            come_call_finalizer3(initializer_543,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1415, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value639=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1415, "struct sNewNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_531),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value640=_inf_value5));
            come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value639,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value640) { __right_value640 = come_decrement_ref_count2(__right_value640, ((struct sNode*)__right_value640)->finalize, ((struct sNode*)__right_value640)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result385__;
        }
        come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"true")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1419, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value642=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1419, "struct sTrueNode*", (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value643=_inf_value6));
        come_call_finalizer3(__right_value642,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value643) { __right_value643 = come_decrement_ref_count2(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"false")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1422, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value645=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1422, "struct sFalseNode*", (void*)0, (void*)0)),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value646=_inf_value7));
        come_call_finalizer3(__right_value645,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value646) { __right_value646 = come_decrement_ref_count2(__right_value646, ((struct sNode*)__right_value646)->finalize, ((struct sNode*)__right_value646)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"delete")) {
        node_549=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1427, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value649=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1427, "struct sDeleteNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_549),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value653=_inf_value8));
        if(node_549) { node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value649,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value653) { __right_value653 = come_decrement_ref_count2(__right_value653, ((struct sNode*)__right_value653)->finalize, ((struct sNode*)__right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result390__;
        if(node_549) { node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"borrow")) {
        node_551=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1432, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value656=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1432, "struct sBorrowNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_551),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value660=_inf_value9));
        if(node_551) { node_551 = come_decrement_ref_count2(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value656,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value660) { __right_value660 = come_decrement_ref_count2(__right_value660, ((struct sNode*)__right_value660)->finalize, ((struct sNode*)__right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result393__;
        if(node_551) { node_551 = come_decrement_ref_count2(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"clone")) {
        node_553=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1437, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value663=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1437, "struct sCloneNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_553),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        __result396__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value667=_inf_value10));
        if(node_553) { node_553 = come_decrement_ref_count2(node_553, ((struct sNode*)node_553)->finalize, ((struct sNode*)node_553)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value663,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value667) { __right_value667 = come_decrement_ref_count2(__right_value667, ((struct sNode*)__right_value667)->finalize, ((struct sNode*)__right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result396__;
        if(node_553) { node_553 = come_decrement_ref_count2(node_553, ((struct sNode*)node_553)->finalize, ((struct sNode*)node_553)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dupe")) {
        node_555=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1442, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value670=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1442, "struct sDupeNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_555),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        __result399__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value674=_inf_value11));
        if(node_555) { node_555 = come_decrement_ref_count2(node_555, ((struct sNode*)node_555)->finalize, ((struct sNode*)node_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value670,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value674) { __right_value674 = come_decrement_ref_count2(__right_value674, ((struct sNode*)__right_value674)->finalize, ((struct sNode*)__right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result399__;
        if(node_555) { node_555 = come_decrement_ref_count2(node_555, ((struct sNode*)node_555)->finalize, ((struct sNode*)node_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_557=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1447, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value677=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1447, "struct sDummyHeapNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_557),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        __result402__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value681=_inf_value12));
        if(node_557) { node_557 = come_decrement_ref_count2(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value677,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value681) { __right_value681 = come_decrement_ref_count2(__right_value681, ((struct sNode*)__right_value681)->finalize, ((struct sNode*)__right_value681)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result402__;
        if(node_557) { node_557 = come_decrement_ref_count2(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_559=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1457, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value684=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1457, "struct sGCIncNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_559),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        __result405__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value688=_inf_value13));
        if(node_559) { node_559 = come_decrement_ref_count2(node_559, ((struct sNode*)node_559)->finalize, ((struct sNode*)node_559)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value684,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value688) { __right_value688 = come_decrement_ref_count2(__right_value688, ((struct sNode*)__right_value688)->finalize, ((struct sNode*)__right_value688)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result405__;
        if(node_559) { node_559 = come_decrement_ref_count2(node_559, ((struct sNode*)node_559)->finalize, ((struct sNode*)node_559)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_561=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1467, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value691=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1467, "struct sGCDecNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_561),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        __result408__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value695=_inf_value14));
        if(node_561) { node_561 = come_decrement_ref_count2(node_561, ((struct sNode*)node_561)->finalize, ((struct sNode*)node_561)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value691,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value695) { __right_value695 = come_decrement_ref_count2(__right_value695, ((struct sNode*)__right_value695)->finalize, ((struct sNode*)__right_value695)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result408__;
        if(node_561) { node_561 = come_decrement_ref_count2(node_561, ((struct sNode*)node_561)->finalize, ((struct sNode*)node_561)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_563=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1477, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value698=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1477, "struct sGCDecNoFreeNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_563),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        __result411__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value702=_inf_value15));
        if(node_563) { node_563 = come_decrement_ref_count2(node_563, ((struct sNode*)node_563)->finalize, ((struct sNode*)node_563)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value698,sGCDecNoFreeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value702) { __right_value702 = come_decrement_ref_count2(__right_value702, ((struct sNode*)__right_value702)->finalize, ((struct sNode*)__right_value702)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result411__;
        if(node_563) { node_563 = come_decrement_ref_count2(node_563, ((struct sNode*)node_563)->finalize, ((struct sNode*)node_563)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value703=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_565=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        param_name_566=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        err_567=multiple_assign_var9->v3;
        come_call_finalizer3(__right_value703,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_567) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_568=(struct sType*)come_increment_ref_count(solve_generics(param_type_565,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1493, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value16=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value706=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1493, "struct sIsHeap*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_568),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sIsHeap_finalize;
        _inf_value16->clone=(void*)sIsHeap_clone;
        _inf_value16->compile=(void*)sIsHeap_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sIsHeap_kind;
        __result414__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value710=_inf_value16));
        come_call_finalizer3(param_type_565,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_566 = come_decrement_ref_count2(param_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value706,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value710) { __right_value710 = come_decrement_ref_count2(__right_value710, ((struct sNode*)__right_value710)->finalize, ((struct sNode*)__right_value710)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result414__;
        come_call_finalizer3(param_type_565,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_566 = come_decrement_ref_count2(param_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value711=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_570=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        param_name_571=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_572=multiple_assign_var10->v3;
        come_call_finalizer3(__right_value711,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_572) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_573=(struct sType*)come_increment_ref_count(solve_generics(param_type_570,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1509, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value17=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value714=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1509, "struct sIsPointer*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_573),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsPointer_finalize;
        _inf_value17->clone=(void*)sIsPointer_clone;
        _inf_value17->compile=(void*)sIsPointer_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsPointer_kind;
        __result417__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value718=_inf_value17));
        come_call_finalizer3(param_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_571 = come_decrement_ref_count2(param_name_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_573,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value714,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value718) { __right_value718 = come_decrement_ref_count2(__right_value718, ((struct sNode*)__right_value718)->finalize, ((struct sNode*)__right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result417__;
        come_call_finalizer3(param_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_571 = come_decrement_ref_count2(param_name_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_573,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value719=create_nothing_node(info)));
            if(__right_value719) { __right_value719 = come_decrement_ref_count2(__right_value719, ((struct sNode*)__right_value719)->finalize, ((struct sNode*)__right_value719)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result418__;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result419__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value720=create_nothing_node(info)));
            if(__right_value720) { __right_value720 = come_decrement_ref_count2(__right_value720, ((struct sNode*)__right_value720)->finalize, ((struct sNode*)__right_value720)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result419__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result420__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value721=create_nothing_node(info)));
            if(__right_value721) { __right_value721 = come_decrement_ref_count2(__right_value721, ((struct sNode*)__right_value721)->finalize, ((struct sNode*)__right_value721)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result420__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result421__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value722=create_nothing_node(info)));
            if(__right_value722) { __right_value722 = come_decrement_ref_count2(__right_value722, ((struct sNode*)__right_value722)->finalize, ((struct sNode*)__right_value722)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result421__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_575=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_576=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info));
                gComeC=come_c_575;
                __result422__ = gComeFunResultObject = __result_obj__ = node_576;
                if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 1, 0, (void*)0); } 
                gComeFunResultObject = (void*)0;
                return __result422__;
                if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                __result423__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value724=create_nothing_node(info)));
                if(__right_value724) { __right_value724 = come_decrement_ref_count2(__right_value724, ((struct sNode*)__right_value724)->finalize, ((struct sNode*)__right_value724)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result423__;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result424__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value725=create_nothing_node(info)));
            if(__right_value725) { __right_value725 = come_decrement_ref_count2(__right_value725, ((struct sNode*)__right_value725)->finalize, ((struct sNode*)__right_value725)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result424__;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result425__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value726=create_nothing_node(info)));
            if(__right_value726) { __right_value726 = come_decrement_ref_count2(__right_value726, ((struct sNode*)__right_value726)->finalize, ((struct sNode*)__right_value726)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result425__;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result426__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value727=create_nothing_node(info)));
            if(__right_value727) { __right_value727 = come_decrement_ref_count2(__right_value727, ((struct sNode*)__right_value727)->finalize, ((struct sNode*)__right_value727)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result426__;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result427__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value728=create_nothing_node(info)));
            if(__right_value728) { __right_value728 = come_decrement_ref_count2(__right_value728, ((struct sNode*)__right_value728)->finalize, ((struct sNode*)__right_value728)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result427__;
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_577=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_577=(_Bool)1;
        }
        is_type_name_flag_578=(_Bool)0;
        {
            p_579=info->p;
            sline_580=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_581=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_581,info)) {
                    is_type_name_flag_578=(_Bool)1;
                }
                word_581 = come_decrement_ref_count2(word_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_579;
            info->sline=sline_580;
        }
        if(        is_type_name_flag_578) {
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value730=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_582=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_583=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_584=multiple_assign_var11->v3;
            come_call_finalizer3(__right_value730,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_584) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_577&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1633, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value18=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value732=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1633, "struct sSizeOfNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_582),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sSizeOfNode_finalize;
            _inf_value18->clone=(void*)sSizeOfNode_clone;
            _inf_value18->compile=(void*)sSizeOfNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sSizeOfNode_kind;
            __result430__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value736=_inf_value18));
            come_call_finalizer3(type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_583 = come_decrement_ref_count2(name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value732,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value736) { __right_value736 = come_decrement_ref_count2(__right_value736, ((struct sNode*)__right_value736)->finalize, ((struct sNode*)__right_value736)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result430__;
            come_call_finalizer3(type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_583 = come_decrement_ref_count2(name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_577) {
                no_comma_587=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj297=exp_586;
                exp_586=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_587;
            }
            else {
                __dec_obj298=exp_586;
                exp_586=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_577&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1654, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value19=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value740=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1654, "struct sSizeOfExpNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_586),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value19->clone=(void*)sSizeOfExpNode_clone;
            _inf_value19->compile=(void*)sSizeOfExpNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSizeOfExpNode_kind;
            __result433__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value744=_inf_value19));
            if(exp_586) { exp_586 = come_decrement_ref_count2(exp_586, ((struct sNode*)exp_586)->finalize, ((struct sNode*)exp_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value740,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value744) { __right_value744 = come_decrement_ref_count2(__right_value744, ((struct sNode*)__right_value744)->finalize, ((struct sNode*)__right_value744)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result433__;
            if(exp_586) { exp_586 = come_decrement_ref_count2(exp_586, ((struct sNode*)exp_586)->finalize, ((struct sNode*)exp_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_589=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_589=(_Bool)1;
        }
        is_type_name_flag_590=(_Bool)0;
        {
            p_591=info->p;
            sline_592=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_593=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_593,info)) {
                    is_type_name_flag_590=(_Bool)1;
                }
                word_593 = come_decrement_ref_count2(word_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_591;
            info->sline=sline_592;
        }
        if(        is_type_name_flag_590) {
            multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value746=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_594=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
            name_595=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            err_596=multiple_assign_var12->v3;
            come_call_finalizer3(__right_value746,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_596) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_589&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1699, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value20=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value748=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1699, "struct sTypeOfNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_594),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sTypeOfNode_finalize;
            _inf_value20->clone=(void*)sTypeOfNode_clone;
            _inf_value20->compile=(void*)sTypeOfNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sTypeOfNode_kind;
            __result436__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value752=_inf_value20));
            come_call_finalizer3(type_594,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value748,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value752) { __right_value752 = come_decrement_ref_count2(__right_value752, ((struct sNode*)__right_value752)->finalize, ((struct sNode*)__right_value752)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result436__;
            come_call_finalizer3(type_594,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_589) {
                no_comma_599=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj303=exp_598;
                exp_598=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_599;
            }
            else {
                __dec_obj304=exp_598;
                exp_598=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_589&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1720, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value21=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value756=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1720, "struct sTypeOfExpNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_598),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value21->clone=(void*)sTypeOfExpNode_clone;
            _inf_value21->compile=(void*)sTypeOfExpNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sTypeOfExpNode_kind;
            __result439__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value760=_inf_value21));
            if(exp_598) { exp_598 = come_decrement_ref_count2(exp_598, ((struct sNode*)exp_598)->finalize, ((struct sNode*)exp_598)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value756,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value760) { __right_value760 = come_decrement_ref_count2(__right_value760, ((struct sNode*)__right_value760)->finalize, ((struct sNode*)__right_value760)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result439__;
            if(exp_598) { exp_598 = come_decrement_ref_count2(exp_598, ((struct sNode*)exp_598)->finalize, ((struct sNode*)exp_598)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"dynamic_typeof")) {
        paren_601=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_601=(_Bool)1;
        }
        if(        !paren_601) {
            no_comma_603=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj307=exp_602;
            exp_602=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_603;
        }
        else {
            __dec_obj308=exp_602;
            exp_602=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
        }
        if(        paren_601&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1751, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value22=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value764=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1751, "struct sDynamicTypeOf*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_602),info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value22->clone=(void*)sDynamicTypeOf_clone;
        _inf_value22->compile=(void*)sDynamicTypeOf_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sDynamicTypeOf_kind;
        __result442__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value768=_inf_value22));
        if(exp_602) { exp_602 = come_decrement_ref_count2(exp_602, ((struct sNode*)exp_602)->finalize, ((struct sNode*)exp_602)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value764,sDynamicTypeOf_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value768) { __right_value768 = come_decrement_ref_count2(__right_value768, ((struct sNode*)__right_value768)->finalize, ((struct sNode*)__right_value768)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result442__;
        if(exp_602) { exp_602 = come_decrement_ref_count2(exp_602, ((struct sNode*)exp_602)->finalize, ((struct sNode*)exp_602)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        paren_605=(_Bool)0;
        if(        *info->p==40) {
            paren_605=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_606=(_Bool)0;
        {
            p_607=info->p;
            sline_608=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_609=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_609,info)) {
                    is_type_name_flag_606=(_Bool)1;
                }
                word_609 = come_decrement_ref_count2(word_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_607;
            info->sline=sline_608;
        }
        if(        is_type_name_flag_606) {
            multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(__right_value770=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_610=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_611=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_612=multiple_assign_var13->v3;
            come_call_finalizer3(__right_value770,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_612) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            if(            paren_605&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1792, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value23=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value772=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1792, "struct sAlignOfNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_610),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sAlignOfNode_finalize;
            _inf_value23->clone=(void*)sAlignOfNode_clone;
            _inf_value23->compile=(void*)sAlignOfNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sAlignOfNode_kind;
            __result445__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value776=_inf_value23));
            come_call_finalizer3(type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_611 = come_decrement_ref_count2(name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value772,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value776) { __right_value776 = come_decrement_ref_count2(__right_value776, ((struct sNode*)__right_value776)->finalize, ((struct sNode*)__right_value776)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result445__;
            come_call_finalizer3(type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_611 = come_decrement_ref_count2(name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_605) {
                no_comma_615=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj313=exp_614;
                exp_614=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_615;
            }
            else {
                __dec_obj314=exp_614;
                exp_614=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1806, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value24=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value780=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1806, "struct sAlignOfExpNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_614),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value24->clone=(void*)sAlignOfExpNode_clone;
            _inf_value24->compile=(void*)sAlignOfExpNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sAlignOfExpNode_kind;
            __result448__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value784=_inf_value24));
            if(exp_614) { exp_614 = come_decrement_ref_count2(exp_614, ((struct sNode*)exp_614)->finalize, ((struct sNode*)exp_614)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value780,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value784) { __right_value784 = come_decrement_ref_count2(__right_value784, ((struct sNode*)__right_value784)->finalize, ((struct sNode*)__right_value784)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result448__;
            if(exp_614) { exp_614 = come_decrement_ref_count2(exp_614, ((struct sNode*)exp_614)->finalize, ((struct sNode*)exp_614)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        paren_617=(_Bool)0;
        if(        *info->p==40) {
            paren_617=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_618=(_Bool)0;
        {
            p_619=info->p;
            sline_620=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_621=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_621,info)) {
                    is_type_name_flag_618=(_Bool)1;
                }
                word_621 = come_decrement_ref_count2(word_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_619;
            info->sline=sline_620;
        }
        if(        is_type_name_flag_618) {
            multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value786=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_622=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name_623=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err_624=multiple_assign_var14->v3;
            come_call_finalizer3(__right_value786,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_624) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_617&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1847, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value25=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value788=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1847, "struct sAlignOfNode2*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_622),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value25->clone=(void*)sAlignOfNode2_clone;
            _inf_value25->compile=(void*)sAlignOfNode2_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfNode2_kind;
            __result451__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value792=_inf_value25));
            come_call_finalizer3(type_622,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_623 = come_decrement_ref_count2(name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value788,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value792) { __right_value792 = come_decrement_ref_count2(__right_value792, ((struct sNode*)__right_value792)->finalize, ((struct sNode*)__right_value792)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result451__;
            come_call_finalizer3(type_622,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_623 = come_decrement_ref_count2(name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_617) {
                no_comma_627=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj319=exp_626;
                exp_626=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_627;
            }
            else {
                __dec_obj320=exp_626;
                exp_626=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1861, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value26=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value796=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1861, "struct sAlignOfExpNode2*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_626),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value26->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value26->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfExpNode2_kind;
            __result454__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value800=_inf_value26));
            if(exp_626) { exp_626 = come_decrement_ref_count2(exp_626, ((struct sNode*)exp_626)->finalize, ((struct sNode*)exp_626)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value796,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value800) { __right_value800 = come_decrement_ref_count2(__right_value800, ((struct sNode*)__right_value800)->finalize, ((struct sNode*)__right_value800)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result454__;
            if(exp_626) { exp_626 = come_decrement_ref_count2(exp_626, ((struct sNode*)exp_626)->finalize, ((struct sNode*)exp_626)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_629=(_Bool)0;
        {
            p_630=info->p;
            sline_631=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_632=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_632,info)) {
                    is_type_name_flag_629=(_Bool)1;
                }
                word_632 = come_decrement_ref_count2(word_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_630;
            info->sline=sline_631;
        }
        if(        is_type_name_flag_629) {
            multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value802=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_633=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            name_634=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            err_635=multiple_assign_var15->v3;
            come_call_finalizer3(__right_value802,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_635) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1894, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value27=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value804=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1894, "struct sAlignAsNode*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_633),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignAsNode_finalize;
            _inf_value27->clone=(void*)sAlignAsNode_clone;
            _inf_value27->compile=(void*)sAlignAsNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignAsNode_kind;
            __result457__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value808=_inf_value27));
            come_call_finalizer3(type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_634 = come_decrement_ref_count2(name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value804,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value808) { __right_value808 = come_decrement_ref_count2(__right_value808, ((struct sNode*)__right_value808)->finalize, ((struct sNode*)__right_value808)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result457__;
            come_call_finalizer3(type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_634 = come_decrement_ref_count2(name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_637=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1901, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value28=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value811=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1901, "struct sAlignAsExpNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_637),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value28->clone=(void*)sAlignAsExpNode_clone;
            _inf_value28->compile=(void*)sAlignAsExpNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignAsExpNode_kind;
            __result460__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value815=_inf_value28));
            if(exp_637) { exp_637 = come_decrement_ref_count2(exp_637, ((struct sNode*)exp_637)->finalize, ((struct sNode*)exp_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value811,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value815) { __right_value815 = come_decrement_ref_count2(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result460__;
            if(exp_637) { exp_637 = come_decrement_ref_count2(exp_637, ((struct sNode*)exp_637)->finalize, ((struct sNode*)exp_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result461__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value816=string_node_v20(buf,head,head_sline,info)));
    if(__right_value816) { __right_value816 = come_decrement_ref_count2(__right_value816, ((struct sNode*)__right_value816)->finalize, ((struct sNode*)__right_value816)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result461__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj260;
char* __dec_obj261;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj260=self->v1;
            come_call_finalizer3(__dec_obj260,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj261=self->v2;
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__=(void*)0;
struct sNewNode* __result372__;
void* __right_value605 = (void*)0;
struct sNewNode* result_535;
void* __right_value606 = (void*)0;
char* __dec_obj262;
void* __right_value607 = (void*)0;
struct sType* __dec_obj263;
void* __right_value617 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj271;
struct sNewNode* __result379__;
    if(    self==(void*)0) {
        __result372__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    result_535=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_535->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj262=result_535->sname;
        result_535->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_535->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj263=result_535->type;
        result_535->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj271=result_535->initializer;
        result_535->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj271,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result379__ = gComeFunResultObject = __result_obj__ = result_535;
    come_call_finalizer3(result_535,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result373__;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_536;
struct list_item$1tuple2$2charphsNodephph* it_537;
void* __right_value616 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result378__;
    if(    self==((void*)0)) {
        __result373__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    result_536=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1206, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_537=self->head;
    while(it_537!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_536,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodephp_clone, it_537->item)));
        it_537=it_537->next;
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_536;
    come_call_finalizer3(result_536,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result374__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result374__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value610 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_538;
struct tuple2$2charphsNodeph* __dec_obj264;
void* __right_value611 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_539;
struct tuple2$2charphsNodeph* __dec_obj265;
void* __right_value612 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_540;
struct tuple2$2charphsNodeph* __dec_obj266;
struct list$1tuple2$2charphsNodephph* __result375__;
    if(    self->len==0) {
        litem_538=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value610=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_538->prev=((void*)0);
        litem_538->next=((void*)0);
        __dec_obj264=litem_538->item;
        litem_538->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj264,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_538;
        self->head=litem_538;
    }
    else if(    self->len==1) {
        litem_539=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value611=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_539->prev=self->head;
        litem_539->next=((void*)0);
        __dec_obj265=litem_539->item;
        litem_539->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj265,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_539;
        self->head->next=litem_539;
    }
    else {
        litem_540=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value612=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_540->prev=self->tail;
        litem_540->next=((void*)0);
        __dec_obj266=litem_540->item;
        litem_540->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj266,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_540;
        self->tail=litem_540;
    }
    self->len++;
    __result375__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result376__;
void* __right_value613 = (void*)0;
struct tuple2$2charphsNodeph* result_541;
void* __right_value614 = (void*)0;
char* __dec_obj267;
void* __right_value615 = (void*)0;
struct sNode* __dec_obj268;
struct tuple2$2charphsNodeph* __result377__;
    if(    self==(void*)0) {
        __result376__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    result_541=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj267=result_541->v1;
        result_541->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj268=result_541->v2;
        result_541->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result377__ = gComeFunResultObject = __result_obj__ = result_541;
    come_call_finalizer3(result_541,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj269;
struct sNode* __dec_obj270;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj269=self->v1;
            __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj270=self->v2;
            if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj273;
struct sNode* __dec_obj274;
struct tuple2$2charphsNodeph* __result381__;
    __dec_obj273=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj274=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
    __result381__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
struct sDeleteNode* __result388__;
void* __right_value650 = (void*)0;
struct sDeleteNode* result_550;
void* __right_value651 = (void*)0;
char* __dec_obj275;
void* __right_value652 = (void*)0;
struct sNode* __dec_obj276;
struct sDeleteNode* __result389__;
    if(    self==(void*)0) {
        __result388__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    result_550=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_550->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj275=result_550->sname;
        result_550->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_550->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj276=result_550->node;
        result_550->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result389__ = gComeFunResultObject = __result_obj__ = result_550;
    come_call_finalizer3(result_550,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
struct sBorrowNode* __result391__;
void* __right_value657 = (void*)0;
struct sBorrowNode* result_552;
void* __right_value658 = (void*)0;
char* __dec_obj277;
void* __right_value659 = (void*)0;
struct sNode* __dec_obj278;
struct sBorrowNode* __result392__;
    if(    self==(void*)0) {
        __result391__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    result_552=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_552->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj277=result_552->sname;
        result_552->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_552->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj278=result_552->node;
        result_552->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result392__ = gComeFunResultObject = __result_obj__ = result_552;
    come_call_finalizer3(result_552,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__=(void*)0;
struct sCloneNode* __result394__;
void* __right_value664 = (void*)0;
struct sCloneNode* result_554;
void* __right_value665 = (void*)0;
char* __dec_obj279;
void* __right_value666 = (void*)0;
struct sNode* __dec_obj280;
struct sCloneNode* __result395__;
    if(    self==(void*)0) {
        __result394__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    result_554=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_554->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_554->sname;
        result_554->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_554->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj280=result_554->node;
        result_554->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result395__ = gComeFunResultObject = __result_obj__ = result_554;
    come_call_finalizer3(result_554,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__=(void*)0;
struct sDupeNode* __result397__;
void* __right_value671 = (void*)0;
struct sDupeNode* result_556;
void* __right_value672 = (void*)0;
char* __dec_obj281;
void* __right_value673 = (void*)0;
struct sNode* __dec_obj282;
struct sDupeNode* __result398__;
    if(    self==(void*)0) {
        __result397__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result397__;
    }
    result_556=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_556->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj281=result_556->sname;
        result_556->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_556->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj282=result_556->node;
        result_556->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result398__ = gComeFunResultObject = __result_obj__ = result_556;
    come_call_finalizer3(result_556,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
struct sDummyHeapNode* __result400__;
void* __right_value678 = (void*)0;
struct sDummyHeapNode* result_558;
void* __right_value679 = (void*)0;
char* __dec_obj283;
void* __right_value680 = (void*)0;
struct sNode* __dec_obj284;
struct sDummyHeapNode* __result401__;
    if(    self==(void*)0) {
        __result400__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    result_558=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_558->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_558->sname;
        result_558->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_558->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj284=result_558->node;
        result_558->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result401__ = gComeFunResultObject = __result_obj__ = result_558;
    come_call_finalizer3(result_558,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
struct sGCIncNode* __result403__;
void* __right_value685 = (void*)0;
struct sGCIncNode* result_560;
void* __right_value686 = (void*)0;
char* __dec_obj285;
void* __right_value687 = (void*)0;
struct sNode* __dec_obj286;
struct sGCIncNode* __result404__;
    if(    self==(void*)0) {
        __result403__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    result_560=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_560->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj285=result_560->sname;
        result_560->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_560->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj286=result_560->node;
        result_560->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result404__ = gComeFunResultObject = __result_obj__ = result_560;
    come_call_finalizer3(result_560,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNode* __result406__;
void* __right_value692 = (void*)0;
struct sGCDecNode* result_562;
void* __right_value693 = (void*)0;
char* __dec_obj287;
void* __right_value694 = (void*)0;
struct sNode* __dec_obj288;
struct sGCDecNode* __result407__;
    if(    self==(void*)0) {
        __result406__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    result_562=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_562->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj287=result_562->sname;
        result_562->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_562->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj288=result_562->node;
        result_562->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result407__ = gComeFunResultObject = __result_obj__ = result_562;
    come_call_finalizer3(result_562,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNoFreeNode* __result409__;
void* __right_value699 = (void*)0;
struct sGCDecNoFreeNode* result_564;
void* __right_value700 = (void*)0;
char* __dec_obj289;
void* __right_value701 = (void*)0;
struct sNode* __dec_obj290;
struct sGCDecNoFreeNode* __result410__;
    if(    self==(void*)0) {
        __result409__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    result_564=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_564->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj289=result_564->sname;
        result_564->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_564->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj290=result_564->node;
        result_564->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result410__ = gComeFunResultObject = __result_obj__ = result_564;
    come_call_finalizer3(result_564,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__=(void*)0;
struct sIsHeap* __result412__;
void* __right_value707 = (void*)0;
struct sIsHeap* result_569;
void* __right_value708 = (void*)0;
char* __dec_obj291;
void* __right_value709 = (void*)0;
struct sType* __dec_obj292;
struct sIsHeap* __result413__;
    if(    self==(void*)0) {
        __result412__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result412__;
    }
    result_569=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_569->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj291=result_569->sname;
        result_569->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_569->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj292=result_569->type;
        result_569->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj292,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result413__ = gComeFunResultObject = __result_obj__ = result_569;
    come_call_finalizer3(result_569,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__=(void*)0;
struct sIsPointer* __result415__;
void* __right_value715 = (void*)0;
struct sIsPointer* result_574;
void* __right_value716 = (void*)0;
char* __dec_obj293;
void* __right_value717 = (void*)0;
struct sType* __dec_obj294;
struct sIsPointer* __result416__;
    if(    self==(void*)0) {
        __result415__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result415__;
    }
    result_574=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_574->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj293=result_574->sname;
        result_574->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_574->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj294=result_574->type;
        result_574->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj294,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result416__ = gComeFunResultObject = __result_obj__ = result_574;
    come_call_finalizer3(result_574,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfNode* __result428__;
void* __right_value733 = (void*)0;
struct sSizeOfNode* result_585;
void* __right_value734 = (void*)0;
char* __dec_obj295;
void* __right_value735 = (void*)0;
struct sType* __dec_obj296;
struct sSizeOfNode* __result429__;
    if(    self==(void*)0) {
        __result428__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result428__;
    }
    result_585=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_585->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj295=result_585->sname;
        result_585->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_585->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj296=result_585->type;
        result_585->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj296,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result429__ = gComeFunResultObject = __result_obj__ = result_585;
    come_call_finalizer3(result_585,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result429__;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfExpNode* __result431__;
void* __right_value741 = (void*)0;
struct sSizeOfExpNode* result_588;
void* __right_value742 = (void*)0;
char* __dec_obj299;
void* __right_value743 = (void*)0;
struct sNode* __dec_obj300;
struct sSizeOfExpNode* __result432__;
    if(    self==(void*)0) {
        __result431__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result431__;
    }
    result_588=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_588->sname;
        result_588->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_588->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj300=result_588->exp;
        result_588->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result432__ = gComeFunResultObject = __result_obj__ = result_588;
    come_call_finalizer3(result_588,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result432__;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfNode* __result434__;
void* __right_value749 = (void*)0;
struct sTypeOfNode* result_597;
void* __right_value750 = (void*)0;
char* __dec_obj301;
void* __right_value751 = (void*)0;
struct sType* __dec_obj302;
struct sTypeOfNode* __result435__;
    if(    self==(void*)0) {
        __result434__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result434__;
    }
    result_597=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_597->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj301=result_597->sname;
        result_597->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_597->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj302=result_597->type;
        result_597->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj302,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result435__ = gComeFunResultObject = __result_obj__ = result_597;
    come_call_finalizer3(result_597,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfExpNode* __result437__;
void* __right_value757 = (void*)0;
struct sTypeOfExpNode* result_600;
void* __right_value758 = (void*)0;
char* __dec_obj305;
void* __right_value759 = (void*)0;
struct sNode* __dec_obj306;
struct sTypeOfExpNode* __result438__;
    if(    self==(void*)0) {
        __result437__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result437__;
    }
    result_600=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_600->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj305=result_600->sname;
        result_600->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_600->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj306=result_600->exp;
        result_600->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result438__ = gComeFunResultObject = __result_obj__ = result_600;
    come_call_finalizer3(result_600,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result438__;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
struct sDynamicTypeOf* __result440__;
void* __right_value765 = (void*)0;
struct sDynamicTypeOf* result_604;
void* __right_value766 = (void*)0;
char* __dec_obj309;
void* __right_value767 = (void*)0;
struct sNode* __dec_obj310;
struct sDynamicTypeOf* __result441__;
    if(    self==(void*)0) {
        __result440__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result440__;
    }
    result_604=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_604->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj309=result_604->sname;
        result_604->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_604->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj310=result_604->exp;
        result_604->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result441__ = gComeFunResultObject = __result_obj__ = result_604;
    come_call_finalizer3(result_604,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result441__;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode* __result443__;
void* __right_value773 = (void*)0;
struct sAlignOfNode* result_613;
void* __right_value774 = (void*)0;
char* __dec_obj311;
void* __right_value775 = (void*)0;
struct sType* __dec_obj312;
struct sAlignOfNode* __result444__;
    if(    self==(void*)0) {
        __result443__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result443__;
    }
    result_613=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_613->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj311=result_613->sname;
        result_613->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_613->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj312=result_613->type;
        result_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj312,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result444__ = gComeFunResultObject = __result_obj__ = result_613;
    come_call_finalizer3(result_613,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result444__;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode* __result446__;
void* __right_value781 = (void*)0;
struct sAlignOfExpNode* result_616;
void* __right_value782 = (void*)0;
char* __dec_obj315;
void* __right_value783 = (void*)0;
struct sNode* __dec_obj316;
struct sAlignOfExpNode* __result447__;
    if(    self==(void*)0) {
        __result446__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result446__;
    }
    result_616=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_616->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_616->sname;
        result_616->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_616->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj316=result_616->exp;
        result_616->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result447__ = gComeFunResultObject = __result_obj__ = result_616;
    come_call_finalizer3(result_616,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result447__;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode2* __result449__;
void* __right_value789 = (void*)0;
struct sAlignOfNode2* result_625;
void* __right_value790 = (void*)0;
char* __dec_obj317;
void* __right_value791 = (void*)0;
struct sType* __dec_obj318;
struct sAlignOfNode2* __result450__;
    if(    self==(void*)0) {
        __result449__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result449__;
    }
    result_625=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_625->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj317=result_625->sname;
        result_625->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_625->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj318=result_625->type;
        result_625->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj318,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result450__ = gComeFunResultObject = __result_obj__ = result_625;
    come_call_finalizer3(result_625,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result450__;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode2* __result452__;
void* __right_value797 = (void*)0;
struct sAlignOfExpNode2* result_628;
void* __right_value798 = (void*)0;
char* __dec_obj321;
void* __right_value799 = (void*)0;
struct sNode* __dec_obj322;
struct sAlignOfExpNode2* __result453__;
    if(    self==(void*)0) {
        __result452__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result452__;
    }
    result_628=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_628->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj321=result_628->sname;
        result_628->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_628->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj322=result_628->exp;
        result_628->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result453__ = gComeFunResultObject = __result_obj__ = result_628;
    come_call_finalizer3(result_628,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result453__;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsNode* __result455__;
void* __right_value805 = (void*)0;
struct sAlignAsNode* result_636;
void* __right_value806 = (void*)0;
char* __dec_obj323;
void* __right_value807 = (void*)0;
struct sType* __dec_obj324;
struct sAlignAsNode* __result456__;
    if(    self==(void*)0) {
        __result455__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result455__;
    }
    result_636=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_636->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj323=result_636->sname;
        result_636->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_636->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj324=result_636->type;
        result_636->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj324,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result456__ = gComeFunResultObject = __result_obj__ = result_636;
    come_call_finalizer3(result_636,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result456__;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsExpNode* __result458__;
void* __right_value812 = (void*)0;
struct sAlignAsExpNode* result_638;
void* __right_value813 = (void*)0;
char* __dec_obj325;
void* __right_value814 = (void*)0;
struct sNode* __dec_obj326;
struct sAlignAsExpNode* __result459__;
    if(    self==(void*)0) {
        __result458__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result458__;
    }
    result_638=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_638->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj325=result_638->sname;
        result_638->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_638->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj326=result_638->exp;
        result_638->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result459__ = gComeFunResultObject = __result_obj__ = result_638;
    come_call_finalizer3(result_638,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result459__;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value817 = (void*)0;
struct sNode* __result462__;
void* __right_value818 = (void*)0;
struct sNode* __result463__;
void* __right_value819 = (void*)0;
struct sNode* __result464__;
_Bool come_c_639;
void* __right_value820 = (void*)0;
struct sNode* __result465__;
void* __right_value821 = (void*)0;
struct sNode* __result466__;
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
            __result462__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value817=create_nothing_node(info)));
            if(__right_value817) { __right_value817 = come_decrement_ref_count2(__right_value817, ((struct sNode*)__right_value817)->finalize, ((struct sNode*)__right_value817)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result462__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result463__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value818=create_nothing_node(info)));
            if(__right_value818) { __right_value818 = come_decrement_ref_count2(__right_value818, ((struct sNode*)__right_value818)->finalize, ((struct sNode*)__right_value818)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result463__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result464__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value819=create_nothing_node(info)));
            if(__right_value819) { __right_value819 = come_decrement_ref_count2(__right_value819, ((struct sNode*)__right_value819)->finalize, ((struct sNode*)__right_value819)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result464__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_639=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_639;
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
        __result465__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value820=create_nothing_node(info)));
        if(__right_value820) { __right_value820 = come_decrement_ref_count2(__right_value820, ((struct sNode*)__right_value820)->finalize, ((struct sNode*)__right_value820)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result465__;
    }
    __result466__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value821=top_level_v93(buf,head,head_sline,info)));
    if(__right_value821) { __right_value821 = come_decrement_ref_count2(__right_value821, ((struct sNode*)__right_value821)->finalize, ((struct sNode*)__right_value821)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result466__;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct sNode* _inf_value29;
struct sImplementsNode* _inf_obj_value29;
void* __right_value828 = (void*)0;
struct sNode* __result469__;
    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1985, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value29=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value823=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1985, "struct sImplementsNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value29->_protocol_obj=_inf_obj_value29;
    _inf_value29->finalize=(void*)sImplementsNode_finalize;
    _inf_value29->clone=(void*)sImplementsNode_clone;
    _inf_value29->compile=(void*)sImplementsNode_compile;
    _inf_value29->sline=(void*)sNodeBase_sline;
    _inf_value29->sline_real=(void*)sNodeBase_sline_real;
    _inf_value29->sname=(void*)sNodeBase_sname;
    _inf_value29->terminated=(void*)sNodeBase_terminated;
    _inf_value29->kind=(void*)sImplementsNode_kind;
    __result469__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value828=_inf_value29));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value823,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value828) { __right_value828 = come_decrement_ref_count2(__right_value828, ((struct sNode*)__right_value828)->finalize, ((struct sNode*)__right_value828)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result469__;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
struct sImplementsNode* __result467__;
void* __right_value824 = (void*)0;
struct sImplementsNode* result_640;
void* __right_value825 = (void*)0;
char* __dec_obj327;
void* __right_value826 = (void*)0;
struct sNode* __dec_obj328;
void* __right_value827 = (void*)0;
struct sType* __dec_obj329;
struct sImplementsNode* __result468__;
    if(    self==(void*)0) {
        __result467__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result467__;
    }
    result_640=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj327=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj328=result_640->obj_exp;
        result_640->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
        if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj329=result_640->inf_type;
        result_640->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
        come_call_finalizer3(__dec_obj329,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result468__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result468__;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value829 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* type3_641=0;
char* name2_642=0;
_Bool err_643=0;
void* __right_value830 = (void*)0;
struct sType* inf_type_644;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sNode* _inf_value30;
struct sImplementsNode* _inf_obj_value30;
void* __right_value833 = (void*)0;
struct sNode* __result470__;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct sNode* _inf_value31;
struct sProtocolObject* _inf_obj_value31;
void* __right_value839 = (void*)0;
struct sNode* __result473__;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct sType* inf_type_646;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sNode* _inf_value32;
struct sImplementsNode* _inf_obj_value32;
void* __right_value844 = (void*)0;
struct sNode* __result474__;
void* __right_value845 = (void*)0;
struct sNode* __result475__;
    if(    !gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value829=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_641=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        name2_642=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        err_643=multiple_assign_var16->v3;
        come_call_finalizer3(__right_value829,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_643) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_644=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_641));
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2002, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value832=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2002, "struct sImplementsNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_644),info))));
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sImplementsNode_finalize;
        _inf_value30->clone=(void*)sImplementsNode_clone;
        _inf_value30->compile=(void*)sImplementsNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sImplementsNode_kind;
        __result470__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value833=_inf_value30));
        come_call_finalizer3(type3_641,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_642 = come_decrement_ref_count2(name2_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value832,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value833) { __right_value833 = come_decrement_ref_count2(__right_value833, ((struct sNode*)__right_value833)->finalize, ((struct sNode*)__right_value833)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result470__;
        come_call_finalizer3(type3_641,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_642 = come_decrement_ref_count2(name2_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==126&&*(info->p+1)==126) {
        info->p+=2;
        skip_spaces_and_lf(info);
        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2008, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value31=(struct sProtocolObject*)come_increment_ref_count(((struct sProtocolObject*)(__right_value835=sProtocolObject_initialize((struct sProtocolObject*)come_increment_ref_count((struct sProtocolObject*)come_calloc(1, sizeof(struct sProtocolObject)*(1), "21obj.c", 2008, "struct sProtocolObject*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value31->_protocol_obj=_inf_obj_value31;
        _inf_value31->finalize=(void*)sProtocolObject_finalize;
        _inf_value31->clone=(void*)sProtocolObject_clone;
        _inf_value31->compile=(void*)sProtocolObject_compile;
        _inf_value31->sline=(void*)sNodeBase_sline;
        _inf_value31->sline_real=(void*)sNodeBase_sline_real;
        _inf_value31->sname=(void*)sNodeBase_sname;
        _inf_value31->terminated=(void*)sNodeBase_terminated;
        _inf_value31->kind=(void*)sProtocolObject_kind;
        __result473__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=_inf_value31));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value835,sProtocolObject_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value839) { __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result473__;
    }
    else if(    *info->p==126) {
        info->p++;
        skip_spaces_and_lf(info);
        inf_type_646=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 2014, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2016, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value32=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value843=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2016, "struct sImplementsNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_646),info))));
        _inf_value32->_protocol_obj=_inf_obj_value32;
        _inf_value32->finalize=(void*)sImplementsNode_finalize;
        _inf_value32->clone=(void*)sImplementsNode_clone;
        _inf_value32->compile=(void*)sImplementsNode_compile;
        _inf_value32->sline=(void*)sNodeBase_sline;
        _inf_value32->sline_real=(void*)sNodeBase_sline_real;
        _inf_value32->sname=(void*)sNodeBase_sname;
        _inf_value32->terminated=(void*)sNodeBase_terminated;
        _inf_value32->kind=(void*)sImplementsNode_kind;
        __result474__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value844=_inf_value32));
        come_call_finalizer3(inf_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value843,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value844) { __right_value844 = come_decrement_ref_count2(__right_value844, ((struct sNode*)__right_value844)->finalize, ((struct sNode*)__right_value844)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result474__;
        come_call_finalizer3(inf_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result475__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value845=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value845) { __right_value845 = come_decrement_ref_count2(__right_value845, ((struct sNode*)__right_value845)->finalize, ((struct sNode*)__right_value845)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static struct sProtocolObject* sProtocolObject_clone(struct sProtocolObject* self){
void* __result_obj__=(void*)0;
struct sProtocolObject* __result471__;
void* __right_value836 = (void*)0;
struct sProtocolObject* result_645;
void* __right_value837 = (void*)0;
char* __dec_obj330;
void* __right_value838 = (void*)0;
struct sNode* __dec_obj331;
struct sProtocolObject* __result472__;
    if(    self==(void*)0) {
        __result471__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result471__;
    }
    result_645=(struct sProtocolObject*)come_increment_ref_count((struct sProtocolObject*)come_calloc(1, sizeof(struct sProtocolObject)*(1), "sProtocolObject_clone", 3, "struct sProtocolObject*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_645->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj330=result_645->sname;
        result_645->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_645->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj331=result_645->obj_exp;
        result_645->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
        if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result472__ = gComeFunResultObject = __result_obj__ = result_645;
    come_call_finalizer3(result_645,sProtocolObject_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result472__;
}

