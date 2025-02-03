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
struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
};

struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};

struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key);
static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item);
static void map$2charphbufferph_rehash(struct map$2charphbufferph* self);
static char* map$2charphbufferph_begin(struct map$2charphbufferph* self);
static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self);
static char* map$2charphbufferph_next(struct map$2charphbufferph* self);
static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
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
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNode* create_nothing_node(struct sInfo* info);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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

char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_290;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __result219__;
void* __right_value251 = (void*)0;
char* __result220__;
    p_290=class_name;
    while(*p_290) {
        if(        *p_290==36) {
            __result219__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=charp_substring(((char*)(__right_value249=__builtin_string(class_name))),0,p_290-class_name)));
            __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result219__;
        }
        else {
            p_290++;
        }
    }
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string(class_name)));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* buf_291;
struct sClass* klass_292;
char* class_name_293;
int i_294;
void* __right_value254 = (void*)0;
struct sType* type_295;
void* __right_value255 = (void*)0;
char* type_name_309;
int i_310;
void* __right_value256 = (void*)0;
char* __result223__;
    buf_291=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "struct buffer*", (void*)0, (void*)0))));
    klass_292=generics_type->mClass;
    class_name_293=klass_292->mName;
    buffer_append_str(buf_291,class_name_293);
    if(    list$1sTypeph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_291,36);
        buffer_append_char(buf_291,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_294=0;        i_294<list$1sTypeph_length(generics_type->mGenericsTypes);        i_294++        ){
            type_295=((struct sType*)come_null_check(((struct sType*)(__right_value254=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_294))), "14struct.c", 33, 0));
            come_call_finalizer3(__right_value254,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_name_309=(char*)come_increment_ref_count(create_generics_name(type_295,info));
            buffer_append_str(buf_291,type_name_309);
            for(            i_310=0;            i_310<type_295->mPointerNum;            i_310++            ){
                buffer_append_char(buf_291,112);
            }
            if(            type_295->mHeap) {
                buffer_append_str(buf_291,"h");
            }
            type_name_309 = come_decrement_ref_count2(type_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result223__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value256=buffer_to_string(buf_291)));
    come_call_finalizer3(buf_291,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_296;
int i_297;
struct sType* __result221__;
struct sType* default_value_298;
struct sType* __result222__;
default_value_298 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_296=self->head;
    i_297=0;
    while(it_296!=((void*)0)) {
        if(        position==i_297) {
            __result221__ = gComeFunResultObject = __result_obj__ = it_296->item;
            gComeFunResultObject = (void*)0;
            return __result221__;
        }
        it_296=it_296->next;
        i_297++;
    }
    memset(&default_value_298,0,sizeof(struct sType*));
    __result222__ = gComeFunResultObject = __result_obj__ = default_value_298;
    come_call_finalizer3(default_value_298,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj31;
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj34;
struct sType* __dec_obj35;
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
            __dec_obj31=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj31,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj33=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj33,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj34=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj35=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj32;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj32=self->v1;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_299;
struct list_item$1sTypeph* prev_it_300;
    it_299=self->head;
    while(it_299!=((void*)0)) {
        prev_it_300=it_299;
        it_299=it_299->next;
        come_call_finalizer3(prev_it_300,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_301;
struct list_item$1sTypeph* prev_it_302;
    it_301=self->head;
    while(it_301!=((void*)0)) {
        prev_it_302=it_301;
        it_301=it_301->next;
        come_call_finalizer3(prev_it_302,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_303;
struct list_item$1sNodeph* prev_it_304;
    it_303=self->head;
    while(it_303!=((void*)0)) {
        prev_it_304=it_303;
        it_303=it_303->next;
        come_call_finalizer3(prev_it_304,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_305;
struct list_item$1sNodeph* prev_it_306;
    it_305=self->head;
    while(it_305!=((void*)0)) {
        prev_it_306=it_305;
        it_305=it_305->next;
        come_call_finalizer3(prev_it_306,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_307;
struct list_item$1charph* prev_it_308;
    it_307=self->head;
    while(it_307!=((void*)0)) {
        prev_it_308=it_307;
        it_307=it_307->next;
        come_call_finalizer3(prev_it_308,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_311;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct buffer* buf_312;
_Bool existance_generics_313;
struct list$1tuple2$2charphsTypephph* o2_saved_314;
struct tuple2$2charphsTypeph* it_317;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* name_320=0;
struct sType* type_321=0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
_Bool _if_conditional1;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1tuple2$2charphsTypephph_length(klass->mFields)==0) {
        return;
    }
    name_311=(char*)come_increment_ref_count(klass->mName);
    buf_312=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 62, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_format(buf_312,"struct %s\n{\n",klass->mName);
    existance_generics_313=(_Bool)0;
    for(    o2_saved_314=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_317=list$1tuple2$2charphsTypephph_begin((o2_saved_314));    !list$1tuple2$2charphsTypephph_end((o2_saved_314));    it_317=list$1tuple2$2charphsTypephph_next((o2_saved_314))    ){
        multiple_assign_var1=it_317;
        name_320=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_321=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_321,info)||is_contained_generics_types(type_321,info)) {
            existance_generics_313=(_Bool)1;
        }
        type_321->mStatic=(_Bool)0;
        buffer_append_str(buf_312,"    ");
        buffer_append_str(buf_312,((char*)(__right_value259=make_define_var(type_321,name_320,(_Bool)0,info))));
        __right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_312,";\n");
        name_320 = come_decrement_ref_count2(name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_314,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_312,"};\n");
    }
    else {
        buffer_append_format(buf_312,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)(__right_value260=map$2charphbufferphp_operator_load_element(info->struct_definition,name_311)))==((void*)0)&&!existance_generics_313)),    come_call_finalizer3(__right_value260,buffer_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional1) {
        map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_311),(struct buffer*)come_increment_ref_count(buf_312));
    }
    name_311 = come_decrement_ref_count2(name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_315;
struct tuple2$2charphsTypeph* __result224__;
struct tuple2$2charphsTypeph* __result225__;
struct tuple2$2charphsTypeph* result_316;
struct tuple2$2charphsTypeph* __result226__;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_315,0,sizeof(struct tuple2$2charphsTypeph*));
        __result224__ = gComeFunResultObject = __result_obj__ = result_315;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    self->it=self->head;
    if(    self->it) {
        __result225__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    memset(&result_316,0,sizeof(struct tuple2$2charphsTypeph*));
    __result226__ = gComeFunResultObject = __result_obj__ = result_316;
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_318;
struct tuple2$2charphsTypeph* __result227__;
struct tuple2$2charphsTypeph* __result228__;
struct tuple2$2charphsTypeph* result_319;
struct tuple2$2charphsTypeph* __result229__;
result_318 = (void*)0;
result_319 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_318,0,sizeof(struct tuple2$2charphsTypeph*));
        __result227__ = gComeFunResultObject = __result_obj__ = result_318;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result228__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    memset(&result_319,0,sizeof(struct tuple2$2charphsTypeph*));
    __result229__ = gComeFunResultObject = __result_obj__ = result_319;
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_322;
struct list_item$1tuple2$2charphsTypephph* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        come_call_finalizer3(prev_it_323,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj52;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj52=self->item;
            come_call_finalizer3(__dec_obj52,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj53;
struct sType* __dec_obj54;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj54=self->v2;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key){
void* __result_obj__=(void*)0;
struct buffer* default_value_324;
unsigned int hash_325;
unsigned int it_326;
struct buffer* __result230__;
struct buffer* __result231__;
struct buffer* __result232__;
struct buffer* __result233__;
default_value_324 = (void*)0;
    memset(&default_value_324,0,sizeof(struct buffer*));
    hash_325=charp_get_hash_key(((char*)key))%self->size;
    it_326=hash_325;
    while((_Bool)1) {
        if(        self->item_existance[it_326]) {
            if(            charp_equals(self->keys[it_326],key)) {
                __result230__ = gComeFunResultObject = __result_obj__ = self->items[it_326];
                come_call_finalizer3(default_value_324,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
            it_326++;
            if(            it_326>=self->size) {
                it_326=0;
            }
            else if(            it_326==hash_325) {
                __result231__ = gComeFunResultObject = __result_obj__ = default_value_324;
                come_call_finalizer3(default_value_324,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
        }
        else {
            __result232__ = gComeFunResultObject = __result_obj__ = default_value_324;
            come_call_finalizer3(default_value_324,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = default_value_324;
    come_call_finalizer3(default_value_324,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item){
void* __result_obj__=(void*)0;
unsigned int hash_344;
unsigned int it_345;
_Bool same_key_exist_362;
char* it2_365;
struct map$2charphbufferph* __result254__;
    if(    self->len*10>=self->size) {
        map$2charphbufferph_rehash(self);
    }
    hash_344=charp_get_hash_key(key)%self->size;
    it_345=hash_344;
    while((_Bool)1) {
        if(        self->item_existance[it_345]) {
            if(            charp_equals(self->keys[it_345],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_345]);
                    self->keys[it_345] = come_decrement_ref_count2(self->keys[it_345], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_345]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_345]);
                    self->keys[it_345]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_345],buffer_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_345]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_345]=item;
                }
                break;
            }
            it_345++;
            if(            it_345>=self->size) {
                it_345=0;
            }
            else if(            it_345==hash_344) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_345]=(_Bool)1;
            if(            1) {
                self->keys[it_345]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_345]=key;
            }
            if(            1) {
                self->items[it_345]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_345]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_362=(_Bool)0;
    for(    it2_365=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_365=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_365,key)) {
            same_key_exist_362=(_Bool)1;
        }
    }
    if(    !same_key_exist_362) {
        list$1charp_push_back(self->key_list,key);
    }
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void map$2charphbufferph_rehash(struct map$2charphbufferph* self){
int size_327;
void* __right_value261 = (void*)0;
char** keys_328;
void* __right_value262 = (void*)0;
struct buffer** items_329;
void* __right_value263 = (void*)0;
_Bool* item_existance_330;
int len_331;
char* it_334;
struct buffer* default_value_337;
void* __right_value264 = (void*)0;
struct buffer* it2_338;
unsigned int hash_341;
int n_342;
struct buffer* default_value_343;
void* __right_value265 = (void*)0;
default_value_337 = (void*)0;
default_value_343 = (void*)0;
    size_327=self->size*10;
    keys_328=(char**)come_increment_ref_count(((char**)(__right_value261=(char**)come_calloc(1, sizeof(char*)*(1*(size_327)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_329=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value262=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_327)), "./comelang.h", 2694, "struct buffer**", (void*)0, (void*)0))));
    item_existance_330=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value263=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_327)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_331=0;
    for(    it_334=map$2charphbufferph_begin(self);    !map$2charphbufferph_end(self);    it_334=map$2charphbufferph_next(self)    ){
        memset(&default_value_337,0,sizeof(struct buffer*));
        it2_338=((struct buffer*)(__right_value264=map$2charphbufferph_at(self,it_334,default_value_337)));
        come_call_finalizer3(__right_value264,buffer_finalize, 0, 1, 0, 0, (void*)0);
        hash_341=charp_get_hash_key(it_334)%size_327;
        n_342=hash_341;
        while((_Bool)1) {
            if(            item_existance_330[n_342]) {
                n_342++;
                if(                n_342>=size_327) {
                    n_342=0;
                }
                else if(                n_342==hash_341) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_330[n_342]=(_Bool)1;
                keys_328[n_342]=it_334;
                items_329[n_342]=((struct buffer*)(__right_value265=map$2charphbufferph_at(self,it_334,default_value_343)));
                come_call_finalizer3(__right_value265,buffer_finalize, 0, 1, 0, 0, (void*)0);
                len_331++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_328;
    self->items=items_329;
    self->item_existance=item_existance_330;
    self->size=size_327;
    self->len=len_331;
}

static char* map$2charphbufferph_begin(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_332;
char* __result234__;
char* __result235__;
char* result_333;
char* __result236__;
result_332 = (void*)0;
result_333 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_332,0,sizeof(char*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_332;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_333,0,sizeof(char*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_333;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphbufferph_next(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_335;
char* __result237__;
char* __result238__;
char* result_336;
char* __result239__;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_335,0,sizeof(char*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_335;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_336,0,sizeof(char*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_336;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_339;
unsigned int it_340;
struct buffer* __result240__;
struct buffer* __result241__;
struct buffer* __result242__;
struct buffer* __result243__;
    hash_339=charp_get_hash_key(((char*)key))%self->size;
    it_340=hash_339;
    while((_Bool)1) {
        if(        self->item_existance[it_340]) {
            if(            charp_equals(self->keys[it_340],key)) {
                __result240__ = gComeFunResultObject = __result_obj__ = self->items[it_340];
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result240__;
            }
            it_340++;
            if(            it_340>=self->size) {
                it_340=0;
            }
            else if(            it_340==hash_339) {
                __result241__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
        }
        else {
            __result242__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result242__;
        }
    }
    __result243__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_346;
struct list_item$1charp* it_347;
struct list$1charp* __result247__;
    it2_346=0;
    it_347=self->head;
    while(it_347!=((void*)0)) {
        if(        charp_equals(it_347->item,item)) {
            list$1charp_delete(self,it2_346,it2_346+1);
            break;
        }
        it2_346++;
        it_347=it_347->next;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_348;
struct list$1charp* __result244__;
struct list_item$1charp* it_351;
int i_352;
struct list_item$1charp* prev_it_353;
struct list_item$1charp* it_354;
int i_355;
struct list_item$1charp* prev_it_356;
struct list_item$1charp* it_357;
struct list_item$1charp* head_prev_it_358;
struct list_item$1charp* tail_it_359;
int i_360;
struct list_item$1charp* prev_it_361;
struct list$1charp* __result246__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_348=tail;
        tail=head;
        head=tmp_348;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result244__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_351=self->head;
        i_352=0;
        while(it_351!=((void*)0)) {
            if(            i_352<tail) {
                prev_it_353=it_351;
                it_351=it_351->next;
                i_352++;
                come_call_finalizer3(prev_it_353,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_352==tail) {
                self->head=it_351;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_351=it_351->next;
                i_352++;
            }
        }
    }
    else if(    tail==self->len) {
        it_354=self->head;
        i_355=0;
        while(it_354!=((void*)0)) {
            if(            i_355==head) {
                self->tail=it_354->prev;
                self->tail->next=((void*)0);
            }
            if(            i_355>=head) {
                prev_it_356=it_354;
                it_354=it_354->next;
                i_355++;
                come_call_finalizer3(prev_it_356,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_354=it_354->next;
                i_355++;
            }
        }
    }
    else {
        it_357=self->head;
        head_prev_it_358=((void*)0);
        tail_it_359=((void*)0);
        i_360=0;
        while(it_357!=((void*)0)) {
            if(            i_360==head) {
                head_prev_it_358=it_357->prev;
            }
            if(            i_360==tail) {
                tail_it_359=it_357;
            }
            if(            i_360>=head&&i_360<tail) {
                prev_it_361=it_357;
                it_357=it_357->next;
                i_360++;
                come_call_finalizer3(prev_it_361,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_357=it_357->next;
                i_360++;
            }
        }
        if(        head_prev_it_358!=((void*)0)) {
            head_prev_it_358->next=tail_it_359;
        }
        if(        tail_it_359!=((void*)0)) {
            tail_it_359->prev=head_prev_it_358;
        }
    }
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_349;
struct list_item$1charp* prev_it_350;
struct list$1charp* __result245__;
    it_349=self->head;
    while(it_349!=((void*)0)) {
        prev_it_350=it_349;
        it_349=it_349->next;
        come_call_finalizer3(prev_it_350,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_363;
char* __result248__;
char* __result249__;
char* result_364;
char* __result250__;
result_363 = (void*)0;
result_364 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_363,0,sizeof(char*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_363;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->head;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_364,0,sizeof(char*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_364;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_366;
char* __result251__;
char* __result252__;
char* result_367;
char* __result253__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_366,0,sizeof(char*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_367,0,sizeof(char*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_368;
struct list$1tuple2$2charphsTypephph* o2_saved_369;
struct tuple2$2charphsTypeph* it_370;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* name_371=0;
struct sType* type_372=0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    !klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_368=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 101, "struct buffer*", (void*)0, (void*)0))));
        if(        klass->mParentClassName) {
            buffer_append_format(buf_368,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
        }
        else {
            buffer_append_format(buf_368,"struct %s\n{\n",klass->mName);
        }
        for(        o2_saved_369=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_370=list$1tuple2$2charphsTypephph_begin((o2_saved_369));        !list$1tuple2$2charphsTypephph_end((o2_saved_369));        it_370=list$1tuple2$2charphsTypephph_next((o2_saved_369))        ){
            multiple_assign_var2=it_370;
            name_371=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_372=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_372->mStatic=(_Bool)0;
            buffer_append_str(buf_368,"    ");
            buffer_append_str(buf_368,((char*)(__right_value268=make_define_var_no_solved(type_372,name_371,(_Bool)0,(_Bool)1,info))));
            __right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_368,";\n");
            name_371 = come_decrement_ref_count2(name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_369,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        klass->mAttribute==((void*)0)) {
            buffer_append_str(buf_368,"};\n");
        }
        else {
            buffer_append_format(buf_368,"} %s;\n",klass->mAttribute);
        }
        if(        string_operator_equals(klass->mDeclareSName,info->base_sname)) {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value269=buffer_to_string(buf_368))));
            __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(buf_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_373;
struct sClass* klass_374;
int i_375;
void* __right_value270 = (void*)0;
_Bool result_376;
    type2_373=type->mNoSolvedGenericsType->v1;
    if(    type2_373&&is_contained_generics_types(type2_373,info)) {
        return (_Bool)1;
    }
    klass_374=type->mClass;
    if(    klass_374->mGenerics) {
        return (_Bool)1;
    }
    for(    i_375=0;    i_375<list$1sTypeph_length(type->mGenericsTypes);    i_375++    ){
        result_376=is_contained_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value270=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_375))), "14struct.c", 146, 1)),info);
        come_call_finalizer3(__right_value270,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_376) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_377;
struct sClass* klass_378;
int i_379;
void* __right_value271 = (void*)0;
_Bool result_380;
    type2_377=type->mNoSolvedGenericsType->v1;
    if(    type2_377&&is_contained_method_generics_types(type2_377,info)) {
        return (_Bool)1;
    }
    klass_378=type->mClass;
    if(    klass_378->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_379=0;    i_379<list$1sTypeph_length(type->mGenericsTypes);    i_379++    ){
        result_380=is_contained_method_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value271=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_379))), "14struct.c", 170, 2)),info);
        come_call_finalizer3(__right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_380) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value272 = (void*)0;
char* new_name_381;
void* __right_value273 = (void*)0;
struct sClass* generics_class_384;
_Bool __result259__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sClass* new_class_411;
int i_412;
struct list$1tuple2$2charphsTypephph* o2_saved_413;
struct tuple2$2charphsTypeph* it_414;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_415=0;
struct sType* type_416=0;
void* __right_value284 = (void*)0;
struct sType* new_type_417;
void* __right_value288 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* __dec_obj94;
void* __right_value333 = (void*)0;
struct sType* __dec_obj95;
void* __right_value334 = (void*)0;
_Bool __result291__;
    new_name_381=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2charphsClassph_find(info->classes,new_name_381)) {
        generics_class_384=((struct sClass*)(__right_value273=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
        come_call_finalizer3(__right_value273,sClass_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_class_384==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result259__ = (_Bool)0;
            new_name_381 = come_decrement_ref_count2(new_name_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result259__;
        }
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_381)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 193, "struct sClass*", (void*)0, (void*)0)),new_name_381,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_411=((struct sClass*)(__right_value283=map$2charphsClassph_at(info->classes,((char*)(__right_value282=__builtin_string(new_name_381))),((void*)0))));
        __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value283,sClass_finalize, 0, 1, 0, 0, (void*)0);
        i_412=0;
        for(        o2_saved_413=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_384->mFields)),it_414=list$1tuple2$2charphsTypephph_begin((o2_saved_413));        !list$1tuple2$2charphsTypephph_end((o2_saved_413));        it_414=list$1tuple2$2charphsTypephph_next((o2_saved_413))        ){
            multiple_assign_var3=it_414;
            name_415=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_416=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_417=(struct sType*)come_increment_ref_count(solve_generics(type_416,generics_type,info));
            list$1tuple2$2charphsTypephph_push_back(new_class_411->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 203, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_415)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, new_type_417)))));
            name_415 = come_decrement_ref_count2(name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_416,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_417,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_413,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj94=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_411;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_411,info);
    }
    else {
        if(        type->mNoSolvedGenericsType->v1==((void*)0)) {
            __dec_obj95=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value334=map$2charphsClassphp_operator_load_element(info->classes,new_name_381)));
        come_call_finalizer3(__right_value334,sClass_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_reset(type->mGenericsTypes);
    }
    __result291__ = (_Bool)1;
    new_name_381 = come_decrement_ref_count2(new_name_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result291__;
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_382;
int it_383;
    hash_382=charp_get_hash_key(((char*)key))%self->size;
    it_383=hash_382;
    while((_Bool)1) {
        if(        self->item_existance[it_383]) {
            if(            charp_equals(self->keys[it_383],key)) {
                return (_Bool)1;
            }
            it_383++;
            if(            it_383>=self->size) {
                it_383=0;
            }
            else if(            it_383==hash_382) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_385;
unsigned int hash_386;
unsigned int it_387;
struct sClass* __result255__;
struct sClass* __result256__;
struct sClass* __result257__;
struct sClass* __result258__;
default_value_385 = (void*)0;
    memset(&default_value_385,0,sizeof(struct sClass*));
    hash_386=charp_get_hash_key(((char*)key))%self->size;
    it_387=hash_386;
    while((_Bool)1) {
        if(        self->item_existance[it_387]) {
            if(            charp_equals(self->keys[it_387],key)) {
                __result255__ = gComeFunResultObject = __result_obj__ = self->items[it_387];
                come_call_finalizer3(default_value_385,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
            it_387++;
            if(            it_387>=self->size) {
                it_387=0;
            }
            else if(            it_387==hash_386) {
                __result256__ = gComeFunResultObject = __result_obj__ = default_value_385;
                come_call_finalizer3(default_value_385,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
        }
        else {
            __result257__ = gComeFunResultObject = __result_obj__ = default_value_385;
            come_call_finalizer3(default_value_385,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result257__;
        }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = default_value_385;
    come_call_finalizer3(default_value_385,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj55;
struct list$1tuple2$2charphsTypephph* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
char* __dec_obj59;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj55=self->mName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj56=self->mFields;
            come_call_finalizer3(__dec_obj56,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj57=self->mDeclareSName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj58=self->mParentClassName;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj59=self->mAttribute;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_388;
struct list_item$1tuple2$2charphsTypephph* prev_it_389;
    it_388=self->head;
    while(it_388!=((void*)0)) {
        prev_it_389=it_388;
        it_388=it_388->next;
        come_call_finalizer3(prev_it_389,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_407;
unsigned int it_408;
_Bool same_key_exist_409;
char* it2_410;
struct map$2charphsClassph* __result270__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_407=charp_get_hash_key(key)%self->size;
    it_408=hash_407;
    while((_Bool)1) {
        if(        self->item_existance[it_408]) {
            if(            charp_equals(self->keys[it_408],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_408]);
                    self->keys[it_408] = come_decrement_ref_count2(self->keys[it_408], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_408]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_408]);
                    self->keys[it_408]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_408],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_408]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_408]=item;
                }
                break;
            }
            it_408++;
            if(            it_408>=self->size) {
                it_408=0;
            }
            else if(            it_408==hash_407) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_408]=(_Bool)1;
            if(            1) {
                self->keys[it_408]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_408]=key;
            }
            if(            1) {
                self->items[it_408]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_408]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_409=(_Bool)0;
    for(    it2_410=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_410=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_410,key)) {
            same_key_exist_409=(_Bool)1;
        }
    }
    if(    !same_key_exist_409) {
        list$1charp_push_back(self->key_list,key);
    }
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_390;
void* __right_value274 = (void*)0;
char** keys_391;
void* __right_value275 = (void*)0;
struct sClass** items_392;
void* __right_value276 = (void*)0;
_Bool* item_existance_393;
int len_394;
char* it_397;
struct sClass* default_value_400;
void* __right_value277 = (void*)0;
struct sClass* it2_401;
unsigned int hash_404;
int n_405;
struct sClass* default_value_406;
void* __right_value278 = (void*)0;
default_value_400 = (void*)0;
default_value_406 = (void*)0;
    size_390=self->size*10;
    keys_391=(char**)come_increment_ref_count(((char**)(__right_value274=(char**)come_calloc(1, sizeof(char*)*(1*(size_390)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_392=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value275=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_390)), "./comelang.h", 2694, "struct sClass**", (void*)0, (void*)0))));
    item_existance_393=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value276=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_390)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_394=0;
    for(    it_397=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_397=map$2charphsClassph_next(self)    ){
        memset(&default_value_400,0,sizeof(struct sClass*));
        it2_401=((struct sClass*)(__right_value277=map$2charphsClassph_at(self,it_397,default_value_400)));
        come_call_finalizer3(__right_value277,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_404=charp_get_hash_key(it_397)%size_390;
        n_405=hash_404;
        while((_Bool)1) {
            if(            item_existance_393[n_405]) {
                n_405++;
                if(                n_405>=size_390) {
                    n_405=0;
                }
                else if(                n_405==hash_404) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_393[n_405]=(_Bool)1;
                keys_391[n_405]=it_397;
                items_392[n_405]=((struct sClass*)(__right_value278=map$2charphsClassph_at(self,it_397,default_value_406)));
                come_call_finalizer3(__right_value278,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_394++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_391;
    self->items=items_392;
    self->item_existance=item_existance_393;
    self->size=size_390;
    self->len=len_394;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_395;
char* __result260__;
char* __result261__;
char* result_396;
char* __result262__;
result_395 = (void*)0;
result_396 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_395,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_395;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_396,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_396;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_398;
char* __result263__;
char* __result264__;
char* result_399;
char* __result265__;
result_398 = (void*)0;
result_399 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_398,0,sizeof(char*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_398;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_399,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_399;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_402;
unsigned int it_403;
struct sClass* __result266__;
struct sClass* __result267__;
struct sClass* __result268__;
struct sClass* __result269__;
    hash_402=charp_get_hash_key(((char*)key))%self->size;
    it_403=hash_402;
    while((_Bool)1) {
        if(        self->item_existance[it_403]) {
            if(            charp_equals(self->keys[it_403],key)) {
                __result266__ = gComeFunResultObject = __result_obj__ = self->items[it_403];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
            it_403++;
            if(            it_403>=self->size) {
                it_403=0;
            }
            else if(            it_403==hash_402) {
                __result267__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
        }
        else {
            __result268__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result268__;
        }
    }
    __result269__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_418;
struct tuple2$2charphsTypeph* __dec_obj60;
void* __right_value286 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_419;
struct tuple2$2charphsTypeph* __dec_obj61;
void* __right_value287 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_420;
struct tuple2$2charphsTypeph* __dec_obj62;
struct list$1tuple2$2charphsTypephph* __result271__;
    if(    self->len==0) {
        litem_418=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value285=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1290, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_418->prev=((void*)0);
        litem_418->next=((void*)0);
        __dec_obj60=litem_418->item;
        litem_418->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_418;
        self->head=litem_418;
    }
    else if(    self->len==1) {
        litem_419=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value286=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1300, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_419->prev=self->head;
        litem_419->next=((void*)0);
        __dec_obj61=litem_419->item;
        litem_419->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_419;
        self->head->next=litem_419;
    }
    else {
        litem_420=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value287=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1310, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_420->prev=self->tail;
        litem_420->next=((void*)0);
        __dec_obj62=litem_420->item;
        litem_420->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_420;
        self->tail=litem_420;
    }
    self->len++;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result272__;
void* __right_value289 = (void*)0;
struct sType* result_421;
void* __right_value292 = (void*)0;
struct tuple1$1sTypeph* __dec_obj65;
void* __right_value293 = (void*)0;
struct tuple1$1sTypeph* __dec_obj66;
void* __right_value294 = (void*)0;
struct tuple1$1sTypeph* __dec_obj67;
void* __right_value295 = (void*)0;
struct sType* __dec_obj68;
void* __right_value296 = (void*)0;
char* __dec_obj69;
void* __right_value297 = (void*)0;
char* __dec_obj70;
void* __right_value304 = (void*)0;
struct list$1sTypeph* __dec_obj74;
void* __right_value312 = (void*)0;
struct list$1sNodeph* __dec_obj78;
void* __right_value313 = (void*)0;
struct list$1sTypeph* __dec_obj79;
void* __right_value320 = (void*)0;
struct list$1charph* __dec_obj83;
void* __right_value321 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
void* __right_value322 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value323 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value324 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value325 = (void*)0;
char* __dec_obj88;
void* __right_value326 = (void*)0;
char* __dec_obj89;
void* __right_value327 = (void*)0;
char* __dec_obj90;
void* __right_value328 = (void*)0;
char* __dec_obj91;
struct sType* __result288__;
    if(    self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_421=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_421->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj65=result_421->mNoSolvedGenericsType;
        result_421->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj65,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj66=result_421->mOriginalLoadVarType;
        result_421->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj67=result_421->mRefferenceOriginalType;
        result_421->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj67,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj68=result_421->mAnyOriginalType;
        result_421->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj69=result_421->mInterfaceName;
        result_421->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj70=result_421->mGenericsName;
        result_421->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj74=result_421->mGenericsTypes;
        result_421->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj74,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj78=result_421->mArrayNum;
        result_421->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj78,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj79=result_421->mParamTypes;
        result_421->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj79,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj83=result_421->mParamNames;
        result_421->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj84=result_421->mResultType;
        result_421->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj85=result_421->mAlignas;
        result_421->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj86=result_421->mChannelType;
        result_421->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_421->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_421->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_421->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_421->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_421->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_421->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_421->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_421->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_421->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_421->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_421->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_421->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_421->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_421->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_421->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_421->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_421->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_421->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_421->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_421->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_421->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_421->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_421->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_421->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_421->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj87=result_421->mSizeNum;
        result_421->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_421->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj88=result_421->mOriginalTypeName;
        result_421->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_421->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_421->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_421->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_421->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_421->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_421->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_421->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj89=result_421->mAsmName;
        result_421->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_421->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_421->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_421->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_421->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_421->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj90=result_421->mTupleName;
        result_421->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj91=result_421->mAttribute;
        result_421->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_421;
    come_call_finalizer3(result_421,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result273__;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* result_422;
void* __right_value291 = (void*)0;
struct sType* __dec_obj63;
struct tuple1$1sTypeph* __result274__;
    if(    self==(void*)0) {
        __result273__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_422=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj63=result_422->v1;
        result_422->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_422;
    come_call_finalizer3(result_422,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj64;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj64=self->v1;
            come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result275__;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1sTypeph* result_423;
struct list_item$1sTypeph* it_424;
void* __right_value303 = (void*)0;
struct list$1sTypeph* __result278__;
    if(    self==((void*)0)) {
        __result275__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_423=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_424=self->head;
    while(it_424!=((void*)0)) {
        list$1sTypeph_add(result_423,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_424->item)));
        it_424=it_424->next;
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_423;
    come_call_finalizer3(result_423,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result276__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
struct list_item$1sTypeph* litem_425;
struct sType* __dec_obj71;
void* __right_value301 = (void*)0;
struct list_item$1sTypeph* litem_426;
struct sType* __dec_obj72;
void* __right_value302 = (void*)0;
struct list_item$1sTypeph* litem_427;
struct sType* __dec_obj73;
struct list$1sTypeph* __result277__;
    if(    self->len==0) {
        litem_425=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value300=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_425->prev=((void*)0);
        litem_425->next=((void*)0);
        __dec_obj71=litem_425->item;
        litem_425->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_425;
        self->head=litem_425;
    }
    else if(    self->len==1) {
        litem_426=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value301=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_426->prev=self->head;
        litem_426->next=((void*)0);
        __dec_obj72=litem_426->item;
        litem_426->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_426;
        self->head->next=litem_426;
    }
    else {
        litem_427=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value302=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_427->prev=self->tail;
        litem_427->next=((void*)0);
        __dec_obj73=litem_427->item;
        litem_427->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_427;
        self->tail=litem_427;
    }
    self->len++;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result279__;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1sNodeph* result_428;
struct list_item$1sNodeph* it_429;
void* __right_value311 = (void*)0;
struct list$1sNodeph* __result284__;
    if(    self==((void*)0)) {
        __result279__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_428=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_429=self->head;
    while(it_429!=((void*)0)) {
        list$1sNodeph_add(result_428,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_429->item)));
        it_429=it_429->next;
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_428;
    come_call_finalizer3(result_428,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result280__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
struct list_item$1sNodeph* litem_430;
struct sNode* __dec_obj75;
void* __right_value308 = (void*)0;
struct list_item$1sNodeph* litem_431;
struct sNode* __dec_obj76;
void* __right_value309 = (void*)0;
struct list_item$1sNodeph* litem_432;
struct sNode* __dec_obj77;
struct list$1sNodeph* __result281__;
    if(    self->len==0) {
        litem_430=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value307=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_430->prev=((void*)0);
        litem_430->next=((void*)0);
        __dec_obj75=litem_430->item;
        litem_430->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_430;
        self->head=litem_430;
    }
    else if(    self->len==1) {
        litem_431=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value308=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_431->prev=self->head;
        litem_431->next=((void*)0);
        __dec_obj76=litem_431->item;
        litem_431->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_431;
        self->head->next=litem_431;
    }
    else {
        litem_432=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value309=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_432->prev=self->tail;
        litem_432->next=((void*)0);
        __dec_obj77=litem_432->item;
        litem_432->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_432;
        self->tail=litem_432;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result282__;
void* __right_value310 = (void*)0;
struct sNode* result_433;
struct sNode* __result283__;
    if(    self==(void*)0) {
        __result282__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_433=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_433->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_433->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_433->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_433->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_433->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_433->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_433->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_433->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_433->kind=self->kind;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_433;
    if(result_433) { result_433 = come_decrement_ref_count2(result_433, ((struct sNode*)result_433)->finalize, ((struct sNode*)result_433)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result285__;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct list$1charph* result_434;
struct list_item$1charph* it_435;
void* __right_value319 = (void*)0;
struct list$1charph* __result287__;
    if(    self==((void*)0)) {
        __result285__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    result_434=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_435=self->head;
    while(it_435!=((void*)0)) {
        list$1charph_add(result_434,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_435->item)));
        it_435=it_435->next;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_434;
    come_call_finalizer3(result_434,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value316 = (void*)0;
struct list_item$1charph* litem_436;
char* __dec_obj80;
void* __right_value317 = (void*)0;
struct list_item$1charph* litem_437;
char* __dec_obj81;
void* __right_value318 = (void*)0;
struct list_item$1charph* litem_438;
char* __dec_obj82;
struct list$1charph* __result286__;
    if(    self->len==0) {
        litem_436=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value316=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_436->prev=((void*)0);
        litem_436->next=((void*)0);
        __dec_obj80=litem_436->item;
        litem_436->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_436;
        self->head=litem_436;
    }
    else if(    self->len==1) {
        litem_437=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value317=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_437->prev=self->head;
        litem_437->next=((void*)0);
        __dec_obj81=litem_437->item;
        litem_437->item=(char*)come_increment_ref_count(item);
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_437;
        self->head->next=litem_437;
    }
    else {
        litem_438=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value318=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_438->prev=self->tail;
        litem_438->next=((void*)0);
        __dec_obj82=litem_438->item;
        litem_438->item=(char*)come_increment_ref_count(item);
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_438;
        self->tail=litem_438;
    }
    self->len++;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj92;
struct sType* __dec_obj93;
struct tuple2$2charphsTypeph* __result289__;
    __dec_obj92=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_439;
struct list_item$1sTypeph* prev_it_440;
struct list$1sTypeph* __result290__;
    it_439=self->head;
    while(it_439!=((void*)0)) {
        prev_it_440=it_439;
        it_439=it_439->next;
        come_call_finalizer3(prev_it_440,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* __dec_obj97;
void* __right_value352 = (void*)0;
struct sClass* __dec_obj110;
struct sStructNode* __result300__;
    ((struct sNodeBase*)(__right_value335=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value335,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj97=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj110=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj110,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
char* __result301__;
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value353=__builtin_string("sStructNode")));
    __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_448;
void* __right_value354 = (void*)0;
char* name_449;
_Bool __result302__;
    klass_448=(struct sClass*)come_increment_ref_count(self->mClass);
    name_449=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_448,info);
    __result302__ = (_Bool)1;
    come_call_finalizer3(klass_448,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_449 = come_decrement_ref_count2(name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result302__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj96;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj96=self->sname;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result292__;
void* __right_value337 = (void*)0;
struct sClass* result_441;
void* __right_value338 = (void*)0;
char* __dec_obj98;
void* __right_value348 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj106;
void* __right_value349 = (void*)0;
char* __dec_obj107;
void* __right_value350 = (void*)0;
char* __dec_obj108;
void* __right_value351 = (void*)0;
char* __dec_obj109;
struct sClass* __result299__;
    if(    self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_441=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_441->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_441->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_441->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_441->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_441->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_441->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_441->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_441->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj98=result_441->mName;
        result_441->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_441->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj106=result_441->mFields;
        result_441->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsTypephphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj106,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mOutputed=self->mOutputed;
    }
    if(    self!=((void*)0)) {
        result_441->mOutputed2=self->mOutputed2;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj107=result_441->mDeclareSName;
        result_441->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mNobodyStruct=self->mNobodyStruct;
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj108=result_441->mParentClassName;
        result_441->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj109=result_441->mAttribute;
        result_441->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result299__ = gComeFunResultObject = __result_obj__ = result_441;
    come_call_finalizer3(result_441,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result293__;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_442;
struct list_item$1tuple2$2charphsTypephph* it_443;
void* __right_value347 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result298__;
    if(    self==((void*)0)) {
        __result293__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_442=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1206, "struct list$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
    it_443=self->head;
    while(it_443!=((void*)0)) {
        list$1tuple2$2charphsTypephph_add(result_442,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_443->item)));
        it_443=it_443->next;
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_442;
    come_call_finalizer3(result_442,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result294__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_444;
struct tuple2$2charphsTypeph* __dec_obj99;
void* __right_value342 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_445;
struct tuple2$2charphsTypeph* __dec_obj100;
void* __right_value343 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_446;
struct tuple2$2charphsTypeph* __dec_obj101;
struct list$1tuple2$2charphsTypephph* __result295__;
    if(    self->len==0) {
        litem_444=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value341=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_444->prev=((void*)0);
        litem_444->next=((void*)0);
        __dec_obj99=litem_444->item;
        litem_444->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_444;
        self->head=litem_444;
    }
    else if(    self->len==1) {
        litem_445=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value342=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_445->prev=self->head;
        litem_445->next=((void*)0);
        __dec_obj100=litem_445->item;
        litem_445->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_445;
        self->head->next=litem_445;
    }
    else {
        litem_446=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value343=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_446->prev=self->tail;
        litem_446->next=((void*)0);
        __dec_obj101=litem_446->item;
        litem_446->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_446;
        self->tail=litem_446;
    }
    self->len++;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result296__;
void* __right_value344 = (void*)0;
struct tuple2$2charphsTypeph* result_447;
void* __right_value345 = (void*)0;
char* __dec_obj102;
void* __right_value346 = (void*)0;
struct sType* __dec_obj103;
struct tuple2$2charphsTypeph* __result297__;
    if(    self==(void*)0) {
        __result296__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    result_447=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj102=result_447->v1;
        result_447->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj103=result_447->v2;
        result_447->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_447;
    come_call_finalizer3(result_447,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj104;
struct sType* __dec_obj105;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj104=self->v1;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj105=self->v2;
            come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj111;
char* __dec_obj112;
struct sClass* __dec_obj113;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj111=self->sname;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj112=self->mName;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj113=self->mClass;
            come_call_finalizer3(__dec_obj113,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
char* __dec_obj114;
void* __right_value357 = (void*)0;
struct sClass* __dec_obj115;
struct sStructNobodyNode* __result303__;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value355,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj114=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj115=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj115,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string("sStructNobodyNode")));
    __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value359 = (void*)0;
char* name_450;
struct sClass* klass_451;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
_Bool __result305__;
    name_450=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_451=self->mClass;
    map$2charphbufferph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(name_450),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value360=xsprintf("struct %s;\n",name_450))))));
    __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result305__ = (_Bool)1;
    name_450 = come_decrement_ref_count2(name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result305__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj116;
char* __dec_obj117;
struct sClass* __dec_obj118;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj116=self->sname;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj117=self->mName;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj118=self->mClass;
            come_call_finalizer3(__dec_obj118,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
struct sNothingNode* __result306__;
    ((struct sNodeBase*)(__right_value362=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value362,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value363=__builtin_string("sNothingNode")));
    __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
char* __dec_obj119;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj119=self->sname;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value368 = (void*)0;
struct sNode* __result310__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 314, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value365=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 314, "struct sNothingNode*", (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result310__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value368=_inf_value1));
    come_call_finalizer3(__right_value365,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value368) { __right_value368 = come_decrement_ref_count2(__right_value368, ((struct sNode*)__right_value368)->finalize, ((struct sNode*)__right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result308__;
void* __right_value366 = (void*)0;
struct sNothingNode* result_452;
void* __right_value367 = (void*)0;
char* __dec_obj120;
struct sNothingNode* __result309__;
    if(    self==(void*)0) {
        __result308__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    result_452=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_452->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj120=result_452->sname;
        result_452->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_452->sline_real=self->sline_real;
    }
    __result309__ = gComeFunResultObject = __result_obj__ = result_452;
    come_call_finalizer3(result_452,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
char* __dec_obj121;
void* __right_value371 = (void*)0;
struct sClass* __dec_obj122;
struct list$1sNodeph* __dec_obj123;
struct sClassNode* __result311__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj121=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj122,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj123=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj123,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
char* __result312__;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value372=__builtin_string("sClassNode")));
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value373 = (void*)0;
struct sClass* klass_453;
void* __right_value374 = (void*)0;
char* name_454;
void* __right_value375 = (void*)0;
_Bool _if_conditional2;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
_Bool _elif_conditional1;
void* __right_value378 = (void*)0;
struct sClass* klass2_455;
void* __right_value379 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj128;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sType* type_456;
void* __right_value382 = (void*)0;
struct sType* override__457;
void* __right_value388 = (void*)0;
struct list$1sNodeph* o2_saved_479;
struct sNode* it_482;
_Bool Value_485;
_Bool __result330__;
_Bool __result331__;
    klass_453=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
    name_454=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)(__right_value375=map$2charphsClassph_at(info->classes,name_454,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value375,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_454),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_453)));
    }
    else if(    (_elif_conditional1=(list$1tuple2$2charphsTypephph_length(((struct sClass*)(__right_value377=map$2charphsClassph_at(info->classes,name_454,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_453->mFields)>0)),    come_call_finalizer3(__right_value377,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _elif_conditional1) {
        klass2_455=((struct sClass*)(__right_value378=map$2charphsClassph_at(info->classes,name_454,((void*)0))));
        come_call_finalizer3(__right_value378,sClass_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj128=klass2_455->mFields;
        klass2_455->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsTypephphp_clone, klass_453->mFields));
        come_call_finalizer3(__dec_obj128,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_456=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 352, "struct sType*", (void*)0, (void*)0)),name_454,(_Bool)0,info));
    override__457=((struct sType*)(__right_value382=map$2charphsTypeph_at(info->types,name_454,((void*)0))));
    come_call_finalizer3(__right_value382,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    override__457) {
        if(        override__457->mTypedef) {
            type_456->mTypedef=(_Bool)1;
        }
    }
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_454),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_456)));
    output_struct(klass_453,info);
    for(    o2_saved_479=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_482=list$1sNodeph_begin((o2_saved_479));    !list$1sNodeph_end((o2_saved_479));    it_482=list$1sNodeph_next((o2_saved_479))    ){
        Value_485=node_compile(it_482,info);
        if(        !Value_485) {
            __result330__ = (_Bool)0;
            come_call_finalizer3(o2_saved_479,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_453,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result330__;
        }
        else {
        }
    }
    come_call_finalizer3(o2_saved_479,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    output_struct_come_header(klass_453,info);
    __result331__ = (_Bool)1;
    come_call_finalizer3(klass_453,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result331__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj124;
char* __dec_obj125;
struct sClass* __dec_obj126;
struct list$1sNodeph* __dec_obj127;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj124=self->sname;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj125=self->mName;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj126=self->mClass;
            come_call_finalizer3(__dec_obj126,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(        self->mMethods==gComeFunResultObject) {
            __dec_obj127=self->mMethods;
            come_call_finalizer3(__dec_obj127,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_458;
unsigned int it_459;
struct sType* __result313__;
struct sType* __result314__;
struct sType* __result315__;
struct sType* __result316__;
    hash_458=charp_get_hash_key(((char*)key))%self->size;
    it_459=hash_458;
    while((_Bool)1) {
        if(        self->item_existance[it_459]) {
            if(            charp_equals(self->keys[it_459],key)) {
                __result313__ = gComeFunResultObject = __result_obj__ = self->items[it_459];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result313__;
            }
            it_459++;
            if(            it_459>=self->size) {
                it_459=0;
            }
            else if(            it_459==hash_458) {
                __result314__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result314__;
            }
        }
        else {
            __result315__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result315__;
        }
    }
    __result316__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_475;
unsigned int it_476;
_Bool same_key_exist_477;
char* it2_478;
struct map$2charphsTypeph* __result323__;
    if(    self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_475=charp_get_hash_key(key)%self->size;
    it_476=hash_475;
    while((_Bool)1) {
        if(        self->item_existance[it_476]) {
            if(            charp_equals(self->keys[it_476],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_476]);
                    self->keys[it_476] = come_decrement_ref_count2(self->keys[it_476], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_476]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_476]);
                    self->keys[it_476]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_476],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_476]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_476]=item;
                }
                break;
            }
            it_476++;
            if(            it_476>=self->size) {
                it_476=0;
            }
            else if(            it_476==hash_475) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_476]=(_Bool)1;
            if(            1) {
                self->keys[it_476]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_476]=key;
            }
            if(            1) {
                self->items[it_476]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_476]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_477=(_Bool)0;
    for(    it2_478=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_478=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_478,key)) {
            same_key_exist_477=(_Bool)1;
        }
    }
    if(    !same_key_exist_477) {
        list$1charp_push_back(self->key_list,key);
    }
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_460;
void* __right_value383 = (void*)0;
char** keys_461;
void* __right_value384 = (void*)0;
struct sType** items_462;
void* __right_value385 = (void*)0;
_Bool* item_existance_463;
int len_464;
char* it_467;
struct sType* default_value_470;
void* __right_value386 = (void*)0;
struct sType* it2_471;
unsigned int hash_472;
int n_473;
struct sType* default_value_474;
void* __right_value387 = (void*)0;
default_value_470 = (void*)0;
default_value_474 = (void*)0;
    size_460=self->size*10;
    keys_461=(char**)come_increment_ref_count(((char**)(__right_value383=(char**)come_calloc(1, sizeof(char*)*(1*(size_460)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_462=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value384=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_460)), "./comelang.h", 2694, "struct sType**", (void*)0, (void*)0))));
    item_existance_463=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value385=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_460)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_464=0;
    for(    it_467=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_467=map$2charphsTypeph_next(self)    ){
        memset(&default_value_470,0,sizeof(struct sType*));
        it2_471=((struct sType*)(__right_value386=map$2charphsTypeph_at(self,it_467,default_value_470)));
        come_call_finalizer3(__right_value386,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_472=charp_get_hash_key(it_467)%size_460;
        n_473=hash_472;
        while((_Bool)1) {
            if(            item_existance_463[n_473]) {
                n_473++;
                if(                n_473>=size_460) {
                    n_473=0;
                }
                else if(                n_473==hash_472) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_463[n_473]=(_Bool)1;
                keys_461[n_473]=it_467;
                items_462[n_473]=((struct sType*)(__right_value387=map$2charphsTypeph_at(self,it_467,default_value_474)));
                come_call_finalizer3(__right_value387,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_464++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_461;
    self->items=items_462;
    self->item_existance=item_existance_463;
    self->size=size_460;
    self->len=len_464;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_465;
char* __result317__;
char* __result318__;
char* result_466;
char* __result319__;
result_465 = (void*)0;
result_466 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_465,0,sizeof(char*));
        __result317__ = gComeFunResultObject = __result_obj__ = result_465;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result318__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    memset(&result_466,0,sizeof(char*));
    __result319__ = gComeFunResultObject = __result_obj__ = result_466;
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_468;
char* __result320__;
char* __result321__;
char* result_469;
char* __result322__;
result_468 = (void*)0;
result_469 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_468,0,sizeof(char*));
        __result320__ = gComeFunResultObject = __result_obj__ = result_468;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result321__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    memset(&result_469,0,sizeof(char*));
    __result322__ = gComeFunResultObject = __result_obj__ = result_469;
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_480;
struct sNode* __result324__;
struct sNode* __result325__;
struct sNode* result_481;
struct sNode* __result326__;
result_480 = (void*)0;
result_481 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_480,0,sizeof(struct sNode*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_480;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->head;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_481,0,sizeof(struct sNode*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_481;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_483;
struct sNode* __result327__;
struct sNode* __result328__;
struct sNode* result_484;
struct sNode* __result329__;
result_483 = (void*)0;
result_484 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_483,0,sizeof(struct sNode*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_483;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_484,0,sizeof(struct sNode*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_484;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_486;
void* __right_value389 = (void*)0;
_Bool _if_conditional3;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sType* type_487;
void* __right_value396 = (void*)0;
struct sType* override__488;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* type_489;
void* __right_value402 = (void*)0;
struct sType* override__490;
void* __right_value403 = (void*)0;
struct sClass* parent_class_491;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
char* parent_class_name_492;
void* __right_value406 = (void*)0;
struct sNode* __result332__;
_Bool multiple_declare_493;
char* p_494;
int sline_495;
void* __right_value407 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_496=0;
char* name_497=0;
_Bool err_498=0;
void* __right_value408 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* base_type_499=0;
char* name_500=0;
_Bool err_501=0;
void* __right_value409 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6 = (void*)0;
struct sType* type2_502=0;
char* name2_503=0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7 = (void*)0;
struct sType* type2_504=0;
char* name2_505=0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_506=0;
char* name_507=0;
_Bool err_508=0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
char* struct_attribute2_509;
void* __right_value419 = (void*)0;
char* __dec_obj133;
void* __right_value420 = (void*)0;
char* __dec_obj134;
char* __dec_obj135;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
char* __dec_obj136;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value430 = (void*)0;
struct sNode* node_510;
_Bool Value_512;
struct sNode* __result335__;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value433 = (void*)0;
struct sNode* __result336__;
klass_486 = (void*)0;
    if(    (_if_conditional3=(((struct sClass*)(__right_value389=map$2charphsClassph_at(info->classes,type_name,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value389,sClass_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional3) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 379, "struct sClass*", (void*)0, (void*)0)),((char*)(__right_value392=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 380, "struct sType*", (void*)0, (void*)0)),type_name,(_Bool)0,info));
        override__488=((struct sType*)(__right_value396=map$2charphsTypeph_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value396,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__488) {
            if(            override__488->mTypedef) {
                type_487->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_487)));
        klass_486=((struct sClass*)(__right_value398=map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value398,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_486=((struct sClass*)(__right_value399=map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value399,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        type_489=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 393, "struct sType*", (void*)0, (void*)0)),type_name,(_Bool)0,info));
        override__490=((struct sType*)(__right_value402=map$2charphsTypeph_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value402,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__490) {
            if(            override__490->mTypedef) {
                type_489->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_489)));
        come_call_finalizer3(type_489,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    parent_class_491=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value404=parse_word(info)));
        __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_492=(char*)come_increment_ref_count(parse_word(info));
        parent_class_491=((struct sClass*)(__right_value406=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_492)));
        come_call_finalizer3(__right_value406,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(        parent_class_491==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_492);
            __result332__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            parent_class_name_492 = come_decrement_ref_count2(parent_class_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result332__;
        }
        parent_class_name_492 = come_decrement_ref_count2(parent_class_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_493=(_Bool)0;
        {
            p_494=info->p;
            sline_495=info->sline;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value407=backtrace_parse_type((_Bool)1,info)));
            type_496=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_497=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_498=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value407,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            err_498&&*info->p==44) {
                multiple_declare_493=(_Bool)1;
            }
            info->p=p_494;
            info->sline=sline_495;
            come_call_finalizer3(type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_497 = come_decrement_ref_count2(name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        multiple_declare_493) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value408=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_499=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_500=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_501=multiple_assign_var5->v3;
            come_call_finalizer3(__right_value408,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value409=parse_variable_name((struct sType*)come_increment_ref_count(base_type_499),(_Bool)1,info)));
            type2_502=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_503=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer3(__right_value409,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2charphsTypephph_push_back(klass_486->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 450, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_503),(struct sType*)come_increment_ref_count(type2_502))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value412=parse_variable_name((struct sType*)come_increment_ref_count(base_type_499),(_Bool)0,info)));
                type2_504=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_505=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer3(__right_value412,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(klass_486->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 458, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_505),(struct sType*)come_increment_ref_count(type2_504))));
                come_call_finalizer3(type2_504,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_505 = come_decrement_ref_count2(name2_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(base_type_499,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_500 = come_decrement_ref_count2(name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_502,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_503 = come_decrement_ref_count2(name2_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value415=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_506=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_507=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_508=multiple_assign_var8->v3;
            come_call_finalizer3(__right_value415,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_508) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2charphsTypephph_push_back(klass_486->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 469, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_507),(struct sType*)come_increment_ref_count(type2_506))));
            come_call_finalizer3(type2_506,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_507 = come_decrement_ref_count2(name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_509=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_491) {
        __dec_obj133=klass_486->mParentClassName;
        klass_486->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_491->mName));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_486->mName),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_486)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_509,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj134=klass_486->mAttribute;
        klass_486->mAttribute=(char*)come_increment_ref_count(struct_attribute2_509);
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_509,"")) {
        __dec_obj135=klass_486->mAttribute;
        klass_486->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj136=klass_486->mAttribute;
        klass_486->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute,((char*)(__right_value421=charp_operator_add(" ",struct_attribute2_509)))));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 505, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value425=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 505, "struct sStructNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_486,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_510=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value425,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    Value_512=node_compile(node_510,info);
    if(    !Value_512) {
        __result335__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute2_509 = come_decrement_ref_count2(struct_attribute2_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 511, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value432=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 511, "struct sNothingNode*", (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result336__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value433=_inf_value3));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute2_509 = come_decrement_ref_count2(struct_attribute2_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value432,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value433) { __right_value433 = come_decrement_ref_count2(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj129;
char* __dec_obj130;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj129=self->v1;
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj130=self->v2;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj131;
char* __dec_obj132;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj131=self->v1;
            come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj132=self->v2;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result333__;
void* __right_value426 = (void*)0;
struct sStructNode* result_511;
void* __right_value427 = (void*)0;
char* __dec_obj137;
void* __right_value428 = (void*)0;
char* __dec_obj138;
void* __right_value429 = (void*)0;
struct sClass* __dec_obj139;
struct sStructNode* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_511=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_511->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj137=result_511->sname;
        result_511->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_511->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj138=result_511->mName;
        result_511->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj139=result_511->mClass;
        result_511->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj139,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_511;
    come_call_finalizer3(result_511,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

char* parse_struct_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct buffer* result_513;
char* head_514;
char* tail_515;
void* __right_value436 = (void*)0;
char* __result337__;
    parse_sharp_v5(info);
    result_513=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 517, "struct buffer*", (void*)0, (void*)0))));
    while(1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_514=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_515=info->p;
            buffer_append(result_513,head_514,tail_515-head_514);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result337__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value436=buffer_to_string(result_513)));
    come_call_finalizer3(result_513,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_516;
void* __right_value437 = (void*)0;
char* struct_attribute_517;
void* __right_value438 = (void*)0;
char* type_name_518;
struct sClass* struct_class_519;
void* __right_value439 = (void*)0;
_Bool _if_conditional4;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* type_520;
void* __right_value445 = (void*)0;
struct sType* override__521;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sType* type_522;
void* __right_value449 = (void*)0;
struct sType* override__523;
char* source_tail_524;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct buffer* header_525;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value460 = (void*)0;
struct sNode* __result340__;
void* __right_value461 = (void*)0;
char* T_529;
void* __right_value462 = (void*)0;
struct sClass* generics_class_530;
void* __right_value463 = (void*)0;
_Bool _if_conditional5;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sClass* __dec_obj143;
void* __right_value466 = (void*)0;
_Bool _if_conditional6;
void* __right_value467 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type2_531=0;
char* name_532=0;
_Bool err_533=0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
char* name2_534;
void* __right_value471 = (void*)0;
struct sType* type3_535;
_Bool no_comma_536;
void* __right_value472 = (void*)0;
struct sNode* node_537;
struct sNode* __dec_obj144;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* source_tail_538;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct buffer* header_539;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value483 = (void*)0;
struct sNode* __result342__;
struct sClass* struct_class_540;
void* __right_value484 = (void*)0;
_Bool _if_conditional7;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* type_541;
void* __right_value489 = (void*)0;
struct sType* override__542;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* type_543;
void* __right_value493 = (void*)0;
struct sType* override__544;
void* __right_value494 = (void*)0;
struct sClass* parent_class_545;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
char* parent_class_name_546;
void* __right_value497 = (void*)0;
struct sNode* __result343__;
_Bool multiple_declare_547;
char* p_548;
int sline_549;
void* __right_value498 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_550=0;
char* name_551=0;
_Bool err_552=0;
void* __right_value499 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* base_type_553=0;
char* name_554=0;
_Bool err_555=0;
void* __right_value500 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var12 = (void*)0;
struct sType* type2_556=0;
char* name2_557=0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13 = (void*)0;
struct sType* type2_558=0;
char* name2_559=0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14 = (void*)0;
struct sType* type2_560=0;
char* name_561=0;
_Bool err_562=0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
char* struct_attribute2_563;
void* __right_value510 = (void*)0;
struct sClass* klass2_564;
char* source_tail_565;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct buffer* header_566;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
char* __dec_obj147;
void* __right_value515 = (void*)0;
char* __dec_obj148;
char* __dec_obj149;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* __dec_obj150;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value521 = (void*)0;
struct sNode* __result344__;
char* source_head_567;
void* __right_value522 = (void*)0;
char* type_name_568;
struct sClass* parent_class_569;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* parent_class_name_570;
void* __right_value525 = (void*)0;
struct sNode* __result345__;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct list$1sClassp* parent_classes_571;
struct sClass* parent_class2_574;
void* __right_value531 = (void*)0;
struct sClass* struct_class_578;
void* __right_value532 = (void*)0;
_Bool _if_conditional8;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sClass* __dec_obj151;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sClass* __dec_obj152;
struct sClass* defining_class_579;
void* __right_value537 = (void*)0;
_Bool _if_conditional9;
void* __right_value538 = (void*)0;
char* __dec_obj153;
void* __right_value539 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1sClassp* o2_saved_585;
struct sClass* parent_588;
struct list$1tuple2$2charphsTypephph* o2_saved_591;
struct tuple2$2charphsTypeph* it_592;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
_Bool _elif_conditional2;
void* __right_value548 = (void*)0;
struct sClass* klass2_593;
void* __right_value549 = (void*)0;
char* __dec_obj154;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct list$1sClassp* o2_saved_594;
struct sClass* parent_595;
struct list$1tuple2$2charphsTypephph* o2_saved_596;
struct tuple2$2charphsTypeph* it_597;
void* __right_value552 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_598;
struct tuple2$2charphsTypeph* it_599;
void* __right_value553 = (void*)0;
char* head_600;
char* p_saved_601;
int sline_saved_602;
char* sname_saved_603;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1sNodeph* methods_604;
void* __right_value556 = (void*)0;
char* __dec_obj155;
char* __dec_obj156;
struct map$2charphcharph* __dec_obj157;
_Bool include__607;
_Bool multiple_declare_608;
char* p_609;
int sline_610;
void* __right_value557 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_611=0;
char* name_612=0;
_Bool err_613=0;
_Bool define_function_flag_614;
char* p_615;
int sline_616;
_Bool invalid_type_617;
void* __right_value558 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* result_type_618=0;
char* fun_name_619=0;
_Bool err_620=0;
char* word_621;
void* __right_value559 = (void*)0;
char* __dec_obj158;
void* __right_value560 = (void*)0;
char* __dec_obj159;
char* __dec_obj160;
void* __right_value561 = (void*)0;
char* __dec_obj161;
char* tail_622;
int pointer_num_623;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* __dec_obj162;
void* __right_value564 = (void*)0;
struct sNode* method_624;
struct sType* __dec_obj163;
void* __right_value568 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17 = (void*)0;
struct sType* base_type_628=0;
char* name_629=0;
_Bool err_630=0;
void* __right_value569 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var18 = (void*)0;
struct sType* type2_631=0;
char* name2_632=0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19 = (void*)0;
struct sType* type2_633=0;
char* name2_634=0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
char* module_name_635;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct list$1charph* params_636;
void* __right_value579 = (void*)0;
char* word_637;
void* __right_value580 = (void*)0;
char* __dec_obj167;
void* __right_value581 = (void*)0;
char* __dec_obj168;
void* __right_value582 = (void*)0;
_Bool _if_conditional10;
struct sNode* __result361__;
void* __right_value583 = (void*)0;
struct sClassModule* module_641;
void* __right_value584 = (void*)0;
void* __right_value590 = (void*)0;
struct map$2charphcharph* __dec_obj174;
int i_645;
struct list$1charph* o2_saved_646;
char* it_649;
void* __right_value591 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
char* __dec_obj175;
void* __right_value600 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var20 = (void*)0;
struct sType* type2_676=0;
char* name_677=0;
_Bool err_678=0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
char* __dec_obj176;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value613 = (void*)0;
struct sNode* __result385__;
void* __right_value614 = (void*)0;
struct sNode* __result386__;
struct_class_519 = (void*)0;
generics_class_530 = (void*)0;
struct_class_540 = (void*)0;
struct_class_578 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_516=head;
        struct_attribute_517=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_518=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional4=(((struct sClass*)(__right_value439=map$2charphsClassph_at(info->classes,type_name_518,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value439,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional4) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_518),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 554, "struct sClass*", (void*)0, (void*)0)),type_name_518,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                struct_class_519=((struct sClass*)(__right_value442=map$2charphsClassph_at(info->classes,type_name_518,((void*)0))));
                come_call_finalizer3(__right_value442,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_520=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 556, "struct sType*", (void*)0, (void*)0)),type_name_518,(_Bool)0,info));
                override__521=((struct sType*)(__right_value445=map$2charphsTypeph_at(info->types,type_name_518,((void*)0))));
                come_call_finalizer3(__right_value445,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__521) {
                    if(                    override__521->mTypedef) {
                        type_520->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_518),(struct sType*)come_increment_ref_count(type_520));
                come_call_finalizer3(type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                struct_class_519=((struct sClass*)(__right_value446=map$2charphsClassph_at(info->classes,type_name_518,((void*)0))));
                come_call_finalizer3(__right_value446,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_522=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 567, "struct sType*", (void*)0, (void*)0)),type_name_518,(_Bool)0,info));
                override__523=((struct sType*)(__right_value449=map$2charphsTypeph_at(info->types,type_name_518,((void*)0))));
                come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__523) {
                    if(                    override__523->mTypedef) {
                        type_522->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_518),(struct sType*)come_increment_ref_count(type_522));
                come_call_finalizer3(type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_524=info->p;
            header_525=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 579, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_525,source_head_516,source_tail_524-source_head_516);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value452=buffer_to_string(header_525))));
            __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 584, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value455=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 584, "struct sStructNobodyNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_518)),struct_class_519,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value460=_inf_value4));
            come_call_finalizer3(header_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_517 = come_decrement_ref_count2(struct_attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_518 = come_decrement_ref_count2(type_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value455,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value460) { __right_value460 = come_decrement_ref_count2(__right_value460, ((struct sNode*)__right_value460)->finalize, ((struct sNode*)__right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result340__;
            come_call_finalizer3(header_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==60) {
            list$1charph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_529=(char*)come_increment_ref_count(parse_word(info));
                list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, T_529)));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    T_529 = come_decrement_ref_count2(T_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    err_msg(info,"invalid generics struct definition");
                    exit(2);
                }
                T_529 = come_decrement_ref_count2(T_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional5=(((struct sClass*)(__right_value463=map$2charphsClassph_at(info->generics_classes,type_name_518,((void*)0))))!=((void*)0))),            come_call_finalizer3(__right_value463,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional5) {
                err_msg(info,"redifined generics struct(%s)",type_name_518);
                exit(2);
            }
            else {
                __dec_obj143=generics_class_530;
                generics_class_530=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 617, "struct sClass*", (void*)0, (void*)0)),type_name_518,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj143,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional6=(((struct sClass*)(__right_value466=map$2charphsClassph_at(info->generics_classes,type_name_518,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value466,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional6) {
                map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_518),(struct sClass*)come_increment_ref_count(generics_class_530));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value467=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_531=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_532=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_533=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value467,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_533) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_530->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 645, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_532),(struct sType*)come_increment_ref_count(type2_531))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_534=(char*)come_increment_ref_count(parse_word(info));
                        type3_535=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_531));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_536=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_537=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_536;
                            __dec_obj144=type3_535->mSizeNum;
                            type3_535->mSizeNum=(struct sNode*)come_increment_ref_count(node_537);
                            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
                            if(node_537) { node_537 = come_decrement_ref_count2(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        list$1tuple2$2charphsTypephph_push_back(generics_class_530->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 667, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_534),(struct sType*)come_increment_ref_count(type3_535))));
                        name2_534 = come_decrement_ref_count2(name2_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type3_535,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_530->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 671, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_532),(struct sType*)come_increment_ref_count(type2_531))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(type2_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer3(type2_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            ((struct tuple2$2charphcharph*)(__right_value477=parse_attribute(info,(_Bool)0)));
            come_call_finalizer3(__right_value477,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_reset(info->generics_type_names);
            source_tail_538=info->p;
            header_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 696, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(header_539,"struct ");
            buffer_append(header_539,source_head_516,source_tail_538-source_head_516);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value480=buffer_to_string(header_539))));
            __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 702, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value482=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 702, "struct sNothingNode*", (void*)0, (void*)0)),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result342__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value483=_inf_value5));
            come_call_finalizer3(generics_class_530,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_539,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_517 = come_decrement_ref_count2(struct_attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_518 = come_decrement_ref_count2(type_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value482,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value483) { __right_value483 = come_decrement_ref_count2(__right_value483, ((struct sNode*)__right_value483)->finalize, ((struct sNode*)__right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result342__;
            come_call_finalizer3(generics_class_530,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_539,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)(__right_value484=map$2charphsClassph_at(info->classes,type_name_518,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value484,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional7) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_518),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 707, "struct sClass*", (void*)0, (void*)0)),type_name_518,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                type_541=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 709, "struct sType*", (void*)0, (void*)0)),type_name_518,(_Bool)0,info));
                override__542=((struct sType*)(__right_value489=map$2charphsTypeph_at(info->types,type_name_518,((void*)0))));
                come_call_finalizer3(__right_value489,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__542) {
                    if(                    override__542->mTypedef) {
                        type_541->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_518),(struct sType*)come_increment_ref_count(type_541));
                struct_class_540=((struct sClass*)(__right_value490=map$2charphsClassph_at(info->classes,type_name_518,((void*)0))));
                come_call_finalizer3(__right_value490,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                type_543=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 721, "struct sType*", (void*)0, (void*)0)),type_name_518,(_Bool)0,info));
                override__544=((struct sType*)(__right_value493=map$2charphsTypeph_at(info->types,type_name_518,((void*)0))));
                come_call_finalizer3(__right_value493,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__544) {
                    if(                    override__544->mTypedef) {
                        type_543->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_518),(struct sType*)come_increment_ref_count(type_543));
                struct_class_540=((struct sClass*)(__right_value494=map$2charphsClassph_at(info->classes,type_name_518,((void*)0))));
                come_call_finalizer3(__right_value494,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            parent_class_545=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value495=parse_word(info)));
                __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_546=(char*)come_increment_ref_count(parse_word(info));
                parent_class_545=((struct sClass*)(__right_value497=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_546)));
                come_call_finalizer3(__right_value497,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                parent_class_545==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_546);
                    __result343__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    parent_class_name_546 = come_decrement_ref_count2(parent_class_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    struct_attribute_517 = come_decrement_ref_count2(struct_attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_518 = come_decrement_ref_count2(type_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result343__;
                }
                parent_class_name_546 = come_decrement_ref_count2(parent_class_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_547=(_Bool)0;
                {
                    p_548=info->p;
                    sline_549=info->sline;
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value498=backtrace_parse_type((_Bool)1,info)));
                    type_550=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_551=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_552=multiple_assign_var10->v3;
                    come_call_finalizer3(__right_value498,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_552&&*info->p==44) {
                        multiple_declare_547=(_Bool)1;
                    }
                    info->p=p_548;
                    info->sline=sline_549;
                    come_call_finalizer3(type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_551 = come_decrement_ref_count2(name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                multiple_declare_547) {
                    multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value499=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_553=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_554=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_555=multiple_assign_var11->v3;
                    come_call_finalizer3(__right_value499,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var12=((struct tuple2$2sTypephcharph*)(__right_value500=parse_variable_name((struct sType*)come_increment_ref_count(base_type_553),(_Bool)1,info)));
                    type2_556=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_557=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    come_call_finalizer3(__right_value500,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_540->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 778, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_557),(struct sType*)come_increment_ref_count(type2_556))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value503=parse_variable_name((struct sType*)come_increment_ref_count(base_type_553),(_Bool)0,info)));
                        type2_558=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_559=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer3(__right_value503,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_540->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 786, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_559),(struct sType*)come_increment_ref_count(type2_558))));
                        come_call_finalizer3(type2_558,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_559 = come_decrement_ref_count2(name2_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(base_type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_554 = come_decrement_ref_count2(name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_556,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_557 = come_decrement_ref_count2(name2_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value506=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_560=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_561=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_562=multiple_assign_var14->v3;
                    come_call_finalizer3(__right_value506,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_562) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2charphsTypephph_push_back(struct_class_540->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 796, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_561),(struct sType*)come_increment_ref_count(type2_560))));
                    come_call_finalizer3(type2_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_561 = come_decrement_ref_count2(name_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_563=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1charph_reset(info->generics_type_names);
            klass2_564=((struct sClass*)(__right_value510=map$2charphsClassph_at(info->classes,type_name_518,((void*)0))));
            come_call_finalizer3(__right_value510,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            source_tail_565=info->p;
            header_566=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 823, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_566,source_head_516,source_tail_565-source_head_516);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value513=buffer_to_string(header_566))));
            __right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            parent_class_545) {
                __dec_obj147=struct_class_540->mParentClassName;
                struct_class_540->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_545->mName));
                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_540->mName),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_540)));
            }
            if(            string_operator_equals(struct_attribute_517,"")&&string_operator_equals(struct_attribute2_563,"")) {
            }
            else if(            string_operator_equals(struct_attribute_517,"")) {
                __dec_obj148=struct_class_540->mAttribute;
                struct_class_540->mAttribute=(char*)come_increment_ref_count(struct_attribute2_563);
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_563,"")) {
                __dec_obj149=struct_class_540->mAttribute;
                struct_class_540->mAttribute=(char*)come_increment_ref_count(struct_attribute_517);
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj150=struct_class_540->mAttribute;
                struct_class_540->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute_517,((char*)(__right_value516=charp_operator_add(" ",struct_attribute2_563)))));
                __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 845, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value520=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 845, "struct sStructNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_518)),struct_class_540,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result344__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value521=_inf_value6));
            struct_attribute2_563 = come_decrement_ref_count2(struct_attribute2_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_566,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_517 = come_decrement_ref_count2(struct_attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_518 = come_decrement_ref_count2(type_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value520,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value521) { __right_value521 = come_decrement_ref_count2(__right_value521, ((struct sNode*)__right_value521)->finalize, ((struct sNode*)__right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result344__;
            struct_attribute2_563 = come_decrement_ref_count2(struct_attribute2_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_566,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        struct_attribute_517 = come_decrement_ref_count2(struct_attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_518 = come_decrement_ref_count2(type_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"class")) {
        source_head_567=head;
        type_name_568=(char*)come_increment_ref_count(parse_word(info));
        add_come_code_at_come_header(info,"struct %s;\n",type_name_568);
        parent_class_569=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value523=parse_word(info)));
            __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parent_class_name_570=(char*)come_increment_ref_count(parse_word(info));
            parent_class_569=((struct sClass*)(__right_value525=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_570)));
            come_call_finalizer3(__right_value525,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_569==((void*)0)) {
                err_msg(info,"invalid class name(%s)",parent_class_name_570);
                __result345__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                parent_class_name_570 = come_decrement_ref_count2(parent_class_name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name_568 = come_decrement_ref_count2(type_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result345__;
            }
            parent_class_name_570 = come_decrement_ref_count2(parent_class_name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        parent_classes_571=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 869, "struct list$1sClassp*", (void*)0, (void*)0))));
        parent_class2_574=parent_class_569;
        while(parent_class2_574) {
            list$1sClassp_add(parent_classes_571,parent_class2_574);
            if(            parent_class_569->mParentClassName) {
                parent_class2_574=((struct sClass*)(__right_value531=map$2charphsClassphp_operator_load_element(info->classes,parent_class_569->mParentClassName)));
                come_call_finalizer3(__right_value531,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                parent_class2_574=((void*)0);
            }
        }
        if(        (_if_conditional8=(((struct sClass*)(__right_value532=map$2charphsClassph_at(info->classes,type_name_568,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value532,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional8) {
            __dec_obj151=struct_class_578;
            struct_class_578=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 884, "struct sClass*", (void*)0, (void*)0)),type_name_568,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj151,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj152=struct_class_578;
            struct_class_578=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, ((struct sClass*)(__right_value535=map$2charphsClassph_at(info->classes,type_name_568,((void*)0))))));
            come_call_finalizer3(__dec_obj152,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value535,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        defining_class_579=info->defining_class;
        info->defining_class=struct_class_578;
        if(        (_if_conditional9=(((struct sClass*)(__right_value537=map$2charphsClassph_at(info->classes,type_name_568,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value537,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            if(            parent_class_569) {
                __dec_obj153=struct_class_578->mParentClassName;
                struct_class_578->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_569->mName));
                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_568),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_578)));
            for(            o2_saved_585=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value545=list$1sClassp_reverse(parent_classes_571))))),parent_588=list$1sClassp_begin((o2_saved_585)) ,            come_call_finalizer3(__right_value545,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_585));            parent_588=list$1sClassp_next((o2_saved_585))            ){
                for(                o2_saved_591=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_588->mFields)),it_592=list$1tuple2$2charphsTypephph_begin((o2_saved_591));                !list$1tuple2$2charphsTypephph_end((o2_saved_591));                it_592=list$1tuple2$2charphsTypephph_next((o2_saved_591))                ){
                    list$1tuple2$2charphsTypephph_add(struct_class_578->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_592)));
                }
                come_call_finalizer3(o2_saved_591,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_585,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        (_elif_conditional2=(list$1tuple2$2charphsTypephph_length(((struct sClass*)(__right_value547=map$2charphsClassph_at(info->classes,type_name_568,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_578->mFields)>0)),        come_call_finalizer3(__right_value547,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _elif_conditional2) {
            klass2_593=((struct sClass*)(__right_value548=map$2charphsClassph_at(info->classes,type_name_568,((void*)0))));
            come_call_finalizer3(__right_value548,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_569) {
                __dec_obj154=klass2_593->mParentClassName;
                klass2_593->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_569->mName));
                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_568),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass2_593)));
            for(            o2_saved_594=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value551=list$1sClassp_reverse(parent_classes_571))))),parent_595=list$1sClassp_begin((o2_saved_594)) ,            come_call_finalizer3(__right_value551,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_594));            parent_595=list$1sClassp_next((o2_saved_594))            ){
                for(                o2_saved_596=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_595->mFields)),it_597=list$1tuple2$2charphsTypephph_begin((o2_saved_596));                !list$1tuple2$2charphsTypephph_end((o2_saved_596));                it_597=list$1tuple2$2charphsTypephph_next((o2_saved_596))                ){
                    list$1tuple2$2charphsTypephph_add(klass2_593->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_597)));
                }
                come_call_finalizer3(o2_saved_596,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_594,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_598=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_578->mFields)),it_599=list$1tuple2$2charphsTypephph_begin((o2_saved_598));            !list$1tuple2$2charphsTypephph_end((o2_saved_598));            it_599=list$1tuple2$2charphsTypephph_next((o2_saved_598))            ){
                list$1tuple2$2charphsTypephph_add(klass2_593->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_599)));
            }
            come_call_finalizer3(o2_saved_598,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        expected_next_character(123,info);
        head_600=info->p;
        p_saved_601=((void*)0);
        sline_saved_602=0;
        sname_saved_603=((void*)0);
        methods_604=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 931, "struct list$1sNodeph*", (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            p_saved_601) {
                if(                *info->p==0) {
                    info->p=p_saved_601;
                    info->sline=sline_saved_602;
                    __dec_obj155=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_603));
                    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_601=((void*)0);
                    sline_saved_602=0;
                    __dec_obj156=sname_saved_603;
                    sname_saved_603=((void*)0);
                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj157=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj157,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__607=parsecmp("include",info);
            multiple_declare_608=(_Bool)0;
            if(            include__607==(_Bool)0) {
                p_609=info->p;
                sline_610=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value557=backtrace_parse_type((_Bool)1,info)));
                    type_611=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_612=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_613=multiple_assign_var15->v3;
                    come_call_finalizer3(__right_value557,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_613&&*info->p==44) {
                        multiple_declare_608=(_Bool)1;
                    }
                    come_call_finalizer3(type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_612 = come_decrement_ref_count2(name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_609;
                info->sline=sline_610;
            }
            define_function_flag_614=(_Bool)0;
            if(            include__607==(_Bool)0) {
                p_615=info->p;
                sline_616=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_614=(_Bool)1;
                }
                else {
                    invalid_type_617=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value558=backtrace_parse_type((_Bool)0,info)));
                        result_type_618=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_619=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_620=multiple_assign_var16->v3;
                        come_call_finalizer3(__right_value558,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_619 = come_decrement_ref_count2(fun_name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    word_621=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj158=word_621;
                        word_621=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_621,"extern")) {
                            __dec_obj159=word_621;
                            word_621=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj160=word_621;
                        word_621=((void*)0);
                        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_621) {
                        if(                        is_type_name(word_621,info)) {
                            while(*info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj161=word_621;
                                word_621=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        if(                        strlen(word_621)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_614=(_Bool)1;
                        }
                    }
                    word_621 = come_decrement_ref_count2(word_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_615;
                info->sline=sline_616;
            }
            if(            define_function_flag_614) {
                tail_622=info->p;
                pointer_num_623=1;
                __dec_obj162=info->impl_type;
                info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1041, "struct sType*", (void*)0, (void*)0)),type_name_568,(_Bool)0,info));
                come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->impl_type->mPointerNum=pointer_num_623;
                info->in_class=(_Bool)1;
                method_624=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj163=info->impl_type;
                info->impl_type=((void*)0);
                come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNodeph_push_back(methods_604,(struct sNode*)come_increment_ref_count(method_624));
                if(method_624) { method_624 = come_decrement_ref_count2(method_624, ((struct sNode*)method_624)->finalize, ((struct sNode*)method_624)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            multiple_declare_608) {
                multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value568=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_628=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_629=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_630=multiple_assign_var17->v3;
                come_call_finalizer3(__right_value568,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var18=((struct tuple2$2sTypephcharph*)(__right_value569=parse_variable_name((struct sType*)come_increment_ref_count(base_type_628),(_Bool)1,info)));
                type2_631=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_632=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                come_call_finalizer3(__right_value569,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(struct_class_578->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1058, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_632),(struct sType*)come_increment_ref_count(type2_631))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value572=parse_variable_name((struct sType*)come_increment_ref_count(base_type_628),(_Bool)0,info)));
                    type2_633=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_634=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    come_call_finalizer3(__right_value572,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_578->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1066, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_634),(struct sType*)come_increment_ref_count(type2_633))));
                    come_call_finalizer3(type2_633,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_634 = come_decrement_ref_count2(name2_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(59,info);
                come_call_finalizer3(base_type_628,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_629 = come_decrement_ref_count2(name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_631,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_632 = come_decrement_ref_count2(name2_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value575=parse_word(info)));
                __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_635=(char*)come_increment_ref_count(parse_word(info));
                params_636=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1075, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_637=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_636,(char*)come_increment_ref_count(word_637));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            word_637 = come_decrement_ref_count2(word_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_637 = come_decrement_ref_count2(word_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_601=info->p;
                sline_saved_602=info->sline;
                __dec_obj167=sname_saved_603;
                sname_saved_603=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj168=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_635));
                __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional10=(((struct sClassModule*)(__right_value582=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_635)))==((void*)0))),                come_call_finalizer3(__right_value582,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional10) {
                    err_msg(info,"module not found");
                    __result361__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_635 = come_decrement_ref_count2(module_name_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_636,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_568 = come_decrement_ref_count2(type_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(parent_classes_571,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(struct_class_578,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    sname_saved_603 = come_decrement_ref_count2(sname_saved_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(methods_604,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result361__;
                }
                module_641=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value583=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_635))), "14struct.c", 1122, 3));
                come_call_finalizer3(__right_value583,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_641->mParams)!=list$1charph_length(params_636)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj174=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1129, "struct map$2charphcharph*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj174,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_645=0;
                for(                o2_saved_646=(struct list$1charph*)come_increment_ref_count((module_641->mParams)),it_649=list$1charph_begin((o2_saved_646));                !list$1charph_end((o2_saved_646));                it_649=list$1charph_next((o2_saved_646))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_649)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value597=list$1charphp_operator_load_element(params_636,i_645))), "14struct.c", 1133, 4)))));
                    __right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_645++;
                }
                come_call_finalizer3(o2_saved_646,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_641->mText;
                info->sline=module_641->mSLine;
                __dec_obj175=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_641->mSName));
                __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_635 = come_decrement_ref_count2(module_name_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_636,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(__right_value600=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_676=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_677=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_678=multiple_assign_var20->v3;
                come_call_finalizer3(__right_value600,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_678) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2charphsTypephph_push_back(struct_class_578->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1148, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_677),(struct sType*)come_increment_ref_count(type2_676))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer3(type2_676,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_677 = come_decrement_ref_count2(name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_601) {
            if(            info->p==0) {
                info->p=p_saved_601;
                info->sline=sline_saved_602;
                __dec_obj176=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_603));
                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_601=((void*)0);
                sline_saved_602=0;
            }
        }
        list$1charph_reset(info->generics_type_names);
        info->defining_class=defining_class_579;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1181, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value607=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1181, "struct sClassNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_568)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_578)),(struct list$1sNodeph*)come_increment_ref_count(methods_604),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value613=_inf_value7));
        type_name_568 = come_decrement_ref_count2(type_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_571,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_578,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_603 = come_decrement_ref_count2(sname_saved_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_604,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value607,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value613) { __right_value613 = come_decrement_ref_count2(__right_value613, ((struct sNode*)__right_value613)->finalize, ((struct sNode*)__right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result385__;
        type_name_568 = come_decrement_ref_count2(type_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_571,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_578,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_603 = come_decrement_ref_count2(sname_saved_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_604,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value614=top_level_v97(buf,head,head_sline,info)));
    if(__right_value614) { __right_value614 = come_decrement_ref_count2(__right_value614, ((struct sNode*)__right_value614)->finalize, ((struct sNode*)__right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result338__;
void* __right_value456 = (void*)0;
struct sStructNobodyNode* result_526;
void* __right_value457 = (void*)0;
char* __dec_obj140;
void* __right_value458 = (void*)0;
char* __dec_obj141;
void* __right_value459 = (void*)0;
struct sClass* __dec_obj142;
struct sStructNobodyNode* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_526=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_526->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj140=result_526->sname;
        result_526->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_526->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj141=result_526->mName;
        result_526->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj142=result_526->mClass;
        result_526->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj142,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_526;
    come_call_finalizer3(result_526,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_527;
struct list_item$1charph* prev_it_528;
struct list$1charph* __result341__;
    it_527=self->head;
    while(it_527!=((void*)0)) {
        prev_it_528=it_527;
        it_527=it_527->next;
        come_call_finalizer3(prev_it_528,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj145;
char* __dec_obj146;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj145=self->v1;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj146=self->v2;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result346__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_572;
struct list_item$1sClassp* prev_it_573;
    it_572=self->head;
    while(it_572!=((void*)0)) {
        prev_it_573=it_572;
        it_572=it_572->next;
        come_call_finalizer3(prev_it_573,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value528 = (void*)0;
struct list_item$1sClassp* litem_575;
void* __right_value529 = (void*)0;
struct list_item$1sClassp* litem_576;
void* __right_value530 = (void*)0;
struct list_item$1sClassp* litem_577;
struct list$1sClassp* __result347__;
    if(    self->len==0) {
        litem_575=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value528=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1220, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_575->prev=((void*)0);
        litem_575->next=((void*)0);
        litem_575->item=item;
        self->tail=litem_575;
        self->head=litem_575;
    }
    else if(    self->len==1) {
        litem_576=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value529=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1230, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_576->prev=self->head;
        litem_576->next=((void*)0);
        litem_576->item=item;
        self->tail=litem_576;
        self->head->next=litem_576;
    }
    else {
        litem_577=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value530=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1240, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_577->prev=self->tail;
        litem_577->next=((void*)0);
        litem_577->item=item;
        self->tail->next=litem_577;
        self->tail=litem_577;
    }
    self->len++;
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct list$1sClassp* result_580;
struct list_item$1sClassp* it_581;
struct list$1sClassp* __result349__;
    result_580=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./comelang.h", 1957, "struct list$1sClassp*", (void*)0, (void*)0))));
    it_581=self->tail;
    while(it_581!=((void*)0)) {
        list$1sClassp_push_back(result_580,it_581->item);
        it_581=it_581->prev;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_580;
    come_call_finalizer3(result_580,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value542 = (void*)0;
struct list_item$1sClassp* litem_582;
void* __right_value543 = (void*)0;
struct list_item$1sClassp* litem_583;
void* __right_value544 = (void*)0;
struct list_item$1sClassp* litem_584;
struct list$1sClassp* __result348__;
    if(    self->len==0) {
        litem_582=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value542=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1290, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_582->prev=((void*)0);
        litem_582->next=((void*)0);
        litem_582->item=item;
        self->tail=litem_582;
        self->head=litem_582;
    }
    else if(    self->len==1) {
        litem_583=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value543=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1300, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_583->prev=self->head;
        litem_583->next=((void*)0);
        litem_583->item=item;
        self->tail=litem_583;
        self->head->next=litem_583;
    }
    else {
        litem_584=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value544=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1310, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_584->prev=self->tail;
        litem_584->next=((void*)0);
        litem_584->item=item;
        self->tail->next=litem_584;
        self->tail=litem_584;
    }
    self->len++;
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_586;
struct sClass* __result350__;
struct sClass* __result351__;
struct sClass* result_587;
struct sClass* __result352__;
result_586 = (void*)0;
result_587 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_586,0,sizeof(struct sClass*));
        __result350__ = gComeFunResultObject = __result_obj__ = result_586;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    self->it=self->head;
    if(    self->it) {
        __result351__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    memset(&result_587,0,sizeof(struct sClass*));
    __result352__ = gComeFunResultObject = __result_obj__ = result_587;
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_589;
struct sClass* __result353__;
struct sClass* __result354__;
struct sClass* result_590;
struct sClass* __result355__;
result_589 = (void*)0;
result_590 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_589,0,sizeof(struct sClass*));
        __result353__ = gComeFunResultObject = __result_obj__ = result_589;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result354__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    memset(&result_590,0,sizeof(struct sClass*));
    __result355__ = gComeFunResultObject = __result_obj__ = result_590;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_605;
int i_606;
    for(    i_605=0;    i_605<self->size;    i_605++    ){
        if(        self->item_existance[i_605]) {
            if(            1) {
                self->items[i_605] = come_decrement_ref_count2(self->items[i_605], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_606=0;    i_606<self->size;    i_606++    ){
        if(        self->item_existance[i_606]) {
            if(            1) {
                self->keys[i_606] = come_decrement_ref_count2(self->keys[i_606], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value565 = (void*)0;
struct list_item$1sNodeph* litem_625;
struct sNode* __dec_obj164;
void* __right_value566 = (void*)0;
struct list_item$1sNodeph* litem_626;
struct sNode* __dec_obj165;
void* __right_value567 = (void*)0;
struct list_item$1sNodeph* litem_627;
struct sNode* __dec_obj166;
struct list$1sNodeph* __result356__;
    if(    self->len==0) {
        litem_625=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value565=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1290, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_625->prev=((void*)0);
        litem_625->next=((void*)0);
        __dec_obj164=litem_625->item;
        litem_625->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_625;
        self->head=litem_625;
    }
    else if(    self->len==1) {
        litem_626=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value566=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1300, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_626->prev=self->head;
        litem_626->next=((void*)0);
        __dec_obj165=litem_626->item;
        litem_626->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_626;
        self->head->next=litem_626;
    }
    else {
        litem_627=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value567=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1310, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_627->prev=self->tail;
        litem_627->next=((void*)0);
        __dec_obj166=litem_627->item;
        litem_627->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_627;
        self->tail=litem_627;
    }
    self->len++;
    __result356__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_638;
unsigned int hash_639;
unsigned int it_640;
struct sClassModule* __result357__;
struct sClassModule* __result358__;
struct sClassModule* __result359__;
struct sClassModule* __result360__;
default_value_638 = (void*)0;
    memset(&default_value_638,0,sizeof(struct sClassModule*));
    hash_639=charp_get_hash_key(((char*)key))%self->size;
    it_640=hash_639;
    while((_Bool)1) {
        if(        self->item_existance[it_640]) {
            if(            charp_equals(self->keys[it_640],key)) {
                __result357__ = gComeFunResultObject = __result_obj__ = self->items[it_640];
                come_call_finalizer3(default_value_638,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result357__;
            }
            it_640++;
            if(            it_640>=self->size) {
                it_640=0;
            }
            else if(            it_640==hash_639) {
                __result358__ = gComeFunResultObject = __result_obj__ = default_value_638;
                come_call_finalizer3(default_value_638,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result358__;
            }
        }
        else {
            __result359__ = gComeFunResultObject = __result_obj__ = default_value_638;
            come_call_finalizer3(default_value_638,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result359__;
        }
    }
    __result360__ = gComeFunResultObject = __result_obj__ = default_value_638;
    come_call_finalizer3(default_value_638,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj169;
char* __dec_obj170;
struct list$1charph* __dec_obj171;
char* __dec_obj172;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj169=self->mName;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj170=self->mText;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj171=self->mParams;
            come_call_finalizer3(__dec_obj171,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj172=self->mSName;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
int i_642;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1charp* __dec_obj173;
struct map$2charphcharph* __result363__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value585=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2465, "char**", (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value586=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2466, "char**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value587=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2467, "_Bool*", (void*)0, (void*)0))));
    for(    i_642=0;    i_642<128;    i_642++    ){
        self->item_existance[i_642]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj173=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2477, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj173,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result363__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result362__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_643;
int i_644;
    for(    i_643=0;    i_643<self->size;    i_643++    ){
        if(        self->item_existance[i_643]) {
            if(            1) {
                self->items[i_643] = come_decrement_ref_count2(self->items[i_643], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_644=0;    i_644<self->size;    i_644++    ){
        if(        self->item_existance[i_644]) {
            if(            1) {
                self->keys[i_644] = come_decrement_ref_count2(self->keys[i_644], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_647;
char* __result364__;
char* __result365__;
char* result_648;
char* __result366__;
result_647 = (void*)0;
result_648 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_647,0,sizeof(char*));
        __result364__ = gComeFunResultObject = __result_obj__ = result_647;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    self->it=self->head;
    if(    self->it) {
        __result365__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    memset(&result_648,0,sizeof(char*));
    __result366__ = gComeFunResultObject = __result_obj__ = result_648;
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_650;
char* __result367__;
char* __result368__;
char* result_651;
char* __result369__;
result_650 = (void*)0;
result_651 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_650,0,sizeof(char*));
        __result367__ = gComeFunResultObject = __result_obj__ = result_650;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result368__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    memset(&result_651,0,sizeof(char*));
    __result369__ = gComeFunResultObject = __result_obj__ = result_651;
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_669;
unsigned int it_670;
_Bool same_key_exist_671;
char* it2_672;
struct map$2charphcharph* __result380__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_669=charp_get_hash_key(key)%self->size;
    it_670=hash_669;
    while((_Bool)1) {
        if(        self->item_existance[it_670]) {
            if(            charp_equals(self->keys[it_670],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_670]);
                    self->keys[it_670] = come_decrement_ref_count2(self->keys[it_670], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_670]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_670]);
                    self->keys[it_670]=key;
                }
                if(                1) {
                    self->items[it_670] = come_decrement_ref_count2(self->items[it_670], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_670]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_670]=item;
                }
                break;
            }
            it_670++;
            if(            it_670>=self->size) {
                it_670=0;
            }
            else if(            it_670==hash_669) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_670]=(_Bool)1;
            if(            1) {
                self->keys[it_670]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_670]=key;
            }
            if(            1) {
                self->items[it_670]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_670]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_671=(_Bool)0;
    for(    it2_672=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_672=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_672,key)) {
            same_key_exist_671=(_Bool)1;
        }
    }
    if(    !same_key_exist_671) {
        list$1charp_push_back(self->key_list,key);
    }
    __result380__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_652;
void* __right_value592 = (void*)0;
char** keys_653;
void* __right_value593 = (void*)0;
char** items_654;
void* __right_value594 = (void*)0;
_Bool* item_existance_655;
int len_656;
char* it_659;
char* default_value_662;
void* __right_value595 = (void*)0;
char* it2_663;
unsigned int hash_666;
int n_667;
char* default_value_668;
void* __right_value596 = (void*)0;
default_value_662 = (void*)0;
default_value_668 = (void*)0;
    size_652=self->size*10;
    keys_653=(char**)come_increment_ref_count(((char**)(__right_value592=(char**)come_calloc(1, sizeof(char*)*(1*(size_652)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_654=(char**)come_increment_ref_count(((char**)(__right_value593=(char**)come_calloc(1, sizeof(char*)*(1*(size_652)), "./comelang.h", 2694, "char**", (void*)0, (void*)0))));
    item_existance_655=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value594=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_652)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_656=0;
    for(    it_659=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_659=map$2charphcharph_next(self)    ){
        memset(&default_value_662,0,sizeof(char*));
        it2_663=((char*)(__right_value595=map$2charphcharph_at(self,it_659,default_value_662)));
        __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_666=charp_get_hash_key(it_659)%size_652;
        n_667=hash_666;
        while((_Bool)1) {
            if(            item_existance_655[n_667]) {
                n_667++;
                if(                n_667>=size_652) {
                    n_667=0;
                }
                else if(                n_667==hash_666) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_655[n_667]=(_Bool)1;
                keys_653[n_667]=it_659;
                items_654[n_667]=((char*)(__right_value596=map$2charphcharph_at(self,it_659,default_value_668)));
                __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_656++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_653;
    self->items=items_654;
    self->item_existance=item_existance_655;
    self->size=size_652;
    self->len=len_656;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_657;
char* __result370__;
char* __result371__;
char* result_658;
char* __result372__;
result_657 = (void*)0;
result_658 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_657,0,sizeof(char*));
        __result370__ = gComeFunResultObject = __result_obj__ = result_657;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result371__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    memset(&result_658,0,sizeof(char*));
    __result372__ = gComeFunResultObject = __result_obj__ = result_658;
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_660;
char* __result373__;
char* __result374__;
char* result_661;
char* __result375__;
result_660 = (void*)0;
result_661 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_660,0,sizeof(char*));
        __result373__ = gComeFunResultObject = __result_obj__ = result_660;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result374__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    memset(&result_661,0,sizeof(char*));
    __result375__ = gComeFunResultObject = __result_obj__ = result_661;
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_664;
unsigned int it_665;
char* __result376__;
char* __result377__;
char* __result378__;
char* __result379__;
    hash_664=charp_get_hash_key(((char*)key))%self->size;
    it_665=hash_664;
    while((_Bool)1) {
        if(        self->item_existance[it_665]) {
            if(            charp_equals(self->keys[it_665],key)) {
                __result376__ = gComeFunResultObject = __result_obj__ = self->items[it_665];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result376__;
            }
            it_665++;
            if(            it_665>=self->size) {
                it_665=0;
            }
            else if(            it_665==hash_664) {
                __result377__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result377__;
            }
        }
        else {
            __result378__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result378__;
        }
    }
    __result379__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_673;
int i_674;
char* __result381__;
char* default_value_675;
char* __result382__;
default_value_675 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_673=self->head;
    i_674=0;
    while(it_673!=((void*)0)) {
        if(        position==i_674) {
            __result381__ = gComeFunResultObject = __result_obj__ = it_673->item;
            gComeFunResultObject = (void*)0;
            return __result381__;
        }
        it_673=it_673->next;
        i_674++;
    }
    memset(&default_value_675,0,sizeof(char*));
    __result382__ = gComeFunResultObject = __result_obj__ = default_value_675;
    default_value_675 = come_decrement_ref_count2(default_value_675, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result383__;
void* __right_value608 = (void*)0;
struct sClassNode* result_679;
void* __right_value609 = (void*)0;
char* __dec_obj177;
void* __right_value610 = (void*)0;
char* __dec_obj178;
void* __right_value611 = (void*)0;
struct sClass* __dec_obj179;
void* __right_value612 = (void*)0;
struct list$1sNodeph* __dec_obj180;
struct sClassNode* __result384__;
    if(    self==(void*)0) {
        __result383__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    result_679=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_679->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj177=result_679->sname;
        result_679->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_679->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj178=result_679->mName;
        result_679->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj179=result_679->mClass;
        result_679->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj179,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj180=result_679->mMethods;
        result_679->mMethods=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mMethods));
        come_call_finalizer3(__dec_obj180,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result384__ = gComeFunResultObject = __result_obj__ = result_679;
    come_call_finalizer3(result_679,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_680;
char* p_681;
int sline_682;
void* __right_value615 = (void*)0;
char* type_name_683;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
char* struct_attribute_684;
void* __right_value620 = (void*)0;
char* type_name_685;
void* __right_value621 = (void*)0;
struct sNode* __result387__;
void* __right_value622 = (void*)0;
struct sNode* __result388__;
    define_struct_680=(_Bool)0;
    {
        p_681=info->p;
        sline_682=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_683=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value616=parse_word(info)));
                    __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value617=parse_word(info)));
                    __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==123) {
                    ((char*)(__right_value618=skip_block(info)));
                    __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        define_struct_680=(_Bool)1;
                    }
                }
                type_name_683 = come_decrement_ref_count2(type_name_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_681;
        info->sline=sline_682;
    }
    if(    define_struct_680) {
        struct_attribute_684=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_685=(char*)come_increment_ref_count(parse_word(info));
        __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value621=parse_struct((char*)come_increment_ref_count(type_name_685),(char*)come_increment_ref_count(struct_attribute_684),info)));
        struct_attribute_684 = come_decrement_ref_count2(struct_attribute_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_685 = come_decrement_ref_count2(type_name_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value621) { __right_value621 = come_decrement_ref_count2(__right_value621, ((struct sNode*)__right_value621)->finalize, ((struct sNode*)__right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result387__;
        struct_attribute_684 = come_decrement_ref_count2(struct_attribute_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_685 = come_decrement_ref_count2(type_name_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value622=string_node_v13(buf,head,head_sline,info)));
    if(__right_value622) { __right_value622 = come_decrement_ref_count2(__right_value622, ((struct sNode*)__right_value622)->finalize, ((struct sNode*)__right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result388__;
}

