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
    struct sType* mTypeCheckingAnyOriginalType;
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

struct sPlusPlusNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sMinusMinusNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sPlusEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMinusEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sMultEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShifEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXorEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sExpEqualNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
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
struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);
char* sPlusPlusNode_kind(struct sPlusPlusNode* self);
_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
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
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);
char* sMinusMinusNode_kind(struct sMinusMinusNode* self);
_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);
static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sPlusEqualNode_kind(struct sPlusEqualNode* self);
_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);
static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMinusEqualNode_kind(struct sMinusEqualNode* self);
_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);
static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultEqualNode_kind(struct sMultEqualNode* self);
_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);
static void sMultEqualNode_finalize(struct sMultEqualNode* self);
struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivEqualNode_kind(struct sDivEqualNode* self);
_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);
static void sDivEqualNode_finalize(struct sDivEqualNode* self);
struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModEqualNode_kind(struct sModEqualNode* self);
_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);
static void sModEqualNode_finalize(struct sModEqualNode* self);
struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShifEqualNode_kind(struct sLShifEqualNode* self);
_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);
static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self);
_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);
static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXorEqualNode_kind(struct sXorEqualNode* self);
_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);
static void sXorEqualNode_finalize(struct sXorEqualNode* self);
struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrEqualNode_kind(struct sOrEqualNode* self);
_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);
static void sOrEqualNode_finalize(struct sOrEqualNode* self);
struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndEqualNode_kind(struct sAndEqualNode* self);
_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);
static void sAndEqualNode_finalize(struct sAndEqualNode* self);
struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sExpEqualNode_kind(struct sExpEqualNode* self);
_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info);
static void sExpEqualNode_finalize(struct sExpEqualNode* self);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value254 = (void*)0;
struct sNode* __dec_obj32;
struct sPlusPlusNode* __result232__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result232__;
}

char* sPlusPlusNode_kind(struct sPlusPlusNode* self){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
char* __result233__;
    __result233__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value255=__builtin_string("sPlusPlusNode")));
    __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
