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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_);
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
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
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
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
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
struct sNode* create_null_node(struct sInfo* info);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
struct sNode* mult_exp(struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
// uniq global variable
// inline function
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3635, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3642, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3651, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3658, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3665, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3672, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3679, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4007, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4012, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4017, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4022, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4027, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4060, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4062, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4067, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4069, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4074, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4076, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4081, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4083, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4088, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4090, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4095, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4097, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4102, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4104, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4109, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4114, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4119, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4124, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4129, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4134, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4139, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4144, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4149, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4154, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4159, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4164, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4169, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4174, "vector$1double")),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
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
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1142, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1152, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1162, "list_item$1char"))));
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1142, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1152, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1162, "list_item$1charp"))));
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1142, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1152, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1162, "list_item$1short"))));
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1142, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1152, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1162, "list_item$1int"))));
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1142, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1152, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1162, "list_item$1long"))));
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1142, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1152, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1162, "list_item$1float"))));
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1142, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1152, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1162, "list_item$1double"))));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1936, "char")));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1936, "char*")));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1936, "short")));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1936, "int")));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1936, "long")));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1936, "float")));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1936, "double")));
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1142, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1152, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1162, "list_item$1charph"))));
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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value281 = (void*)0;
struct sType* generics_type_247;
struct sType* __dec_obj77;
struct sClass* klass_276;
char* class_name_277;
struct sFun* operator_fun_278;
char* fun_name2_279;
void* __right_value282 = (void*)0;
char* none_generics_name_280;
void* __right_value283 = (void*)0;
struct sType* obj_type_281;
void* __right_value284 = (void*)0;
char* __dec_obj78;
void* __right_value285 = (void*)0;
char* fun_name3_282;
struct sGenericsFun* generics_fun_283;
void* __right_value286 = (void*)0;
_Bool _if_conditional1;
_Bool __result219__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_289=0;
char* fun_name_290=0;
void* __right_value289 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun2_291=0;
char* fun_name2_292=0;
void* __right_value290 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_293=0;
char* fun_name_294=0;
void* __right_value291 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_295=0;
char* fun_name2_296=0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
char* __dec_obj105;
int i_297;
void* __right_value294 = (void*)0;
char* new_fun_name_298;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj106;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* obj_type_299;
void* __right_value299 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_300=0;
char* fun_name_301=0;
void* __right_value300 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_302=0;
char* fun_name2_303=0;
void* __right_value301 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_304=0;
char* fun_name_305=0;
void* __right_value302 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun2_306=0;
char* fun_name2_307=0;
_Bool result_308;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct CVALUE* come_value_309;
char* left_value2_310;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
_Bool _if_conditional2;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
char* __dec_obj107;
void* __right_value311 = (void*)0;
char* __dec_obj108;
char* right_value2_314;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
_Bool _if_conditional3;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* __dec_obj109;
void* __right_value318 = (void*)0;
char* __dec_obj110;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* __dec_obj111;
void* __right_value323 = (void*)0;
struct sType* type2_315;
void* __right_value324 = (void*)0;
struct sType* type3_316;
void* __right_value325 = (void*)0;
struct sType* __dec_obj112;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
char* __dec_obj113;
void* __right_value328 = (void*)0;
char* __dec_obj114;
_Bool __result227__;
fun_name2_279 = (void*)0;
memset(&i_297, 0, sizeof(int));
left_value2_310 = (void*)0;
right_value2_314 = (void*)0;
    generics_type_247=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_247->mNoSolvedGenericsType->v1) {
        __dec_obj77=generics_type_247;
        generics_type_247=(struct sType*)come_increment_ref_count(generics_type_247->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_276=type->mClass;
    class_name_277=klass_276->mName;
    operator_fun_278=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_280=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_281=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj78=fun_name2_279;
        fun_name2_279=(char*)come_increment_ref_count(create_method_name(obj_type_281,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_282=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_280,fun_name));
        generics_fun_283=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_282,((void*)0));
        if(        generics_fun_283) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_279)),generics_fun_283,obj_type_281,info))),            _if_conditional1) {
                __result219__ = (_Bool)0;
                none_generics_name_280 = come_decrement_ref_count2(none_generics_name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_282 = come_decrement_ref_count2(fun_name3_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_279 = come_decrement_ref_count2(fun_name2_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result219__;
            }
            operator_fun_278=((struct sFun*)(__right_value287=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_279)));
            come_call_finalizer3(__right_value287,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value288=create_equals_automatically(obj_type_281,"equals",info)));
                fun_289=multiple_assign_var1->v1;
                fun_name_290=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(__right_value288,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value289=create_operator_equals_automatically(obj_type_281,"operator_equals",info)));
                fun2_291=multiple_assign_var2->v1;
                fun_name2_292=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(__right_value289,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_278=fun2_291;
                fun_name_290 = come_decrement_ref_count2(fun_name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_292 = come_decrement_ref_count2(fun_name2_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value290=create_not_equals_automatically(obj_type_281,"not_equals",info)));
                fun_293=multiple_assign_var3->v1;
                fun_name_294=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(__right_value290,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value291=create_operator_not_equals_automatically(obj_type_281,"operator_not_equals",info)));
                fun2_295=multiple_assign_var4->v1;
                fun_name2_296=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value291,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_278=fun2_295;
                fun_name_294 = come_decrement_ref_count2(fun_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_296 = come_decrement_ref_count2(fun_name2_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                operator_fun_278=((struct sFun*)(__right_value292=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_279)));
                come_call_finalizer3(__right_value292,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        none_generics_name_280 = come_decrement_ref_count2(none_generics_name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_282 = come_decrement_ref_count2(fun_name3_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj105=fun_name2_279;
        fun_name2_279=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_297=128-1;        i_297>=1;        i_297--        ){
            new_fun_name_298=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_279,i_297));
            operator_fun_278=((struct sFun*)(__right_value295=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_298)));
            come_call_finalizer3(__right_value295,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            operator_fun_278) {
                __dec_obj106=fun_name2_279;
                fun_name2_279=(char*)come_increment_ref_count(__builtin_string(new_fun_name_298));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_298 = come_decrement_ref_count2(new_fun_name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_298 = come_decrement_ref_count2(new_fun_name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_278==((void*)0)) {
            operator_fun_278=((struct sFun*)(__right_value297=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_279)));
            come_call_finalizer3(__right_value297,sFun_finalize, 0, 1, 0, 0, (void*)0);
            obj_type_299=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
            if(            operator_fun_278==((void*)0)) {
                if(                charp_operator_equals(fun_name,"operator_equals")) {
                    multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value299=create_equals_automatically(obj_type_299,"equals",info)));
                    fun_300=multiple_assign_var5->v1;
                    fun_name_301=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    come_call_finalizer3(__right_value299,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value300=create_operator_equals_automatically(obj_type_299,"operator_equals",info)));
                    fun2_302=multiple_assign_var6->v1;
                    fun_name2_303=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                    come_call_finalizer3(__right_value300,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_278=fun2_302;
                    fun_name_301 = come_decrement_ref_count2(fun_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_303 = come_decrement_ref_count2(fun_name2_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value301=create_not_equals_automatically(obj_type_299,"not_equals",info)));
                    fun_304=multiple_assign_var7->v1;
                    fun_name_305=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    come_call_finalizer3(__right_value301,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value302=create_operator_not_equals_automatically(obj_type_299,"operator_not_equals",info)));
                    fun2_306=multiple_assign_var8->v1;
                    fun_name2_307=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    come_call_finalizer3(__right_value302,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_278=fun2_306;
                    fun_name_305 = come_decrement_ref_count2(fun_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_307 = come_decrement_ref_count2(fun_name2_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(obj_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    result_308=(_Bool)0;
    if(    operator_fun_278&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_309=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 92, "CVALUE"))));
        check_assign_type(((char*)(__right_value306=xsprintf("\%s is assigned to",((char*)(__right_value305=string_to_string(fun_name2_279)))))),((struct sType*)come_null_check(((struct sType*)(__right_value307=list$1sTypephp_operator_load_element(operator_fun_278->mParamTypes,0))), "13op.c", 94, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value307,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value308=list$1sTypephp_operator_load_element(operator_fun_278->mParamTypes,0))), "13op.c", 95, 1))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value308,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value309=list$1sTypephp_operator_load_element(operator_fun_278->mParamTypes,0))), "13op.c", 96, 2)),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value309,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj107=left_value2_310;
            left_value2_310=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj108=left_value2_310;
            left_value2_310=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value313=xsprintf("\%s is assigned to",((char*)(__right_value312=string_to_string(fun_name2_279)))))),((struct sType*)come_null_check(((struct sType*)(__right_value314=list$1sTypephp_operator_load_element(operator_fun_278->mParamTypes,1))), "13op.c", 103, 3)),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value314,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional3=(((struct sType*)come_null_check(((struct sType*)(__right_value315=list$1sTypephp_operator_load_element(operator_fun_278->mParamTypes,1))), "13op.c", 104, 4))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value315,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value316=list$1sTypephp_operator_load_element(operator_fun_278->mParamTypes,1))), "13op.c", 105, 5)),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value316,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj109=right_value2_314;
            right_value2_314=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj110=right_value2_314;
            right_value2_314=(char*)come_increment_ref_count(string_clone(right_value->c_value));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj111=come_value_309->c_value;
        come_value_309->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s)",((char*)(__right_value319=string_to_string(fun_name2_279))),((char*)(__right_value320=string_to_string(left_value2_310))),((char*)(__right_value321=string_to_string(right_value2_314)))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        type2_315=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_278->mResultType));
        type3_316=(struct sType*)come_increment_ref_count(solve_generics(type2_315,generics_type_247,info));
        __dec_obj112=come_value_309->type;
        come_value_309->type=(struct sType*)come_increment_ref_count(sType_clone(type3_316));
        come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_309->var=((void*)0);
        if(        type3_316->mHeap) {
            append_object_to_right_values2(come_value_309,(struct sType*)come_increment_ref_count(type3_316),info,(_Bool)0);
        }
        if(        !break_guard&&type3_316->mGuardValue&&type3_316->mPointerNum>0) {
            __dec_obj113=come_value_309->c_value;
            come_value_309->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value326=make_type_name_string(type3_316,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_309->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj114=come_value_309->c_value;
        come_value_309->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_309->c_value,come_value_309->type,info));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_309->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_309));
        result_308=(_Bool)1;
        come_call_finalizer3(come_value_309,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_310 = come_decrement_ref_count2(left_value2_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_314 = come_decrement_ref_count2(right_value2_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_315,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_316,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result227__ = result_308;
    come_call_finalizer3(generics_type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_279 = come_decrement_ref_count2(fun_name2_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result227__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result198__;
void* __right_value245 = (void*)0;
struct sType* result_248;
void* __right_value248 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value249 = (void*)0;
struct tuple1$1sTypeph* __dec_obj55;
void* __right_value250 = (void*)0;
char* __dec_obj56;
void* __right_value257 = (void*)0;
struct list$1sTypeph* __dec_obj60;
void* __right_value265 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value266 = (void*)0;
struct list$1sTypeph* __dec_obj65;
void* __right_value273 = (void*)0;
struct list$1charph* __dec_obj69;
void* __right_value274 = (void*)0;
struct tuple1$1sTypeph* __dec_obj70;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value276 = (void*)0;
struct tuple1$1sTypeph* __dec_obj72;
void* __right_value277 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value278 = (void*)0;
char* __dec_obj74;
void* __right_value279 = (void*)0;
char* __dec_obj75;
void* __right_value280 = (void*)0;
char* __dec_obj76;
struct sType* __result214__;
    if(    self==(void*)0) {
        __result198__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    result_248=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_248->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj54=result_248->mNoSolvedGenericsType;
        result_248->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj55=result_248->mOriginalLoadVarType;
        result_248->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj56=result_248->mGenericsName;
        result_248->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_248->mGenericsTypes;
        result_248->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_248->mArrayNum;
        result_248->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj65=result_248->mParamTypes;
        result_248->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj65,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj69=result_248->mParamNames;
        result_248->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj70=result_248->mResultType;
        result_248->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj70,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj71=result_248->mAlignas;
        result_248->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj72=result_248->mChannelType;
        result_248->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj72,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_248->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_248->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_248->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_248->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_248->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_248->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_248->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_248->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_248->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_248->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_248->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_248->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_248->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_248->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_248->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_248->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_248->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_248->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_248->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_248->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_248->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_248->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_248->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj73=result_248->mSizeNum;
        result_248->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_248->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_248->mOriginalTypeName;
        result_248->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_248->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_248->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_248->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_248->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_248->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_248->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_248->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj75=result_248->mAsmName;
        result_248->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_248->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_248->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_248->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_248->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_248->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj76=result_248->mTupleName;
        result_248->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result214__ = gComeFunResultObject = __result_obj__ = result_248;
    come_call_finalizer3(result_248,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result199__;
void* __right_value246 = (void*)0;
struct tuple1$1sTypeph* result_249;
void* __right_value247 = (void*)0;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result200__;
    if(    self==(void*)0) {
        __result199__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    result_249=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj32=result_249->v1;
        result_249->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result200__ = gComeFunResultObject = __result_obj__ = result_249;
    come_call_finalizer3(result_249,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
char* __dec_obj37;
struct list$1sTypeph* __dec_obj38;
struct list$1sNodeph* __dec_obj40;
struct list$1sTypeph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct tuple1$1sTypeph* __dec_obj44;
struct sNode* __dec_obj46;
struct tuple1$1sTypeph* __dec_obj47;
struct sNode* __dec_obj49;
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
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_250;
struct list_item$1sTypeph* prev_it_251;
    it_250=self->head;
    while(it_250!=((void*)0)) {
        prev_it_251=it_250;
        it_250=it_250->next;
        come_call_finalizer3(prev_it_251,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_252;
struct list_item$1sTypeph* prev_it_253;
    it_252=self->head;
    while(it_252!=((void*)0)) {
        prev_it_253=it_252;
        it_252=it_252->next;
        come_call_finalizer3(prev_it_253,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_254;
struct list_item$1sNodeph* prev_it_255;
    it_254=self->head;
    while(it_254!=((void*)0)) {
        prev_it_255=it_254;
        it_254=it_254->next;
        come_call_finalizer3(prev_it_255,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_256;
struct list_item$1sNodeph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        come_call_finalizer3(prev_it_257,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_258;
struct list_item$1charph* prev_it_259;
    it_258=self->head;
    while(it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        come_call_finalizer3(prev_it_259,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj48;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj48=self->v1;
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
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
struct list$1sTypeph* __result201__;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct list$1sTypeph* result_260;
struct list_item$1sTypeph* it_261;
void* __right_value256 = (void*)0;
struct list$1sTypeph* __result204__;
    if(    self==((void*)0)) {
        __result201__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    result_260=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1058, "list$1sTypeph"))));
    it_261=self->head;
    while(it_261!=((void*)0)) {
        list$1sTypeph_add(result_260,(struct sType*)come_increment_ref_count(sType_clone(it_261->item)));
        it_261=it_261->next;
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_260;
    come_call_finalizer3(result_260,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result202__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
struct list_item$1sTypeph* litem_262;
struct sType* __dec_obj57;
void* __right_value254 = (void*)0;
struct list_item$1sTypeph* litem_263;
struct sType* __dec_obj58;
void* __right_value255 = (void*)0;
struct list_item$1sTypeph* litem_264;
struct sType* __dec_obj59;
struct list$1sTypeph* __result203__;
    if(    self->len==0) {
        litem_262=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value253=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1072, "list_item$1sTypeph"))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj57=litem_262->item;
        litem_262->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value254=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1082, "list_item$1sTypeph"))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj58=litem_263->item;
        litem_263->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value255=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1092, "list_item$1sTypeph"))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj59=litem_264->item;
        litem_264->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result203__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result205__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sNodeph* result_265;
struct list_item$1sNodeph* it_266;
void* __right_value264 = (void*)0;
struct list$1sNodeph* __result210__;
    if(    self==((void*)0)) {
        __result205__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_265=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1058, "list$1sNodeph"))));
    it_266=self->head;
    while(it_266!=((void*)0)) {
        list$1sNodeph_add(result_265,(struct sNode*)come_increment_ref_count(sNode_clone(it_266->item)));
        it_266=it_266->next;
    }
    __result210__ = gComeFunResultObject = __result_obj__ = result_265;
    come_call_finalizer3(result_265,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result206__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1sNodeph* litem_267;
struct sNode* __dec_obj61;
void* __right_value261 = (void*)0;
struct list_item$1sNodeph* litem_268;
struct sNode* __dec_obj62;
void* __right_value262 = (void*)0;
struct list_item$1sNodeph* litem_269;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result207__;
    if(    self->len==0) {
        litem_267=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value260=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1072, "list_item$1sNodeph"))));
        litem_267->prev=((void*)0);
        litem_267->next=((void*)0);
        __dec_obj61=litem_267->item;
        litem_267->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_267;
        self->head=litem_267;
    }
    else if(    self->len==1) {
        litem_268=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value261=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1082, "list_item$1sNodeph"))));
        litem_268->prev=self->head;
        litem_268->next=((void*)0);
        __dec_obj62=litem_268->item;
        litem_268->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_268;
        self->head->next=litem_268;
    }
    else {
        litem_269=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value262=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1092, "list_item$1sNodeph"))));
        litem_269->prev=self->tail;
        litem_269->next=((void*)0);
        __dec_obj63=litem_269->item;
        litem_269->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_269;
        self->tail=litem_269;
    }
    self->len++;
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result208__;
void* __right_value263 = (void*)0;
struct sNode* result_270;
struct sNode* __result209__;
    if(    self==(void*)0) {
        __result208__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    result_270=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_270->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_270->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_270->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_270->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_270->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_270->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_270->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_270->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_270->kind=self->kind;
    }
    __result209__ = gComeFunResultObject = __result_obj__ = result_270;
    if(result_270) { result_270 = come_decrement_ref_count2(result_270, ((struct sNode*)result_270)->finalize, ((struct sNode*)result_270)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result211__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1charph* result_271;
struct list_item$1charph* it_272;
void* __right_value272 = (void*)0;
struct list$1charph* __result213__;
    if(    self==((void*)0)) {
        __result211__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    result_271=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1058, "list$1charph"))));
    it_272=self->head;
    while(it_272!=((void*)0)) {
        list$1charph_add(result_271,(char*)come_increment_ref_count(string_clone(it_272->item)));
        it_272=it_272->next;
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_271;
    come_call_finalizer3(result_271,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1charph* litem_273;
char* __dec_obj66;
void* __right_value270 = (void*)0;
struct list_item$1charph* litem_274;
char* __dec_obj67;
void* __right_value271 = (void*)0;
struct list_item$1charph* litem_275;
char* __dec_obj68;
struct list$1charph* __result212__;
    if(    self->len==0) {
        litem_273=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value269=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1072, "list_item$1charph"))));
        litem_273->prev=((void*)0);
        litem_273->next=((void*)0);
        __dec_obj66=litem_273->item;
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_273;
        self->head=litem_273;
    }
    else if(    self->len==1) {
        litem_274=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value270=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1082, "list_item$1charph"))));
        litem_274->prev=self->head;
        litem_274->next=((void*)0);
        __dec_obj67=litem_274->item;
        litem_274->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_274;
        self->head->next=litem_274;
    }
    else {
        litem_275=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value271=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1092, "list_item$1charph"))));
        litem_275->prev=self->tail;
        litem_275->next=((void*)0);
        __dec_obj68=litem_275->item;
        litem_275->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_275;
        self->tail=litem_275;
    }
    self->len++;
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_284;
unsigned int it_285;
struct sGenericsFun* __result215__;
struct sGenericsFun* __result216__;
struct sGenericsFun* __result217__;
struct sGenericsFun* __result218__;
    hash_284=charp_get_hash_key(((char*)key))%self->size;
    it_285=hash_284;
    while((_Bool)1) {
        if(        self->item_existance[it_285]) {
            if(            charp_equals(self->keys[it_285],key)) {
                __result215__ = gComeFunResultObject = __result_obj__ = self->items[it_285];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
            }
            it_285++;
            if(            it_285>=self->size) {
                it_285=0;
            }
            else if(            it_285==hash_284) {
                __result216__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result216__;
            }
        }
        else {
            __result217__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result217__;
        }
    }
    __result218__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj79;