struct sNode* left_318;
_Bool Value_319;
void* __right_value256 = (void*)0;
struct CVALUE* left_value_320;
struct sType* type_321;
char* fun_name_322;
_Bool calling_fun_323;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct CVALUE* come_value_324;
void* __right_value259 = (void*)0;
char* __dec_obj35;
void* __right_value297 = (void*)0;
struct sType* __dec_obj83;
_Bool __result248__;
memset(&calling_fun_323, 0, sizeof(_Bool));
    left_318=self->mLeft;
    Value_319=node_compile(left_318,info);
    if(    !Value_319) {
        return (_Bool)0;
    }
    else {
    }
    left_value_320=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_321=(struct sType*)come_increment_ref_count(left_value_320->type);
    fun_name_322="operator_plus_plus";
    if(    self->mQuote) {
        calling_fun_323=(_Bool)0;
    }
    else {
        calling_fun_323=operator_overload_fun_self(type_321,fun_name_322,left_value_320,info);
    }
    if(    !calling_fun_323) {
        come_value_324=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 42, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj35=come_value_324->c_value;
        come_value_324->c_value=(char*)come_increment_ref_count(xsprintf("%s++",left_value_320->c_value));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj83=come_value_324->type;
        come_value_324->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_320->type));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_324->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_324));
        add_come_last_code(info,"%s",come_value_324->c_value);
        come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result248__ = (_Bool)1;
    come_call_finalizer3(left_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result248__;
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
struct sNode* __result230__;
void* __right_value253 = (void*)0;
struct sNode* result_317;
struct sNode* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_317=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_317->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_317->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_317->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_317->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_317->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_317->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_317->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_317->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_317->kind=self->kind;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_317;
    if(result_317) { result_317 = come_decrement_ref_count2(result_317, ((struct sNode*)result_317)->finalize, ((struct sNode*)result_317)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
char* __dec_obj33;
struct sNode* __dec_obj34;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj34=self->mLeft;
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result234__;
void* __right_value260 = (void*)0;
struct sType* result_342;
void* __right_value261 = (void*)0;
struct sType* __dec_obj56;
void* __right_value262 = (void*)0;
struct sType* __dec_obj57;
void* __right_value263 = (void*)0;
struct sType* __dec_obj58;
void* __right_value264 = (void*)0;
struct sType* __dec_obj59;
void* __right_value265 = (void*)0;
char* __dec_obj60;
void* __right_value266 = (void*)0;
char* __dec_obj61;
void* __right_value273 = (void*)0;
struct list$1voidph* __dec_obj65;
void* __right_value280 = (void*)0;
struct list$1sNodeph* __dec_obj69;
void* __right_value281 = (void*)0;
struct list$1voidph* __dec_obj70;
void* __right_value288 = (void*)0;
struct list$1charph* __dec_obj74;
void* __right_value289 = (void*)0;
struct sType* __dec_obj75;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value291 = (void*)0;
struct sType* __dec_obj77;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value293 = (void*)0;
char* __dec_obj79;
void* __right_value294 = (void*)0;
char* __dec_obj80;
void* __right_value295 = (void*)0;
char* __dec_obj81;
void* __right_value296 = (void*)0;
char* __dec_obj82;
struct sType* __result246__;
    if(    self==(void*)0) {
        __result234__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_342=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_342->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_342->mNoSolvedGenericsType;
        result_342->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj57=result_342->mOriginalLoadVarType;
        result_342->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj58=result_342->mAnyOriginalType;
        result_342->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTypeCheckingAnyOriginalType!=((void*)0)) {
        __dec_obj59=result_342->mTypeCheckingAnyOriginalType;
        result_342->mTypeCheckingAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mTypeCheckingAnyOriginalType));
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj60=result_342->mInterfaceName;
        result_342->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj61=result_342->mGenericsName;
        result_342->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj65=result_342->mGenericsTypes;
        result_342->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj65,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj69=result_342->mArrayNum;
        result_342->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj69,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj70=result_342->mParamTypes;
        result_342->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj70,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj74=result_342->mParamNames;
        result_342->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj75=result_342->mResultType;
        result_342->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj76=result_342->mAlignas;
        result_342->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj77=result_342->mChannelType;
        result_342->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_342->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_342->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_342->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_342->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_342->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_342->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_342->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_342->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_342->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_342->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_342->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_342->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_342->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_342->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_342->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_342->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_342->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_342->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_342->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_342->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_342->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_342->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_342->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj78=result_342->mSizeNum;
        result_342->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_342->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj79=result_342->mOriginalTypeName;
        result_342->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_342->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_342->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_342->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_342->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_342->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_342->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_342->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj80=result_342->mAsmName;
        result_342->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_342->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_342->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_342->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_342->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_342->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj81=result_342->mTupleName;
        result_342->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj82=result_342->mAttribute;
        result_342->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_342->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_342->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_342->mDynamic=self->mDynamic;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_342;
    come_call_finalizer3(result_342,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
struct list$1voidph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1voidph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct sType* __dec_obj48;
struct sNode* __dec_obj49;
struct sType* __dec_obj50;
struct sNode* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj36=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj38=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTypeCheckingAnyOriginalType!=((void*)0)) {
        if(        self->mTypeCheckingAnyOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mTypeCheckingAnyOriginalType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mTypeCheckingAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj40=self->mInterfaceName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj41=self->mGenericsName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj42=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj44=self->mArrayNum;
            come_call_finalizer3(__dec_obj44,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj46=self->mParamTypes;
            come_call_finalizer3(__dec_obj46,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj47=self->mParamNames;
            come_call_finalizer3(__dec_obj47,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj48=self->mResultType;
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj49=self->mAlignas;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj50=self->mChannelType;
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj51=self->mSizeNum;
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj52=self->mOriginalTypeName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj53=self->mAsmName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj54=self->mTupleName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj55=self->mAttribute;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_325;
struct list_item$1voidph* prev_it_326;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        come_call_finalizer3(prev_it_326,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            come_call_finalizer3(__dec_obj43,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_327;
struct list_item$1voidph* prev_it_328;
    it_327=self->head;
    while(it_327!=((void*)0)) {
        prev_it_328=it_327;
        it_327=it_327->next;
        come_call_finalizer3(prev_it_328,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_329;
struct list_item$1sNodeph* prev_it_330;
    it_329=self->head;
    while(it_329!=((void*)0)) {
        prev_it_330=it_329;
        it_329=it_329->next;
        come_call_finalizer3(prev_it_330,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_331;
struct list_item$1sNodeph* prev_it_332;
    it_331=self->head;
    while(it_331!=((void*)0)) {
        prev_it_332=it_331;
        it_331=it_331->next;
        come_call_finalizer3(prev_it_332,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_333;
struct list_item$1charph* prev_it_334;
    it_333=self->head;
    while(it_333!=((void*)0)) {
        prev_it_334=it_333;
        it_333=it_333->next;
        come_call_finalizer3(prev_it_334,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_335;
    result_335=0;
    result_335+=int_get_hash_key(((int)self->mClass));
    result_335+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_335+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_335+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_335+=int_get_hash_key(((int)self->mTypeCheckingAnyOriginalType));
    result_335+=int_get_hash_key(((int)self->mAnyClass));
    result_335+=int_get_hash_key(((int)self->mInterfaceName));
    result_335+=int_get_hash_key(((int)self->mGenericsName));
    result_335+=int_get_hash_key(((int)self->mGenericsTypes));
    result_335+=int_get_hash_key(((int)self->mArrayNum));
    result_335+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_335+=int_get_hash_key(((int)self->mParamTypes));
    result_335+=int_get_hash_key(((int)self->mParamNames));
    result_335+=int_get_hash_key(((int)self->mResultType));
    result_335+=int_get_hash_key(((int)self->mVarArgs));
    result_335+=int_get_hash_key(((int)self->mAlignas));
    result_335+=int_get_hash_key(((int)self->mChannelType));
    result_335+=int_get_hash_key(((int)self->mUnsigned));
    result_335+=int_get_hash_key(((int)self->mShort));
    result_335+=int_get_hash_key(((int)self->mLong));
    result_335+=int_get_hash_key(((int)self->mLongLong));
    result_335+=int_get_hash_key(((int)self->mConstant));
    result_335+=int_get_hash_key(((int)self->mAtomic));
    result_335+=int_get_hash_key(((int)self->mRegister));
    result_335+=int_get_hash_key(((int)self->mVolatile));
    result_335+=int_get_hash_key(((int)self->mStatic));
    result_335+=int_get_hash_key(((int)self->mUniq));
    result_335+=int_get_hash_key(((int)self->mRecord));
    result_335+=int_get_hash_key(((int)self->mExtern));
    result_335+=int_get_hash_key(((int)self->mRestrict));
    result_335+=int_get_hash_key(((int)self->mImmutable));
    result_335+=int_get_hash_key(((int)self->mHeap));
    result_335+=int_get_hash_key(((int)self->mChannel));
    result_335+=int_get_hash_key(((int)self->mNoHeap));
    result_335+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_335+=int_get_hash_key(((int)self->mException));
    result_335+=int_get_hash_key(((int)self->mPointerNum));
    result_335+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_335+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_335+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_335+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_335+=int_get_hash_key(((int)self->mSizeNum));
    result_335+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_335+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_335+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_335+=int_get_hash_key(((int)self->mFunctionParam));
    result_335+=int_get_hash_key(((int)self->mAllocaValue));
    result_335+=int_get_hash_key(((int)self->mGenericsStruct));
    result_335+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_335+=int_get_hash_key(((int)self->mInline));
    result_335+=int_get_hash_key(((int)self->mNullValue));
    result_335+=int_get_hash_key(((int)self->mGuardValue));
    result_335+=int_get_hash_key(((int)self->mAsmName));
    result_335+=int_get_hash_key(((int)self->mArrayPointerType));
    result_335+=int_get_hash_key(((int)self->mLambdaArray));
    result_335+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_335+=int_get_hash_key(((int)self->mTypedef));
    result_335+=int_get_hash_key(((int)self->mMultipleTypes));
    result_335+=int_get_hash_key(((int)self->mOriginIsArray));
    result_335+=int_get_hash_key(((int)self->mTupleName));
    result_335+=int_get_hash_key(((int)self->mAttribute));
    result_335+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_335+=int_get_hash_key(((int)self->mGenerate));
    result_335+=int_get_hash_key(((int)self->mCreateVTable));
    result_335+=int_get_hash_key(((int)self->mDynamic));
    return result_335;
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
    if(    !sType_equals(left->mTypeCheckingAnyOriginalType,right->mTypeCheckingAnyOriginalType)) {
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
struct list_item$1voidph* it_336;
struct list_item$1voidph* it2_337;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_336=left->head;
    it2_337=right->head;
    while(it_336!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_336->item, it2_337->item)) {
            return (_Bool)0;
        }
        it_336=it_336->next;
        it2_337=it2_337->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_338;
struct list_item$1sNodeph* it2_339;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_338=left->head;
    it2_339=right->head;
    while(it_338!=((void*)0)) {
        if(        !sNode_equals(it_338->item,it2_339->item)) {
            return (_Bool)0;
        }
        it_338=it_338->next;
        it2_339=it2_339->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_340;
struct list_item$1charph* it2_341;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_340=left->head;
    it2_341=right->head;
    while(it_340!=((void*)0)) {
        if(        !string_equals(it_340->item,it2_341->item)) {
            return (_Bool)0;
        }
        it_340=it_340->next;
        it2_341=it2_341->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result235__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1voidph* result_344;
struct list_item$1voidph* it_345;
void* __right_value272 = (void*)0;
struct list$1voidph* __result238__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_344=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_345=self->head;
    while(it_345!=((void*)0)) {
        list$1voidphp_add(result_344,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_345->item)));
        it_345=it_345->next;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_344;
    come_call_finalizer3(result_344,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_343;
    result_343=0;
    result_343+=int_get_hash_key(((int)self->head));
    result_343+=int_get_hash_key(((int)self->tail));
    result_343+=int_get_hash_key(((int)self->len));
    result_343+=int_get_hash_key(((int)self->it));
    return result_343;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result236__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1voidph* litem_346;
void* __dec_obj62;
void* __right_value270 = (void*)0;
struct list_item$1voidph* litem_347;
void* __dec_obj63;
void* __right_value271 = (void*)0;
struct list_item$1voidph* litem_348;
void* __dec_obj64;
struct list$1voidph* __result237__;
    if(    self->len==0) {
        litem_346=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value269=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=((void*)0);
        litem_346->next=((void*)0);
        __dec_obj62=litem_346->item;
        litem_346->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_346;
        self->head=litem_346;
    }
    else if(    self->len==1) {
        litem_347=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value270=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_347->prev=self->head;
        litem_347->next=((void*)0);
        __dec_obj63=litem_347->item;
        litem_347->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_347;
        self->head->next=litem_347;
    }
    else {
        litem_348=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value271=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_348->prev=self->tail;
        litem_348->next=((void*)0);
        __dec_obj64=litem_348->item;
        litem_348->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_348;
        self->tail=litem_348;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result239__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sNodeph* result_349;
struct list_item$1sNodeph* it_350;
void* __right_value279 = (void*)0;
struct list$1sNodeph* __result242__;
    if(    self==((void*)0)) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_349=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_350=self->head;
    while(it_350!=((void*)0)) {
        list$1sNodephp_add(result_349,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_350->item)));
        it_350=it_350->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_349;
    come_call_finalizer3(result_349,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result240__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_351;
struct sNode* __dec_obj66;
void* __right_value277 = (void*)0;
struct list_item$1sNodeph* litem_352;
struct sNode* __dec_obj67;
void* __right_value278 = (void*)0;
struct list_item$1sNodeph* litem_353;
struct sNode* __dec_obj68;
struct list$1sNodeph* __result241__;
    if(    self->len==0) {
        litem_351=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=((void*)0);
        litem_351->next=((void*)0);
        __dec_obj66=litem_351->item;
        litem_351->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_351;
        self->head=litem_351;
    }
    else if(    self->len==1) {
        litem_352=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value277=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=self->head;
        litem_352->next=((void*)0);
        __dec_obj67=litem_352->item;
        litem_352->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_352;
        self->head->next=litem_352;
    }
    else {
        litem_353=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value278=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_353->prev=self->tail;
        litem_353->next=((void*)0);
        __dec_obj68=litem_353->item;
        litem_353->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_353;
        self->tail=litem_353;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result243__;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1charph* result_354;
struct list_item$1charph* it_355;
void* __right_value287 = (void*)0;
struct list$1charph* __result245__;
    if(    self==((void*)0)) {
        __result243__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_354=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_355=self->head;
    while(it_355!=((void*)0)) {
        list$1charphp_add(result_354,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_355->item)));
        it_355=it_355->next;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_354;
    come_call_finalizer3(result_354,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_356;
char* __dec_obj71;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_357;
char* __dec_obj72;
void* __right_value286 = (void*)0;
struct list_item$1charph* litem_358;
char* __dec_obj73;
struct list$1charph* __result244__;
    if(    self->len==0) {
        litem_356=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_356->prev=((void*)0);
        litem_356->next=((void*)0);
        __dec_obj71=litem_356->item;
        litem_356->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_356;
        self->head=litem_356;
    }
    else if(    self->len==1) {
        litem_357=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=self->head;
        litem_357->next=((void*)0);
        __dec_obj72=litem_357->item;
        litem_357->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_357;
        self->head->next=litem_357;
    }
    else {
        litem_358=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value286=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->tail;
        litem_358->next=((void*)0);
        __dec_obj73=litem_358->item;
        litem_358->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_358;
        self->tail=litem_358;
    }
    self->len++;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct list_item$1CVALUEph* litem_359;
struct CVALUE* __dec_obj84;
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_360;
struct CVALUE* __dec_obj89;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_361;
struct CVALUE* __dec_obj90;
struct list$1CVALUEph* __result247__;
    if(    self->len==0) {
        litem_359=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value298=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=((void*)0);
        litem_359->next=((void*)0);
        __dec_obj84=litem_359->item;
        litem_359->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_359;
        self->head=litem_359;
    }
    else if(    self->len==1) {
        litem_360=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=self->head;
        litem_360->next=((void*)0);
        __dec_obj89=litem_360->item;
        litem_360->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_360;
        self->head->next=litem_360;
    }
    else {
        litem_361=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=self->tail;
        litem_361->next=((void*)0);
        __dec_obj90=litem_361->item;
        litem_361->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_361;
        self->tail=litem_361;
    }
    self->len++;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj85;
struct sType* __dec_obj86;
char* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj85=self->c_value;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj87=self->c_value_without_right_value_objects;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj88=self->c_value_without_cast_object_value;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sNode* __dec_obj91;
struct sMinusMinusNode* __result249__;
    ((struct sNodeBase*)(__right_value301=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value301,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj91=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result249__;
}

char* sMinusMinusNode_kind(struct sMinusMinusNode* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result250__;
    __result250__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sMinusMinusNode")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
struct sNode* left_362;
_Bool Value_363;
void* __right_value304 = (void*)0;
struct CVALUE* left_value_364;
struct sType* type_365;
char* fun_name_366;
_Bool calling_fun_367;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_368;
void* __right_value307 = (void*)0;
char* __dec_obj94;
void* __right_value308 = (void*)0;
struct sType* __dec_obj95;
_Bool __result251__;
memset(&calling_fun_367, 0, sizeof(_Bool));
    left_362=self->mLeft;
    Value_363=node_compile(left_362,info);
    if(    !Value_363) {
        return (_Bool)0;
    }
    else {
    }
    left_value_364=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_365=(struct sType*)come_increment_ref_count(left_value_364->type);
    fun_name_366="operator_minus_minus";
    if(    self->mQuote) {
        calling_fun_367=(_Bool)0;
    }
    else {
        calling_fun_367=operator_overload_fun_self(type_365,fun_name_366,left_value_364,info);
    }
    if(    !calling_fun_367) {
        come_value_368=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 96, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj94=come_value_368->c_value;
        come_value_368->c_value=(char*)come_increment_ref_count(xsprintf("%s--",left_value_364->c_value));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj95=come_value_368->type;
        come_value_368->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_364->type));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_368->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_368));
        add_come_last_code(info,"%s",come_value_368->c_value);
        come_call_finalizer3(come_value_368,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result251__ = (_Bool)1;
    come_call_finalizer3(left_value_364,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_365,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result251__;
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
char* __dec_obj92;
struct sNode* __dec_obj93;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj92=self->sname;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj93=self->mLeft;
            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sNode* __dec_obj96;
void* __right_value311 = (void*)0;
struct sNode* __dec_obj97;
struct sPlusEqualNode* __result252__;
    ((struct sNodeBase*)(__right_value309=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value309,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj96=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj97=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result252__;
}

char* sPlusEqualNode_kind(struct sPlusEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
char* __result253__;
    __result253__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value312=__builtin_string("sPlusEqualNode")));
    __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
struct sNode* left_369;
_Bool Value_370;
void* __right_value313 = (void*)0;
struct CVALUE* left_value_371;
struct sNode* right_372;
_Bool Value_373;
_Bool __result254__;
void* __right_value314 = (void*)0;
struct CVALUE* right_value_374;
struct sType* type_375;
char* fun_name_376;
_Bool calling_fun_377;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct CVALUE* come_value_378;
void* __right_value317 = (void*)0;
char* __dec_obj101;
void* __right_value318 = (void*)0;
struct sType* __dec_obj102;
_Bool __result255__;
memset(&calling_fun_377, 0, sizeof(_Bool));
    left_369=self->mLeft;
    Value_370=node_compile(left_369,info);
    if(    !Value_370) {
        return (_Bool)0;
    }
    else {
    }
    left_value_371=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_372=self->mRight;
    Value_373=node_compile(right_372,info);
    if(    !Value_373) {
        __result254__ = (_Bool)0;
        come_call_finalizer3(left_value_371,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result254__;
    }
    else {
    }
    right_value_374=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_375=(struct sType*)come_increment_ref_count(left_value_371->type);
    fun_name_376="operator_plus_equal";
    if(    self->mQuote) {
        calling_fun_377=(_Bool)0;
    }
    else {
        calling_fun_377=operator_overload_fun(type_375,fun_name_376,left_value_371,right_value_374,(_Bool)0,info);
    }
    if(    !calling_fun_377) {
        come_value_378=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 159, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj101=come_value_378->c_value;
        come_value_378->c_value=(char*)come_increment_ref_count(xsprintf("%s+=%s",left_value_371->c_value,right_value_374->c_value));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj102=come_value_378->type;
        come_value_378->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_371->type));
        come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_378->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_378));
        add_come_last_code(info,"%s",come_value_378->c_value);
        come_call_finalizer3(come_value_378,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result255__ = (_Bool)1;
    come_call_finalizer3(left_value_371,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_374,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_375,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result255__;
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
char* __dec_obj98;
struct sNode* __dec_obj99;
struct sNode* __dec_obj100;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj98=self->sname;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj99=self->mLeft;
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj100=self->mRight;
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sNode* __dec_obj103;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj104;
struct sMinusEqualNode* __result256__;
    ((struct sNodeBase*)(__right_value319=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value319,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj103=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj104=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); };
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result256__;
}

char* sMinusEqualNode_kind(struct sMinusEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
char* __result257__;
    __result257__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value322=__builtin_string("sPlusEqualNode")));
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
struct sNode* left_379;
_Bool Value_380;
void* __right_value323 = (void*)0;
struct CVALUE* left_value_381;
struct sNode* right_382;
_Bool Value_383;
_Bool __result258__;
void* __right_value324 = (void*)0;
struct CVALUE* right_value_384;
struct sType* type_385;
char* fun_name_386;
_Bool calling_fun_387;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct CVALUE* come_value_388;
void* __right_value327 = (void*)0;
char* __dec_obj108;
void* __right_value328 = (void*)0;
struct sType* __dec_obj109;
_Bool __result259__;
memset(&calling_fun_387, 0, sizeof(_Bool));
    left_379=self->mLeft;
    Value_380=node_compile(left_379,info);
    if(    !Value_380) {
        return (_Bool)0;
    }
    else {
    }
    left_value_381=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_382=self->mRight;
    Value_383=node_compile(right_382,info);
    if(    !Value_383) {
        __result258__ = (_Bool)0;
        come_call_finalizer3(left_value_381,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result258__;
    }
    else {
    }
    right_value_384=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_385=(struct sType*)come_increment_ref_count(left_value_381->type);
    fun_name_386="operator_minus_equal";
    if(    self->mQuote) {
        calling_fun_387=(_Bool)0;
    }
    else {
        calling_fun_387=operator_overload_fun(type_385,fun_name_386,left_value_381,right_value_384,(_Bool)0,info);
    }
    if(    !calling_fun_387) {
        come_value_388=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 223, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj108=come_value_388->c_value;
        come_value_388->c_value=(char*)come_increment_ref_count(xsprintf("%s-=%s",left_value_381->c_value,right_value_384->c_value));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj109=come_value_388->type;
        come_value_388->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_381->type));
        come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_388->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_388));
        add_come_last_code(info,"%s",come_value_388->c_value);
        come_call_finalizer3(come_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result259__ = (_Bool)1;
    come_call_finalizer3(left_value_381,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result259__;
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
char* __dec_obj105;
struct sNode* __dec_obj106;
struct sNode* __dec_obj107;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj105=self->sname;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj106=self->mLeft;
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj107=self->mRight;
            if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sNode* __dec_obj110;
void* __right_value331 = (void*)0;
struct sNode* __dec_obj111;
struct sMultEqualNode* __result260__;
    ((struct sNodeBase*)(__right_value329=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value329,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj110=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj111=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); };
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result260__;
}

char* sMultEqualNode_kind(struct sMultEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value332 = (void*)0;
char* __result261__;
    __result261__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value332=__builtin_string("sMultEqualNode")));
    __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
struct sNode* left_389;
_Bool Value_390;
void* __right_value333 = (void*)0;
struct CVALUE* left_value_391;
struct sNode* right_392;
_Bool Value_393;
_Bool __result262__;
void* __right_value334 = (void*)0;
struct CVALUE* right_value_394;
struct sType* type_395;
char* fun_name_396;
_Bool calling_fun_397;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value337 = (void*)0;
char* __dec_obj115;
void* __right_value338 = (void*)0;
struct sType* __dec_obj116;
_Bool __result263__;
memset(&calling_fun_397, 0, sizeof(_Bool));
    left_389=self->mLeft;
    Value_390=node_compile(left_389,info);
    if(    !Value_390) {
        return (_Bool)0;
    }
    else {
    }
    left_value_391=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_392=self->mRight;
    Value_393=node_compile(right_392,info);
    if(    !Value_393) {
        __result262__ = (_Bool)0;
        come_call_finalizer3(left_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result262__;
    }
    else {
    }
    right_value_394=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_395=(struct sType*)come_increment_ref_count(left_value_391->type);
    fun_name_396="operator_mult_equal";
    if(    self->mQuote) {
        calling_fun_397=(_Bool)0;
    }
    else {
        calling_fun_397=operator_overload_fun(type_395,fun_name_396,left_value_391,right_value_394,(_Bool)0,info);
    }
    if(    !calling_fun_397) {
        come_value_398=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 287, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj115=come_value_398->c_value;
        come_value_398->c_value=(char*)come_increment_ref_count(xsprintf("%s*=%s",left_value_391->c_value,right_value_394->c_value));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj116=come_value_398->type;
        come_value_398->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_391->type));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_398->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_398));
        add_come_last_code(info,"%s",come_value_398->c_value);
        come_call_finalizer3(come_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result263__ = (_Bool)1;
    come_call_finalizer3(left_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_394,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_395,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result263__;
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
char* __dec_obj112;
struct sNode* __dec_obj113;
struct sNode* __dec_obj114;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj112=self->sname;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj113=self->mLeft;
            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj114=self->mRight;
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sNode* __dec_obj117;
void* __right_value341 = (void*)0;
struct sNode* __dec_obj118;
struct sDivEqualNode* __result264__;
    ((struct sNodeBase*)(__right_value339=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value339,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj117=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj118=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); };
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result264__;
}

char* sDivEqualNode_kind(struct sDivEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
char* __result265__;
    __result265__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value342=__builtin_string("sDivEqualNode")));
    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
struct sNode* left_399;
_Bool Value_400;
void* __right_value343 = (void*)0;
struct CVALUE* left_value_401;
struct sNode* right_402;
_Bool Value_403;
_Bool __result266__;
void* __right_value344 = (void*)0;
struct CVALUE* right_value_404;
struct sType* type_405;
char* fun_name_406;
_Bool calling_fun_407;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_408;
void* __right_value347 = (void*)0;
char* __dec_obj122;
void* __right_value348 = (void*)0;
struct sType* __dec_obj123;
_Bool __result267__;
memset(&calling_fun_407, 0, sizeof(_Bool));
    left_399=self->mLeft;
    Value_400=node_compile(left_399,info);
    if(    !Value_400) {
        return (_Bool)0;
    }
    else {
    }
    left_value_401=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_402=self->mRight;
    Value_403=node_compile(right_402,info);
    if(    !Value_403) {
        __result266__ = (_Bool)0;
        come_call_finalizer3(left_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result266__;
    }
    else {
    }
    right_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_405=(struct sType*)come_increment_ref_count(left_value_401->type);
    fun_name_406="operator_div_equal";
    if(    self->mQuote) {
        calling_fun_407=(_Bool)0;
    }
    else {
        calling_fun_407=operator_overload_fun(type_405,fun_name_406,left_value_401,right_value_404,(_Bool)0,info);
    }
    if(    !calling_fun_407) {
        come_value_408=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 351, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj122=come_value_408->c_value;
        come_value_408->c_value=(char*)come_increment_ref_count(xsprintf("%s/=%s",left_value_401->c_value,right_value_404->c_value));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj123=come_value_408->type;
        come_value_408->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_401->type));
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_408->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_408));
        add_come_last_code(info,"%s",come_value_408->c_value);
        come_call_finalizer3(come_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result267__ = (_Bool)1;
    come_call_finalizer3(left_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_405,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result267__;
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
char* __dec_obj119;
struct sNode* __dec_obj120;
struct sNode* __dec_obj121;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj119=self->sname;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj120=self->mLeft;
            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj121=self->mRight;
            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj124;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj125;
struct sModEqualNode* __result268__;
    ((struct sNodeBase*)(__right_value349=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value349,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj124=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj125=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result268__;
}

char* sModEqualNode_kind(struct sModEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
char* __result269__;
    __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value352=__builtin_string("sModEqualNode")));
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
struct sNode* left_409;
_Bool Value_410;
void* __right_value353 = (void*)0;
struct CVALUE* left_value_411;
struct sNode* right_412;
_Bool Value_413;
_Bool __result270__;
void* __right_value354 = (void*)0;
struct CVALUE* right_value_414;
struct sType* type_415;
char* fun_name_416;
_Bool calling_fun_417;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value357 = (void*)0;
char* __dec_obj129;
void* __right_value358 = (void*)0;
struct sType* __dec_obj130;
_Bool __result271__;
memset(&calling_fun_417, 0, sizeof(_Bool));
    left_409=self->mLeft;
    Value_410=node_compile(left_409,info);
    if(    !Value_410) {
        return (_Bool)0;
    }
    else {
    }
    left_value_411=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_412=self->mRight;
    Value_413=node_compile(right_412,info);
    if(    !Value_413) {
        __result270__ = (_Bool)0;
        come_call_finalizer3(left_value_411,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result270__;
    }
    else {
    }
    right_value_414=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_415=(struct sType*)come_increment_ref_count(left_value_411->type);
    fun_name_416="operator_mod_equal";
    if(    self->mQuote) {
        calling_fun_417=(_Bool)0;
    }
    else {
        calling_fun_417=operator_overload_fun(type_415,fun_name_416,left_value_411,right_value_414,(_Bool)0,info);
    }
    if(    !calling_fun_417) {
        come_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 415, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj129=come_value_418->c_value;
        come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("%s%%=%s",left_value_411->c_value,right_value_414->c_value));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj130=come_value_418->type;
        come_value_418->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_411->type));
        come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_418->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_418));
        add_come_last_code(info,"%s",come_value_418->c_value);
        come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result271__ = (_Bool)1;
    come_call_finalizer3(left_value_411,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_415,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result271__;
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
char* __dec_obj126;
struct sNode* __dec_obj127;
struct sNode* __dec_obj128;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj126=self->sname;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj127=self->mLeft;
            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj128=self->mRight;
            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value361 = (void*)0;
struct sNode* __dec_obj132;
struct sLShifEqualNode* __result272__;
    ((struct sNodeBase*)(__right_value359=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value359,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj131=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj132=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result272__;
}

char* sLShifEqualNode_kind(struct sLShifEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
char* __result273__;
    __result273__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value362=__builtin_string("sLShifEqualNode")));
    __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
struct sNode* left_419;
_Bool Value_420;
void* __right_value363 = (void*)0;
struct CVALUE* left_value_421;
struct sNode* right_422;
_Bool Value_423;
_Bool __result274__;
void* __right_value364 = (void*)0;
struct CVALUE* right_value_424;
struct sType* type_425;
char* fun_name_426;
_Bool calling_fun_427;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct CVALUE* come_value_428;
void* __right_value367 = (void*)0;
char* __dec_obj136;
void* __right_value368 = (void*)0;
struct sType* __dec_obj137;
_Bool __result275__;
memset(&calling_fun_427, 0, sizeof(_Bool));
    left_419=self->mLeft;
    Value_420=node_compile(left_419,info);
    if(    !Value_420) {
        return (_Bool)0;
    }
    else {
    }
    left_value_421=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_422=self->mRight;
    Value_423=node_compile(right_422,info);
    if(    !Value_423) {
        __result274__ = (_Bool)0;
        come_call_finalizer3(left_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result274__;
    }
    else {
    }
    right_value_424=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_425=(struct sType*)come_increment_ref_count(left_value_421->type);
    fun_name_426="operator_lshift_equal";
    if(    self->mQuote) {
        calling_fun_427=(_Bool)0;
    }
    else {
        calling_fun_427=operator_overload_fun(type_425,fun_name_426,left_value_421,right_value_424,(_Bool)0,info);
    }
    if(    !calling_fun_427) {
        come_value_428=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 479, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj136=come_value_428->c_value;
        come_value_428->c_value=(char*)come_increment_ref_count(xsprintf("%s<<=%s",left_value_421->c_value,right_value_424->c_value));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj137=come_value_428->type;
        come_value_428->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_421->type));
        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_428->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_428));
        add_come_last_code(info,"%s",come_value_428->c_value);
        come_call_finalizer3(come_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result275__ = (_Bool)1;
    come_call_finalizer3(left_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
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
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj134=self->mLeft;
            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj135=self->mRight;
            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value371 = (void*)0;
struct sNode* __dec_obj139;
struct sRShiftEqualNode* __result276__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj138=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj139=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value372=__builtin_string("sRShiftEqualNode")));
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
struct sNode* left_429;
_Bool Value_430;
void* __right_value373 = (void*)0;
struct CVALUE* left_value_431;
struct sNode* right_432;
_Bool Value_433;
_Bool __result278__;
void* __right_value374 = (void*)0;
struct CVALUE* right_value_434;
struct sType* type_435;
char* fun_name_436;
_Bool calling_fun_437;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_438;
void* __right_value377 = (void*)0;
char* __dec_obj143;
void* __right_value378 = (void*)0;
struct sType* __dec_obj144;
_Bool __result279__;
memset(&calling_fun_437, 0, sizeof(_Bool));
    left_429=self->mLeft;
    Value_430=node_compile(left_429,info);
    if(    !Value_430) {
        return (_Bool)0;
    }
    else {
    }
    left_value_431=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_432=self->mRight;
    Value_433=node_compile(right_432,info);
    if(    !Value_433) {
        __result278__ = (_Bool)0;
        come_call_finalizer3(left_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result278__;
    }
    else {
    }
    right_value_434=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_435=(struct sType*)come_increment_ref_count(left_value_431->type);
    fun_name_436="operator_rshift_equal";
    if(    self->mQuote) {
        calling_fun_437=(_Bool)0;
    }
    else {
        calling_fun_437=operator_overload_fun(type_435,fun_name_436,left_value_431,right_value_434,(_Bool)0,info);
    }
    if(    !calling_fun_437) {
        come_value_438=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 543, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj143=come_value_438->c_value;
        come_value_438->c_value=(char*)come_increment_ref_count(xsprintf("%s>>=%s",left_value_431->c_value,right_value_434->c_value));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj144=come_value_438->type;
        come_value_438->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_431->type));
        come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_438->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_438));
        add_come_last_code(info,"%s",come_value_438->c_value);
        come_call_finalizer3(come_value_438,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result279__ = (_Bool)1;
    come_call_finalizer3(left_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_435,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result279__;
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
char* __dec_obj140;
struct sNode* __dec_obj141;
struct sNode* __dec_obj142;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj140=self->sname;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj141=self->mLeft;
            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj142=self->mRight;
            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value381 = (void*)0;
struct sNode* __dec_obj146;
struct sXorEqualNode* __result280__;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value379,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj145=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj146=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result280__;
}

char* sXorEqualNode_kind(struct sXorEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
char* __result281__;
    __result281__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value382=__builtin_string("sXorEqualNode")));
    __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
struct sNode* left_439;
_Bool Value_440;
void* __right_value383 = (void*)0;
struct CVALUE* left_value_441;
struct sNode* right_442;
_Bool Value_443;
_Bool __result282__;
void* __right_value384 = (void*)0;
struct CVALUE* right_value_444;
struct sType* type_445;
char* fun_name_446;
_Bool calling_fun_447;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct CVALUE* come_value_448;
void* __right_value387 = (void*)0;
char* __dec_obj150;
void* __right_value388 = (void*)0;
struct sType* __dec_obj151;
_Bool __result283__;
memset(&calling_fun_447, 0, sizeof(_Bool));
    left_439=self->mLeft;
    Value_440=node_compile(left_439,info);
    if(    !Value_440) {
        return (_Bool)0;
    }
    else {
    }
    left_value_441=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_442=self->mRight;
    Value_443=node_compile(right_442,info);
    if(    !Value_443) {
        __result282__ = (_Bool)0;
        come_call_finalizer3(left_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result282__;
    }
    else {
    }
    right_value_444=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_445=(struct sType*)come_increment_ref_count(left_value_441->type);
    fun_name_446="operator_xor_equal";
    if(    self->mQuote) {
        calling_fun_447=(_Bool)0;
    }
    else {
        calling_fun_447=operator_overload_fun(type_445,fun_name_446,left_value_441,right_value_444,(_Bool)0,info);
    }
    if(    !calling_fun_447) {
        come_value_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 607, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj150=come_value_448->c_value;
        come_value_448->c_value=(char*)come_increment_ref_count(xsprintf("%s^=%s",left_value_441->c_value,right_value_444->c_value));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj151=come_value_448->type;
        come_value_448->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_441->type));
        come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_448->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_448));
        add_come_last_code(info,"%s",come_value_448->c_value);
        come_call_finalizer3(come_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result283__ = (_Bool)1;
    come_call_finalizer3(left_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_445,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result283__;
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
char* __dec_obj147;
struct sNode* __dec_obj148;
struct sNode* __dec_obj149;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj147=self->sname;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj148=self->mLeft;
            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj149=self->mRight;
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sNode* __dec_obj152;
void* __right_value391 = (void*)0;
struct sNode* __dec_obj153;
struct sOrEqualNode* __result284__;
    ((struct sNodeBase*)(__right_value389=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value389,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj152=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj153=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result284__;
}

char* sOrEqualNode_kind(struct sOrEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value392 = (void*)0;
char* __result285__;
    __result285__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value392=__builtin_string("sOrEqualNode")));
    __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
struct sNode* left_449;
_Bool Value_450;
void* __right_value393 = (void*)0;
struct CVALUE* left_value_451;
struct sNode* right_452;
_Bool Value_453;
_Bool __result286__;
void* __right_value394 = (void*)0;
struct CVALUE* right_value_454;
struct sType* type_455;
char* fun_name_456;
_Bool calling_fun_457;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct CVALUE* come_value_458;
void* __right_value397 = (void*)0;
char* __dec_obj157;
void* __right_value398 = (void*)0;
struct sType* __dec_obj158;
_Bool __result287__;
memset(&calling_fun_457, 0, sizeof(_Bool));
    left_449=self->mLeft;
    Value_450=node_compile(left_449,info);
    if(    !Value_450) {
        return (_Bool)0;
    }
    else {
    }
    left_value_451=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_452=self->mRight;
    Value_453=node_compile(right_452,info);
    if(    !Value_453) {
        __result286__ = (_Bool)0;
        come_call_finalizer3(left_value_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result286__;
    }
    else {
    }
    right_value_454=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_455=(struct sType*)come_increment_ref_count(left_value_451->type);
    fun_name_456="operator_or_equal";
    if(    self->mQuote) {
        calling_fun_457=(_Bool)0;
    }
    else {
        calling_fun_457=operator_overload_fun(type_455,fun_name_456,left_value_451,right_value_454,(_Bool)0,info);
    }
    if(    !calling_fun_457) {
        come_value_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 671, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj157=come_value_458->c_value;
        come_value_458->c_value=(char*)come_increment_ref_count(xsprintf("%s|=%s",left_value_451->c_value,right_value_454->c_value));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj158=come_value_458->type;
        come_value_458->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_451->type));
        come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_458->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_458));
        add_come_last_code(info,"%s",come_value_458->c_value);
        come_call_finalizer3(come_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result287__ = (_Bool)1;
    come_call_finalizer3(left_value_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_455,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result287__;
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
char* __dec_obj154;
struct sNode* __dec_obj155;
struct sNode* __dec_obj156;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj154=self->sname;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj155=self->mLeft;
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj156=self->mRight;
            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sNode* __dec_obj159;
void* __right_value401 = (void*)0;
struct sNode* __dec_obj160;
struct sAndEqualNode* __result288__;
    ((struct sNodeBase*)(__right_value399=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value399,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj159=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj160=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result288__;
}

char* sAndEqualNode_kind(struct sAndEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value402=__builtin_string("sAndEqualNode")));
    __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
struct sNode* left_459;
_Bool Value_460;
void* __right_value403 = (void*)0;
struct CVALUE* left_value_461;
struct sNode* right_462;
_Bool Value_463;
_Bool __result290__;
void* __right_value404 = (void*)0;
struct CVALUE* right_value_464;
struct sType* type_465;
char* fun_name_466;
_Bool calling_fun_467;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct CVALUE* come_value_468;
void* __right_value407 = (void*)0;
char* __dec_obj164;
void* __right_value408 = (void*)0;
struct sType* __dec_obj165;
_Bool __result291__;
memset(&calling_fun_467, 0, sizeof(_Bool));
    left_459=self->mLeft;
    Value_460=node_compile(left_459,info);
    if(    !Value_460) {
        return (_Bool)0;
    }
    else {
    }
    left_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_462=self->mRight;
    Value_463=node_compile(right_462,info);
    if(    !Value_463) {
        __result290__ = (_Bool)0;
        come_call_finalizer3(left_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result290__;
    }
    else {
    }
    right_value_464=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_465=(struct sType*)come_increment_ref_count(left_value_461->type);
    fun_name_466="operator_and_equal";
    if(    self->mQuote) {
        calling_fun_467=(_Bool)0;
    }
    else {
        calling_fun_467=operator_overload_fun(type_465,fun_name_466,left_value_461,right_value_464,(_Bool)0,info);
    }
    if(    !calling_fun_467) {
        come_value_468=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 735, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj164=come_value_468->c_value;
        come_value_468->c_value=(char*)come_increment_ref_count(xsprintf("%s&=%s",left_value_461->c_value,right_value_464->c_value));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj165=come_value_468->type;
        come_value_468->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_461->type));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_468->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_468));
        add_come_last_code(info,"%s",come_value_468->c_value);
        come_call_finalizer3(come_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result291__ = (_Bool)1;
    come_call_finalizer3(left_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result291__;
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
char* __dec_obj161;
struct sNode* __dec_obj162;
struct sNode* __dec_obj163;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj161=self->sname;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj162=self->mLeft;
            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj163=self->mRight;
            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sNode* __dec_obj166;
void* __right_value411 = (void*)0;
struct sNode* __dec_obj167;
struct sExpEqualNode* __result292__;
    ((struct sNodeBase*)(__right_value409=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value409,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj166=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj167=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result292__;
}

char* sExpEqualNode_kind(struct sExpEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value412 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value412=__builtin_string("sExpEqualNode")));
    __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
struct sNode* left_469;
_Bool Value_470;
void* __right_value413 = (void*)0;
struct CVALUE* left_value_471;
struct sNode* right_472;
_Bool Value_473;
_Bool __result294__;
void* __right_value414 = (void*)0;
struct CVALUE* right_value_474;
struct sType* type_475;
char* fun_name_476;
_Bool calling_fun_477;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value417 = (void*)0;
char* __dec_obj171;
void* __right_value418 = (void*)0;
struct sType* __dec_obj172;
_Bool __result295__;
memset(&calling_fun_477, 0, sizeof(_Bool));
    left_469=self->mLeft;
    Value_470=node_compile(left_469,info);
    if(    !Value_470) {
        return (_Bool)0;
    }
    else {
    }
    left_value_471=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_472=self->mRight;
    Value_473=node_compile(right_472,info);
    if(    !Value_473) {
        __result294__ = (_Bool)0;
        come_call_finalizer3(left_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result294__;
    }
    else {
    }
    right_value_474=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_475=(struct sType*)come_increment_ref_count(left_value_471->type);
    fun_name_476="operator_exp_equal";
    if(    self->mQuote) {
        calling_fun_477=(_Bool)0;
    }
    else {
        calling_fun_477=operator_overload_fun(type_475,fun_name_476,left_value_471,right_value_474,(_Bool)0,info);
    }
    if(    !calling_fun_477) {
        come_value_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 799, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj171=come_value_478->c_value;
        come_value_478->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_471->c_value,right_value_474->c_value));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj172=come_value_478->type;
        come_value_478->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_471->type));
        come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_478->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_478));
        add_come_last_code(info,"%s",come_value_478->c_value);
        come_call_finalizer3(come_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result295__ = (_Bool)1;
    come_call_finalizer3(left_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_474,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result295__;
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
char* __dec_obj168;
struct sNode* __dec_obj169;
struct sNode* __dec_obj170;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj168=self->sname;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj169=self->mLeft;
            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj170=self->mRight;
            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool quote_479;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* __right_value424 = (void*)0;
struct sNode* __result298__;
_Bool quote_481;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* __right_value430 = (void*)0;
struct sNode* __result301__;
_Bool quote_483;
void* __right_value431 = (void*)0;
struct sNode* right_node_484;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* __right_value438 = (void*)0;
struct sNode* __result304__;
_Bool quote_486;
void* __right_value439 = (void*)0;
struct sNode* right_node_487;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* __right_value446 = (void*)0;
struct sNode* __result307__;
_Bool quote_489;
void* __right_value447 = (void*)0;
struct sNode* right_node_490;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* __right_value454 = (void*)0;
struct sNode* __result310__;
_Bool quote_492;
void* __right_value455 = (void*)0;
struct sNode* right_node_493;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* __right_value462 = (void*)0;
struct sNode* __result313__;
_Bool quote_495;
void* __right_value463 = (void*)0;
struct sNode* right_node_496;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* __right_value470 = (void*)0;
struct sNode* __result316__;
_Bool quote_498;
void* __right_value471 = (void*)0;
struct sNode* right_node_499;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* __right_value478 = (void*)0;
struct sNode* __result319__;
_Bool quote_501;
void* __right_value479 = (void*)0;
struct sNode* right_node_502;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* __right_value486 = (void*)0;
struct sNode* __result322__;
_Bool quote_504;
void* __right_value487 = (void*)0;
struct sNode* right_node_505;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* __right_value494 = (void*)0;
struct sNode* __result325__;
_Bool quote_507;
void* __right_value495 = (void*)0;
struct sNode* right_node_508;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* __right_value502 = (void*)0;
struct sNode* __result328__;
_Bool quote_510;
void* __right_value503 = (void*)0;
struct sNode* right_node_511;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* __right_value510 = (void*)0;
struct sNode* __result331__;
_Bool quote_513;
void* __right_value511 = (void*)0;
struct sNode* right_node_514;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* __right_value518 = (void*)0;
struct sNode* __result334__;
void* __right_value519 = (void*)0;
struct sNode* __result335__;
memset(&quote_479, 0, sizeof(_Bool));
memset(&quote_481, 0, sizeof(_Bool));
memset(&quote_483, 0, sizeof(_Bool));
memset(&quote_486, 0, sizeof(_Bool));
memset(&quote_489, 0, sizeof(_Bool));
memset(&quote_492, 0, sizeof(_Bool));
memset(&quote_495, 0, sizeof(_Bool));
memset(&quote_498, 0, sizeof(_Bool));
memset(&quote_501, 0, sizeof(_Bool));
memset(&quote_504, 0, sizeof(_Bool));
memset(&quote_507, 0, sizeof(_Bool));
memset(&quote_510, 0, sizeof(_Bool));
memset(&quote_513, 0, sizeof(_Bool));
    if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==43&&*(info->p+2)==43)||(*info->p==43&&*(info->p+1)==43))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_479=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_479=(_Bool)0;
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 829, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value1=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(__right_value420=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count((struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 829, "struct sPlusPlusNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),quote_479,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result298__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value424=_inf_value1));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value420,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value424) { __right_value424 = come_decrement_ref_count2(__right_value424, ((struct sNode*)__right_value424)->finalize, ((struct sNode*)__right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==45&&*(info->p+2)==45)||(*info->p==45&&*(info->p+1)==45))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_481=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_481=(_Bool)0;
        }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 844, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value2=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(__right_value426=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count((struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 844, "struct sMinusMinusNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),quote_481,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
        _inf_value2->clone=(void*)sMinusMinusNode_clone;
        _inf_value2->compile=(void*)sMinusMinusNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sMinusMinusNode_kind;
        __result301__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value430=_inf_value2));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value426,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value430) { __right_value430 = come_decrement_ref_count2(__right_value430, ((struct sNode*)__right_value430)->finalize, ((struct sNode*)__right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==43&&*(info->p+2)==61)||(*info->p==43&&*(info->p+1)==61))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_483=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_483=(_Bool)0;
        }
        right_node_484=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 862, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value3=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(__right_value433=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count((struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 862, "struct sPlusEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_484),quote_483,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
        _inf_value3->clone=(void*)sPlusEqualNode_clone;
        _inf_value3->compile=(void*)sPlusEqualNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sPlusEqualNode_kind;
        __result304__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value438=_inf_value3));
        if(right_node_484) { right_node_484 = come_decrement_ref_count2(right_node_484, ((struct sNode*)right_node_484)->finalize, ((struct sNode*)right_node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value433,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value438) { __right_value438 = come_decrement_ref_count2(__right_value438, ((struct sNode*)__right_value438)->finalize, ((struct sNode*)__right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result304__;
        if(right_node_484) { right_node_484 = come_decrement_ref_count2(right_node_484, ((struct sNode*)right_node_484)->finalize, ((struct sNode*)right_node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==45&&*(info->p+2)==61)||(*info->p==45&&*(info->p+1)==61))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_486=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_486=(_Bool)0;
        }
        right_node_487=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 880, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value4=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(__right_value441=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count((struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 880, "struct sMinusEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_487),quote_486,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
        _inf_value4->clone=(void*)sMinusEqualNode_clone;
        _inf_value4->compile=(void*)sMinusEqualNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sMinusEqualNode_kind;
        __result307__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value446=_inf_value4));
        if(right_node_487) { right_node_487 = come_decrement_ref_count2(right_node_487, ((struct sNode*)right_node_487)->finalize, ((struct sNode*)right_node_487)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value441,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value446) { __right_value446 = come_decrement_ref_count2(__right_value446, ((struct sNode*)__right_value446)->finalize, ((struct sNode*)__right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result307__;
        if(right_node_487) { right_node_487 = come_decrement_ref_count2(right_node_487, ((struct sNode*)right_node_487)->finalize, ((struct sNode*)right_node_487)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==42&&*(info->p+2)==61)||(*info->p==42&&*(info->p+1)==61))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_489=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_489=(_Bool)0;
        }
        right_node_490=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 898, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(__right_value449=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count((struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 898, "struct sMultEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_490),quote_489,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
        _inf_value5->clone=(void*)sMultEqualNode_clone;
        _inf_value5->compile=(void*)sMultEqualNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sMultEqualNode_kind;
        __result310__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value454=_inf_value5));
        if(right_node_490) { right_node_490 = come_decrement_ref_count2(right_node_490, ((struct sNode*)right_node_490)->finalize, ((struct sNode*)right_node_490)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value449,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value454) { __right_value454 = come_decrement_ref_count2(__right_value454, ((struct sNode*)__right_value454)->finalize, ((struct sNode*)__right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result310__;
        if(right_node_490) { right_node_490 = come_decrement_ref_count2(right_node_490, ((struct sNode*)right_node_490)->finalize, ((struct sNode*)right_node_490)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==47&&*(info->p+2)==61)||(*info->p==47&&*(info->p+1)==61))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_492=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_492=(_Bool)0;
        }
        right_node_493=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 916, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(__right_value457=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count((struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 916, "struct sDivEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_493),quote_492,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sDivEqualNode_finalize;
        _inf_value6->clone=(void*)sDivEqualNode_clone;
        _inf_value6->compile=(void*)sDivEqualNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sDivEqualNode_kind;
        __result313__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value462=_inf_value6));
        if(right_node_493) { right_node_493 = come_decrement_ref_count2(right_node_493, ((struct sNode*)right_node_493)->finalize, ((struct sNode*)right_node_493)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value457,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value462) { __right_value462 = come_decrement_ref_count2(__right_value462, ((struct sNode*)__right_value462)->finalize, ((struct sNode*)__right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result313__;
        if(right_node_493) { right_node_493 = come_decrement_ref_count2(right_node_493, ((struct sNode*)right_node_493)->finalize, ((struct sNode*)right_node_493)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==37&&*(info->p+2)==61)||(*info->p==37&&*(info->p+1)==61))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_495=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_495=(_Bool)0;
        }
        right_node_496=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 935, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(__right_value465=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count((struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 935, "struct sModEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_496),quote_495,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sModEqualNode_finalize;
        _inf_value7->clone=(void*)sModEqualNode_clone;
        _inf_value7->compile=(void*)sModEqualNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sModEqualNode_kind;
        __result316__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value470=_inf_value7));
        if(right_node_496) { right_node_496 = come_decrement_ref_count2(right_node_496, ((struct sNode*)right_node_496)->finalize, ((struct sNode*)right_node_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value465,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value470) { __right_value470 = come_decrement_ref_count2(__right_value470, ((struct sNode*)__right_value470)->finalize, ((struct sNode*)__right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result316__;
        if(right_node_496) { right_node_496 = come_decrement_ref_count2(right_node_496, ((struct sNode*)right_node_496)->finalize, ((struct sNode*)right_node_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)==61)||(*info->p==60&&*(info->p+1)==60&&*(info->p+2)==61))) {
        if(        *info->p==92) {
            info->p+=4;
            skip_spaces_and_lf(info);
            quote_498=(_Bool)1;
        }
        else {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_498=(_Bool)0;
        }
        right_node_499=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 953, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(__right_value473=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count((struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 953, "struct sLShifEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_499),quote_498,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
        _inf_value8->clone=(void*)sLShifEqualNode_clone;
        _inf_value8->compile=(void*)sLShifEqualNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sLShifEqualNode_kind;
        __result319__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value478=_inf_value8));
        if(right_node_499) { right_node_499 = come_decrement_ref_count2(right_node_499, ((struct sNode*)right_node_499)->finalize, ((struct sNode*)right_node_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value473,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value478) { __right_value478 = come_decrement_ref_count2(__right_value478, ((struct sNode*)__right_value478)->finalize, ((struct sNode*)__right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result319__;
        if(right_node_499) { right_node_499 = come_decrement_ref_count2(right_node_499, ((struct sNode*)right_node_499)->finalize, ((struct sNode*)right_node_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)==61)||(*info->p==62&&*(info->p+1)==62&&*(info->p+2)==61))) {
        if(        *info->p==92) {
            info->p+=4;
            skip_spaces_and_lf(info);
            quote_501=(_Bool)1;
        }
        else {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_501=(_Bool)0;
        }
        right_node_502=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 971, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(__right_value481=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count((struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 971, "struct sRShiftEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_502),quote_501,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
        __result322__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value486=_inf_value9));
        if(right_node_502) { right_node_502 = come_decrement_ref_count2(right_node_502, ((struct sNode*)right_node_502)->finalize, ((struct sNode*)right_node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value481,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value486) { __right_value486 = come_decrement_ref_count2(__right_value486, ((struct sNode*)__right_value486)->finalize, ((struct sNode*)__right_value486)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result322__;
        if(right_node_502) { right_node_502 = come_decrement_ref_count2(right_node_502, ((struct sNode*)right_node_502)->finalize, ((struct sNode*)right_node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==94&&*(info->p+2)==61)||(*info->p==94&&*(info->p+1)==61))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_504=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_504=(_Bool)0;
        }
        right_node_505=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 989, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value10=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(__right_value489=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count((struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 989, "struct sXorEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_505),quote_504,info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sXorEqualNode_finalize;
        _inf_value10->clone=(void*)sXorEqualNode_clone;
        _inf_value10->compile=(void*)sXorEqualNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sXorEqualNode_kind;
        __result325__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value494=_inf_value10));
        if(right_node_505) { right_node_505 = come_decrement_ref_count2(right_node_505, ((struct sNode*)right_node_505)->finalize, ((struct sNode*)right_node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value489,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value494) { __right_value494 = come_decrement_ref_count2(__right_value494, ((struct sNode*)__right_value494)->finalize, ((struct sNode*)__right_value494)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result325__;
        if(right_node_505) { right_node_505 = come_decrement_ref_count2(right_node_505, ((struct sNode*)right_node_505)->finalize, ((struct sNode*)right_node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==38&&*(info->p+2)==61)||(*info->p==38&&*(info->p+1)==61))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_507=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_507=(_Bool)0;
        }
        right_node_508=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1006, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value11=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(__right_value497=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count((struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1006, "struct sAndEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_508),quote_507,info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sAndEqualNode_finalize;
        _inf_value11->clone=(void*)sAndEqualNode_clone;
        _inf_value11->compile=(void*)sAndEqualNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sAndEqualNode_kind;
        __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value502=_inf_value11));
        if(right_node_508) { right_node_508 = come_decrement_ref_count2(right_node_508, ((struct sNode*)right_node_508)->finalize, ((struct sNode*)right_node_508)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value497,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value502) { __right_value502 = come_decrement_ref_count2(__right_value502, ((struct sNode*)__right_value502)->finalize, ((struct sNode*)__right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result328__;
        if(right_node_508) { right_node_508 = come_decrement_ref_count2(right_node_508, ((struct sNode*)right_node_508)->finalize, ((struct sNode*)right_node_508)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==124&&*(info->p+2)==61)||(*info->p==124&&*(info->p+1)==61))) {
        if(        *info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_510=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_510=(_Bool)0;
        }
        right_node_511=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1023, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(__right_value505=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count((struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1023, "struct sOrEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_511),quote_510,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sOrEqualNode_finalize;
        _inf_value12->clone=(void*)sOrEqualNode_clone;
        _inf_value12->compile=(void*)sOrEqualNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sOrEqualNode_kind;
        __result331__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value510=_inf_value12));
        if(right_node_511) { right_node_511 = come_decrement_ref_count2(right_node_511, ((struct sNode*)right_node_511)->finalize, ((struct sNode*)right_node_511)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value505,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value510) { __right_value510 = come_decrement_ref_count2(__right_value510, ((struct sNode*)__right_value510)->finalize, ((struct sNode*)__right_value510)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result331__;
        if(right_node_511) { right_node_511 = come_decrement_ref_count2(right_node_511, ((struct sNode*)right_node_511)->finalize, ((struct sNode*)right_node_511)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    ((*info->p==92&&*(info->p+1)==61&&*(info->p+2)!=61&&*(info->p+2)!=62)||(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62))) {
        if(        *info->p==92) {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_513=(_Bool)1;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            quote_513=(_Bool)0;
        }
        right_node_514=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1040, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(__right_value513=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count((struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1040, "struct sExpEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_514),quote_513,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
        _inf_value13->clone=(void*)sExpEqualNode_clone;
        _inf_value13->compile=(void*)sExpEqualNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sExpEqualNode_kind;
        __result334__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value518=_inf_value13));
        if(right_node_514) { right_node_514 = come_decrement_ref_count2(right_node_514, ((struct sNode*)right_node_514)->finalize, ((struct sNode*)right_node_514)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value513,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value518) { __right_value518 = come_decrement_ref_count2(__right_value518, ((struct sNode*)__right_value518)->finalize, ((struct sNode*)__right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result334__;
        if(right_node_514) { right_node_514 = come_decrement_ref_count2(right_node_514, ((struct sNode*)right_node_514)->finalize, ((struct sNode*)right_node_514)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result335__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value519=post_position_operator_v7((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value519) { __right_value519 = come_decrement_ref_count2(__right_value519, ((struct sNode*)__right_value519)->finalize, ((struct sNode*)__right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* __result_obj__=(void*)0;
struct sPlusPlusNode* __result296__;
void* __right_value421 = (void*)0;
struct sPlusPlusNode* result_480;
void* __right_value422 = (void*)0;
char* __dec_obj173;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj174;
struct sPlusPlusNode* __result297__;
    if(    self==(void*)0) {
        __result296__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    result_480=(struct sPlusPlusNode*)come_increment_ref_count((struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3, "struct sPlusPlusNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_480->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj173=result_480->sname;
        result_480->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_480->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj174=result_480->mLeft;
        result_480->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_480->mQuote=self->mQuote;
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_480;
    come_call_finalizer3(result_480,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* __result_obj__=(void*)0;
struct sMinusMinusNode* __result299__;
void* __right_value427 = (void*)0;
struct sMinusMinusNode* result_482;
void* __right_value428 = (void*)0;
char* __dec_obj175;
void* __right_value429 = (void*)0;
struct sNode* __dec_obj176;
struct sMinusMinusNode* __result300__;
    if(    self==(void*)0) {
        __result299__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    result_482=(struct sMinusMinusNode*)come_increment_ref_count((struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3, "struct sMinusMinusNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_482->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_482->sname;
        result_482->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_482->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj176=result_482->mLeft;
        result_482->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_482->mQuote=self->mQuote;
    }
    __result300__ = gComeFunResultObject = __result_obj__ = result_482;
    come_call_finalizer3(result_482,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* __result_obj__=(void*)0;
struct sPlusEqualNode* __result302__;
void* __right_value434 = (void*)0;
struct sPlusEqualNode* result_485;
void* __right_value435 = (void*)0;
char* __dec_obj177;
void* __right_value436 = (void*)0;
struct sNode* __dec_obj178;
void* __right_value437 = (void*)0;
struct sNode* __dec_obj179;
struct sPlusEqualNode* __result303__;
    if(    self==(void*)0) {
        __result302__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    result_485=(struct sPlusEqualNode*)come_increment_ref_count((struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3, "struct sPlusEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_485->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj177=result_485->sname;
        result_485->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_485->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj178=result_485->mLeft;
        result_485->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj179=result_485->mRight;
        result_485->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_485->mQuote=self->mQuote;
    }
    __result303__ = gComeFunResultObject = __result_obj__ = result_485;
    come_call_finalizer3(result_485,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* __result_obj__=(void*)0;
struct sMinusEqualNode* __result305__;
void* __right_value442 = (void*)0;
struct sMinusEqualNode* result_488;
void* __right_value443 = (void*)0;
char* __dec_obj180;
void* __right_value444 = (void*)0;
struct sNode* __dec_obj181;
void* __right_value445 = (void*)0;
struct sNode* __dec_obj182;
struct sMinusEqualNode* __result306__;
    if(    self==(void*)0) {
        __result305__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    result_488=(struct sMinusEqualNode*)come_increment_ref_count((struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3, "struct sMinusEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_488->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj180=result_488->sname;
        result_488->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_488->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_488->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj181=result_488->mLeft;
        result_488->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj182=result_488->mRight;
        result_488->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result306__ = gComeFunResultObject = __result_obj__ = result_488;
    come_call_finalizer3(result_488,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* __result_obj__=(void*)0;
struct sMultEqualNode* __result308__;
void* __right_value450 = (void*)0;
struct sMultEqualNode* result_491;
void* __right_value451 = (void*)0;
char* __dec_obj183;
void* __right_value452 = (void*)0;
struct sNode* __dec_obj184;
void* __right_value453 = (void*)0;
struct sNode* __dec_obj185;
struct sMultEqualNode* __result309__;
    if(    self==(void*)0) {
        __result308__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    result_491=(struct sMultEqualNode*)come_increment_ref_count((struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3, "struct sMultEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_491->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj183=result_491->sname;
        result_491->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_491->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_491->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj184=result_491->mLeft;
        result_491->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj185=result_491->mRight;
        result_491->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result309__ = gComeFunResultObject = __result_obj__ = result_491;
    come_call_finalizer3(result_491,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* __result_obj__=(void*)0;
struct sDivEqualNode* __result311__;
void* __right_value458 = (void*)0;
struct sDivEqualNode* result_494;
void* __right_value459 = (void*)0;
char* __dec_obj186;
void* __right_value460 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value461 = (void*)0;
struct sNode* __dec_obj188;
struct sDivEqualNode* __result312__;
    if(    self==(void*)0) {
        __result311__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    result_494=(struct sDivEqualNode*)come_increment_ref_count((struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3, "struct sDivEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_494->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj186=result_494->sname;
        result_494->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_494->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_494->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj187=result_494->mLeft;
        result_494->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj188=result_494->mRight;
        result_494->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result312__ = gComeFunResultObject = __result_obj__ = result_494;
    come_call_finalizer3(result_494,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* __result_obj__=(void*)0;
struct sModEqualNode* __result314__;
void* __right_value466 = (void*)0;
struct sModEqualNode* result_497;
void* __right_value467 = (void*)0;
char* __dec_obj189;
void* __right_value468 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value469 = (void*)0;
struct sNode* __dec_obj191;
struct sModEqualNode* __result315__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_497=(struct sModEqualNode*)come_increment_ref_count((struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3, "struct sModEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_497->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj189=result_497->sname;
        result_497->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_497->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_497->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj190=result_497->mLeft;
        result_497->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj191=result_497->mRight;
        result_497->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_497;
    come_call_finalizer3(result_497,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* __result_obj__=(void*)0;
struct sLShifEqualNode* __result317__;
void* __right_value474 = (void*)0;
struct sLShifEqualNode* result_500;
void* __right_value475 = (void*)0;
char* __dec_obj192;
void* __right_value476 = (void*)0;
struct sNode* __dec_obj193;
void* __right_value477 = (void*)0;
struct sNode* __dec_obj194;
struct sLShifEqualNode* __result318__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_500=(struct sLShifEqualNode*)come_increment_ref_count((struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3, "struct sLShifEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_500->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj192=result_500->sname;
        result_500->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_500->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_500->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj193=result_500->mLeft;
        result_500->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj194=result_500->mRight;
        result_500->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result318__ = gComeFunResultObject = __result_obj__ = result_500;
    come_call_finalizer3(result_500,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* __result_obj__=(void*)0;
struct sRShiftEqualNode* __result320__;
void* __right_value482 = (void*)0;
struct sRShiftEqualNode* result_503;
void* __right_value483 = (void*)0;
char* __dec_obj195;
void* __right_value484 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj197;
struct sRShiftEqualNode* __result321__;
    if(    self==(void*)0) {
        __result320__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_503=(struct sRShiftEqualNode*)come_increment_ref_count((struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3, "struct sRShiftEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_503->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj195=result_503->sname;
        result_503->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_503->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_503->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj196=result_503->mLeft;
        result_503->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj197=result_503->mRight;
        result_503->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result321__ = gComeFunResultObject = __result_obj__ = result_503;
    come_call_finalizer3(result_503,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* __result_obj__=(void*)0;
struct sXorEqualNode* __result323__;
void* __right_value490 = (void*)0;
struct sXorEqualNode* result_506;
void* __right_value491 = (void*)0;
char* __dec_obj198;
void* __right_value492 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value493 = (void*)0;
struct sNode* __dec_obj200;
struct sXorEqualNode* __result324__;
    if(    self==(void*)0) {
        __result323__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    result_506=(struct sXorEqualNode*)come_increment_ref_count((struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3, "struct sXorEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_506->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj198=result_506->sname;
        result_506->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_506->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_506->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj199=result_506->mLeft;
        result_506->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj200=result_506->mRight;
        result_506->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result324__ = gComeFunResultObject = __result_obj__ = result_506;
    come_call_finalizer3(result_506,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* __result_obj__=(void*)0;
struct sAndEqualNode* __result326__;
void* __right_value498 = (void*)0;
struct sAndEqualNode* result_509;
void* __right_value499 = (void*)0;
char* __dec_obj201;
void* __right_value500 = (void*)0;
struct sNode* __dec_obj202;
void* __right_value501 = (void*)0;
struct sNode* __dec_obj203;
struct sAndEqualNode* __result327__;
    if(    self==(void*)0) {
        __result326__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_509=(struct sAndEqualNode*)come_increment_ref_count((struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3, "struct sAndEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_509->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj201=result_509->sname;
        result_509->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_509->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_509->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj202=result_509->mLeft;
        result_509->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj203=result_509->mRight;
        result_509->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result327__ = gComeFunResultObject = __result_obj__ = result_509;
    come_call_finalizer3(result_509,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* __result_obj__=(void*)0;
struct sOrEqualNode* __result329__;
void* __right_value506 = (void*)0;
struct sOrEqualNode* result_512;
void* __right_value507 = (void*)0;
char* __dec_obj204;
void* __right_value508 = (void*)0;
struct sNode* __dec_obj205;
void* __right_value509 = (void*)0;
struct sNode* __dec_obj206;
struct sOrEqualNode* __result330__;
    if(    self==(void*)0) {
        __result329__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    result_512=(struct sOrEqualNode*)come_increment_ref_count((struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3, "struct sOrEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_512->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj204=result_512->sname;
        result_512->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_512->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_512->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj205=result_512->mLeft;
        result_512->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj206=result_512->mRight;
        result_512->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result330__ = gComeFunResultObject = __result_obj__ = result_512;
    come_call_finalizer3(result_512,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* __result_obj__=(void*)0;
struct sExpEqualNode* __result332__;
void* __right_value514 = (void*)0;
struct sExpEqualNode* result_515;
void* __right_value515 = (void*)0;
char* __dec_obj207;
void* __right_value516 = (void*)0;
struct sNode* __dec_obj208;
void* __right_value517 = (void*)0;
struct sNode* __dec_obj209;
struct sExpEqualNode* __result333__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_515=(struct sExpEqualNode*)come_increment_ref_count((struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3, "struct sExpEqualNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_515->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj207=result_515->sname;
        result_515->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_515->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_515->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj208=result_515->mLeft;
        result_515->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj209=result_515->mRight;
        result_515->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_515;
    come_call_finalizer3(result_515,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