struct list$1charph* __dec_obj80;
struct list$1charph* __dec_obj81;
char* __dec_obj82;
struct sType* __dec_obj83;
struct list$1sTypeph* __dec_obj84;
struct list$1charph* __dec_obj85;
struct list$1charph* __dec_obj86;
char* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj79=self->mImplType;
            come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj80=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj81=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj82=self->mName;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj83=self->mResultType;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj84=self->mParamTypes;
            come_call_finalizer3(__dec_obj84,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj85=self->mParamNames;
            come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj86=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj86,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj87=self->mBlock;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj88=self->mGenericsSName;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_286;
unsigned int hash_287;
unsigned int it_288;
struct sFun* __result220__;
struct sFun* __result221__;
struct sFun* __result222__;
struct sFun* __result223__;
default_value_286 = (void*)0;
    memset(&default_value_286,0,sizeof(struct sFun*));
    hash_287=charp_get_hash_key(((char*)key))%self->size;
    it_288=hash_287;
    while((_Bool)1) {
        if(        self->item_existance[it_288]) {
            if(            charp_equals(self->keys[it_288],key)) {
                __result220__ = gComeFunResultObject = __result_obj__ = self->items[it_288];
                come_call_finalizer3(default_value_286,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result220__;
            }
            it_288++;
            if(            it_288>=self->size) {
                it_288=0;
            }
            else if(            it_288==hash_287) {
                __result221__ = gComeFunResultObject = __result_obj__ = default_value_286;
                come_call_finalizer3(default_value_286,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result221__;
            }
        }
        else {
            __result222__ = gComeFunResultObject = __result_obj__ = default_value_286;
            come_call_finalizer3(default_value_286,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result222__;
        }
    }
    __result223__ = gComeFunResultObject = __result_obj__ = default_value_286;
    come_call_finalizer3(default_value_286,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj89;
struct sType* __dec_obj90;
struct list$1sTypeph* __dec_obj91;
struct list$1charph* __dec_obj92;
struct list$1charph* __dec_obj93;
struct sType* __dec_obj94;
struct sBlock* __dec_obj95;
struct buffer* __dec_obj98;
struct buffer* __dec_obj99;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj89=self->mName;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj90=self->mResultType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj91=self->mParamTypes;
            come_call_finalizer3(__dec_obj91,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj92=self->mParamNames;
            come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj93=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj94=self->mLambdaType;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj95=self->mBlock;
            come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj98=self->mSource;
            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj99=self->mSourceHead;
            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj100=self->mSourceHead2;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj101=self->mSourceDefer;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj102=self->mComeHeader;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj103=self->mDeclareSName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj96;
struct sVarTable* __dec_obj97;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj96=self->mNodes;
            come_call_finalizer3(__dec_obj96,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj97=self->mVarTable;
            come_call_finalizer3(__dec_obj97,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj104;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj104=self->v2;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_311;
int i_312;
struct sType* __result224__;
struct sType* default_value_313;
struct sType* __result225__;
default_value_313 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_311=self->head;
    i_312=0;
    while(it_311!=((void*)0)) {
        if(        position==i_312) {
            __result224__ = gComeFunResultObject = __result_obj__ = it_311->item;
            gComeFunResultObject = (void*)0;
            return __result224__;
        }
        it_311=it_311->next;
        i_312++;
    }
    memset(&default_value_313,0,sizeof(struct sType*));
    __result225__ = gComeFunResultObject = __result_obj__ = default_value_313;
    come_call_finalizer3(default_value_313,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
struct list_item$1CVALUEph* litem_317;
struct CVALUE* __dec_obj115;
void* __right_value330 = (void*)0;
struct list_item$1CVALUEph* litem_318;
struct CVALUE* __dec_obj119;
void* __right_value331 = (void*)0;
struct list_item$1CVALUEph* litem_319;
struct CVALUE* __dec_obj120;
struct list$1CVALUEph* __result226__;
    if(    self->len==0) {
        litem_317=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value329=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1142, "list_item$1CVALUEph"))));
        litem_317->prev=((void*)0);
        litem_317->next=((void*)0);
        __dec_obj115=litem_317->item;
        litem_317->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_317;
        self->head=litem_317;
    }
    else if(    self->len==1) {
        litem_318=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value330=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1152, "list_item$1CVALUEph"))));
        litem_318->prev=self->head;
        litem_318->next=((void*)0);
        __dec_obj119=litem_318->item;
        litem_318->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_318;
        self->head->next=litem_318;
    }
    else {
        litem_319=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value331=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1162, "list_item$1CVALUEph"))));
        litem_319->prev=self->tail;
        litem_319->next=((void*)0);
        __dec_obj120=litem_319->item;
        litem_319->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_319;
        self->tail=litem_319;
    }
    self->len++;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj116;
struct sType* __dec_obj117;
char* __dec_obj118;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj116=self->c_value;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj117=self->type;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj118=self->c_value_without_right_value_objects;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value332 = (void*)0;
struct sNullNode* __result228__;
    ((struct sNodeBase*)(__right_value332=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value332,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__=(void*)0;
void* __right_value333 = (void*)0;
char* __result229__;
    __result229__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value333=__builtin_string("sNullNode")));
    __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct CVALUE* come_value_320;
void* __right_value336 = (void*)0;
char* __dec_obj123;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* __dec_obj124;
_Bool __result230__;
    come_value_320=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 155, "CVALUE"))));
    __dec_obj123=come_value_320->c_value;
    come_value_320->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj124=come_value_320->type;
    come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 158, "sType")),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_320->var=((void*)0);
    add_come_last_code(info,"%s",come_value_320->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_320));
    __result230__ = (_Bool)1;
    come_call_finalizer3(come_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result230__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj121;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj121=self->sname;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value343 = (void*)0;
struct sNode* __result233__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 171, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value340=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 171, "sNullNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result233__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value343=_inf_value1));
    come_call_finalizer3(__right_value340,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value343) { __right_value343 = come_decrement_ref_count2(__right_value343, ((struct sNode*)__right_value343)->finalize, ((struct sNode*)__right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result233__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
struct sNilNode* __result234__;
    ((struct sNodeBase*)(__right_value344=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value344,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
char* __result235__;
    __result235__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value345=__builtin_string("sNilNode")));
    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct CVALUE* come_value_322;
void* __right_value348 = (void*)0;
char* __dec_obj128;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sType* __dec_obj129;
_Bool __result236__;
    come_value_322=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 188, "CVALUE"))));
    __dec_obj128=come_value_322->c_value;
    come_value_322->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj129=come_value_322->type;
    come_value_322->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 191, "sType")),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_322->type->mNullValue=(_Bool)1;
    come_value_322->var=((void*)0);
    add_come_last_code(info,"%s",come_value_322->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_322));
    __result236__ = (_Bool)1;
    come_call_finalizer3(come_value_322,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result236__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value353 = (void*)0;
struct sNode* __dec_obj131;
struct sAddNode* __result237__;
    ((struct sNodeBase*)(__right_value351=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value351,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj130=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj131=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result237__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value354=__builtin_string("sAddNode")));
    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_323;
_Bool Value_324;
void* __right_value355 = (void*)0;
struct CVALUE* left_value_325;
struct sNode* right_node_326;
_Bool Value_327;
_Bool __result239__;
void* __right_value356 = (void*)0;
struct CVALUE* right_value_328;
struct sType* type_329;
char* fun_name_330;
_Bool calling_fun_331;
void* __right_value357 = (void*)0;
struct sType* result_type_332;
void* __right_value358 = (void*)0;
struct sType* __dec_obj135;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct CVALUE* come_value_333;
void* __right_value361 = (void*)0;
char* __dec_obj136;
void* __right_value362 = (void*)0;
struct sType* __dec_obj137;
_Bool __result240__;
memset(&calling_fun_331, 0, sizeof(_Bool));
    left_node_323=self->mLeft;
    Value_324=node_compile(left_node_323,info);
    if(    !Value_324) {
        return (_Bool)0;
    }
    else {
    }
    left_value_325=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_326=self->mRight;
    Value_327=node_compile(right_node_326,info);
    if(    !Value_327) {
        __result239__ = (_Bool)0;
        come_call_finalizer3(left_value_325,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result239__;
    }
    else {
    }
    right_value_328=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_329=(struct sType*)come_increment_ref_count(left_value_325->type);
    fun_name_330="operator_add";
    if(    self->mQuote) {
        calling_fun_331=(_Bool)0;
    }
    else {
        calling_fun_331=operator_overload_fun(type_329,fun_name_330,left_value_325,right_value_328,(_Bool)0,info);
    }
    if(    !calling_fun_331) {
        result_type_332=(struct sType*)come_increment_ref_count(sType_clone(left_value_325->type));
        if(        right_value_328->type->mPointerNum>0) {
            __dec_obj135=result_type_332;
            result_type_332=(struct sType*)come_increment_ref_count(sType_clone(right_value_328->type));
            come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_333=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 257, "CVALUE"))));
        __dec_obj136=come_value_333->c_value;
        come_value_333->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_325->c_value,right_value_328->c_value));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj137=come_value_333->type;
        come_value_333->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_332));
        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_333->type->mHeap=(_Bool)0;
        come_value_333->var=((void*)0);
        add_come_last_code(info,"%s",come_value_333->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_333));
        come_call_finalizer3(result_type_332,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_333,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result240__ = (_Bool)1;
    come_call_finalizer3(left_value_325,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result240__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value365 = (void*)0;
struct sNode* __dec_obj139;
struct sSubNode* __result241__;
    ((struct sNodeBase*)(__right_value363=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value363,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj138=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj139=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result241__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__=(void*)0;
void* __right_value366 = (void*)0;
char* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value366=__builtin_string("sSubNode")));
    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_334;
_Bool Value_335;
void* __right_value367 = (void*)0;
struct CVALUE* left_value_336;
struct sNode* right_node_337;
_Bool Value_338;
_Bool __result243__;
void* __right_value368 = (void*)0;
struct CVALUE* right_value_339;
struct sType* type_340;
char* fun_name_341;
_Bool calling_fun_342;
void* __right_value369 = (void*)0;
struct sType* result_type_343;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sType* __dec_obj143;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct CVALUE* come_value_344;
void* __right_value374 = (void*)0;
char* __dec_obj144;
void* __right_value375 = (void*)0;
struct sType* __dec_obj145;
_Bool __result244__;
memset(&calling_fun_342, 0, sizeof(_Bool));
    left_node_334=self->mLeft;
    Value_335=node_compile(left_node_334,info);
    if(    !Value_335) {
        return (_Bool)0;
    }
    else {
    }
    left_value_336=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_337=self->mRight;
    Value_338=node_compile(right_node_337,info);
    if(    !Value_338) {
        __result243__ = (_Bool)0;
        come_call_finalizer3(left_value_336,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result243__;
    }
    else {
    }
    right_value_339=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_340=(struct sType*)come_increment_ref_count(left_value_336->type);
    fun_name_341="operator_sub";
    if(    self->mQuote) {
        calling_fun_342=(_Bool)0;
    }
    else {
        calling_fun_342=operator_overload_fun(type_340,fun_name_341,left_value_336,right_value_339,(_Bool)0,info);
    }
    if(    !calling_fun_342) {
        result_type_343=(struct sType*)come_increment_ref_count(sType_clone(left_value_336->type));
        if(        left_value_336->type->mPointerNum>0&&right_value_339->type->mPointerNum>0) {
            __dec_obj143=result_type_343;
            result_type_343=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 324, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_344=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 327, "CVALUE"))));
        __dec_obj144=come_value_344->c_value;
        come_value_344->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_336->c_value,right_value_339->c_value));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj145=come_value_344->type;
        come_value_344->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_343));
        come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_344->type->mHeap=(_Bool)0;
        come_value_344->var=((void*)0);
        add_come_last_code(info,"%s",come_value_344->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_344));
        come_call_finalizer3(result_type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_344,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result244__ = (_Bool)1;
    come_call_finalizer3(left_value_336,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_339,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result244__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value378 = (void*)0;
struct sNode* __dec_obj147;
struct sMultNode* __result245__;
    ((struct sNodeBase*)(__right_value376=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value376,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj146=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj147=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); };
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result245__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result246__;
    __result246__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sMultNode")));
    __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_345;
_Bool Value_346;
void* __right_value380 = (void*)0;
struct CVALUE* left_value_347;
struct sNode* right_node_348;
_Bool Value_349;
_Bool __result247__;
void* __right_value381 = (void*)0;
struct CVALUE* right_value_350;
struct sType* type_351;
char* fun_name_352;
_Bool calling_fun_353;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_354;
void* __right_value384 = (void*)0;
char* __dec_obj151;
void* __right_value385 = (void*)0;
struct sType* __dec_obj152;
_Bool __result248__;
memset(&calling_fun_353, 0, sizeof(_Bool));
    left_node_345=self->mLeft;
    Value_346=node_compile(left_node_345,info);
    if(    !Value_346) {
        return (_Bool)0;
    }
    else {
    }
    left_value_347=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_348=self->mRight;
    Value_349=node_compile(right_node_348,info);
    if(    !Value_349) {
        __result247__ = (_Bool)0;
        come_call_finalizer3(left_value_347,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result247__;
    }
    else {
    }
    right_value_350=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_351=(struct sType*)come_increment_ref_count(left_value_347->type);
    fun_name_352="operator_mult";
    if(    self->mQuote) {
        calling_fun_353=(_Bool)0;
    }
    else {
        calling_fun_353=operator_overload_fun(type_351,fun_name_352,left_value_347,right_value_350,(_Bool)0,info);
    }
    if(    !calling_fun_353) {
        come_value_354=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 392, "CVALUE"))));
        __dec_obj151=come_value_354->c_value;
        come_value_354->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_347->c_value,right_value_350->c_value));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj152=come_value_354->type;
        come_value_354->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_347->type));
        come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_354->type->mHeap=(_Bool)0;
        come_value_354->var=((void*)0);
        add_come_last_code(info,"%s",come_value_354->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_354));
        come_call_finalizer3(come_value_354,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result248__ = (_Bool)1;
    come_call_finalizer3(left_value_347,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_350,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result248__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sNode* __dec_obj153;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj154;
struct sDivNode* __result249__;
    ((struct sNodeBase*)(__right_value386=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value386,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj153=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj154=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result249__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
char* __result250__;
    __result250__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value389=__builtin_string("sDivNode")));
    __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_355;
_Bool Value_356;
void* __right_value390 = (void*)0;
struct CVALUE* left_value_357;
struct sNode* right_node_358;
_Bool Value_359;
_Bool __result251__;
void* __right_value391 = (void*)0;
struct CVALUE* right_value_360;
struct sType* type_361;
char* fun_name_362;
_Bool calling_fun_363;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_364;
void* __right_value394 = (void*)0;
char* __dec_obj158;
void* __right_value395 = (void*)0;
struct sType* __dec_obj159;
_Bool __result252__;
memset(&calling_fun_363, 0, sizeof(_Bool));
    left_node_355=self->mLeft;
    Value_356=node_compile(left_node_355,info);
    if(    !Value_356) {
        return (_Bool)0;
    }
    else {
    }
    left_value_357=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_358=self->mRight;
    Value_359=node_compile(right_node_358,info);
    if(    !Value_359) {
        __result251__ = (_Bool)0;
        come_call_finalizer3(left_value_357,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result251__;
    }
    else {
    }
    right_value_360=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_361=(struct sType*)come_increment_ref_count(left_value_357->type);
    fun_name_362="operator_div";
    if(    self->mQuote) {
        calling_fun_363=(_Bool)0;
    }
    else {
        calling_fun_363=operator_overload_fun(type_361,fun_name_362,left_value_357,right_value_360,(_Bool)0,info);
    }
    if(    !calling_fun_363) {
        come_value_364=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 457, "CVALUE"))));
        __dec_obj158=come_value_364->c_value;
        come_value_364->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_357->c_value,right_value_360->c_value));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj159=come_value_364->type;
        come_value_364->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_357->type));
        come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_364->type->mHeap=(_Bool)0;
        come_value_364->var=((void*)0);
        add_come_last_code(info,"%s",come_value_364->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_364));
        come_call_finalizer3(come_value_364,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result252__ = (_Bool)1;
    come_call_finalizer3(left_value_357,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result252__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sNode* __dec_obj160;
void* __right_value398 = (void*)0;
struct sNode* __dec_obj161;
struct sModNode* __result253__;
    ((struct sNodeBase*)(__right_value396=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value396,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj160=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj161=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result253__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
char* __result254__;
    __result254__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value399=__builtin_string("sModNode")));
    __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_365;
_Bool Value_366;
void* __right_value400 = (void*)0;
struct CVALUE* left_value_367;
struct sNode* right_node_368;
_Bool Value_369;
_Bool __result255__;
void* __right_value401 = (void*)0;
struct CVALUE* right_value_370;
struct sType* type_371;
char* fun_name_372;
_Bool calling_fun_373;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct CVALUE* come_value_374;
void* __right_value404 = (void*)0;
char* __dec_obj165;
void* __right_value405 = (void*)0;
struct sType* __dec_obj166;
_Bool __result256__;
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
        __result255__ = (_Bool)0;
        come_call_finalizer3(left_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result255__;
    }
    else {
    }
    right_value_370=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_371=(struct sType*)come_increment_ref_count(left_value_367->type);
    fun_name_372="operator_mod";
    if(    self->mQuote) {
        calling_fun_373=(_Bool)0;
    }
    else {
        calling_fun_373=operator_overload_fun(type_371,fun_name_372,left_value_367,right_value_370,(_Bool)0,info);
    }
    if(    !calling_fun_373) {
        come_value_374=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 522, "CVALUE"))));
        __dec_obj165=come_value_374->c_value;
        come_value_374->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_367->c_value,right_value_370->c_value));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj166=come_value_374->type;
        come_value_374->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_367->type));
        come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_374->type->mHeap=(_Bool)0;
        come_value_374->var=((void*)0);
        add_come_last_code(info,"%s",come_value_374->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_374));
        come_call_finalizer3(come_value_374,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result256__ = (_Bool)1;
    come_call_finalizer3(left_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_370,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_371,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result256__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sNode* __dec_obj167;
void* __right_value408 = (void*)0;
struct sNode* __dec_obj168;
struct sLShiftNode* __result257__;
    ((struct sNodeBase*)(__right_value406=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value406,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj167=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj168=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result257__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value409 = (void*)0;
char* __result258__;
    __result258__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value409=__builtin_string("sLShiftNode")));
    __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_375;
_Bool Value_376;
void* __right_value410 = (void*)0;
struct CVALUE* left_value_377;
struct sNode* right_node_378;
_Bool Value_379;
_Bool __result259__;
void* __right_value411 = (void*)0;
struct CVALUE* right_value_380;
struct sType* type_381;
char* fun_name_382;
_Bool calling_fun_383;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct CVALUE* come_value_384;
void* __right_value414 = (void*)0;
char* __dec_obj172;
void* __right_value415 = (void*)0;
struct sType* __dec_obj173;
_Bool __result260__;
memset(&calling_fun_383, 0, sizeof(_Bool));
    left_node_375=self->mLeft;
    Value_376=node_compile(left_node_375,info);
    if(    !Value_376) {
        return (_Bool)0;
    }
    else {
    }
    left_value_377=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_378=self->mRight;
    Value_379=node_compile(right_node_378,info);
    if(    !Value_379) {
        __result259__ = (_Bool)0;
        come_call_finalizer3(left_value_377,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result259__;
    }
    else {
    }
    right_value_380=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_381=(struct sType*)come_increment_ref_count(left_value_377->type);
    fun_name_382="operator_lshift";
    if(    self->mQuote) {
        calling_fun_383=(_Bool)0;
    }
    else {
        calling_fun_383=operator_overload_fun(type_381,fun_name_382,left_value_377,right_value_380,(_Bool)0,info);
    }
    if(    !calling_fun_383) {
        come_value_384=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 588, "CVALUE"))));
        __dec_obj172=come_value_384->c_value;
        come_value_384->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_377->c_value,right_value_380->c_value));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj173=come_value_384->type;
        come_value_384->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_377->type));
        come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_384->type->mHeap=(_Bool)0;
        come_value_384->var=((void*)0);
        add_come_last_code(info,"%s",come_value_384->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_384));
        come_call_finalizer3(come_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result260__ = (_Bool)1;
    come_call_finalizer3(left_value_377,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_380,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_381,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result260__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj174;
void* __right_value418 = (void*)0;
struct sNode* __dec_obj175;
struct sRShiftNode* __result261__;
    ((struct sNodeBase*)(__right_value416=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value416,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj174=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj175=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); };
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
char* __result262__;
    __result262__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value419=__builtin_string("sRShiftNode")));
    __right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_385;
_Bool Value_386;
void* __right_value420 = (void*)0;
struct CVALUE* left_value_387;
struct sNode* right_node_388;
_Bool Value_389;
_Bool __result263__;
void* __right_value421 = (void*)0;
struct CVALUE* right_value_390;
struct sType* type_391;
char* fun_name_392;
_Bool calling_fun_393;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value424 = (void*)0;
char* __dec_obj179;
void* __right_value425 = (void*)0;
struct sType* __dec_obj180;
_Bool __result264__;
memset(&calling_fun_393, 0, sizeof(_Bool));
    left_node_385=self->mLeft;
    Value_386=node_compile(left_node_385,info);
    if(    !Value_386) {
        return (_Bool)0;
    }
    else {
    }
    left_value_387=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_388=self->mRight;
    Value_389=node_compile(right_node_388,info);
    if(    !Value_389) {
        __result263__ = (_Bool)0;
        come_call_finalizer3(left_value_387,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result263__;
    }
    else {
    }
    right_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_391=(struct sType*)come_increment_ref_count(left_value_387->type);
    fun_name_392="operator_rshift";
    if(    self->mQuote) {
        calling_fun_393=(_Bool)0;
    }
    else {
        calling_fun_393=operator_overload_fun(type_391,fun_name_392,left_value_387,right_value_390,(_Bool)0,info);
    }
    if(    !calling_fun_393) {
        come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 653, "CVALUE"))));
        __dec_obj179=come_value_394->c_value;
        come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_387->c_value,right_value_390->c_value));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj180=come_value_394->type;
        come_value_394->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_387->type));
        come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_394->type->mHeap=(_Bool)0;
        come_value_394->var=((void*)0);
        add_come_last_code(info,"%s",come_value_394->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
        come_call_finalizer3(come_value_394,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result264__ = (_Bool)1;
    come_call_finalizer3(left_value_387,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_391,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result264__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* __dec_obj181;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj182;
struct sGtEqNode* __result265__;
    ((struct sNodeBase*)(__right_value426=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value426,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj181=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj182=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result265__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value429 = (void*)0;
char* __result266__;
    __result266__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value429=__builtin_string("sGtEqNode")));
    __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_395;
_Bool Value_396;
void* __right_value430 = (void*)0;
struct CVALUE* left_value_397;
struct sNode* right_node_398;
_Bool Value_399;
_Bool __result267__;
void* __right_value431 = (void*)0;
struct CVALUE* right_value_400;
struct sType* type_401;
char* fun_name_402;
_Bool calling_fun_403;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value434 = (void*)0;
char* __dec_obj186;
void* __right_value435 = (void*)0;
struct sType* __dec_obj187;
_Bool __result268__;
memset(&calling_fun_403, 0, sizeof(_Bool));
    left_node_395=self->mLeft;
    Value_396=node_compile(left_node_395,info);
    if(    !Value_396) {
        return (_Bool)0;
    }
    else {
    }
    left_value_397=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_398=self->mRight;
    Value_399=node_compile(right_node_398,info);
    if(    !Value_399) {
        __result267__ = (_Bool)0;
        come_call_finalizer3(left_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result267__;
    }
    else {
    }
    right_value_400=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_401=(struct sType*)come_increment_ref_count(left_value_397->type);
    fun_name_402="operator_gteq";
    if(    self->mQuote) {
        calling_fun_403=(_Bool)0;
    }
    else {
        calling_fun_403=operator_overload_fun(type_401,fun_name_402,left_value_397,right_value_400,(_Bool)0,info);
    }
    if(    !calling_fun_403) {
        come_value_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 718, "CVALUE"))));
        __dec_obj186=come_value_404->c_value;
        come_value_404->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_397->c_value,right_value_400->c_value));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj187=come_value_404->type;
        come_value_404->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_397->type));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_404->type->mHeap=(_Bool)0;
        come_value_404->var=((void*)0);
        add_come_last_code(info,"%s",come_value_404->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_404));
        come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result268__ = (_Bool)1;
    come_call_finalizer3(left_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_401,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result268__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj189;
struct sLtEqNode* __result269__;
    ((struct sNodeBase*)(__right_value436=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value436,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj188=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj189=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result269__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value439 = (void*)0;
char* __result270__;
    __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value439=__builtin_string("sLtEqNode")));
    __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_405;
_Bool Value_406;
void* __right_value440 = (void*)0;
struct CVALUE* left_value_407;
struct sNode* right_node_408;
_Bool Value_409;
_Bool __result271__;
void* __right_value441 = (void*)0;
struct CVALUE* right_value_410;
struct sType* type_411;
char* fun_name_412;
_Bool calling_fun_413;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value444 = (void*)0;
char* __dec_obj193;
void* __right_value445 = (void*)0;
struct sType* __dec_obj194;
_Bool __result272__;
memset(&calling_fun_413, 0, sizeof(_Bool));
    left_node_405=self->mLeft;
    Value_406=node_compile(left_node_405,info);
    if(    !Value_406) {
        return (_Bool)0;
    }
    else {
    }
    left_value_407=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_408=self->mRight;
    Value_409=node_compile(right_node_408,info);
    if(    !Value_409) {
        __result271__ = (_Bool)0;
        come_call_finalizer3(left_value_407,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result271__;
    }
    else {
    }
    right_value_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_411=(struct sType*)come_increment_ref_count(left_value_407->type);
    fun_name_412="operator_lteq";
    if(    self->mQuote) {
        calling_fun_413=(_Bool)0;
    }
    else {
        calling_fun_413=operator_overload_fun(type_411,fun_name_412,left_value_407,right_value_410,(_Bool)0,info);
    }
    if(    !calling_fun_413) {
        come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 783, "CVALUE"))));
        __dec_obj193=come_value_414->c_value;
        come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_407->c_value,right_value_410->c_value));
        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj194=come_value_414->type;
        come_value_414->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_407->type));
        come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_414->type->mHeap=(_Bool)0;
        come_value_414->var=((void*)0);
        add_come_last_code(info,"%s",come_value_414->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
        come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result272__ = (_Bool)1;
    come_call_finalizer3(left_value_407,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value448 = (void*)0;
struct sNode* __dec_obj196;
struct sLtNode* __result273__;
    ((struct sNodeBase*)(__right_value446=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value446,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj195=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj196=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result273__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__=(void*)0;
void* __right_value449 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value449=__builtin_string("sLtNode")));
    __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_415;
_Bool Value_416;
void* __right_value450 = (void*)0;
struct CVALUE* left_value_417;
struct sNode* right_node_418;
_Bool Value_419;
_Bool __result275__;
void* __right_value451 = (void*)0;
struct CVALUE* right_value_420;
struct sType* type_421;
char* fun_name_422;
_Bool calling_fun_423;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value454 = (void*)0;
char* __dec_obj200;
void* __right_value455 = (void*)0;
struct sType* __dec_obj201;
_Bool __result276__;
memset(&calling_fun_423, 0, sizeof(_Bool));
    left_node_415=self->mLeft;
    Value_416=node_compile(left_node_415,info);
    if(    !Value_416) {
        return (_Bool)0;
    }
    else {
    }
    left_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_418=self->mRight;
    Value_419=node_compile(right_node_418,info);
    if(    !Value_419) {
        __result275__ = (_Bool)0;
        come_call_finalizer3(left_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result275__;
    }
    else {
    }
    right_value_420=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_421=(struct sType*)come_increment_ref_count(left_value_417->type);
    fun_name_422="operator_lt";
    if(    self->mQuote) {
        calling_fun_423=(_Bool)0;
    }
    else {
        calling_fun_423=operator_overload_fun(type_421,fun_name_422,left_value_417,right_value_420,(_Bool)0,info);
    }
    if(    !calling_fun_423) {
        come_value_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 848, "CVALUE"))));
        __dec_obj200=come_value_424->c_value;
        come_value_424->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_417->c_value,right_value_420->c_value));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj201=come_value_424->type;
        come_value_424->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_417->type));
        come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_424->type->mHeap=(_Bool)0;
        come_value_424->var=((void*)0);
        add_come_last_code(info,"%s",come_value_424->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_424));
        come_call_finalizer3(come_value_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result276__ = (_Bool)1;
    come_call_finalizer3(left_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result276__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sNode* __dec_obj202;
void* __right_value458 = (void*)0;
struct sNode* __dec_obj203;
struct sGtNode* __result277__;
    ((struct sNodeBase*)(__right_value456=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value456,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj202=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj203=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result277__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__=(void*)0;
void* __right_value459 = (void*)0;
char* __result278__;
    __result278__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value459=__builtin_string("sGtNode")));
    __right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_425;
_Bool Value_426;
void* __right_value460 = (void*)0;
struct CVALUE* left_value_427;
struct sNode* right_node_428;
_Bool Value_429;
_Bool __result279__;
void* __right_value461 = (void*)0;
struct CVALUE* right_value_430;
struct sType* type_431;
char* fun_name_432;
_Bool calling_fun_433;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct CVALUE* come_value_434;
void* __right_value464 = (void*)0;
char* __dec_obj207;
void* __right_value465 = (void*)0;
struct sType* __dec_obj208;
_Bool __result280__;
memset(&calling_fun_433, 0, sizeof(_Bool));
    left_node_425=self->mLeft;
    Value_426=node_compile(left_node_425,info);
    if(    !Value_426) {
        return (_Bool)0;
    }
    else {
    }
    left_value_427=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_428=self->mRight;
    Value_429=node_compile(right_node_428,info);
    if(    !Value_429) {
        __result279__ = (_Bool)0;
        come_call_finalizer3(left_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result279__;
    }
    else {
    }
    right_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_431=(struct sType*)come_increment_ref_count(left_value_427->type);
    fun_name_432="operator_gt";
    if(    self->mQuote) {
        calling_fun_433=(_Bool)0;
    }
    else {
        calling_fun_433=operator_overload_fun(type_431,fun_name_432,left_value_427,right_value_430,(_Bool)0,info);
    }
    if(    !calling_fun_433) {
        come_value_434=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 913, "CVALUE"))));
        __dec_obj207=come_value_434->c_value;
        come_value_434->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_427->c_value,right_value_430->c_value));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj208=come_value_434->type;
        come_value_434->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_427->type));
        come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_434->type->mHeap=(_Bool)0;
        come_value_434->var=((void*)0);
        add_come_last_code(info,"%s",come_value_434->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_434));
        come_call_finalizer3(come_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result280__ = (_Bool)1;
    come_call_finalizer3(left_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sNode* __dec_obj209;
void* __right_value468 = (void*)0;
struct sNode* __dec_obj210;
struct sEqNode* __result281__;
    ((struct sNodeBase*)(__right_value466=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value466,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj209=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj210=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value469 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value469=__builtin_string("sEqNode")));
    __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_435;
_Bool Value_436;
void* __right_value470 = (void*)0;
struct CVALUE* left_value_437;
struct sNode* right_node_438;
_Bool Value_439;
_Bool __result283__;
void* __right_value471 = (void*)0;
struct CVALUE* right_value_440;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct CVALUE* come_value_441;
void* __right_value474 = (void*)0;
char* __dec_obj214;
void* __right_value475 = (void*)0;
struct sType* __dec_obj215;
_Bool __result284__;
    left_node_435=self->mLeft;
    Value_436=node_compile(left_node_435,info);
    if(    !Value_436) {
        return (_Bool)0;
    }
    else {
    }
    left_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_438=self->mRight;
    Value_439=node_compile(right_node_438,info);
    if(    !Value_439) {
        __result283__ = (_Bool)0;
        come_call_finalizer3(left_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result283__;
    }
    else {
    }
    right_value_440=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_441=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 966, "CVALUE"))));
    __dec_obj214=come_value_441->c_value;
    come_value_441->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_437->c_value,right_value_440->c_value));
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj215=come_value_441->type;
    come_value_441->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_437->type));
    come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_441->type->mHeap=(_Bool)0;
    come_value_441->var=((void*)0);
    add_come_last_code(info,"%s",come_value_441->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_441));
    __result284__ = (_Bool)1;
    come_call_finalizer3(left_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_440,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result284__;
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sNode* __dec_obj216;
void* __right_value478 = (void*)0;
struct sNode* __dec_obj217;
struct sNotEqNode* __result285__;
    ((struct sNodeBase*)(__right_value476=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value476,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj216=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj217=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result285__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value479 = (void*)0;
char* __result286__;
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value479=__builtin_string("sNotEqNode")));
    __right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_442;
_Bool Value_443;
void* __right_value480 = (void*)0;
struct CVALUE* left_value_444;
struct sNode* right_node_445;
_Bool Value_446;
_Bool __result287__;
void* __right_value481 = (void*)0;
struct CVALUE* right_value_447;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct CVALUE* come_value_448;
void* __right_value484 = (void*)0;
char* __dec_obj221;
void* __right_value485 = (void*)0;
struct sType* __dec_obj222;
_Bool __result288__;
    left_node_442=self->mLeft;
    Value_443=node_compile(left_node_442,info);
    if(    !Value_443) {
        return (_Bool)0;
    }
    else {
    }
    left_value_444=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_445=self->mRight;
    Value_446=node_compile(right_node_445,info);
    if(    !Value_446) {
        __result287__ = (_Bool)0;
        come_call_finalizer3(left_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result287__;
    }
    else {
    }
    right_value_447=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1018, "CVALUE"))));
    __dec_obj221=come_value_448->c_value;
    come_value_448->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_444->c_value,right_value_447->c_value));
    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj222=come_value_448->type;
    come_value_448->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_444->type));
    come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_448->type->mHeap=(_Bool)0;
    come_value_448->var=((void*)0);
    add_come_last_code(info,"%s",come_value_448->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_448));
    __result288__ = (_Bool)1;
    come_call_finalizer3(left_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_447,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result288__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sNode* __dec_obj223;
void* __right_value488 = (void*)0;
struct sNode* __dec_obj224;
struct sEq2Node* __result289__;
    ((struct sNodeBase*)(__right_value486=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value486,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj223=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj224=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value489 = (void*)0;
char* __result290__;
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value489=__builtin_string("sEq2Node")));
    __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_449;
_Bool Value_450;
void* __right_value490 = (void*)0;
struct CVALUE* left_value_451;
struct sNode* right_node_452;
_Bool Value_453;
_Bool __result291__;
void* __right_value491 = (void*)0;
struct CVALUE* right_value_454;
struct sType* type_455;
char* fun_name_456;
_Bool calling_fun_457;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct CVALUE* come_value_458;
void* __right_value494 = (void*)0;
char* __dec_obj228;
void* __right_value495 = (void*)0;
struct sType* __dec_obj229;
_Bool __result292__;
memset(&calling_fun_457, 0, sizeof(_Bool));
    left_node_449=self->mLeft;
    Value_450=node_compile(left_node_449,info);
    if(    !Value_450) {
        return (_Bool)0;
    }
    else {
    }
    left_value_451=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_452=self->mRight;
    Value_453=node_compile(right_node_452,info);
    if(    !Value_453) {
        __result291__ = (_Bool)0;
        come_call_finalizer3(left_value_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result291__;
    }
    else {
    }
    right_value_454=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_455=(struct sType*)come_increment_ref_count(left_value_451->type);
    fun_name_456="operator_equals";
    if(    self->mQuote) {
        calling_fun_457=(_Bool)0;
    }
    else {
        calling_fun_457=operator_overload_fun(type_455,fun_name_456,left_value_451,right_value_454,(_Bool)0,info);
    }
    if(    !calling_fun_457) {
        come_value_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1083, "CVALUE"))));
        __dec_obj228=come_value_458->c_value;
        come_value_458->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_451->c_value,right_value_454->c_value));
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj229=come_value_458->type;
        come_value_458->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_451->type));
        come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_458->type->mHeap=(_Bool)0;
        come_value_458->var=((void*)0);
        add_come_last_code(info,"%s",come_value_458->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_458));
        come_call_finalizer3(come_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result292__ = (_Bool)1;
    come_call_finalizer3(left_value_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_455,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* __dec_obj230;
void* __right_value498 = (void*)0;
struct sNode* __dec_obj231;
struct sNotEq2Node* __result293__;
    ((struct sNodeBase*)(__right_value496=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value496,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj230=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj231=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value499 = (void*)0;
char* __result294__;
    __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value499=__builtin_string("sNotEq2Node")));
    __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_459;
_Bool Value_460;
void* __right_value500 = (void*)0;
struct CVALUE* left_value_461;
struct sNode* right_node_462;
_Bool Value_463;
_Bool __result295__;
void* __right_value501 = (void*)0;
struct CVALUE* right_value_464;
struct sType* type_465;
char* fun_name_466;
_Bool calling_fun_467;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct CVALUE* come_value_468;
void* __right_value504 = (void*)0;
char* __dec_obj235;
void* __right_value505 = (void*)0;
struct sType* __dec_obj236;
_Bool __result296__;
memset(&calling_fun_467, 0, sizeof(_Bool));
    left_node_459=self->mLeft;
    Value_460=node_compile(left_node_459,info);
    if(    !Value_460) {
        return (_Bool)0;
    }
    else {
    }
    left_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_462=self->mRight;
    Value_463=node_compile(right_node_462,info);
    if(    !Value_463) {
        __result295__ = (_Bool)0;
        come_call_finalizer3(left_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result295__;
    }
    else {
    }
    right_value_464=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_465=(struct sType*)come_increment_ref_count(left_value_461->type);
    fun_name_466="operator_not_equals";
    if(    self->mQuote) {
        calling_fun_467=(_Bool)0;
    }
    else {
        calling_fun_467=operator_overload_fun(type_465,fun_name_466,left_value_461,right_value_464,(_Bool)0,info);
    }
    if(    !calling_fun_467) {
        come_value_468=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1148, "CVALUE"))));
        __dec_obj235=come_value_468->c_value;
        come_value_468->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_461->c_value,right_value_464->c_value));
        __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj236=come_value_468->type;
        come_value_468->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_461->type));
        come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_468->type->mHeap=(_Bool)0;
        come_value_468->var=((void*)0);
        add_come_last_code(info,"%s",come_value_468->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_468));
        come_call_finalizer3(come_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result296__ = (_Bool)1;
    come_call_finalizer3(left_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sNode* __dec_obj237;
void* __right_value508 = (void*)0;
struct sNode* __dec_obj238;
struct sAndNode* __result297__;
    ((struct sNodeBase*)(__right_value506=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value506,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj237=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj238=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value509 = (void*)0;
char* __result298__;
    __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value509=__builtin_string("sAndNode")));
    __right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_469;
_Bool Value_470;
void* __right_value510 = (void*)0;
struct CVALUE* left_value_471;
struct sNode* right_node_472;
_Bool Value_473;
_Bool __result299__;
void* __right_value511 = (void*)0;
struct CVALUE* right_value_474;
struct sType* type_475;
char* fun_name_476;
_Bool calling_fun_477;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value514 = (void*)0;
char* __dec_obj242;
void* __right_value515 = (void*)0;
struct sType* __dec_obj243;
_Bool __result300__;
memset(&calling_fun_477, 0, sizeof(_Bool));
    left_node_469=self->mLeft;
    Value_470=node_compile(left_node_469,info);
    if(    !Value_470) {
        return (_Bool)0;
    }
    else {
    }
    left_value_471=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_472=self->mRight;
    Value_473=node_compile(right_node_472,info);
    if(    !Value_473) {
        __result299__ = (_Bool)0;
        come_call_finalizer3(left_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result299__;
    }
    else {
    }
    right_value_474=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_475=(struct sType*)come_increment_ref_count(left_value_471->type);
    fun_name_476="operator_and";
    if(    self->mQuote) {
        calling_fun_477=(_Bool)0;
    }
    else {
        calling_fun_477=operator_overload_fun(type_475,fun_name_476,left_value_471,right_value_474,(_Bool)0,info);
    }
    if(    !calling_fun_477) {
        come_value_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1214, "CVALUE"))));
        __dec_obj242=come_value_478->c_value;
        come_value_478->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_471->c_value,right_value_474->c_value));
        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj243=come_value_478->type;
        come_value_478->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_471->type));
        come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_478->type->mHeap=(_Bool)0;
        come_value_478->var=((void*)0);
        add_come_last_code(info,"%s",come_value_478->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_478));
        come_call_finalizer3(come_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result300__ = (_Bool)1;
    come_call_finalizer3(left_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_474,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result300__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sNode* __dec_obj244;
void* __right_value518 = (void*)0;
struct sNode* __dec_obj245;
struct sXOrNode* __result301__;
    ((struct sNodeBase*)(__right_value516=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value516,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj244=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj245=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result301__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value519 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value519=__builtin_string("sXOrNode")));
    __right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_479;
_Bool Value_480;
void* __right_value520 = (void*)0;
struct CVALUE* left_value_481;
struct sNode* right_node_482;
_Bool Value_483;
_Bool __result303__;
void* __right_value521 = (void*)0;
struct CVALUE* right_value_484;
struct sType* type_485;
char* fun_name_486;
_Bool calling_fun_487;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct CVALUE* come_value_488;
void* __right_value524 = (void*)0;
char* __dec_obj249;
void* __right_value525 = (void*)0;
struct sType* __dec_obj250;
_Bool __result304__;
memset(&calling_fun_487, 0, sizeof(_Bool));
    left_node_479=self->mLeft;
    Value_480=node_compile(left_node_479,info);
    if(    !Value_480) {
        return (_Bool)0;
    }
    else {
    }
    left_value_481=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_482=self->mRight;
    Value_483=node_compile(right_node_482,info);
    if(    !Value_483) {
        __result303__ = (_Bool)0;
        come_call_finalizer3(left_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result303__;
    }
    else {
    }
    right_value_484=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_485=(struct sType*)come_increment_ref_count(left_value_481->type);
    fun_name_486="operator_xor";
    if(    self->mQuote) {
        calling_fun_487=(_Bool)0;
    }
    else {
        calling_fun_487=operator_overload_fun(type_485,fun_name_486,left_value_481,right_value_484,(_Bool)0,info);
    }
    if(    !calling_fun_487) {
        come_value_488=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1279, "CVALUE"))));
        __dec_obj249=come_value_488->c_value;
        come_value_488->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_481->c_value,right_value_484->c_value));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj250=come_value_488->type;
        come_value_488->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_481->type));
        come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_488->type->mHeap=(_Bool)0;
        come_value_488->var=((void*)0);
        add_come_last_code(info,"%s",come_value_488->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_488));
        come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result304__ = (_Bool)1;
    come_call_finalizer3(left_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result304__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sNode* __dec_obj251;
void* __right_value528 = (void*)0;
struct sNode* __dec_obj252;
struct sOrNode* __result305__;
    ((struct sNodeBase*)(__right_value526=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value526,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj251=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj252=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value529 = (void*)0;
char* __result306__;
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value529=__builtin_string("sOrNode")));
    __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_489;
_Bool Value_490;
void* __right_value530 = (void*)0;
struct CVALUE* left_value_491;
struct sNode* right_node_492;
_Bool Value_493;
_Bool __result307__;
void* __right_value531 = (void*)0;
struct CVALUE* right_value_494;
struct sType* type_495;
char* fun_name_496;
_Bool calling_fun_497;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct CVALUE* come_value_498;
void* __right_value534 = (void*)0;
char* __dec_obj256;
void* __right_value535 = (void*)0;
struct sType* __dec_obj257;
_Bool __result308__;
memset(&calling_fun_497, 0, sizeof(_Bool));
    left_node_489=self->mLeft;
    Value_490=node_compile(left_node_489,info);
    if(    !Value_490) {
        return (_Bool)0;
    }
    else {
    }
    left_value_491=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_492=self->mRight;
    Value_493=node_compile(right_node_492,info);
    if(    !Value_493) {
        __result307__ = (_Bool)0;
        come_call_finalizer3(left_value_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result307__;
    }
    else {
    }
    right_value_494=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_495=(struct sType*)come_increment_ref_count(left_value_491->type);
    fun_name_496="operator_or";
    if(    self->mQuote) {
        calling_fun_497=(_Bool)0;
    }
    else {
        calling_fun_497=operator_overload_fun(type_495,fun_name_496,left_value_491,right_value_494,(_Bool)0,info);
    }
    if(    !calling_fun_497) {
        come_value_498=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1345, "CVALUE"))));
        __dec_obj256=come_value_498->c_value;
        come_value_498->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_491->c_value,right_value_494->c_value));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj257=come_value_498->type;
        come_value_498->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_491->type));
        come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_498->type->mHeap=(_Bool)0;
        come_value_498->var=((void*)0);
        add_come_last_code(info,"%s",come_value_498->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_498));
        come_call_finalizer3(come_value_498,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result308__ = (_Bool)1;
    come_call_finalizer3(left_value_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_494,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result308__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sNode* __dec_obj258;
void* __right_value538 = (void*)0;
struct sNode* __dec_obj259;
struct sAndAndNode* __result309__;
    ((struct sNodeBase*)(__right_value536=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value536,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj258=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj259=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result309__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value539 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value539=__builtin_string("sAndAndNode")));
    __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_499;
_Bool Value_500;
void* __right_value540 = (void*)0;
struct CVALUE* left_value_501;
struct sNode* right_node_502;
_Bool Value_503;
_Bool __result311__;
void* __right_value541 = (void*)0;
struct CVALUE* right_value_504;
struct sType* type_505;
char* fun_name_506;
_Bool calling_fun_507;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct CVALUE* come_value_508;
void* __right_value544 = (void*)0;
char* __dec_obj263;
void* __right_value545 = (void*)0;
struct sType* __dec_obj264;
_Bool __result312__;
memset(&calling_fun_507, 0, sizeof(_Bool));
    left_node_499=self->mLeft;
    Value_500=node_compile(left_node_499,info);
    if(    !Value_500) {
        return (_Bool)0;
    }
    else {
    }
    left_value_501=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_502=self->mRight;
    Value_503=node_compile(right_node_502,info);
    if(    !Value_503) {
        __result311__ = (_Bool)0;
        come_call_finalizer3(left_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result311__;
    }
    else {
    }
    right_value_504=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_505=(struct sType*)come_increment_ref_count(left_value_501->type);
    fun_name_506="operator_andand";
    if(    self->mQuote) {
        calling_fun_507=(_Bool)0;
    }
    else {
        calling_fun_507=operator_overload_fun(type_505,fun_name_506,left_value_501,right_value_504,(_Bool)0,info);
    }
    if(    !calling_fun_507) {
        come_value_508=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1411, "CVALUE"))));
        __dec_obj263=come_value_508->c_value;
        come_value_508->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_501->c_value,right_value_504->c_value));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj264=come_value_508->type;
        come_value_508->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_501->type));
        come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_508->type->mHeap=(_Bool)0;
        come_value_508->var=left_value_501->var;
        add_come_last_code(info,"%s",come_value_508->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_508));
        come_call_finalizer3(come_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result312__ = (_Bool)1;
    come_call_finalizer3(left_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result312__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sNode* __dec_obj265;
void* __right_value548 = (void*)0;
struct sNode* __dec_obj266;
struct sOrOrNode* __result313__;
    ((struct sNodeBase*)(__right_value546=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value546,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj265=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj266=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result313__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value549 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value549=__builtin_string("sOrOrNode")));
    __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_509;
_Bool Value_510;
void* __right_value550 = (void*)0;
struct CVALUE* left_value_511;
struct sNode* right_node_512;
_Bool Value_513;
_Bool __result315__;
void* __right_value551 = (void*)0;
struct CVALUE* right_value_514;
struct sType* type_515;
char* fun_name_516;
_Bool calling_fun_517;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct CVALUE* come_value_518;
void* __right_value554 = (void*)0;
char* __dec_obj270;
void* __right_value555 = (void*)0;
struct sType* __dec_obj271;
_Bool __result316__;
memset(&calling_fun_517, 0, sizeof(_Bool));
    left_node_509=self->mLeft;
    Value_510=node_compile(left_node_509,info);
    if(    !Value_510) {
        return (_Bool)0;
    }
    else {
    }
    left_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_512=self->mRight;
    Value_513=node_compile(right_node_512,info);
    if(    !Value_513) {
        __result315__ = (_Bool)0;
        come_call_finalizer3(left_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result315__;
    }
    else {
    }
    right_value_514=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_515=(struct sType*)come_increment_ref_count(left_value_511->type);
    fun_name_516="operator_oror";
    if(    self->mQuote) {
        calling_fun_517=(_Bool)0;
    }
    else {
        calling_fun_517=operator_overload_fun(type_515,fun_name_516,left_value_511,right_value_514,(_Bool)0,info);
    }
    if(    !calling_fun_517) {
        come_value_518=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1476, "CVALUE"))));
        __dec_obj270=come_value_518->c_value;
        come_value_518->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_511->c_value,right_value_514->c_value));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj271=come_value_518->type;
        come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_511->type));
        come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_518->type->mHeap=(_Bool)0;
        come_value_518->var=left_value_511->var;
        add_come_last_code(info,"%s",come_value_518->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_518));
        come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result316__ = (_Bool)1;
    come_call_finalizer3(left_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_514,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result316__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sNode* __dec_obj272;
void* __right_value558 = (void*)0;
struct sNode* __dec_obj273;
struct sCommaNode* __result317__;
    ((struct sNodeBase*)(__right_value556=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value556,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj272=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj273=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__=(void*)0;
void* __right_value559 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value559=__builtin_string("sCommaNode")));
    __right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_519;
_Bool Value_520;
void* __right_value560 = (void*)0;
struct CVALUE* left_value_521;
struct sNode* right_node_522;
_Bool Value_523;
_Bool __result319__;
void* __right_value561 = (void*)0;
struct CVALUE* right_value_524;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct CVALUE* come_value_525;
void* __right_value564 = (void*)0;
char* __dec_obj277;
void* __right_value565 = (void*)0;
struct sType* __dec_obj278;
_Bool __result320__;
    left_node_519=self->mLeft;
    Value_520=node_compile(left_node_519,info);
    if(    !Value_520) {
        return (_Bool)0;
    }
    else {
    }
    left_value_521=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_522=self->mRight;
    Value_523=node_compile(right_node_522,info);
    if(    !Value_523) {
        __result319__ = (_Bool)0;
        come_call_finalizer3(left_value_521,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result319__;
    }
    else {
    }
    right_value_524=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_525=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1528, "CVALUE"))));
    __dec_obj277=come_value_525->c_value;
    come_value_525->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_521->c_value,right_value_524->c_value));
    __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj278=come_value_525->type;
    come_value_525->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_521->type));
    come_call_finalizer3(__dec_obj278,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_525->var=((void*)0);
    add_come_last_code(info,"%s",come_value_525->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_525));
    __result320__ = (_Bool)1;
    come_call_finalizer3(left_value_521,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_524,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* __dec_obj279;
void* __right_value568 = (void*)0;
struct sNode* __dec_obj280;
void* __right_value569 = (void*)0;
struct sNode* __dec_obj281;
struct sConditionalNode* __result321__;
    ((struct sNodeBase*)(__right_value566=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value566,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj279=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1));
    if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj280=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2));
    if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj281=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3));
    if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result321__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
void* __right_value570 = (void*)0;
char* __result322__;
    __result322__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value570=__builtin_string("sConditionalNode")));
    __right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_526;
struct sNode* value1_527;
_Bool Value_528;
void* __right_value571 = (void*)0;
struct CVALUE* value1_value_529;
struct sNode* value2_530;
_Bool Value_531;
_Bool __result323__;
void* __right_value572 = (void*)0;
struct CVALUE* value2_value_532;
struct sNode* value3_533;
_Bool Value_534;
_Bool __result324__;
void* __right_value573 = (void*)0;
struct CVALUE* value3_value_535;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct CVALUE* come_value_536;
void* __right_value576 = (void*)0;
char* __dec_obj286;
void* __right_value577 = (void*)0;
struct sType* __dec_obj287;
_Bool __result325__;
    in_conditional_operator_526=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_527=self->mValue1;
    Value_528=node_compile(value1_527,info);
    if(    !Value_528) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value2_530=self->mValue2;
    Value_531=node_compile(value2_530,info);
    if(    !Value_531) {
        __result323__ = (_Bool)0;
        come_call_finalizer3(value1_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result323__;
    }
    else {
    }
    value2_value_532=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value3_533=self->mValue3;
    Value_534=node_compile(value3_533,info);
    if(    !Value_534) {
        __result324__ = (_Bool)0;
        come_call_finalizer3(value1_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result324__;
    }
    else {
    }
    value3_value_535=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_536=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1591, "CVALUE"))));
    __dec_obj286=come_value_536->c_value;
    come_value_536->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_529->c_value,value2_value_532->c_value,value3_value_535->c_value));
    __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj287=come_value_536->type;
    come_value_536->type=(struct sType*)come_increment_ref_count(sType_clone(value2_value_532->type));
    come_call_finalizer3(__dec_obj287,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_536->var=((void*)0);
    add_come_last_code(info,"%s",come_value_536->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_536));
    info->in_conditional_operator=in_conditional_operator_526;
    __result325__ = (_Bool)1;
    come_call_finalizer3(value1_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result325__;
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value585 = (void*)0;
struct sNode* __result328__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1609, "struct sNode");
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value579=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1609, "sConditionalNode")),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value585=_inf_value2));
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value579,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value585) { __right_value585 = come_decrement_ref_count2(__right_value585, ((struct sNode*)__right_value585)->finalize, ((struct sNode*)__right_value585)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value586 = (void*)0;
struct sNode* node_538;
int sline_real_539;
void* __right_value587 = (void*)0;
struct sNode* right_540;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value594 = (void*)0;
struct sNode* __result331__;
int sline_real_542;
void* __right_value595 = (void*)0;
struct sNode* right_543;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value602 = (void*)0;
struct sNode* __result334__;
int sline_real_545;
void* __right_value603 = (void*)0;
struct sNode* right_546;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value610 = (void*)0;
struct sNode* __result337__;
int sline_real_548;
void* __right_value611 = (void*)0;
struct sNode* right_549;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value618 = (void*)0;
struct sNode* __result340__;
int sline_real_551;
void* __right_value619 = (void*)0;
struct sNode* right_552;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value626 = (void*)0;
struct sNode* __result343__;
int sline_real_554;
void* __right_value627 = (void*)0;
struct sNode* right_555;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value634 = (void*)0;
struct sNode* __result346__;
struct sNode* __result347__;
    node_538=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_538->terminated(node_538->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real_539=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_540=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_539;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1629, "struct sNode");
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value589=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1629, "sMultNode")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_540),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result331__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value594=_inf_value3));
            if(right_540) { right_540 = come_decrement_ref_count2(right_540, ((struct sNode*)right_540)->finalize, ((struct sNode*)right_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_538) { node_538 = come_decrement_ref_count2(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value589,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value594) { __right_value594 = come_decrement_ref_count2(__right_value594, ((struct sNode*)__right_value594)->finalize, ((struct sNode*)__right_value594)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result331__;
            if(right_540) { right_540 = come_decrement_ref_count2(right_540, ((struct sNode*)right_540)->finalize, ((struct sNode*)right_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_542=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_543=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_542;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1640, "struct sNode");
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value597=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1640, "sDivNode")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_543),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __result334__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value602=_inf_value4));
            if(right_543) { right_543 = come_decrement_ref_count2(right_543, ((struct sNode*)right_543)->finalize, ((struct sNode*)right_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_538) { node_538 = come_decrement_ref_count2(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value597,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value602) { __right_value602 = come_decrement_ref_count2(__right_value602, ((struct sNode*)__right_value602)->finalize, ((struct sNode*)__right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result334__;
            if(right_543) { right_543 = come_decrement_ref_count2(right_543, ((struct sNode*)right_543)->finalize, ((struct sNode*)right_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_545=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_546=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_545;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1651, "struct sNode");
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value605=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1651, "sModNode")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_546),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __result337__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value610=_inf_value5));
            if(right_546) { right_546 = come_decrement_ref_count2(right_546, ((struct sNode*)right_546)->finalize, ((struct sNode*)right_546)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_538) { node_538 = come_decrement_ref_count2(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value605,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value610) { __right_value610 = come_decrement_ref_count2(__right_value610, ((struct sNode*)__right_value610)->finalize, ((struct sNode*)__right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result337__;
            if(right_546) { right_546 = come_decrement_ref_count2(right_546, ((struct sNode*)right_546)->finalize, ((struct sNode*)right_546)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_538->terminated(node_538->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_548=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_549=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_548;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1662, "struct sNode");
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value613=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1662, "sMultNode")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_549),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value618=_inf_value6));
            if(right_549) { right_549 = come_decrement_ref_count2(right_549, ((struct sNode*)right_549)->finalize, ((struct sNode*)right_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_538) { node_538 = come_decrement_ref_count2(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value613,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value618) { __right_value618 = come_decrement_ref_count2(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result340__;
            if(right_549) { right_549 = come_decrement_ref_count2(right_549, ((struct sNode*)right_549)->finalize, ((struct sNode*)right_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_551=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_552=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_551;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1673, "struct sNode");
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value621=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1673, "sDivNode")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_552),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __result343__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value626=_inf_value7));
            if(right_552) { right_552 = come_decrement_ref_count2(right_552, ((struct sNode*)right_552)->finalize, ((struct sNode*)right_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_538) { node_538 = come_decrement_ref_count2(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value621,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value626) { __right_value626 = come_decrement_ref_count2(__right_value626, ((struct sNode*)__right_value626)->finalize, ((struct sNode*)__right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result343__;
            if(right_552) { right_552 = come_decrement_ref_count2(right_552, ((struct sNode*)right_552)->finalize, ((struct sNode*)right_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_554=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_555=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_554;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1684, "struct sNode");
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value629=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1684, "sModNode")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_555),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __result346__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value634=_inf_value8));
            if(right_555) { right_555 = come_decrement_ref_count2(right_555, ((struct sNode*)right_555)->finalize, ((struct sNode*)right_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_538) { node_538 = come_decrement_ref_count2(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value629,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value634) { __right_value634 = come_decrement_ref_count2(__right_value634, ((struct sNode*)__right_value634)->finalize, ((struct sNode*)__right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result346__;
            if(right_555) { right_555 = come_decrement_ref_count2(right_555, ((struct sNode*)right_555)->finalize, ((struct sNode*)right_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result347__ = gComeFunResultObject = __result_obj__ = node_538;
    if(node_538) { node_538 = come_decrement_ref_count2(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static void sMultNode_finalize(struct sMultNode* self){
char* __dec_obj314;
struct sNode* __dec_obj315;
struct sNode* __dec_obj316;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj314=self->sname;
            __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj315=self->mLeft;
            if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj316=self->mRight;
            if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__=(void*)0;
struct sMultNode* __result338__;
void* __right_value614 = (void*)0;
struct sMultNode* result_550;
void* __right_value615 = (void*)0;
char* __dec_obj317;
void* __right_value616 = (void*)0;
struct sNode* __dec_obj318;
void* __right_value617 = (void*)0;
struct sNode* __dec_obj319;
struct sMultNode* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_550=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"));
    if(    self!=((void*)0)) {
        result_550->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj317=result_550->sname;
        result_550->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_550->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_550->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj318=result_550->mLeft;
        result_550->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj319=result_550->mRight;
        result_550->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_550;
    come_call_finalizer3(result_550,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void sDivNode_finalize(struct sDivNode* self){
char* __dec_obj320;
struct sNode* __dec_obj321;
struct sNode* __dec_obj322;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj320=self->sname;
            __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj321=self->mLeft;
            if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj322=self->mRight;
            if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__=(void*)0;
struct sDivNode* __result341__;
void* __right_value622 = (void*)0;
struct sDivNode* result_553;
void* __right_value623 = (void*)0;
char* __dec_obj323;
void* __right_value624 = (void*)0;
struct sNode* __dec_obj324;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj325;
struct sDivNode* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_553=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"));
    if(    self!=((void*)0)) {
        result_553->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj323=result_553->sname;
        result_553->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_553->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_553->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj324=result_553->mLeft;
        result_553->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj325=result_553->mRight;
        result_553->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_553;
    come_call_finalizer3(result_553,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static void sModNode_finalize(struct sModNode* self){
char* __dec_obj326;
struct sNode* __dec_obj327;
struct sNode* __dec_obj328;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj326=self->sname;
            __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj327=self->mLeft;
            if(__dec_obj327) { __dec_obj327 = come_decrement_ref_count2(__dec_obj327, ((struct sNode*)__dec_obj327)->finalize, ((struct sNode*)__dec_obj327)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj328=self->mRight;
            if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__=(void*)0;
struct sModNode* __result344__;
void* __right_value630 = (void*)0;
struct sModNode* result_556;
void* __right_value631 = (void*)0;
char* __dec_obj329;
void* __right_value632 = (void*)0;
struct sNode* __dec_obj330;
void* __right_value633 = (void*)0;
struct sNode* __dec_obj331;
struct sModNode* __result345__;
    if(    self==(void*)0) {
        __result344__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    result_556=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"));
    if(    self!=((void*)0)) {
        result_556->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj329=result_556->sname;
        result_556->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_556->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_556->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj330=result_556->mLeft;
        result_556->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj330) { __dec_obj330 = come_decrement_ref_count2(__dec_obj330, ((struct sNode*)__dec_obj330)->finalize, ((struct sNode*)__dec_obj330)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj331=result_556->mRight;
        result_556->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_556;
    come_call_finalizer3(result_556,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value635 = (void*)0;
struct sNode* node_557;
int sline_real_558;
void* __right_value636 = (void*)0;
struct sNode* right_559;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value643 = (void*)0;
struct sNode* __result350__;
int sline_real_561;
void* __right_value644 = (void*)0;
struct sNode* right_562;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value651 = (void*)0;
struct sNode* __result353__;
int sline_real_564;
void* __right_value652 = (void*)0;
struct sNode* right_565;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value659 = (void*)0;
struct sNode* __result356__;
int sline_real_567;
void* __right_value660 = (void*)0;
struct sNode* right_568;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value667 = (void*)0;
struct sNode* __result359__;
struct sNode* __result360__;
    node_557=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real_558=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_559=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_558;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1713, "struct sNode");
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value638=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1713, "sAddNode")),(struct sNode*)come_increment_ref_count(node_557),(struct sNode*)come_increment_ref_count(right_559),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result350__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value643=_inf_value9));
            if(right_559) { right_559 = come_decrement_ref_count2(right_559, ((struct sNode*)right_559)->finalize, ((struct sNode*)right_559)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_557) { node_557 = come_decrement_ref_count2(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value638,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value643) { __right_value643 = come_decrement_ref_count2(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result350__;
            if(right_559) { right_559 = come_decrement_ref_count2(right_559, ((struct sNode*)right_559)->finalize, ((struct sNode*)right_559)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_561=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_562=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_561;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1725, "struct sNode");
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value646=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1725, "sSubNode")),(struct sNode*)come_increment_ref_count(node_557),(struct sNode*)come_increment_ref_count(right_562),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __result353__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value651=_inf_value10));
            if(right_562) { right_562 = come_decrement_ref_count2(right_562, ((struct sNode*)right_562)->finalize, ((struct sNode*)right_562)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_557) { node_557 = come_decrement_ref_count2(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value646,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value651) { __right_value651 = come_decrement_ref_count2(__right_value651, ((struct sNode*)__right_value651)->finalize, ((struct sNode*)__right_value651)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result353__;
            if(right_562) { right_562 = come_decrement_ref_count2(right_562, ((struct sNode*)right_562)->finalize, ((struct sNode*)right_562)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_564=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_565=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_564;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1737, "struct sNode");
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value654=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1737, "sAddNode")),(struct sNode*)come_increment_ref_count(node_557),(struct sNode*)come_increment_ref_count(right_565),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __result356__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value659=_inf_value11));
            if(right_565) { right_565 = come_decrement_ref_count2(right_565, ((struct sNode*)right_565)->finalize, ((struct sNode*)right_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_557) { node_557 = come_decrement_ref_count2(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value654,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value659) { __right_value659 = come_decrement_ref_count2(__right_value659, ((struct sNode*)__right_value659)->finalize, ((struct sNode*)__right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result356__;
            if(right_565) { right_565 = come_decrement_ref_count2(right_565, ((struct sNode*)right_565)->finalize, ((struct sNode*)right_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_567=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_568=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_567;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1749, "struct sNode");
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value662=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1749, "sSubNode")),(struct sNode*)come_increment_ref_count(node_557),(struct sNode*)come_increment_ref_count(right_568),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __result359__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value667=_inf_value12));
            if(right_568) { right_568 = come_decrement_ref_count2(right_568, ((struct sNode*)right_568)->finalize, ((struct sNode*)right_568)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_557) { node_557 = come_decrement_ref_count2(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value662,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value667) { __right_value667 = come_decrement_ref_count2(__right_value667, ((struct sNode*)__right_value667)->finalize, ((struct sNode*)__right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result359__;
            if(right_568) { right_568 = come_decrement_ref_count2(right_568, ((struct sNode*)right_568)->finalize, ((struct sNode*)right_568)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result360__ = gComeFunResultObject = __result_obj__ = node_557;
    if(node_557) { node_557 = come_decrement_ref_count2(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void sAddNode_finalize(struct sAddNode* self){
char* __dec_obj344;
struct sNode* __dec_obj345;
struct sNode* __dec_obj346;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj344=self->sname;
            __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj345=self->mLeft;
            if(__dec_obj345) { __dec_obj345 = come_decrement_ref_count2(__dec_obj345, ((struct sNode*)__dec_obj345)->finalize, ((struct sNode*)__dec_obj345)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj346=self->mRight;
            if(__dec_obj346) { __dec_obj346 = come_decrement_ref_count2(__dec_obj346, ((struct sNode*)__dec_obj346)->finalize, ((struct sNode*)__dec_obj346)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__=(void*)0;
struct sAddNode* __result354__;
void* __right_value655 = (void*)0;
struct sAddNode* result_566;
void* __right_value656 = (void*)0;
char* __dec_obj347;
void* __right_value657 = (void*)0;
struct sNode* __dec_obj348;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj349;
struct sAddNode* __result355__;
    if(    self==(void*)0) {
        __result354__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    result_566=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"));
    if(    self!=((void*)0)) {
        result_566->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj347=result_566->sname;
        result_566->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_566->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj348=result_566->mLeft;
        result_566->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj348) { __dec_obj348 = come_decrement_ref_count2(__dec_obj348, ((struct sNode*)__dec_obj348)->finalize, ((struct sNode*)__dec_obj348)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj349=result_566->mRight;
        result_566->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj349) { __dec_obj349 = come_decrement_ref_count2(__dec_obj349, ((struct sNode*)__dec_obj349)->finalize, ((struct sNode*)__dec_obj349)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_566->mQuote=self->mQuote;
    }
    __result355__ = gComeFunResultObject = __result_obj__ = result_566;
    come_call_finalizer3(result_566,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void sSubNode_finalize(struct sSubNode* self){
char* __dec_obj350;
struct sNode* __dec_obj351;
struct sNode* __dec_obj352;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj350=self->sname;
            __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj351=self->mLeft;
            if(__dec_obj351) { __dec_obj351 = come_decrement_ref_count2(__dec_obj351, ((struct sNode*)__dec_obj351)->finalize, ((struct sNode*)__dec_obj351)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj352=self->mRight;
            if(__dec_obj352) { __dec_obj352 = come_decrement_ref_count2(__dec_obj352, ((struct sNode*)__dec_obj352)->finalize, ((struct sNode*)__dec_obj352)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__=(void*)0;
struct sSubNode* __result357__;
void* __right_value663 = (void*)0;
struct sSubNode* result_569;
void* __right_value664 = (void*)0;
char* __dec_obj353;
void* __right_value665 = (void*)0;
struct sNode* __dec_obj354;
void* __right_value666 = (void*)0;
struct sNode* __dec_obj355;
struct sSubNode* __result358__;
    if(    self==(void*)0) {
        __result357__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    result_569=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"));
    if(    self!=((void*)0)) {
        result_569->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj353=result_569->sname;
        result_569->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_569->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj354=result_569->mLeft;
        result_569->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj354) { __dec_obj354 = come_decrement_ref_count2(__dec_obj354, ((struct sNode*)__dec_obj354)->finalize, ((struct sNode*)__dec_obj354)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj355=result_569->mRight;
        result_569->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj355) { __dec_obj355 = come_decrement_ref_count2(__dec_obj355, ((struct sNode*)__dec_obj355)->finalize, ((struct sNode*)__dec_obj355)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_569->mQuote=self->mQuote;
    }
    __result358__ = gComeFunResultObject = __result_obj__ = result_569;
    come_call_finalizer3(result_569,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value668 = (void*)0;
struct sNode* node_570;
int sline_real_571;
void* __right_value669 = (void*)0;
struct sNode* right_572;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value676 = (void*)0;
struct sNode* __result363__;
int sline_real_574;
void* __right_value677 = (void*)0;
struct sNode* right_575;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value684 = (void*)0;
struct sNode* __result366__;
int sline_real_577;
void* __right_value685 = (void*)0;
struct sNode* right_578;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value692 = (void*)0;
struct sNode* __result369__;
int sline_real_580;
void* __right_value693 = (void*)0;
struct sNode* right_581;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value700 = (void*)0;
struct sNode* __result372__;
struct sNode* __result373__;
    parse_sharp_v5(info);
    node_570=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_571=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_572=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_571;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1779, "struct sNode");
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value671=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1779, "sLShiftNode")),(struct sNode*)come_increment_ref_count(node_570),(struct sNode*)come_increment_ref_count(right_572),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result363__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value676=_inf_value13));
            if(right_572) { right_572 = come_decrement_ref_count2(right_572, ((struct sNode*)right_572)->finalize, ((struct sNode*)right_572)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_570) { node_570 = come_decrement_ref_count2(node_570, ((struct sNode*)node_570)->finalize, ((struct sNode*)node_570)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value671,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value676) { __right_value676 = come_decrement_ref_count2(__right_value676, ((struct sNode*)__right_value676)->finalize, ((struct sNode*)__right_value676)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result363__;
            if(right_572) { right_572 = come_decrement_ref_count2(right_572, ((struct sNode*)right_572)->finalize, ((struct sNode*)right_572)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_574=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_575=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_574;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1790, "struct sNode");
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value679=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1790, "sRShiftNode")),(struct sNode*)come_increment_ref_count(node_570),(struct sNode*)come_increment_ref_count(right_575),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __result366__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value684=_inf_value14));
            if(right_575) { right_575 = come_decrement_ref_count2(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_570) { node_570 = come_decrement_ref_count2(node_570, ((struct sNode*)node_570)->finalize, ((struct sNode*)node_570)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value679,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value684) { __right_value684 = come_decrement_ref_count2(__right_value684, ((struct sNode*)__right_value684)->finalize, ((struct sNode*)__right_value684)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result366__;
            if(right_575) { right_575 = come_decrement_ref_count2(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_577=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_578=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_577;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1801, "struct sNode");
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value687=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1801, "sLShiftNode")),(struct sNode*)come_increment_ref_count(node_570),(struct sNode*)come_increment_ref_count(right_578),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __result369__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value692=_inf_value15));
            if(right_578) { right_578 = come_decrement_ref_count2(right_578, ((struct sNode*)right_578)->finalize, ((struct sNode*)right_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_570) { node_570 = come_decrement_ref_count2(node_570, ((struct sNode*)node_570)->finalize, ((struct sNode*)node_570)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value687,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value692) { __right_value692 = come_decrement_ref_count2(__right_value692, ((struct sNode*)__right_value692)->finalize, ((struct sNode*)__right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result369__;
            if(right_578) { right_578 = come_decrement_ref_count2(right_578, ((struct sNode*)right_578)->finalize, ((struct sNode*)right_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_580=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_581=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_580;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1812, "struct sNode");
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value695=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1812, "sRShiftNode")),(struct sNode*)come_increment_ref_count(node_570),(struct sNode*)come_increment_ref_count(right_581),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __result372__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value700=_inf_value16));
            if(right_581) { right_581 = come_decrement_ref_count2(right_581, ((struct sNode*)right_581)->finalize, ((struct sNode*)right_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_570) { node_570 = come_decrement_ref_count2(node_570, ((struct sNode*)node_570)->finalize, ((struct sNode*)node_570)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value695,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value700) { __right_value700 = come_decrement_ref_count2(__right_value700, ((struct sNode*)__right_value700)->finalize, ((struct sNode*)__right_value700)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result372__;
            if(right_581) { right_581 = come_decrement_ref_count2(right_581, ((struct sNode*)right_581)->finalize, ((struct sNode*)right_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result373__ = gComeFunResultObject = __result_obj__ = node_570;
    if(node_570) { node_570 = come_decrement_ref_count2(node_570, ((struct sNode*)node_570)->finalize, ((struct sNode*)node_570)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
char* __dec_obj368;
struct sNode* __dec_obj369;
struct sNode* __dec_obj370;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj368=self->sname;
            __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj369=self->mLeft;
            if(__dec_obj369) { __dec_obj369 = come_decrement_ref_count2(__dec_obj369, ((struct sNode*)__dec_obj369)->finalize, ((struct sNode*)__dec_obj369)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj370=self->mRight;
            if(__dec_obj370) { __dec_obj370 = come_decrement_ref_count2(__dec_obj370, ((struct sNode*)__dec_obj370)->finalize, ((struct sNode*)__dec_obj370)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
struct sLShiftNode* __result367__;
void* __right_value688 = (void*)0;
struct sLShiftNode* result_579;
void* __right_value689 = (void*)0;
char* __dec_obj371;
void* __right_value690 = (void*)0;
struct sNode* __dec_obj372;
void* __right_value691 = (void*)0;
struct sNode* __dec_obj373;
struct sLShiftNode* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_579=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"));
    if(    self!=((void*)0)) {
        result_579->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj371=result_579->sname;
        result_579->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_579->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_579->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj372=result_579->mLeft;
        result_579->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj372) { __dec_obj372 = come_decrement_ref_count2(__dec_obj372, ((struct sNode*)__dec_obj372)->finalize, ((struct sNode*)__dec_obj372)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj373=result_579->mRight;
        result_579->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj373) { __dec_obj373 = come_decrement_ref_count2(__dec_obj373, ((struct sNode*)__dec_obj373)->finalize, ((struct sNode*)__dec_obj373)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_579;
    come_call_finalizer3(result_579,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
char* __dec_obj374;
struct sNode* __dec_obj375;
struct sNode* __dec_obj376;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj374=self->sname;
            __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj375=self->mLeft;
            if(__dec_obj375) { __dec_obj375 = come_decrement_ref_count2(__dec_obj375, ((struct sNode*)__dec_obj375)->finalize, ((struct sNode*)__dec_obj375)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj376=self->mRight;
            if(__dec_obj376) { __dec_obj376 = come_decrement_ref_count2(__dec_obj376, ((struct sNode*)__dec_obj376)->finalize, ((struct sNode*)__dec_obj376)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
struct sRShiftNode* __result370__;
void* __right_value696 = (void*)0;
struct sRShiftNode* result_582;
void* __right_value697 = (void*)0;
char* __dec_obj377;
void* __right_value698 = (void*)0;
struct sNode* __dec_obj378;
void* __right_value699 = (void*)0;
struct sNode* __dec_obj379;
struct sRShiftNode* __result371__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_582=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"));
    if(    self!=((void*)0)) {
        result_582->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj377=result_582->sname;
        result_582->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_582->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_582->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj378=result_582->mLeft;
        result_582->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj378) { __dec_obj378 = come_decrement_ref_count2(__dec_obj378, ((struct sNode*)__dec_obj378)->finalize, ((struct sNode*)__dec_obj378)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj379=result_582->mRight;
        result_582->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj379) { __dec_obj379 = come_decrement_ref_count2(__dec_obj379, ((struct sNode*)__dec_obj379)->finalize, ((struct sNode*)__dec_obj379)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_582;
    come_call_finalizer3(result_582,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value701 = (void*)0;
struct sNode* node_583;
int sline_real_584;
void* __right_value702 = (void*)0;
struct sNode* right_585;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value709 = (void*)0;
struct sNode* __result376__;
int sline_real_587;
void* __right_value710 = (void*)0;
struct sNode* right_588;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value717 = (void*)0;
struct sNode* __result379__;
int sline_real_590;
void* __right_value718 = (void*)0;
struct sNode* right_591;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value725 = (void*)0;
struct sNode* __result382__;
int sline_real_593;
void* __right_value726 = (void*)0;
struct sNode* right_594;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value733 = (void*)0;
struct sNode* __result385__;
int sline_real_596;
void* __right_value734 = (void*)0;
struct sNode* right_597;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value741 = (void*)0;
struct sNode* __result388__;
int sline_real_599;
void* __right_value742 = (void*)0;
struct sNode* right_600;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value749 = (void*)0;
struct sNode* __result391__;
int sline_real_602;
void* __right_value750 = (void*)0;
struct sNode* right_603;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value757 = (void*)0;
struct sNode* __result394__;
int sline_real_605;
void* __right_value758 = (void*)0;
struct sNode* right_606;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value765 = (void*)0;
struct sNode* __result397__;
struct sNode* __result398__;
    parse_sharp_v5(info);
    node_583=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_584=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_585=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_584;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1842, "struct sNode");
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value704=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1842, "sGtEqNode")),(struct sNode*)come_increment_ref_count(node_583),(struct sNode*)come_increment_ref_count(right_585),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value709=_inf_value17));
            if(right_585) { right_585 = come_decrement_ref_count2(right_585, ((struct sNode*)right_585)->finalize, ((struct sNode*)right_585)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value704,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value709) { __right_value709 = come_decrement_ref_count2(__right_value709, ((struct sNode*)__right_value709)->finalize, ((struct sNode*)__right_value709)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result376__;
            if(right_585) { right_585 = come_decrement_ref_count2(right_585, ((struct sNode*)right_585)->finalize, ((struct sNode*)right_585)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_587=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_588=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_587;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1853, "struct sNode");
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value712=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1853, "sLtEqNode")),(struct sNode*)come_increment_ref_count(node_583),(struct sNode*)come_increment_ref_count(right_588),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value717=_inf_value18));
            if(right_588) { right_588 = come_decrement_ref_count2(right_588, ((struct sNode*)right_588)->finalize, ((struct sNode*)right_588)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value712,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value717) { __right_value717 = come_decrement_ref_count2(__right_value717, ((struct sNode*)__right_value717)->finalize, ((struct sNode*)__right_value717)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result379__;
            if(right_588) { right_588 = come_decrement_ref_count2(right_588, ((struct sNode*)right_588)->finalize, ((struct sNode*)right_588)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_590=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_591=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_590;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1864, "struct sNode");
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value720=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1864, "sGtNode")),(struct sNode*)come_increment_ref_count(node_583),(struct sNode*)come_increment_ref_count(right_591),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value725=_inf_value19));
            if(right_591) { right_591 = come_decrement_ref_count2(right_591, ((struct sNode*)right_591)->finalize, ((struct sNode*)right_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value720,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value725) { __right_value725 = come_decrement_ref_count2(__right_value725, ((struct sNode*)__right_value725)->finalize, ((struct sNode*)__right_value725)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result382__;
            if(right_591) { right_591 = come_decrement_ref_count2(right_591, ((struct sNode*)right_591)->finalize, ((struct sNode*)right_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_593=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_594=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_593;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1875, "struct sNode");
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value728=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1875, "sLtNode")),(struct sNode*)come_increment_ref_count(node_583),(struct sNode*)come_increment_ref_count(right_594),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value733=_inf_value20));
            if(right_594) { right_594 = come_decrement_ref_count2(right_594, ((struct sNode*)right_594)->finalize, ((struct sNode*)right_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value728,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value733) { __right_value733 = come_decrement_ref_count2(__right_value733, ((struct sNode*)__right_value733)->finalize, ((struct sNode*)__right_value733)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result385__;
            if(right_594) { right_594 = come_decrement_ref_count2(right_594, ((struct sNode*)right_594)->finalize, ((struct sNode*)right_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_596=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_597=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_596;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1886, "struct sNode");
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value736=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1886, "sGtEqNode")),(struct sNode*)come_increment_ref_count(node_583),(struct sNode*)come_increment_ref_count(right_597),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value741=_inf_value21));
            if(right_597) { right_597 = come_decrement_ref_count2(right_597, ((struct sNode*)right_597)->finalize, ((struct sNode*)right_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value736,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value741) { __right_value741 = come_decrement_ref_count2(__right_value741, ((struct sNode*)__right_value741)->finalize, ((struct sNode*)__right_value741)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result388__;
            if(right_597) { right_597 = come_decrement_ref_count2(right_597, ((struct sNode*)right_597)->finalize, ((struct sNode*)right_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_599=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_600=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_599;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1897, "struct sNode");
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value744=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1897, "sLtEqNode")),(struct sNode*)come_increment_ref_count(node_583),(struct sNode*)come_increment_ref_count(right_600),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value749=_inf_value22));
            if(right_600) { right_600 = come_decrement_ref_count2(right_600, ((struct sNode*)right_600)->finalize, ((struct sNode*)right_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value744,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value749) { __right_value749 = come_decrement_ref_count2(__right_value749, ((struct sNode*)__right_value749)->finalize, ((struct sNode*)__right_value749)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result391__;
            if(right_600) { right_600 = come_decrement_ref_count2(right_600, ((struct sNode*)right_600)->finalize, ((struct sNode*)right_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_602=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_603=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_602;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1908, "struct sNode");
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value752=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1908, "sGtNode")),(struct sNode*)come_increment_ref_count(node_583),(struct sNode*)come_increment_ref_count(right_603),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value757=_inf_value23));
            if(right_603) { right_603 = come_decrement_ref_count2(right_603, ((struct sNode*)right_603)->finalize, ((struct sNode*)right_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value752,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value757) { __right_value757 = come_decrement_ref_count2(__right_value757, ((struct sNode*)__right_value757)->finalize, ((struct sNode*)__right_value757)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result394__;
            if(right_603) { right_603 = come_decrement_ref_count2(right_603, ((struct sNode*)right_603)->finalize, ((struct sNode*)right_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_605=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_606=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_605;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1919, "struct sNode");
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value760=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1919, "sLtNode")),(struct sNode*)come_increment_ref_count(node_583),(struct sNode*)come_increment_ref_count(right_606),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __result397__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value765=_inf_value24));
            if(right_606) { right_606 = come_decrement_ref_count2(right_606, ((struct sNode*)right_606)->finalize, ((struct sNode*)right_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value760,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value765) { __right_value765 = come_decrement_ref_count2(__right_value765, ((struct sNode*)__right_value765)->finalize, ((struct sNode*)__right_value765)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result397__;
            if(right_606) { right_606 = come_decrement_ref_count2(right_606, ((struct sNode*)right_606)->finalize, ((struct sNode*)right_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result398__ = gComeFunResultObject = __result_obj__ = node_583;
    if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
char* __dec_obj404;
struct sNode* __dec_obj405;
struct sNode* __dec_obj406;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj404=self->sname;
            __dec_obj404 = come_decrement_ref_count2(__dec_obj404, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj405=self->mLeft;
            if(__dec_obj405) { __dec_obj405 = come_decrement_ref_count2(__dec_obj405, ((struct sNode*)__dec_obj405)->finalize, ((struct sNode*)__dec_obj405)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj406=self->mRight;
            if(__dec_obj406) { __dec_obj406 = come_decrement_ref_count2(__dec_obj406, ((struct sNode*)__dec_obj406)->finalize, ((struct sNode*)__dec_obj406)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
struct sGtEqNode* __result386__;
void* __right_value737 = (void*)0;
struct sGtEqNode* result_598;
void* __right_value738 = (void*)0;
char* __dec_obj407;
void* __right_value739 = (void*)0;
struct sNode* __dec_obj408;
void* __right_value740 = (void*)0;
struct sNode* __dec_obj409;
struct sGtEqNode* __result387__;
    if(    self==(void*)0) {
        __result386__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    result_598=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"));
    if(    self!=((void*)0)) {
        result_598->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj407=result_598->sname;
        result_598->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj407 = come_decrement_ref_count2(__dec_obj407, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_598->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_598->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj408=result_598->mLeft;
        result_598->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj408) { __dec_obj408 = come_decrement_ref_count2(__dec_obj408, ((struct sNode*)__dec_obj408)->finalize, ((struct sNode*)__dec_obj408)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj409=result_598->mRight;
        result_598->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj409) { __dec_obj409 = come_decrement_ref_count2(__dec_obj409, ((struct sNode*)__dec_obj409)->finalize, ((struct sNode*)__dec_obj409)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result387__ = gComeFunResultObject = __result_obj__ = result_598;
    come_call_finalizer3(result_598,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
char* __dec_obj410;
struct sNode* __dec_obj411;
struct sNode* __dec_obj412;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj410=self->sname;
            __dec_obj410 = come_decrement_ref_count2(__dec_obj410, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj411=self->mLeft;
            if(__dec_obj411) { __dec_obj411 = come_decrement_ref_count2(__dec_obj411, ((struct sNode*)__dec_obj411)->finalize, ((struct sNode*)__dec_obj411)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj412=self->mRight;
            if(__dec_obj412) { __dec_obj412 = come_decrement_ref_count2(__dec_obj412, ((struct sNode*)__dec_obj412)->finalize, ((struct sNode*)__dec_obj412)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
struct sLtEqNode* __result389__;
void* __right_value745 = (void*)0;
struct sLtEqNode* result_601;
void* __right_value746 = (void*)0;
char* __dec_obj413;
void* __right_value747 = (void*)0;
struct sNode* __dec_obj414;
void* __right_value748 = (void*)0;
struct sNode* __dec_obj415;
struct sLtEqNode* __result390__;
    if(    self==(void*)0) {
        __result389__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result389__;
    }
    result_601=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"));
    if(    self!=((void*)0)) {
        result_601->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj413=result_601->sname;
        result_601->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj413 = come_decrement_ref_count2(__dec_obj413, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_601->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_601->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj414=result_601->mLeft;
        result_601->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj414) { __dec_obj414 = come_decrement_ref_count2(__dec_obj414, ((struct sNode*)__dec_obj414)->finalize, ((struct sNode*)__dec_obj414)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj415=result_601->mRight;
        result_601->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj415) { __dec_obj415 = come_decrement_ref_count2(__dec_obj415, ((struct sNode*)__dec_obj415)->finalize, ((struct sNode*)__dec_obj415)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result390__ = gComeFunResultObject = __result_obj__ = result_601;
    come_call_finalizer3(result_601,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static void sGtNode_finalize(struct sGtNode* self){
char* __dec_obj416;
struct sNode* __dec_obj417;
struct sNode* __dec_obj418;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj416=self->sname;
            __dec_obj416 = come_decrement_ref_count2(__dec_obj416, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj417=self->mLeft;
            if(__dec_obj417) { __dec_obj417 = come_decrement_ref_count2(__dec_obj417, ((struct sNode*)__dec_obj417)->finalize, ((struct sNode*)__dec_obj417)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj418=self->mRight;
            if(__dec_obj418) { __dec_obj418 = come_decrement_ref_count2(__dec_obj418, ((struct sNode*)__dec_obj418)->finalize, ((struct sNode*)__dec_obj418)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__=(void*)0;
struct sGtNode* __result392__;
void* __right_value753 = (void*)0;
struct sGtNode* result_604;
void* __right_value754 = (void*)0;
char* __dec_obj419;
void* __right_value755 = (void*)0;
struct sNode* __dec_obj420;
void* __right_value756 = (void*)0;
struct sNode* __dec_obj421;
struct sGtNode* __result393__;
    if(    self==(void*)0) {
        __result392__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result392__;
    }
    result_604=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"));
    if(    self!=((void*)0)) {
        result_604->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj419=result_604->sname;
        result_604->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj419 = come_decrement_ref_count2(__dec_obj419, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_604->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_604->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj420=result_604->mLeft;
        result_604->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj420) { __dec_obj420 = come_decrement_ref_count2(__dec_obj420, ((struct sNode*)__dec_obj420)->finalize, ((struct sNode*)__dec_obj420)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj421=result_604->mRight;
        result_604->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj421) { __dec_obj421 = come_decrement_ref_count2(__dec_obj421, ((struct sNode*)__dec_obj421)->finalize, ((struct sNode*)__dec_obj421)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result393__ = gComeFunResultObject = __result_obj__ = result_604;
    come_call_finalizer3(result_604,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value766 = (void*)0;
struct sNode* node_608;
int sline_real_609;
void* __right_value767 = (void*)0;
struct sNode* right_610;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value774 = (void*)0;
struct sNode* __result401__;
int sline_real_612;
void* __right_value775 = (void*)0;
struct sNode* right_613;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value782 = (void*)0;
struct sNode* __result404__;
int sline_real_615;
void* __right_value783 = (void*)0;
struct sNode* right_616;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value790 = (void*)0;
struct sNode* __result407__;
int sline_real_618;
void* __right_value791 = (void*)0;
struct sNode* right_619;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value798 = (void*)0;
struct sNode* __result410__;
int sline_real_621;
void* __right_value799 = (void*)0;
struct sNode* right_622;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value806 = (void*)0;
struct sNode* __result413__;
int sline_real_624;
void* __right_value807 = (void*)0;
struct sNode* right_625;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value814 = (void*)0;
struct sNode* __result416__;
int sline_real_627;
void* __right_value815 = (void*)0;
struct sNode* right_628;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value822 = (void*)0;
struct sNode* __result419__;
int sline_real_630;
void* __right_value823 = (void*)0;
struct sNode* right_631;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value830 = (void*)0;
struct sNode* __result422__;
struct sNode* __result423__;
    parse_sharp_v5(info);
    node_608=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_609=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_610=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_609;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1949, "struct sNode");
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value769=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1949, "sEq2Node")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_610),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result401__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value774=_inf_value25));
            if(right_610) { right_610 = come_decrement_ref_count2(right_610, ((struct sNode*)right_610)->finalize, ((struct sNode*)right_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value769,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value774) { __right_value774 = come_decrement_ref_count2(__right_value774, ((struct sNode*)__right_value774)->finalize, ((struct sNode*)__right_value774)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result401__;
            if(right_610) { right_610 = come_decrement_ref_count2(right_610, ((struct sNode*)right_610)->finalize, ((struct sNode*)right_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_612=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_613=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_612;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1960, "struct sNode");
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value777=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1960, "sEqNode")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_613),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __result404__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value782=_inf_value26));
            if(right_613) { right_613 = come_decrement_ref_count2(right_613, ((struct sNode*)right_613)->finalize, ((struct sNode*)right_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value777,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value782) { __right_value782 = come_decrement_ref_count2(__right_value782, ((struct sNode*)__right_value782)->finalize, ((struct sNode*)__right_value782)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result404__;
            if(right_613) { right_613 = come_decrement_ref_count2(right_613, ((struct sNode*)right_613)->finalize, ((struct sNode*)right_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_615=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_616=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_615;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1971, "struct sNode");
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value785=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1971, "sNotEq2Node")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_616),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __result407__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value790=_inf_value27));
            if(right_616) { right_616 = come_decrement_ref_count2(right_616, ((struct sNode*)right_616)->finalize, ((struct sNode*)right_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value785,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value790) { __right_value790 = come_decrement_ref_count2(__right_value790, ((struct sNode*)__right_value790)->finalize, ((struct sNode*)__right_value790)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result407__;
            if(right_616) { right_616 = come_decrement_ref_count2(right_616, ((struct sNode*)right_616)->finalize, ((struct sNode*)right_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_618=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_619=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_618;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1982, "struct sNode");
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value793=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1982, "sNotEqNode")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_619),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __result410__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value798=_inf_value28));
            if(right_619) { right_619 = come_decrement_ref_count2(right_619, ((struct sNode*)right_619)->finalize, ((struct sNode*)right_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value793,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value798) { __right_value798 = come_decrement_ref_count2(__right_value798, ((struct sNode*)__right_value798)->finalize, ((struct sNode*)__right_value798)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result410__;
            if(right_619) { right_619 = come_decrement_ref_count2(right_619, ((struct sNode*)right_619)->finalize, ((struct sNode*)right_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_621=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_622=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_621;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1993, "struct sNode");
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value801=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1993, "sEq2Node")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_622),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __result413__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value806=_inf_value29));
            if(right_622) { right_622 = come_decrement_ref_count2(right_622, ((struct sNode*)right_622)->finalize, ((struct sNode*)right_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value801,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value806) { __right_value806 = come_decrement_ref_count2(__right_value806, ((struct sNode*)__right_value806)->finalize, ((struct sNode*)__right_value806)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result413__;
            if(right_622) { right_622 = come_decrement_ref_count2(right_622, ((struct sNode*)right_622)->finalize, ((struct sNode*)right_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_624=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_625=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_624;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2004, "struct sNode");
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value809=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2004, "sEqNode")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_625),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __result416__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value814=_inf_value30));
            if(right_625) { right_625 = come_decrement_ref_count2(right_625, ((struct sNode*)right_625)->finalize, ((struct sNode*)right_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value809,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value814) { __right_value814 = come_decrement_ref_count2(__right_value814, ((struct sNode*)__right_value814)->finalize, ((struct sNode*)__right_value814)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result416__;
            if(right_625) { right_625 = come_decrement_ref_count2(right_625, ((struct sNode*)right_625)->finalize, ((struct sNode*)right_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_627=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_628=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_627;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2015, "struct sNode");
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value817=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2015, "sNotEq2Node")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_628),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __result419__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value822=_inf_value31));
            if(right_628) { right_628 = come_decrement_ref_count2(right_628, ((struct sNode*)right_628)->finalize, ((struct sNode*)right_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value817,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value822) { __right_value822 = come_decrement_ref_count2(__right_value822, ((struct sNode*)__right_value822)->finalize, ((struct sNode*)__right_value822)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result419__;
            if(right_628) { right_628 = come_decrement_ref_count2(right_628, ((struct sNode*)right_628)->finalize, ((struct sNode*)right_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_630=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_631=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_630;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2026, "struct sNode");
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value825=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2026, "sNotEqNode")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_631),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __result422__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value830=_inf_value32));
            if(right_631) { right_631 = come_decrement_ref_count2(right_631, ((struct sNode*)right_631)->finalize, ((struct sNode*)right_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value825,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value830) { __right_value830 = come_decrement_ref_count2(__right_value830, ((struct sNode*)__right_value830)->finalize, ((struct sNode*)__right_value830)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result422__;
            if(right_631) { right_631 = come_decrement_ref_count2(right_631, ((struct sNode*)right_631)->finalize, ((struct sNode*)right_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result423__ = gComeFunResultObject = __result_obj__ = node_608;
    if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result423__;
}

static void sEq2Node_finalize(struct sEq2Node* self){
char* __dec_obj452;
struct sNode* __dec_obj453;
struct sNode* __dec_obj454;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj452=self->sname;
            __dec_obj452 = come_decrement_ref_count2(__dec_obj452, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj453=self->mLeft;
            if(__dec_obj453) { __dec_obj453 = come_decrement_ref_count2(__dec_obj453, ((struct sNode*)__dec_obj453)->finalize, ((struct sNode*)__dec_obj453)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj454=self->mRight;
            if(__dec_obj454) { __dec_obj454 = come_decrement_ref_count2(__dec_obj454, ((struct sNode*)__dec_obj454)->finalize, ((struct sNode*)__dec_obj454)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__=(void*)0;
struct sEq2Node* __result411__;
void* __right_value802 = (void*)0;
struct sEq2Node* result_623;
void* __right_value803 = (void*)0;
char* __dec_obj455;
void* __right_value804 = (void*)0;
struct sNode* __dec_obj456;
void* __right_value805 = (void*)0;
struct sNode* __dec_obj457;
struct sEq2Node* __result412__;
    if(    self==(void*)0) {
        __result411__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result411__;
    }
    result_623=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"));
    if(    self!=((void*)0)) {
        result_623->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj455=result_623->sname;
        result_623->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj455 = come_decrement_ref_count2(__dec_obj455, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_623->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_623->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj456=result_623->mLeft;
        result_623->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj456) { __dec_obj456 = come_decrement_ref_count2(__dec_obj456, ((struct sNode*)__dec_obj456)->finalize, ((struct sNode*)__dec_obj456)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj457=result_623->mRight;
        result_623->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj457) { __dec_obj457 = come_decrement_ref_count2(__dec_obj457, ((struct sNode*)__dec_obj457)->finalize, ((struct sNode*)__dec_obj457)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result412__ = gComeFunResultObject = __result_obj__ = result_623;
    come_call_finalizer3(result_623,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static void sEqNode_finalize(struct sEqNode* self){
char* __dec_obj458;
struct sNode* __dec_obj459;
struct sNode* __dec_obj460;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj458=self->sname;
            __dec_obj458 = come_decrement_ref_count2(__dec_obj458, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj459=self->mLeft;
            if(__dec_obj459) { __dec_obj459 = come_decrement_ref_count2(__dec_obj459, ((struct sNode*)__dec_obj459)->finalize, ((struct sNode*)__dec_obj459)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj460=self->mRight;
            if(__dec_obj460) { __dec_obj460 = come_decrement_ref_count2(__dec_obj460, ((struct sNode*)__dec_obj460)->finalize, ((struct sNode*)__dec_obj460)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__=(void*)0;
struct sEqNode* __result414__;
void* __right_value810 = (void*)0;
struct sEqNode* result_626;
void* __right_value811 = (void*)0;
char* __dec_obj461;
void* __right_value812 = (void*)0;
struct sNode* __dec_obj462;
void* __right_value813 = (void*)0;
struct sNode* __dec_obj463;
struct sEqNode* __result415__;
    if(    self==(void*)0) {
        __result414__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result414__;
    }
    result_626=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"));
    if(    self!=((void*)0)) {
        result_626->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj461=result_626->sname;
        result_626->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj461 = come_decrement_ref_count2(__dec_obj461, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_626->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_626->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj462=result_626->mLeft;
        result_626->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj462) { __dec_obj462 = come_decrement_ref_count2(__dec_obj462, ((struct sNode*)__dec_obj462)->finalize, ((struct sNode*)__dec_obj462)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj463=result_626->mRight;
        result_626->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj463) { __dec_obj463 = come_decrement_ref_count2(__dec_obj463, ((struct sNode*)__dec_obj463)->finalize, ((struct sNode*)__dec_obj463)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result415__ = gComeFunResultObject = __result_obj__ = result_626;
    come_call_finalizer3(result_626,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
char* __dec_obj464;
struct sNode* __dec_obj465;
struct sNode* __dec_obj466;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj464=self->sname;
            __dec_obj464 = come_decrement_ref_count2(__dec_obj464, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj465=self->mLeft;
            if(__dec_obj465) { __dec_obj465 = come_decrement_ref_count2(__dec_obj465, ((struct sNode*)__dec_obj465)->finalize, ((struct sNode*)__dec_obj465)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj466=self->mRight;
            if(__dec_obj466) { __dec_obj466 = come_decrement_ref_count2(__dec_obj466, ((struct sNode*)__dec_obj466)->finalize, ((struct sNode*)__dec_obj466)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
struct sNotEq2Node* __result417__;
void* __right_value818 = (void*)0;
struct sNotEq2Node* result_629;
void* __right_value819 = (void*)0;
char* __dec_obj467;
void* __right_value820 = (void*)0;
struct sNode* __dec_obj468;
void* __right_value821 = (void*)0;
struct sNode* __dec_obj469;
struct sNotEq2Node* __result418__;
    if(    self==(void*)0) {
        __result417__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result417__;
    }
    result_629=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"));
    if(    self!=((void*)0)) {
        result_629->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj467=result_629->sname;
        result_629->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj467 = come_decrement_ref_count2(__dec_obj467, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_629->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_629->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj468=result_629->mLeft;
        result_629->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj468) { __dec_obj468 = come_decrement_ref_count2(__dec_obj468, ((struct sNode*)__dec_obj468)->finalize, ((struct sNode*)__dec_obj468)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj469=result_629->mRight;
        result_629->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj469) { __dec_obj469 = come_decrement_ref_count2(__dec_obj469, ((struct sNode*)__dec_obj469)->finalize, ((struct sNode*)__dec_obj469)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result418__ = gComeFunResultObject = __result_obj__ = result_629;
    come_call_finalizer3(result_629,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
char* __dec_obj470;
struct sNode* __dec_obj471;
struct sNode* __dec_obj472;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj470=self->sname;
            __dec_obj470 = come_decrement_ref_count2(__dec_obj470, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj471=self->mLeft;
            if(__dec_obj471) { __dec_obj471 = come_decrement_ref_count2(__dec_obj471, ((struct sNode*)__dec_obj471)->finalize, ((struct sNode*)__dec_obj471)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj472=self->mRight;
            if(__dec_obj472) { __dec_obj472 = come_decrement_ref_count2(__dec_obj472, ((struct sNode*)__dec_obj472)->finalize, ((struct sNode*)__dec_obj472)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
struct sNotEqNode* __result420__;
void* __right_value826 = (void*)0;
struct sNotEqNode* result_632;
void* __right_value827 = (void*)0;
char* __dec_obj473;
void* __right_value828 = (void*)0;
struct sNode* __dec_obj474;
void* __right_value829 = (void*)0;
struct sNode* __dec_obj475;
struct sNotEqNode* __result421__;
    if(    self==(void*)0) {
        __result420__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result420__;
    }
    result_632=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"));
    if(    self!=((void*)0)) {
        result_632->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj473=result_632->sname;
        result_632->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj473 = come_decrement_ref_count2(__dec_obj473, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_632->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_632->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj474=result_632->mLeft;
        result_632->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj474) { __dec_obj474 = come_decrement_ref_count2(__dec_obj474, ((struct sNode*)__dec_obj474)->finalize, ((struct sNode*)__dec_obj474)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj475=result_632->mRight;
        result_632->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj475) { __dec_obj475 = come_decrement_ref_count2(__dec_obj475, ((struct sNode*)__dec_obj475)->finalize, ((struct sNode*)__dec_obj475)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result421__ = gComeFunResultObject = __result_obj__ = result_632;
    come_call_finalizer3(result_632,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value831 = (void*)0;
struct sNode* node_633;
int sline_real_634;
void* __right_value832 = (void*)0;
struct sNode* right_635;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value839 = (void*)0;
struct sNode* __result426__;
int sline_real_637;
void* __right_value840 = (void*)0;
struct sNode* right_638;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value847 = (void*)0;
struct sNode* __result429__;
struct sNode* __result430__;
    parse_sharp_v5(info);
    node_633=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_633->terminated(node_633->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real_634=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_635=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_634;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2056, "struct sNode");
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value834=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2056, "sAndNode")),(struct sNode*)come_increment_ref_count(node_633),(struct sNode*)come_increment_ref_count(right_635),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result426__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=_inf_value33));
            if(right_635) { right_635 = come_decrement_ref_count2(right_635, ((struct sNode*)right_635)->finalize, ((struct sNode*)right_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value834,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value839) { __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result426__;
            if(right_635) { right_635 = come_decrement_ref_count2(right_635, ((struct sNode*)right_635)->finalize, ((struct sNode*)right_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_633->terminated(node_633->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_637=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_638=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_637;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2067, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value842=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2067, "sAndNode")),(struct sNode*)come_increment_ref_count(node_633),(struct sNode*)come_increment_ref_count(right_638),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __result429__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value847=_inf_value34));
            if(right_638) { right_638 = come_decrement_ref_count2(right_638, ((struct sNode*)right_638)->finalize, ((struct sNode*)right_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value842,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value847) { __right_value847 = come_decrement_ref_count2(__right_value847, ((struct sNode*)__right_value847)->finalize, ((struct sNode*)__right_value847)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result429__;
            if(right_638) { right_638 = come_decrement_ref_count2(right_638, ((struct sNode*)right_638)->finalize, ((struct sNode*)right_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result430__ = gComeFunResultObject = __result_obj__ = node_633;
    if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result430__;
}

static void sAndNode_finalize(struct sAndNode* self){
char* __dec_obj482;
struct sNode* __dec_obj483;
struct sNode* __dec_obj484;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj482=self->sname;
            __dec_obj482 = come_decrement_ref_count2(__dec_obj482, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj483=self->mLeft;
            if(__dec_obj483) { __dec_obj483 = come_decrement_ref_count2(__dec_obj483, ((struct sNode*)__dec_obj483)->finalize, ((struct sNode*)__dec_obj483)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj484=self->mRight;
            if(__dec_obj484) { __dec_obj484 = come_decrement_ref_count2(__dec_obj484, ((struct sNode*)__dec_obj484)->finalize, ((struct sNode*)__dec_obj484)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__=(void*)0;
struct sAndNode* __result427__;
void* __right_value843 = (void*)0;
struct sAndNode* result_639;
void* __right_value844 = (void*)0;
char* __dec_obj485;
void* __right_value845 = (void*)0;
struct sNode* __dec_obj486;
void* __right_value846 = (void*)0;
struct sNode* __dec_obj487;
struct sAndNode* __result428__;
    if(    self==(void*)0) {
        __result427__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result427__;
    }
    result_639=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"));
    if(    self!=((void*)0)) {
        result_639->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj485=result_639->sname;
        result_639->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj485 = come_decrement_ref_count2(__dec_obj485, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_639->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_639->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj486=result_639->mLeft;
        result_639->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj486) { __dec_obj486 = come_decrement_ref_count2(__dec_obj486, ((struct sNode*)__dec_obj486)->finalize, ((struct sNode*)__dec_obj486)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj487=result_639->mRight;
        result_639->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj487) { __dec_obj487 = come_decrement_ref_count2(__dec_obj487, ((struct sNode*)__dec_obj487)->finalize, ((struct sNode*)__dec_obj487)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result428__ = gComeFunResultObject = __result_obj__ = result_639;
    come_call_finalizer3(result_639,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result428__;
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value848 = (void*)0;
struct sNode* node_640;
int sline_real_641;
void* __right_value849 = (void*)0;
struct sNode* right_642;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value856 = (void*)0;
struct sNode* __result433__;
int sline_real_644;
void* __right_value857 = (void*)0;
struct sNode* right_645;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value864 = (void*)0;
struct sNode* __result436__;
struct sNode* __result437__;
    parse_sharp_v5(info);
    node_640=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real_641=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_642=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_641;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2097, "struct sNode");
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value851=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2097, "sXOrNode")),(struct sNode*)come_increment_ref_count(node_640),(struct sNode*)come_increment_ref_count(right_642),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result433__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value856=_inf_value35));
            if(right_642) { right_642 = come_decrement_ref_count2(right_642, ((struct sNode*)right_642)->finalize, ((struct sNode*)right_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_640) { node_640 = come_decrement_ref_count2(node_640, ((struct sNode*)node_640)->finalize, ((struct sNode*)node_640)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value851,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value856) { __right_value856 = come_decrement_ref_count2(__right_value856, ((struct sNode*)__right_value856)->finalize, ((struct sNode*)__right_value856)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result433__;
            if(right_642) { right_642 = come_decrement_ref_count2(right_642, ((struct sNode*)right_642)->finalize, ((struct sNode*)right_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_644=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_645=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_644;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2108, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value859=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2108, "sXOrNode")),(struct sNode*)come_increment_ref_count(node_640),(struct sNode*)come_increment_ref_count(right_645),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __result436__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value864=_inf_value36));
            if(right_645) { right_645 = come_decrement_ref_count2(right_645, ((struct sNode*)right_645)->finalize, ((struct sNode*)right_645)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_640) { node_640 = come_decrement_ref_count2(node_640, ((struct sNode*)node_640)->finalize, ((struct sNode*)node_640)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value859,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value864) { __right_value864 = come_decrement_ref_count2(__right_value864, ((struct sNode*)__right_value864)->finalize, ((struct sNode*)__right_value864)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result436__;
            if(right_645) { right_645 = come_decrement_ref_count2(right_645, ((struct sNode*)right_645)->finalize, ((struct sNode*)right_645)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result437__ = gComeFunResultObject = __result_obj__ = node_640;
    if(node_640) { node_640 = come_decrement_ref_count2(node_640, ((struct sNode*)node_640)->finalize, ((struct sNode*)node_640)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result437__;
}

static void sXOrNode_finalize(struct sXOrNode* self){
char* __dec_obj494;
struct sNode* __dec_obj495;
struct sNode* __dec_obj496;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj494=self->sname;
            __dec_obj494 = come_decrement_ref_count2(__dec_obj494, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj495=self->mLeft;
            if(__dec_obj495) { __dec_obj495 = come_decrement_ref_count2(__dec_obj495, ((struct sNode*)__dec_obj495)->finalize, ((struct sNode*)__dec_obj495)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj496=self->mRight;
            if(__dec_obj496) { __dec_obj496 = come_decrement_ref_count2(__dec_obj496, ((struct sNode*)__dec_obj496)->finalize, ((struct sNode*)__dec_obj496)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__=(void*)0;
struct sXOrNode* __result434__;
void* __right_value860 = (void*)0;
struct sXOrNode* result_646;
void* __right_value861 = (void*)0;
char* __dec_obj497;
void* __right_value862 = (void*)0;
struct sNode* __dec_obj498;
void* __right_value863 = (void*)0;
struct sNode* __dec_obj499;
struct sXOrNode* __result435__;
    if(    self==(void*)0) {
        __result434__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result434__;
    }
    result_646=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"));
    if(    self!=((void*)0)) {
        result_646->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj497=result_646->sname;
        result_646->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj497 = come_decrement_ref_count2(__dec_obj497, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_646->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_646->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj498=result_646->mLeft;
        result_646->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj498) { __dec_obj498 = come_decrement_ref_count2(__dec_obj498, ((struct sNode*)__dec_obj498)->finalize, ((struct sNode*)__dec_obj498)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj499=result_646->mRight;
        result_646->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj499) { __dec_obj499 = come_decrement_ref_count2(__dec_obj499, ((struct sNode*)__dec_obj499)->finalize, ((struct sNode*)__dec_obj499)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result435__ = gComeFunResultObject = __result_obj__ = result_646;
    come_call_finalizer3(result_646,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value865 = (void*)0;
struct sNode* node_647;
int sline_real_648;
void* __right_value866 = (void*)0;
struct sNode* right_649;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value873 = (void*)0;
struct sNode* __result440__;
int sline_real_651;
void* __right_value874 = (void*)0;
struct sNode* right_652;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value881 = (void*)0;
struct sNode* __result443__;
struct sNode* __result444__;
    parse_sharp_v5(info);
    node_647=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real_648=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_649=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_648;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2138, "struct sNode");
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value868=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2138, "sOrNode")),(struct sNode*)come_increment_ref_count(node_647),(struct sNode*)come_increment_ref_count(right_649),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result440__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value873=_inf_value37));
            if(right_649) { right_649 = come_decrement_ref_count2(right_649, ((struct sNode*)right_649)->finalize, ((struct sNode*)right_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value868,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value873) { __right_value873 = come_decrement_ref_count2(__right_value873, ((struct sNode*)__right_value873)->finalize, ((struct sNode*)__right_value873)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result440__;
            if(right_649) { right_649 = come_decrement_ref_count2(right_649, ((struct sNode*)right_649)->finalize, ((struct sNode*)right_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_651=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_652=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_651;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2149, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value876=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2149, "sOrNode")),(struct sNode*)come_increment_ref_count(node_647),(struct sNode*)come_increment_ref_count(right_652),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __result443__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value881=_inf_value38));
            if(right_652) { right_652 = come_decrement_ref_count2(right_652, ((struct sNode*)right_652)->finalize, ((struct sNode*)right_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value876,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value881) { __right_value881 = come_decrement_ref_count2(__right_value881, ((struct sNode*)__right_value881)->finalize, ((struct sNode*)__right_value881)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result443__;
            if(right_652) { right_652 = come_decrement_ref_count2(right_652, ((struct sNode*)right_652)->finalize, ((struct sNode*)right_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result444__ = gComeFunResultObject = __result_obj__ = node_647;
    if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result444__;
}

static void sOrNode_finalize(struct sOrNode* self){
char* __dec_obj506;
struct sNode* __dec_obj507;
struct sNode* __dec_obj508;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj506=self->sname;
            __dec_obj506 = come_decrement_ref_count2(__dec_obj506, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj507=self->mLeft;
            if(__dec_obj507) { __dec_obj507 = come_decrement_ref_count2(__dec_obj507, ((struct sNode*)__dec_obj507)->finalize, ((struct sNode*)__dec_obj507)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj508=self->mRight;
            if(__dec_obj508) { __dec_obj508 = come_decrement_ref_count2(__dec_obj508, ((struct sNode*)__dec_obj508)->finalize, ((struct sNode*)__dec_obj508)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__=(void*)0;
struct sOrNode* __result441__;
void* __right_value877 = (void*)0;
struct sOrNode* result_653;
void* __right_value878 = (void*)0;
char* __dec_obj509;
void* __right_value879 = (void*)0;
struct sNode* __dec_obj510;
void* __right_value880 = (void*)0;
struct sNode* __dec_obj511;
struct sOrNode* __result442__;
    if(    self==(void*)0) {
        __result441__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result441__;
    }
    result_653=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"));
    if(    self!=((void*)0)) {
        result_653->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj509=result_653->sname;
        result_653->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj509 = come_decrement_ref_count2(__dec_obj509, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_653->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_653->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj510=result_653->mLeft;
        result_653->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj510) { __dec_obj510 = come_decrement_ref_count2(__dec_obj510, ((struct sNode*)__dec_obj510)->finalize, ((struct sNode*)__dec_obj510)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj511=result_653->mRight;
        result_653->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj511) { __dec_obj511 = come_decrement_ref_count2(__dec_obj511, ((struct sNode*)__dec_obj511)->finalize, ((struct sNode*)__dec_obj511)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result442__ = gComeFunResultObject = __result_obj__ = result_653;
    come_call_finalizer3(result_653,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result442__;
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value882 = (void*)0;
struct sNode* node_654;
int sline_real_655;
void* __right_value883 = (void*)0;
struct sNode* right_656;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value890 = (void*)0;
struct sNode* __result447__;
int sline_real_658;
void* __right_value891 = (void*)0;
struct sNode* right_659;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value898 = (void*)0;
struct sNode* __result450__;
struct sNode* __result451__;
    parse_sharp_v5(info);
    node_654=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real_655=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_656=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_655;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2179, "struct sNode");
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value885=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2179, "sAndAndNode")),(struct sNode*)come_increment_ref_count(node_654),(struct sNode*)come_increment_ref_count(right_656),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result447__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value890=_inf_value39));
            if(right_656) { right_656 = come_decrement_ref_count2(right_656, ((struct sNode*)right_656)->finalize, ((struct sNode*)right_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value885,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value890) { __right_value890 = come_decrement_ref_count2(__right_value890, ((struct sNode*)__right_value890)->finalize, ((struct sNode*)__right_value890)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result447__;
            if(right_656) { right_656 = come_decrement_ref_count2(right_656, ((struct sNode*)right_656)->finalize, ((struct sNode*)right_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_658=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_659=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_658;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2190, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value893=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2190, "sAndAndNode")),(struct sNode*)come_increment_ref_count(node_654),(struct sNode*)come_increment_ref_count(right_659),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __result450__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value898=_inf_value40));
            if(right_659) { right_659 = come_decrement_ref_count2(right_659, ((struct sNode*)right_659)->finalize, ((struct sNode*)right_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value893,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value898) { __right_value898 = come_decrement_ref_count2(__right_value898, ((struct sNode*)__right_value898)->finalize, ((struct sNode*)__right_value898)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result450__;
            if(right_659) { right_659 = come_decrement_ref_count2(right_659, ((struct sNode*)right_659)->finalize, ((struct sNode*)right_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result451__ = gComeFunResultObject = __result_obj__ = node_654;
    if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result451__;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
char* __dec_obj518;
struct sNode* __dec_obj519;
struct sNode* __dec_obj520;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj518=self->sname;
            __dec_obj518 = come_decrement_ref_count2(__dec_obj518, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj519=self->mLeft;
            if(__dec_obj519) { __dec_obj519 = come_decrement_ref_count2(__dec_obj519, ((struct sNode*)__dec_obj519)->finalize, ((struct sNode*)__dec_obj519)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj520=self->mRight;
            if(__dec_obj520) { __dec_obj520 = come_decrement_ref_count2(__dec_obj520, ((struct sNode*)__dec_obj520)->finalize, ((struct sNode*)__dec_obj520)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
struct sAndAndNode* __result448__;
void* __right_value894 = (void*)0;
struct sAndAndNode* result_660;
void* __right_value895 = (void*)0;
char* __dec_obj521;
void* __right_value896 = (void*)0;
struct sNode* __dec_obj522;
void* __right_value897 = (void*)0;
struct sNode* __dec_obj523;
struct sAndAndNode* __result449__;
    if(    self==(void*)0) {
        __result448__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result448__;
    }
    result_660=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"));
    if(    self!=((void*)0)) {
        result_660->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj521=result_660->sname;
        result_660->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj521 = come_decrement_ref_count2(__dec_obj521, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_660->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_660->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj522=result_660->mLeft;
        result_660->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj522) { __dec_obj522 = come_decrement_ref_count2(__dec_obj522, ((struct sNode*)__dec_obj522)->finalize, ((struct sNode*)__dec_obj522)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj523=result_660->mRight;
        result_660->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj523) { __dec_obj523 = come_decrement_ref_count2(__dec_obj523, ((struct sNode*)__dec_obj523)->finalize, ((struct sNode*)__dec_obj523)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result449__ = gComeFunResultObject = __result_obj__ = result_660;
    come_call_finalizer3(result_660,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result449__;
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value899 = (void*)0;
struct sNode* node_661;
int sline_real_662;
void* __right_value900 = (void*)0;
struct sNode* right_663;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value907 = (void*)0;
struct sNode* __result454__;
int sline_real_665;
void* __right_value908 = (void*)0;
struct sNode* right_666;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value915 = (void*)0;
struct sNode* __result457__;
struct sNode* __result458__;
    parse_sharp_v5(info);
    node_661=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real_662=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_663=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_662;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2220, "struct sNode");
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value902=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2220, "sOrOrNode")),(struct sNode*)come_increment_ref_count(node_661),(struct sNode*)come_increment_ref_count(right_663),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result454__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value907=_inf_value41));
            if(right_663) { right_663 = come_decrement_ref_count2(right_663, ((struct sNode*)right_663)->finalize, ((struct sNode*)right_663)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value902,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value907) { __right_value907 = come_decrement_ref_count2(__right_value907, ((struct sNode*)__right_value907)->finalize, ((struct sNode*)__right_value907)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result454__;
            if(right_663) { right_663 = come_decrement_ref_count2(right_663, ((struct sNode*)right_663)->finalize, ((struct sNode*)right_663)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_665=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_666=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_665;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2231, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value910=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2231, "sOrOrNode")),(struct sNode*)come_increment_ref_count(node_661),(struct sNode*)come_increment_ref_count(right_666),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __result457__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value915=_inf_value42));
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value910,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value915) { __right_value915 = come_decrement_ref_count2(__right_value915, ((struct sNode*)__right_value915)->finalize, ((struct sNode*)__right_value915)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result457__;
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result458__ = gComeFunResultObject = __result_obj__ = node_661;
    if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result458__;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
char* __dec_obj530;
struct sNode* __dec_obj531;
struct sNode* __dec_obj532;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj530=self->sname;
            __dec_obj530 = come_decrement_ref_count2(__dec_obj530, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj531=self->mLeft;
            if(__dec_obj531) { __dec_obj531 = come_decrement_ref_count2(__dec_obj531, ((struct sNode*)__dec_obj531)->finalize, ((struct sNode*)__dec_obj531)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj532=self->mRight;
            if(__dec_obj532) { __dec_obj532 = come_decrement_ref_count2(__dec_obj532, ((struct sNode*)__dec_obj532)->finalize, ((struct sNode*)__dec_obj532)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
struct sOrOrNode* __result455__;
void* __right_value911 = (void*)0;
struct sOrOrNode* result_667;
void* __right_value912 = (void*)0;
char* __dec_obj533;
void* __right_value913 = (void*)0;
struct sNode* __dec_obj534;
void* __right_value914 = (void*)0;
struct sNode* __dec_obj535;
struct sOrOrNode* __result456__;
    if(    self==(void*)0) {
        __result455__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result455__;
    }
    result_667=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"));
    if(    self!=((void*)0)) {
        result_667->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj533=result_667->sname;
        result_667->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj533 = come_decrement_ref_count2(__dec_obj533, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_667->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_667->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj534=result_667->mLeft;
        result_667->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj534) { __dec_obj534 = come_decrement_ref_count2(__dec_obj534, ((struct sNode*)__dec_obj534)->finalize, ((struct sNode*)__dec_obj534)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj535=result_667->mRight;
        result_667->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj535) { __dec_obj535 = come_decrement_ref_count2(__dec_obj535, ((struct sNode*)__dec_obj535)->finalize, ((struct sNode*)__dec_obj535)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result456__ = gComeFunResultObject = __result_obj__ = result_667;
    come_call_finalizer3(result_667,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result456__;
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value916 = (void*)0;
struct sNode* node_668;
int sline_real_669;
void* __right_value917 = (void*)0;
struct sNode* node2_670;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value924 = (void*)0;
struct sNode* __result461__;
struct sNode* __result462__;
    parse_sharp_v5(info);
    node_668=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !info->no_comma&&*info->p==44) {
            info->p++;
            sline_real_669=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_670=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_669;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2261, "struct sNode");
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value919=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2261, "sCommaNode")),(struct sNode*)come_increment_ref_count(node_668),(struct sNode*)come_increment_ref_count(node2_670),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result461__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value924=_inf_value43));
            if(node2_670) { node2_670 = come_decrement_ref_count2(node2_670, ((struct sNode*)node2_670)->finalize, ((struct sNode*)node2_670)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_668) { node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value919,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value924) { __right_value924 = come_decrement_ref_count2(__right_value924, ((struct sNode*)__right_value924)->finalize, ((struct sNode*)__right_value924)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result461__;
            if(node2_670) { node2_670 = come_decrement_ref_count2(node2_670, ((struct sNode*)node2_670)->finalize, ((struct sNode*)node2_670)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result462__ = gComeFunResultObject = __result_obj__ = node_668;
    if(node_668) { node_668 = come_decrement_ref_count2(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result462__;
}

static void sCommaNode_finalize(struct sCommaNode* self){
char* __dec_obj536;
struct sNode* __dec_obj537;
struct sNode* __dec_obj538;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj536=self->sname;
            __dec_obj536 = come_decrement_ref_count2(__dec_obj536, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj537=self->mLeft;
            if(__dec_obj537) { __dec_obj537 = come_decrement_ref_count2(__dec_obj537, ((struct sNode*)__dec_obj537)->finalize, ((struct sNode*)__dec_obj537)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj538=self->mRight;
            if(__dec_obj538) { __dec_obj538 = come_decrement_ref_count2(__dec_obj538, ((struct sNode*)__dec_obj538)->finalize, ((struct sNode*)__dec_obj538)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__=(void*)0;
struct sCommaNode* __result459__;
void* __right_value920 = (void*)0;
struct sCommaNode* result_671;
void* __right_value921 = (void*)0;
char* __dec_obj539;
void* __right_value922 = (void*)0;
struct sNode* __dec_obj540;
void* __right_value923 = (void*)0;
struct sNode* __dec_obj541;
struct sCommaNode* __result460__;
    if(    self==(void*)0) {
        __result459__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result459__;
    }
    result_671=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"));
    if(    self!=((void*)0)) {
        result_671->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj539=result_671->sname;
        result_671->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj539 = come_decrement_ref_count2(__dec_obj539, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_671->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj540=result_671->mLeft;
        result_671->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj540) { __dec_obj540 = come_decrement_ref_count2(__dec_obj540, ((struct sNode*)__dec_obj540)->finalize, ((struct sNode*)__dec_obj540)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj541=result_671->mRight;
        result_671->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj541) { __dec_obj541 = come_decrement_ref_count2(__dec_obj541, ((struct sNode*)__dec_obj541)->finalize, ((struct sNode*)__dec_obj541)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result460__ = gComeFunResultObject = __result_obj__ = result_671;
    come_call_finalizer3(result_671,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result460__;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value925 = (void*)0;
struct sNode* node_672;
int sline_real_673;
struct sNode* value1_674;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value930 = (void*)0;
struct sNode* __dec_obj544;
_Bool no_label_676;
void* __right_value931 = (void*)0;
struct sNode* __dec_obj545;
void* __right_value932 = (void*)0;
struct sNode* value2_677;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value940 = (void*)0;
struct sNode* __result467__;
struct sNode* __result468__;
value1_674 = (void*)0;
    parse_sharp_v5(info);
    node_672=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==63) {
            info->p++;
            sline_real_673=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2292, "struct sNode");
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value927=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2292, "sNullNode")),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj544=value1_674;
                value1_674=(struct sNode*)come_increment_ref_count(_inf_value44);
                if(__dec_obj544) { __dec_obj544 = come_decrement_ref_count2(__dec_obj544, ((struct sNode*)__dec_obj544)->finalize, ((struct sNode*)__dec_obj544)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value927,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                no_label_676=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj545=value1_674;
                value1_674=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                if(__dec_obj545) { __dec_obj545 = come_decrement_ref_count2(__dec_obj545, ((struct sNode*)__dec_obj545)->finalize, ((struct sNode*)__dec_obj545)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_label=no_label_676;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_677=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_673;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2310, "struct sNode");
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value934=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2310, "sConditionalNode")),(struct sNode*)come_increment_ref_count(node_672),(struct sNode*)come_increment_ref_count(value1_674),(struct sNode*)come_increment_ref_count(value2_677),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result467__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value940=_inf_value45));
            if(value1_674) { value1_674 = come_decrement_ref_count2(value1_674, ((struct sNode*)value1_674)->finalize, ((struct sNode*)value1_674)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_677) { value2_677 = come_decrement_ref_count2(value2_677, ((struct sNode*)value2_677)->finalize, ((struct sNode*)value2_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_672) { node_672 = come_decrement_ref_count2(node_672, ((struct sNode*)node_672)->finalize, ((struct sNode*)node_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value934,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value940) { __right_value940 = come_decrement_ref_count2(__right_value940, ((struct sNode*)__right_value940)->finalize, ((struct sNode*)__right_value940)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result467__;
            if(value1_674) { value1_674 = come_decrement_ref_count2(value1_674, ((struct sNode*)value1_674)->finalize, ((struct sNode*)value1_674)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_677) { value2_677 = come_decrement_ref_count2(value2_677, ((struct sNode*)value2_677)->finalize, ((struct sNode*)value2_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result468__ = gComeFunResultObject = __result_obj__ = node_672;
    if(node_672) { node_672 = come_decrement_ref_count2(node_672, ((struct sNode*)node_672)->finalize, ((struct sNode*)node_672)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result468__;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
char* __dec_obj546;
struct sNode* __dec_obj547;
struct sNode* __dec_obj548;
struct sNode* __dec_obj549;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj546=self->sname;
            __dec_obj546 = come_decrement_ref_count2(__dec_obj546, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        if(        self->mValue1==gComeFunResultObject) {
            __dec_obj547=self->mValue1;
            if(__dec_obj547) { __dec_obj547 = come_decrement_ref_count2(__dec_obj547, ((struct sNode*)__dec_obj547)->finalize, ((struct sNode*)__dec_obj547)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        if(        self->mValue2==gComeFunResultObject) {
            __dec_obj548=self->mValue2;
            if(__dec_obj548) { __dec_obj548 = come_decrement_ref_count2(__dec_obj548, ((struct sNode*)__dec_obj548)->finalize, ((struct sNode*)__dec_obj548)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        if(        self->mValue3==gComeFunResultObject) {
            __dec_obj549=self->mValue3;
            if(__dec_obj549) { __dec_obj549 = come_decrement_ref_count2(__dec_obj549, ((struct sNode*)__dec_obj549)->finalize, ((struct sNode*)__dec_obj549)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
struct sConditionalNode* __result465__;
void* __right_value935 = (void*)0;
struct sConditionalNode* result_678;
void* __right_value936 = (void*)0;
char* __dec_obj550;
void* __right_value937 = (void*)0;
struct sNode* __dec_obj551;
void* __right_value938 = (void*)0;
struct sNode* __dec_obj552;
void* __right_value939 = (void*)0;
struct sNode* __dec_obj553;
struct sConditionalNode* __result466__;
    if(    self==(void*)0) {
        __result465__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result465__;
    }
    result_678=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"));
    if(    self!=((void*)0)) {
        result_678->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj550=result_678->sname;
        result_678->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj550 = come_decrement_ref_count2(__dec_obj550, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_678->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj551=result_678->mValue1;
        result_678->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1));
        if(__dec_obj551) { __dec_obj551 = come_decrement_ref_count2(__dec_obj551, ((struct sNode*)__dec_obj551)->finalize, ((struct sNode*)__dec_obj551)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj552=result_678->mValue2;
        result_678->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2));
        if(__dec_obj552) { __dec_obj552 = come_decrement_ref_count2(__dec_obj552, ((struct sNode*)__dec_obj552)->finalize, ((struct sNode*)__dec_obj552)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj553=result_678->mValue3;
        result_678->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3));
        if(__dec_obj553) { __dec_obj553 = come_decrement_ref_count2(__dec_obj553, ((struct sNode*)__dec_obj553)->finalize, ((struct sNode*)__dec_obj553)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result466__ = gComeFunResultObject = __result_obj__ = result_678;
    come_call_finalizer3(result_678,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value941 = (void*)0;
struct sNode* node_679;
struct sNode* __result469__;
    parse_sharp_v5(info);
    node_679=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result469__ = gComeFunResultObject = __result_obj__ = node_679;
    if(node_679) { node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result469__;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value946 = (void*)0;
struct sNode* __result472__;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value951 = (void*)0;
struct sNode* __result475__;
void* __right_value952 = (void*)0;
struct sNode* __result476__;
    if(    !gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2334, "struct sNode");
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value943=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2334, "sNullNode")),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result472__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value946=_inf_value46));
        come_call_finalizer3(__right_value943,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value946) { __right_value946 = come_decrement_ref_count2(__right_value946, ((struct sNode*)__right_value946)->finalize, ((struct sNode*)__right_value946)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result472__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")) {
        _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2337, "struct sNode");
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value948=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2337, "sNilNode")),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sline_real=(void*)sNodeBase_sline_real;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result475__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value951=_inf_value47));
        come_call_finalizer3(__right_value948,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value951) { __right_value951 = come_decrement_ref_count2(__right_value951, ((struct sNode*)__right_value951)->finalize, ((struct sNode*)__right_value951)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result475__;
    }
    __result476__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value952=string_node_v12(buf,head,head_sline,info)));
    if(__right_value952) { __right_value952 = come_decrement_ref_count2(__right_value952, ((struct sNode*)__right_value952)->finalize, ((struct sNode*)__right_value952)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result476__;
}

static void sNullNode_finalize(struct sNullNode* self){
char* __dec_obj554;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj554=self->sname;
            __dec_obj554 = come_decrement_ref_count2(__dec_obj554, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__=(void*)0;
struct sNullNode* __result470__;
void* __right_value944 = (void*)0;
struct sNullNode* result_680;
void* __right_value945 = (void*)0;
char* __dec_obj555;
struct sNullNode* __result471__;
    if(    self==(void*)0) {
        __result470__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result470__;
    }
    result_680=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"));
    if(    self!=((void*)0)) {
        result_680->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj555=result_680->sname;
        result_680->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj555 = come_decrement_ref_count2(__dec_obj555, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_680->sline_real=self->sline_real;
    }
    __result471__ = gComeFunResultObject = __result_obj__ = result_680;
    come_call_finalizer3(result_680,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result471__;
}

static void sNilNode_finalize(struct sNilNode* self){
char* __dec_obj556;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj556=self->sname;
            __dec_obj556 = come_decrement_ref_count2(__dec_obj556, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__=(void*)0;
struct sNilNode* __result473__;
void* __right_value949 = (void*)0;
struct sNilNode* result_681;
void* __right_value950 = (void*)0;
char* __dec_obj557;
struct sNilNode* __result474__;
    if(    self==(void*)0) {
        __result473__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result473__;
    }
    result_681=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"));
    if(    self!=((void*)0)) {
        result_681->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj557=result_681->sname;
        result_681->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj557 = come_decrement_ref_count2(__dec_obj557, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_681->sline_real=self->sline_real;
    }
    __result474__ = gComeFunResultObject = __result_obj__ = result_681;
    come_call_finalizer3(result_681,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result474__;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value959 = (void*)0;
struct sNode* __result479__;
    _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2345, "struct sNode");
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value954=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2345, "sLtNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sline_real=(void*)sNodeBase_sline_real;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result479__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value959=_inf_value48));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value954,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value959) { __right_value959 = come_decrement_ref_count2(__right_value959, ((struct sNode*)__right_value959)->finalize, ((struct sNode*)__right_value959)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result479__;
}

static void sLtNode_finalize(struct sLtNode* self){
char* __dec_obj558;
struct sNode* __dec_obj559;
struct sNode* __dec_obj560;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj558=self->sname;
            __dec_obj558 = come_decrement_ref_count2(__dec_obj558, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj559=self->mLeft;
            if(__dec_obj559) { __dec_obj559 = come_decrement_ref_count2(__dec_obj559, ((struct sNode*)__dec_obj559)->finalize, ((struct sNode*)__dec_obj559)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj560=self->mRight;
            if(__dec_obj560) { __dec_obj560 = come_decrement_ref_count2(__dec_obj560, ((struct sNode*)__dec_obj560)->finalize, ((struct sNode*)__dec_obj560)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__=(void*)0;
struct sLtNode* __result477__;
void* __right_value955 = (void*)0;
struct sLtNode* result_682;
void* __right_value956 = (void*)0;
char* __dec_obj561;
void* __right_value957 = (void*)0;
struct sNode* __dec_obj562;
void* __right_value958 = (void*)0;
struct sNode* __dec_obj563;
struct sLtNode* __result478__;
    if(    self==(void*)0) {
        __result477__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result477__;
    }
    result_682=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"));
    if(    self!=((void*)0)) {
        result_682->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj561=result_682->sname;
        result_682->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj561 = come_decrement_ref_count2(__dec_obj561, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_682->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_682->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj562=result_682->mLeft;
        result_682->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj562) { __dec_obj562 = come_decrement_ref_count2(__dec_obj562, ((struct sNode*)__dec_obj562)->finalize, ((struct sNode*)__dec_obj562)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj563=result_682->mRight;
        result_682->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj563) { __dec_obj563 = come_decrement_ref_count2(__dec_obj563, ((struct sNode*)__dec_obj563)->finalize, ((struct sNode*)__dec_obj563)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result478__ = gComeFunResultObject = __result_obj__ = result_682;
    come_call_finalizer3(result_682,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result478__;
}

