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

char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_272;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __result214__;
void* __right_value251 = (void*)0;
char* __result215__;
    p_272=class_name;
    while(*p_272) {
        if(        *p_272==36) {
            __result214__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=charp_substring(((char*)(__right_value249=__builtin_string(class_name))),0,p_272-class_name)));
            __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result214__;
        }
        else {
            p_272++;
        }
    }
    __result215__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string(class_name)));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* buf_273;
struct sClass* klass_274;
char* class_name_275;
int i_276;
void* __right_value254 = (void*)0;
struct sType* type_277;
void* __right_value255 = (void*)0;
char* type_name_291;
int i_292;
void* __right_value256 = (void*)0;
char* __result218__;
    buf_273=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "struct buffer*", (void*)0, (void*)0))));
    klass_274=generics_type->mClass;
    class_name_275=klass_274->mName;
    buffer_append_str(buf_273,class_name_275);
    if(    list$1sTypeph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_273,36);
        buffer_append_char(buf_273,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_276=0;        i_276<list$1sTypeph_length(generics_type->mGenericsTypes);        i_276++        ){
            type_277=((struct sType*)come_null_check(((struct sType*)(__right_value254=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_276))), "14struct.c", 33, 0));
            come_call_finalizer3(__right_value254,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_name_291=(char*)come_increment_ref_count(create_generics_name(type_277,info));
            buffer_append_str(buf_273,type_name_291);
            for(            i_292=0;            i_292<type_277->mPointerNum;            i_292++            ){
                buffer_append_char(buf_273,112);
            }
            if(            type_277->mHeap) {
                buffer_append_str(buf_273,"h");
            }
            type_name_291 = come_decrement_ref_count2(type_name_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result218__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value256=buffer_to_string(buf_273)));
    come_call_finalizer3(buf_273,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_278;
int i_279;
struct sType* __result216__;
struct sType* default_value_280;
struct sType* __result217__;
default_value_280 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_278=self->head;
    i_279=0;
    while(it_278!=((void*)0)) {
        if(        position==i_279) {
            __result216__ = gComeFunResultObject = __result_obj__ = it_278->item;
            gComeFunResultObject = (void*)0;
            return __result216__;
        }
        it_278=it_278->next;
        i_279++;
    }
    memset(&default_value_280,0,sizeof(struct sType*));
    __result217__ = gComeFunResultObject = __result_obj__ = default_value_280;
    come_call_finalizer3(default_value_280,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj31;
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj34;
char* __dec_obj35;
char* __dec_obj36;
struct list$1sTypeph* __dec_obj37;
struct list$1sNodeph* __dec_obj39;
struct list$1sTypeph* __dec_obj41;
struct list$1charph* __dec_obj42;
struct tuple1$1sTypeph* __dec_obj43;
struct sNode* __dec_obj44;
struct tuple1$1sTypeph* __dec_obj45;
struct sNode* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
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
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj35=self->mInterfaceName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj36=self->mGenericsName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj37=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj37,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj39=self->mArrayNum;
            come_call_finalizer3(__dec_obj39,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj41=self->mParamTypes;
            come_call_finalizer3(__dec_obj41,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj42=self->mParamNames;
            come_call_finalizer3(__dec_obj42,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj43=self->mResultType;
            come_call_finalizer3(__dec_obj43,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj44=self->mAlignas;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj45=self->mChannelType;
            come_call_finalizer3(__dec_obj45,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj46=self->mSizeNum;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj47=self->mOriginalTypeName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj48=self->mAsmName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj49=self->mTupleName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj50=self->mAttribute;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sType* __dec_obj38;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj38=self->item;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
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

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_293;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct buffer* buf_294;
_Bool existance_generics_295;
struct list$1tuple2$2charphsTypephph* o2_saved_296;
struct tuple2$2charphsTypeph* it_299;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* name_302=0;
struct sType* type_303=0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
_Bool _if_conditional1;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1tuple2$2charphsTypephph_length(klass->mFields)==0) {
        return;
    }
    name_293=(char*)come_increment_ref_count(klass->mName);
    buf_294=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 62, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_format(buf_294,"struct %s\n{\n",klass->mName);
    existance_generics_295=(_Bool)0;
    for(    o2_saved_296=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_299=list$1tuple2$2charphsTypephph_begin((o2_saved_296));    !list$1tuple2$2charphsTypephph_end((o2_saved_296));    it_299=list$1tuple2$2charphsTypephph_next((o2_saved_296))    ){
        multiple_assign_var1=it_299;
        name_302=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_303=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_303,info)||is_contained_generics_types(type_303,info)) {
            existance_generics_295=(_Bool)1;
        }
        type_303->mStatic=(_Bool)0;
        buffer_append_str(buf_294,"    ");
        buffer_append_str(buf_294,((char*)(__right_value259=make_define_var(type_303,name_302,(_Bool)0,info))));
        __right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_294,";\n");
        name_302 = come_decrement_ref_count2(name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_296,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_294,"};\n");
    }
    else {
        buffer_append_format(buf_294,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)(__right_value260=map$2charphbufferphp_operator_load_element(info->struct_definition,name_293)))==((void*)0)&&!existance_generics_295)),    come_call_finalizer3(__right_value260,buffer_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional1) {
        map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_293),(struct buffer*)come_increment_ref_count(buf_294));
    }
    name_293 = come_decrement_ref_count2(name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_294,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_297;
struct tuple2$2charphsTypeph* __result219__;
struct tuple2$2charphsTypeph* __result220__;
struct tuple2$2charphsTypeph* result_298;
struct tuple2$2charphsTypeph* __result221__;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_297,0,sizeof(struct tuple2$2charphsTypeph*));
        __result219__ = gComeFunResultObject = __result_obj__ = result_297;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    self->it=self->head;
    if(    self->it) {
        __result220__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    memset(&result_298,0,sizeof(struct tuple2$2charphsTypeph*));
    __result221__ = gComeFunResultObject = __result_obj__ = result_298;
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_300;
struct tuple2$2charphsTypeph* __result222__;
struct tuple2$2charphsTypeph* __result223__;
struct tuple2$2charphsTypeph* result_301;
struct tuple2$2charphsTypeph* __result224__;
result_300 = (void*)0;
result_301 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_300,0,sizeof(struct tuple2$2charphsTypeph*));
        __result222__ = gComeFunResultObject = __result_obj__ = result_300;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result223__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    memset(&result_301,0,sizeof(struct tuple2$2charphsTypeph*));
    __result224__ = gComeFunResultObject = __result_obj__ = result_301;
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_304;
struct list_item$1tuple2$2charphsTypephph* prev_it_305;
    it_304=self->head;
    while(it_304!=((void*)0)) {
        prev_it_305=it_304;
        it_304=it_304->next;
        come_call_finalizer3(prev_it_305,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj51;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj51=self->item;
            come_call_finalizer3(__dec_obj51,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj52;
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj52=self->v1;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj53=self->v2;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key){
void* __result_obj__=(void*)0;
struct buffer* default_value_306;
unsigned int hash_307;
unsigned int it_308;
struct buffer* __result225__;
struct buffer* __result226__;
struct buffer* __result227__;
struct buffer* __result228__;
default_value_306 = (void*)0;
    memset(&default_value_306,0,sizeof(struct buffer*));
    hash_307=charp_get_hash_key(((char*)key))%self->size;
    it_308=hash_307;
    while((_Bool)1) {
        if(        self->item_existance[it_308]) {
            if(            charp_equals(self->keys[it_308],key)) {
                __result225__ = gComeFunResultObject = __result_obj__ = self->items[it_308];
                come_call_finalizer3(default_value_306,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result225__;
            }
            it_308++;
            if(            it_308>=self->size) {
                it_308=0;
            }
            else if(            it_308==hash_307) {
                __result226__ = gComeFunResultObject = __result_obj__ = default_value_306;
                come_call_finalizer3(default_value_306,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result226__;
            }
        }
        else {
            __result227__ = gComeFunResultObject = __result_obj__ = default_value_306;
            come_call_finalizer3(default_value_306,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result227__;
        }
    }
    __result228__ = gComeFunResultObject = __result_obj__ = default_value_306;
    come_call_finalizer3(default_value_306,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item){
void* __result_obj__=(void*)0;
unsigned int hash_326;
unsigned int it_327;
_Bool same_key_exist_344;
char* it2_347;
struct map$2charphbufferph* __result249__;
    if(    self->len*10>=self->size) {
        map$2charphbufferph_rehash(self);
    }
    hash_326=charp_get_hash_key(key)%self->size;
    it_327=hash_326;
    while((_Bool)1) {
        if(        self->item_existance[it_327]) {
            if(            charp_equals(self->keys[it_327],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_327]);
                    self->keys[it_327] = come_decrement_ref_count2(self->keys[it_327], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_327]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_327]);
                    self->keys[it_327]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_327],buffer_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_327]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_327]=item;
                }
                break;
            }
            it_327++;
            if(            it_327>=self->size) {
                it_327=0;
            }
            else if(            it_327==hash_326) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_327]=(_Bool)1;
            if(            1) {
                self->keys[it_327]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_327]=key;
            }
            if(            1) {
                self->items[it_327]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_327]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_344=(_Bool)0;
    for(    it2_347=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_347=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_347,key)) {
            same_key_exist_344=(_Bool)1;
        }
    }
    if(    !same_key_exist_344) {
        list$1charp_push_back(self->key_list,key);
    }
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void map$2charphbufferph_rehash(struct map$2charphbufferph* self){
int size_309;
void* __right_value261 = (void*)0;
char** keys_310;
void* __right_value262 = (void*)0;
struct buffer** items_311;
void* __right_value263 = (void*)0;
_Bool* item_existance_312;
int len_313;
char* it_316;
struct buffer* default_value_319;
void* __right_value264 = (void*)0;
struct buffer* it2_320;
unsigned int hash_323;
int n_324;
struct buffer* default_value_325;
void* __right_value265 = (void*)0;
default_value_319 = (void*)0;
default_value_325 = (void*)0;
    size_309=self->size*10;
    keys_310=(char**)come_increment_ref_count(((char**)(__right_value261=(char**)come_calloc(1, sizeof(char*)*(1*(size_309)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_311=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value262=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_309)), "./comelang.h", 2709, "struct buffer**", (void*)0, (void*)0))));
    item_existance_312=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value263=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_309)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_313=0;
    for(    it_316=map$2charphbufferph_begin(self);    !map$2charphbufferph_end(self);    it_316=map$2charphbufferph_next(self)    ){
        memset(&default_value_319,0,sizeof(struct buffer*));
        it2_320=((struct buffer*)(__right_value264=map$2charphbufferph_at(self,it_316,default_value_319)));
        come_call_finalizer3(__right_value264,buffer_finalize, 0, 1, 0, 0, (void*)0);
        hash_323=charp_get_hash_key(it_316)%size_309;
        n_324=hash_323;
        while((_Bool)1) {
            if(            item_existance_312[n_324]) {
                n_324++;
                if(                n_324>=size_309) {
                    n_324=0;
                }
                else if(                n_324==hash_323) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_312[n_324]=(_Bool)1;
                keys_310[n_324]=it_316;
                items_311[n_324]=((struct buffer*)(__right_value265=map$2charphbufferph_at(self,it_316,default_value_325)));
                come_call_finalizer3(__right_value265,buffer_finalize, 0, 1, 0, 0, (void*)0);
                len_313++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_310;
    self->items=items_311;
    self->item_existance=item_existance_312;
    self->size=size_309;
    self->len=len_313;
}

static char* map$2charphbufferph_begin(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_314;
char* __result229__;
char* __result230__;
char* result_315;
char* __result231__;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_314,0,sizeof(char*));
        __result229__ = gComeFunResultObject = __result_obj__ = result_314;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result230__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    memset(&result_315,0,sizeof(char*));
    __result231__ = gComeFunResultObject = __result_obj__ = result_315;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphbufferph_next(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_317;
char* __result232__;
char* __result233__;
char* result_318;
char* __result234__;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_317,0,sizeof(char*));
        __result232__ = gComeFunResultObject = __result_obj__ = result_317;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result233__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    memset(&result_318,0,sizeof(char*));
    __result234__ = gComeFunResultObject = __result_obj__ = result_318;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_321;
unsigned int it_322;
struct buffer* __result235__;
struct buffer* __result236__;
struct buffer* __result237__;
struct buffer* __result238__;
    hash_321=charp_get_hash_key(((char*)key))%self->size;
    it_322=hash_321;
    while((_Bool)1) {
        if(        self->item_existance[it_322]) {
            if(            charp_equals(self->keys[it_322],key)) {
                __result235__ = gComeFunResultObject = __result_obj__ = self->items[it_322];
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
            it_322++;
            if(            it_322>=self->size) {
                it_322=0;
            }
            else if(            it_322==hash_321) {
                __result236__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result236__;
            }
        }
        else {
            __result237__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
    }
    __result238__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_328;
struct list_item$1charp* it_329;
struct list$1charp* __result242__;
    it2_328=0;
    it_329=self->head;
    while(it_329!=((void*)0)) {
        if(        charp_equals(it_329->item,item)) {
            list$1charp_delete(self,it2_328,it2_328+1);
            break;
        }
        it2_328++;
        it_329=it_329->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_330;
struct list$1charp* __result239__;
struct list_item$1charp* it_333;
int i_334;
struct list_item$1charp* prev_it_335;
struct list_item$1charp* it_336;
int i_337;
struct list_item$1charp* prev_it_338;
struct list_item$1charp* it_339;
struct list_item$1charp* head_prev_it_340;
struct list_item$1charp* tail_it_341;
int i_342;
struct list_item$1charp* prev_it_343;
struct list$1charp* __result241__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_330=tail;
        tail=head;
        head=tmp_330;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result239__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_333=self->head;
        i_334=0;
        while(it_333!=((void*)0)) {
            if(            i_334<tail) {
                prev_it_335=it_333;
                it_333=it_333->next;
                i_334++;
                come_call_finalizer3(prev_it_335,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_334==tail) {
                self->head=it_333;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_333=it_333->next;
                i_334++;
            }
        }
    }
    else if(    tail==self->len) {
        it_336=self->head;
        i_337=0;
        while(it_336!=((void*)0)) {
            if(            i_337==head) {
                self->tail=it_336->prev;
                self->tail->next=((void*)0);
            }
            if(            i_337>=head) {
                prev_it_338=it_336;
                it_336=it_336->next;
                i_337++;
                come_call_finalizer3(prev_it_338,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_336=it_336->next;
                i_337++;
            }
        }
    }
    else {
        it_339=self->head;
        head_prev_it_340=((void*)0);
        tail_it_341=((void*)0);
        i_342=0;
        while(it_339!=((void*)0)) {
            if(            i_342==head) {
                head_prev_it_340=it_339->prev;
            }
            if(            i_342==tail) {
                tail_it_341=it_339;
            }
            if(            i_342>=head&&i_342<tail) {
                prev_it_343=it_339;
                it_339=it_339->next;
                i_342++;
                come_call_finalizer3(prev_it_343,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_339=it_339->next;
                i_342++;
            }
        }
        if(        head_prev_it_340!=((void*)0)) {
            head_prev_it_340->next=tail_it_341;
        }
        if(        tail_it_341!=((void*)0)) {
            tail_it_341->prev=head_prev_it_340;
        }
    }
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_331;
struct list_item$1charp* prev_it_332;
struct list$1charp* __result240__;
    it_331=self->head;
    while(it_331!=((void*)0)) {
        prev_it_332=it_331;
        it_331=it_331->next;
        come_call_finalizer3(prev_it_332,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_345;
char* __result243__;
char* __result244__;
char* result_346;
char* __result245__;
result_345 = (void*)0;
result_346 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_345,0,sizeof(char*));
        __result243__ = gComeFunResultObject = __result_obj__ = result_345;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    self->it=self->head;
    if(    self->it) {
        __result244__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    memset(&result_346,0,sizeof(char*));
    __result245__ = gComeFunResultObject = __result_obj__ = result_346;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_348;
char* __result246__;
char* __result247__;
char* result_349;
char* __result248__;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_348,0,sizeof(char*));
        __result246__ = gComeFunResultObject = __result_obj__ = result_348;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result247__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    memset(&result_349,0,sizeof(char*));
    __result248__ = gComeFunResultObject = __result_obj__ = result_349;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_350;
struct list$1tuple2$2charphsTypephph* o2_saved_351;
struct tuple2$2charphsTypeph* it_352;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* name_353=0;
struct sType* type_354=0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    !klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_350=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 101, "struct buffer*", (void*)0, (void*)0))));
        if(        klass->mParentClassName) {
            buffer_append_format(buf_350,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
        }
        else {
            buffer_append_format(buf_350,"struct %s\n{\n",klass->mName);
        }
        for(        o2_saved_351=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_352=list$1tuple2$2charphsTypephph_begin((o2_saved_351));        !list$1tuple2$2charphsTypephph_end((o2_saved_351));        it_352=list$1tuple2$2charphsTypephph_next((o2_saved_351))        ){
            multiple_assign_var2=it_352;
            name_353=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_354=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_354->mStatic=(_Bool)0;
            buffer_append_str(buf_350,"    ");
            buffer_append_str(buf_350,((char*)(__right_value268=make_define_var_no_solved(type_354,name_353,(_Bool)0,(_Bool)1,info))));
            __right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_350,";\n");
            name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_354,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_351,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        klass->mAttribute==((void*)0)) {
            buffer_append_str(buf_350,"};\n");
        }
        else {
            buffer_append_format(buf_350,"} %s;\n",klass->mAttribute);
        }
        if(        string_operator_equals(klass->mDeclareSName,info->base_sname)) {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value269=buffer_to_string(buf_350))));
            __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(buf_350,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_355;
struct sClass* klass_356;
int i_357;
void* __right_value270 = (void*)0;
_Bool result_358;
    type2_355=type->mNoSolvedGenericsType->v1;
    if(    type2_355&&is_contained_generics_types(type2_355,info)) {
        return (_Bool)1;
    }
    klass_356=type->mClass;
    if(    klass_356->mGenerics) {
        return (_Bool)1;
    }
    for(    i_357=0;    i_357<list$1sTypeph_length(type->mGenericsTypes);    i_357++    ){
        result_358=is_contained_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value270=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_357))), "14struct.c", 146, 1)),info);
        come_call_finalizer3(__right_value270,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_358) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_359;
struct sClass* klass_360;
int i_361;
void* __right_value271 = (void*)0;
_Bool result_362;
    type2_359=type->mNoSolvedGenericsType->v1;
    if(    type2_359&&is_contained_method_generics_types(type2_359,info)) {
        return (_Bool)1;
    }
    klass_360=type->mClass;
    if(    klass_360->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_361=0;    i_361<list$1sTypeph_length(type->mGenericsTypes);    i_361++    ){
        result_362=is_contained_method_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value271=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_361))), "14struct.c", 170, 2)),info);
        come_call_finalizer3(__right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_362) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value272 = (void*)0;
char* new_name_363;
void* __right_value273 = (void*)0;
struct sClass* generics_class_366;
_Bool __result254__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sClass* new_class_393;
int i_394;
struct list$1tuple2$2charphsTypephph* o2_saved_395;
struct tuple2$2charphsTypeph* it_396;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_397=0;
struct sType* type_398=0;
void* __right_value284 = (void*)0;
struct sType* new_type_399;
void* __right_value288 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sType* __dec_obj92;
void* __right_value332 = (void*)0;
struct sType* __dec_obj93;
void* __right_value333 = (void*)0;
_Bool __result286__;
    new_name_363=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2charphsClassph_find(info->classes,new_name_363)) {
        generics_class_366=((struct sClass*)(__right_value273=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
        come_call_finalizer3(__right_value273,sClass_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_class_366==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result254__ = (_Bool)0;
            new_name_363 = come_decrement_ref_count2(new_name_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result254__;
        }
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_363)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 193, "struct sClass*", (void*)0, (void*)0)),new_name_363,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_393=((struct sClass*)(__right_value283=map$2charphsClassph_at(info->classes,((char*)(__right_value282=__builtin_string(new_name_363))),((void*)0))));
        __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value283,sClass_finalize, 0, 1, 0, 0, (void*)0);
        i_394=0;
        for(        o2_saved_395=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_366->mFields)),it_396=list$1tuple2$2charphsTypephph_begin((o2_saved_395));        !list$1tuple2$2charphsTypephph_end((o2_saved_395));        it_396=list$1tuple2$2charphsTypephph_next((o2_saved_395))        ){
            multiple_assign_var3=it_396;
            name_397=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_398=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_399=(struct sType*)come_increment_ref_count(solve_generics(type_398,generics_type,info));
            list$1tuple2$2charphsTypephph_push_back(new_class_393->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 203, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_397)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, new_type_399)))));
            name_397 = come_decrement_ref_count2(name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_395,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj92=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_393;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_393,info);
    }
    else {
        if(        type->mNoSolvedGenericsType->v1==((void*)0)) {
            __dec_obj93=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value333=map$2charphsClassphp_operator_load_element(info->classes,new_name_363)));
        come_call_finalizer3(__right_value333,sClass_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_reset(type->mGenericsTypes);
    }
    __result286__ = (_Bool)1;
    new_name_363 = come_decrement_ref_count2(new_name_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result286__;
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_364;
int it_365;
    hash_364=charp_get_hash_key(((char*)key))%self->size;
    it_365=hash_364;
    while((_Bool)1) {
        if(        self->item_existance[it_365]) {
            if(            charp_equals(self->keys[it_365],key)) {
                return (_Bool)1;
            }
            it_365++;
            if(            it_365>=self->size) {
                it_365=0;
            }
            else if(            it_365==hash_364) {
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
struct sClass* default_value_367;
unsigned int hash_368;
unsigned int it_369;
struct sClass* __result250__;
struct sClass* __result251__;
struct sClass* __result252__;
struct sClass* __result253__;
default_value_367 = (void*)0;
    memset(&default_value_367,0,sizeof(struct sClass*));
    hash_368=charp_get_hash_key(((char*)key))%self->size;
    it_369=hash_368;
    while((_Bool)1) {
        if(        self->item_existance[it_369]) {
            if(            charp_equals(self->keys[it_369],key)) {
                __result250__ = gComeFunResultObject = __result_obj__ = self->items[it_369];
                come_call_finalizer3(default_value_367,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
            it_369++;
            if(            it_369>=self->size) {
                it_369=0;
            }
            else if(            it_369==hash_368) {
                __result251__ = gComeFunResultObject = __result_obj__ = default_value_367;
                come_call_finalizer3(default_value_367,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
        }
        else {
            __result252__ = gComeFunResultObject = __result_obj__ = default_value_367;
            come_call_finalizer3(default_value_367,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result252__;
        }
    }
    __result253__ = gComeFunResultObject = __result_obj__ = default_value_367;
    come_call_finalizer3(default_value_367,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj54;
struct list$1tuple2$2charphsTypephph* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj54=self->mName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj55=self->mFields;
            come_call_finalizer3(__dec_obj55,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj56=self->mDeclareSName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj57=self->mParentClassName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj58=self->mAttribute;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_370;
struct list_item$1tuple2$2charphsTypephph* prev_it_371;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_389;
unsigned int it_390;
_Bool same_key_exist_391;
char* it2_392;
struct map$2charphsClassph* __result265__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_389=charp_get_hash_key(key)%self->size;
    it_390=hash_389;
    while((_Bool)1) {
        if(        self->item_existance[it_390]) {
            if(            charp_equals(self->keys[it_390],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_390]);
                    self->keys[it_390] = come_decrement_ref_count2(self->keys[it_390], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_390]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_390]);
                    self->keys[it_390]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_390],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_390]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_390]=item;
                }
                break;
            }
            it_390++;
            if(            it_390>=self->size) {
                it_390=0;
            }
            else if(            it_390==hash_389) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_390]=(_Bool)1;
            if(            1) {
                self->keys[it_390]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_390]=key;
            }
            if(            1) {
                self->items[it_390]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_390]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_391=(_Bool)0;
    for(    it2_392=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_392=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_392,key)) {
            same_key_exist_391=(_Bool)1;
        }
    }
    if(    !same_key_exist_391) {
        list$1charp_push_back(self->key_list,key);
    }
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_372;
void* __right_value274 = (void*)0;
char** keys_373;
void* __right_value275 = (void*)0;
struct sClass** items_374;
void* __right_value276 = (void*)0;
_Bool* item_existance_375;
int len_376;
char* it_379;
struct sClass* default_value_382;
void* __right_value277 = (void*)0;
struct sClass* it2_383;
unsigned int hash_386;
int n_387;
struct sClass* default_value_388;
void* __right_value278 = (void*)0;
default_value_382 = (void*)0;
default_value_388 = (void*)0;
    size_372=self->size*10;
    keys_373=(char**)come_increment_ref_count(((char**)(__right_value274=(char**)come_calloc(1, sizeof(char*)*(1*(size_372)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_374=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value275=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_372)), "./comelang.h", 2709, "struct sClass**", (void*)0, (void*)0))));
    item_existance_375=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value276=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_372)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_376=0;
    for(    it_379=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_379=map$2charphsClassph_next(self)    ){
        memset(&default_value_382,0,sizeof(struct sClass*));
        it2_383=((struct sClass*)(__right_value277=map$2charphsClassph_at(self,it_379,default_value_382)));
        come_call_finalizer3(__right_value277,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_386=charp_get_hash_key(it_379)%size_372;
        n_387=hash_386;
        while((_Bool)1) {
            if(            item_existance_375[n_387]) {
                n_387++;
                if(                n_387>=size_372) {
                    n_387=0;
                }
                else if(                n_387==hash_386) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_375[n_387]=(_Bool)1;
                keys_373[n_387]=it_379;
                items_374[n_387]=((struct sClass*)(__right_value278=map$2charphsClassph_at(self,it_379,default_value_388)));
                come_call_finalizer3(__right_value278,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_376++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_373;
    self->items=items_374;
    self->item_existance=item_existance_375;
    self->size=size_372;
    self->len=len_376;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_377;
char* __result255__;
char* __result256__;
char* result_378;
char* __result257__;
result_377 = (void*)0;
result_378 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_377,0,sizeof(char*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_377;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_378,0,sizeof(char*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_378;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_380;
char* __result258__;
char* __result259__;
char* result_381;
char* __result260__;
result_380 = (void*)0;
result_381 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_380,0,sizeof(char*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_380;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_381,0,sizeof(char*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_381;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_384;
unsigned int it_385;
struct sClass* __result261__;
struct sClass* __result262__;
struct sClass* __result263__;
struct sClass* __result264__;
    hash_384=charp_get_hash_key(((char*)key))%self->size;
    it_385=hash_384;
    while((_Bool)1) {
        if(        self->item_existance[it_385]) {
            if(            charp_equals(self->keys[it_385],key)) {
                __result261__ = gComeFunResultObject = __result_obj__ = self->items[it_385];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result261__;
            }
            it_385++;
            if(            it_385>=self->size) {
                it_385=0;
            }
            else if(            it_385==hash_384) {
                __result262__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result262__;
            }
        }
        else {
            __result263__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result263__;
        }
    }
    __result264__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_400;
struct tuple2$2charphsTypeph* __dec_obj59;
void* __right_value286 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_401;
struct tuple2$2charphsTypeph* __dec_obj60;
void* __right_value287 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_402;
struct tuple2$2charphsTypeph* __dec_obj61;
struct list$1tuple2$2charphsTypephph* __result266__;
    if(    self->len==0) {
        litem_400=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value285=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1305, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_400->prev=((void*)0);
        litem_400->next=((void*)0);
        __dec_obj59=litem_400->item;
        litem_400->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_400;
        self->head=litem_400;
    }
    else if(    self->len==1) {
        litem_401=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value286=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1315, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_401->prev=self->head;
        litem_401->next=((void*)0);
        __dec_obj60=litem_401->item;
        litem_401->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_401;
        self->head->next=litem_401;
    }
    else {
        litem_402=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value287=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1325, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_402->prev=self->tail;
        litem_402->next=((void*)0);
        __dec_obj61=litem_402->item;
        litem_402->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_402;
        self->tail=litem_402;
    }
    self->len++;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result267__;
void* __right_value289 = (void*)0;
struct sType* result_403;
void* __right_value292 = (void*)0;
struct tuple1$1sTypeph* __dec_obj64;
void* __right_value293 = (void*)0;
struct tuple1$1sTypeph* __dec_obj65;
void* __right_value294 = (void*)0;
struct tuple1$1sTypeph* __dec_obj66;
void* __right_value295 = (void*)0;
char* __dec_obj67;
void* __right_value296 = (void*)0;
char* __dec_obj68;
void* __right_value303 = (void*)0;
struct list$1sTypeph* __dec_obj72;
void* __right_value311 = (void*)0;
struct list$1sNodeph* __dec_obj76;
void* __right_value312 = (void*)0;
struct list$1sTypeph* __dec_obj77;
void* __right_value319 = (void*)0;
struct list$1charph* __dec_obj81;
void* __right_value320 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value322 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
void* __right_value323 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value324 = (void*)0;
char* __dec_obj86;
void* __right_value325 = (void*)0;
char* __dec_obj87;
void* __right_value326 = (void*)0;
char* __dec_obj88;
void* __right_value327 = (void*)0;
char* __dec_obj89;
struct sType* __result283__;
    if(    self==(void*)0) {
        __result267__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    result_403=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_403->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj64=result_403->mNoSolvedGenericsType;
        result_403->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj65=result_403->mOriginalLoadVarType;
        result_403->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj65,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj66=result_403->mRefferenceOriginalType;
        result_403->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj67=result_403->mInterfaceName;
        result_403->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj68=result_403->mGenericsName;
        result_403->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj72=result_403->mGenericsTypes;
        result_403->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj76=result_403->mArrayNum;
        result_403->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj76,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_403->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj77=result_403->mParamTypes;
        result_403->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj77,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj81=result_403->mParamNames;
        result_403->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj82=result_403->mResultType;
        result_403->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_403->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj83=result_403->mAlignas;
        result_403->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj84=result_403->mChannelType;
        result_403->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_403->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_403->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_403->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_403->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_403->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_403->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_403->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_403->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_403->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_403->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_403->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_403->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_403->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_403->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_403->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_403->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_403->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_403->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_403->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_403->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_403->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_403->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_403->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_403->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_403->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_403->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj85=result_403->mSizeNum;
        result_403->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_403->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj86=result_403->mOriginalTypeName;
        result_403->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_403->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_403->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_403->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_403->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_403->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_403->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_403->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_403->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj87=result_403->mAsmName;
        result_403->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_403->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_403->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_403->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_403->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_403->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_403->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj88=result_403->mTupleName;
        result_403->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj89=result_403->mAttribute;
        result_403->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_403->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_403;
    come_call_finalizer3(result_403,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result268__;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* result_404;
void* __right_value291 = (void*)0;
struct sType* __dec_obj62;
struct tuple1$1sTypeph* __result269__;
    if(    self==(void*)0) {
        __result268__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    result_404=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj62=result_404->v1;
        result_404->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result269__ = gComeFunResultObject = __result_obj__ = result_404;
    come_call_finalizer3(result_404,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj63;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj63=self->v1;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result270__;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1sTypeph* result_405;
struct list_item$1sTypeph* it_406;
void* __right_value302 = (void*)0;
struct list$1sTypeph* __result273__;
    if(    self==((void*)0)) {
        __result270__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_405=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_406=self->head;
    while(it_406!=((void*)0)) {
        list$1sTypeph_add(result_405,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_406->item)));
        it_406=it_406->next;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_405;
    come_call_finalizer3(result_405,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result271__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list_item$1sTypeph* litem_407;
struct sType* __dec_obj69;
void* __right_value300 = (void*)0;
struct list_item$1sTypeph* litem_408;
struct sType* __dec_obj70;
void* __right_value301 = (void*)0;
struct list_item$1sTypeph* litem_409;
struct sType* __dec_obj71;
struct list$1sTypeph* __result272__;
    if(    self->len==0) {
        litem_407=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value299=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_407->prev=((void*)0);
        litem_407->next=((void*)0);
        __dec_obj69=litem_407->item;
        litem_407->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_407;
        self->head=litem_407;
    }
    else if(    self->len==1) {
        litem_408=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value300=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_408->prev=self->head;
        litem_408->next=((void*)0);
        __dec_obj70=litem_408->item;
        litem_408->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_408;
        self->head->next=litem_408;
    }
    else {
        litem_409=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value301=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_409->prev=self->tail;
        litem_409->next=((void*)0);
        __dec_obj71=litem_409->item;
        litem_409->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_409;
        self->tail=litem_409;
    }
    self->len++;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result274__;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1sNodeph* result_410;
struct list_item$1sNodeph* it_411;
void* __right_value310 = (void*)0;
struct list$1sNodeph* __result279__;
    if(    self==((void*)0)) {
        __result274__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    result_410=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_411=self->head;
    while(it_411!=((void*)0)) {
        list$1sNodeph_add(result_410,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_411->item)));
        it_411=it_411->next;
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_410;
    come_call_finalizer3(result_410,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result275__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
struct list_item$1sNodeph* litem_412;
struct sNode* __dec_obj73;
void* __right_value307 = (void*)0;
struct list_item$1sNodeph* litem_413;
struct sNode* __dec_obj74;
void* __right_value308 = (void*)0;
struct list_item$1sNodeph* litem_414;
struct sNode* __dec_obj75;
struct list$1sNodeph* __result276__;
    if(    self->len==0) {
        litem_412=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value306=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_412->prev=((void*)0);
        litem_412->next=((void*)0);
        __dec_obj73=litem_412->item;
        litem_412->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_412;
        self->head=litem_412;
    }
    else if(    self->len==1) {
        litem_413=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value307=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_413->prev=self->head;
        litem_413->next=((void*)0);
        __dec_obj74=litem_413->item;
        litem_413->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_413;
        self->head->next=litem_413;
    }
    else {
        litem_414=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value308=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_414->prev=self->tail;
        litem_414->next=((void*)0);
        __dec_obj75=litem_414->item;
        litem_414->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_414;
        self->tail=litem_414;
    }
    self->len++;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result277__;
void* __right_value309 = (void*)0;
struct sNode* result_415;
struct sNode* __result278__;
    if(    self==(void*)0) {
        __result277__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    result_415=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_415->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_415->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_415->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_415->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_415->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_415->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_415->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_415->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_415->kind=self->kind;
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_415;
    if(result_415) { result_415 = come_decrement_ref_count2(result_415, ((struct sNode*)result_415)->finalize, ((struct sNode*)result_415)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result280__;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* result_416;
struct list_item$1charph* it_417;
void* __right_value318 = (void*)0;
struct list$1charph* __result282__;
    if(    self==((void*)0)) {
        __result280__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    result_416=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_417=self->head;
    while(it_417!=((void*)0)) {
        list$1charph_add(result_416,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_417->item)));
        it_417=it_417->next;
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_416;
    come_call_finalizer3(result_416,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
struct list_item$1charph* litem_418;
char* __dec_obj78;
void* __right_value316 = (void*)0;
struct list_item$1charph* litem_419;
char* __dec_obj79;
void* __right_value317 = (void*)0;
struct list_item$1charph* litem_420;
char* __dec_obj80;
struct list$1charph* __result281__;
    if(    self->len==0) {
        litem_418=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value315=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_418->prev=((void*)0);
        litem_418->next=((void*)0);
        __dec_obj78=litem_418->item;
        litem_418->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_418;
        self->head=litem_418;
    }
    else if(    self->len==1) {
        litem_419=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value316=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_419->prev=self->head;
        litem_419->next=((void*)0);
        __dec_obj79=litem_419->item;
        litem_419->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_419;
        self->head->next=litem_419;
    }
    else {
        litem_420=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value317=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_420->prev=self->tail;
        litem_420->next=((void*)0);
        __dec_obj80=litem_420->item;
        litem_420->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_420;
        self->tail=litem_420;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj90;
struct sType* __dec_obj91;
struct tuple2$2charphsTypeph* __result284__;
    __dec_obj90=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_421;
struct list_item$1sTypeph* prev_it_422;
struct list$1sTypeph* __result285__;
    it_421=self->head;
    while(it_421!=((void*)0)) {
        prev_it_422=it_421;
        it_421=it_421->next;
        come_call_finalizer3(prev_it_422,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
char* __dec_obj95;
void* __right_value351 = (void*)0;
struct sClass* __dec_obj108;
struct sStructNode* __result295__;
    ((struct sNodeBase*)(__right_value334=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value334,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj108=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj108,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value352=__builtin_string("sStructNode")));
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_430;
void* __right_value353 = (void*)0;
char* name_431;
_Bool __result297__;
    klass_430=(struct sClass*)come_increment_ref_count(self->mClass);
    name_431=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_430,info);
    __result297__ = (_Bool)1;
    come_call_finalizer3(klass_430,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_431 = come_decrement_ref_count2(name_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result297__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj94;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj94=self->sname;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result287__;
void* __right_value336 = (void*)0;
struct sClass* result_423;
void* __right_value337 = (void*)0;
char* __dec_obj96;
void* __right_value347 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj104;
void* __right_value348 = (void*)0;
char* __dec_obj105;
void* __right_value349 = (void*)0;
char* __dec_obj106;
void* __right_value350 = (void*)0;
char* __dec_obj107;
struct sClass* __result294__;
    if(    self==(void*)0) {
        __result287__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    result_423=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_423->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_423->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_423->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_423->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_423->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_423->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_423->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_423->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj96=result_423->mName;
        result_423->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_423->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_423->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj104=result_423->mFields;
        result_423->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsTypephphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj104,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_423->mOutputed=self->mOutputed;
    }
    if(    self!=((void*)0)) {
        result_423->mOutputed2=self->mOutputed2;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj105=result_423->mDeclareSName;
        result_423->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_423->mNobodyStruct=self->mNobodyStruct;
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj106=result_423->mParentClassName;
        result_423->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj107=result_423->mAttribute;
        result_423->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_423;
    come_call_finalizer3(result_423,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result288__;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_424;
struct list_item$1tuple2$2charphsTypephph* it_425;
void* __right_value346 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result293__;
    if(    self==((void*)0)) {
        __result288__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    result_424=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1221, "struct list$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
    it_425=self->head;
    while(it_425!=((void*)0)) {
        list$1tuple2$2charphsTypephph_add(result_424,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_425->item)));
        it_425=it_425->next;
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_424;
    come_call_finalizer3(result_424,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result289__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_426;
struct tuple2$2charphsTypeph* __dec_obj97;
void* __right_value341 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_427;
struct tuple2$2charphsTypeph* __dec_obj98;
void* __right_value342 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_428;
struct tuple2$2charphsTypeph* __dec_obj99;
struct list$1tuple2$2charphsTypephph* __result290__;
    if(    self->len==0) {
        litem_426=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value340=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1235, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_426->prev=((void*)0);
        litem_426->next=((void*)0);
        __dec_obj97=litem_426->item;
        litem_426->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_426;
        self->head=litem_426;
    }
    else if(    self->len==1) {
        litem_427=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value341=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1245, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_427->prev=self->head;
        litem_427->next=((void*)0);
        __dec_obj98=litem_427->item;
        litem_427->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_427;
        self->head->next=litem_427;
    }
    else {
        litem_428=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value342=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1255, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_428->prev=self->tail;
        litem_428->next=((void*)0);
        __dec_obj99=litem_428->item;
        litem_428->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_428;
        self->tail=litem_428;
    }
    self->len++;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result291__;
void* __right_value343 = (void*)0;
struct tuple2$2charphsTypeph* result_429;
void* __right_value344 = (void*)0;
char* __dec_obj100;
void* __right_value345 = (void*)0;
struct sType* __dec_obj101;
struct tuple2$2charphsTypeph* __result292__;
    if(    self==(void*)0) {
        __result291__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    result_429=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj100=result_429->v1;
        result_429->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj101=result_429->v2;
        result_429->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result292__ = gComeFunResultObject = __result_obj__ = result_429;
    come_call_finalizer3(result_429,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj102;
struct sType* __dec_obj103;
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
            come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj109;
char* __dec_obj110;
struct sClass* __dec_obj111;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj109=self->sname;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj110=self->mName;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj111=self->mClass;
            come_call_finalizer3(__dec_obj111,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* __dec_obj112;
void* __right_value356 = (void*)0;
struct sClass* __dec_obj113;
struct sStructNobodyNode* __result298__;
    ((struct sNodeBase*)(__right_value354=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value354,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj112=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj113,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result299__;
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sStructNobodyNode")));
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
char* name_432;
struct sClass* klass_433;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
_Bool __result300__;
    name_432=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_433=self->mClass;
    map$2charphbufferph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(name_432),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value359=xsprintf("struct %s;\n",name_432))))));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result300__ = (_Bool)1;
    name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result300__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj114;
char* __dec_obj115;
struct sClass* __dec_obj116;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj114=self->sname;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj115=self->mName;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj116=self->mClass;
            come_call_finalizer3(__dec_obj116,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
struct sNothingNode* __result301__;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value361,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value362=__builtin_string("sNothingNode")));
    __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
char* __dec_obj117;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj117=self->sname;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value367 = (void*)0;
struct sNode* __result305__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 314, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value364=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 314, "struct sNothingNode*", (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result305__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value367=_inf_value1));
    come_call_finalizer3(__right_value364,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value367) { __right_value367 = come_decrement_ref_count2(__right_value367, ((struct sNode*)__right_value367)->finalize, ((struct sNode*)__right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result303__;
void* __right_value365 = (void*)0;
struct sNothingNode* result_434;
void* __right_value366 = (void*)0;
char* __dec_obj118;
struct sNothingNode* __result304__;
    if(    self==(void*)0) {
        __result303__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_434=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_434->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj118=result_434->sname;
        result_434->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_434->sline_real=self->sline_real;
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_434;
    come_call_finalizer3(result_434,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
char* __dec_obj119;
void* __right_value370 = (void*)0;
struct sClass* __dec_obj120;
struct list$1sNodeph* __dec_obj121;
struct sClassNode* __result306__;
    ((struct sNodeBase*)(__right_value368=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value368,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj119=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj120,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj121=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj121,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value371=__builtin_string("sClassNode")));
    __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value372 = (void*)0;
struct sClass* klass_435;
void* __right_value373 = (void*)0;
char* name_436;
void* __right_value374 = (void*)0;
_Bool _if_conditional2;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
_Bool _elif_conditional1;
void* __right_value377 = (void*)0;
struct sClass* klass2_437;
void* __right_value378 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj126;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* type_438;
void* __right_value381 = (void*)0;
struct sType* override__439;
void* __right_value387 = (void*)0;
struct list$1sNodeph* o2_saved_461;
struct sNode* it_464;
_Bool Value_467;
_Bool __result325__;
_Bool __result326__;
    klass_435=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
    name_436=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)(__right_value374=map$2charphsClassph_at(info->classes,name_436,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value374,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_436),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_435)));
    }
    else if(    (_elif_conditional1=(list$1tuple2$2charphsTypephph_length(((struct sClass*)(__right_value376=map$2charphsClassph_at(info->classes,name_436,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_435->mFields)>0)),    come_call_finalizer3(__right_value376,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _elif_conditional1) {
        klass2_437=((struct sClass*)(__right_value377=map$2charphsClassph_at(info->classes,name_436,((void*)0))));
        come_call_finalizer3(__right_value377,sClass_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj126=klass2_437->mFields;
        klass2_437->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsTypephphp_clone, klass_435->mFields));
        come_call_finalizer3(__dec_obj126,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_438=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 352, "struct sType*", (void*)0, (void*)0)),name_436,(_Bool)0,info));
    override__439=((struct sType*)(__right_value381=map$2charphsTypeph_at(info->types,name_436,((void*)0))));
    come_call_finalizer3(__right_value381,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    override__439) {
        if(        override__439->mTypedef) {
            type_438->mTypedef=(_Bool)1;
        }
    }
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_436),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_438)));
    output_struct(klass_435,info);
    for(    o2_saved_461=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_464=list$1sNodeph_begin((o2_saved_461));    !list$1sNodeph_end((o2_saved_461));    it_464=list$1sNodeph_next((o2_saved_461))    ){
        Value_467=node_compile(it_464,info);
        if(        !Value_467) {
            __result325__ = (_Bool)0;
            come_call_finalizer3(o2_saved_461,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_435,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_436 = come_decrement_ref_count2(name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result325__;
        }
        else {
        }
    }
    come_call_finalizer3(o2_saved_461,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    output_struct_come_header(klass_435,info);
    __result326__ = (_Bool)1;
    come_call_finalizer3(klass_435,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_436 = come_decrement_ref_count2(name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result326__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj122;
char* __dec_obj123;
struct sClass* __dec_obj124;
struct list$1sNodeph* __dec_obj125;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj122=self->sname;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj123=self->mName;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj124=self->mClass;
            come_call_finalizer3(__dec_obj124,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(        self->mMethods==gComeFunResultObject) {
            __dec_obj125=self->mMethods;
            come_call_finalizer3(__dec_obj125,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_440;
unsigned int it_441;
struct sType* __result308__;
struct sType* __result309__;
struct sType* __result310__;
struct sType* __result311__;
    hash_440=charp_get_hash_key(((char*)key))%self->size;
    it_441=hash_440;
    while((_Bool)1) {
        if(        self->item_existance[it_441]) {
            if(            charp_equals(self->keys[it_441],key)) {
                __result308__ = gComeFunResultObject = __result_obj__ = self->items[it_441];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result308__;
            }
            it_441++;
            if(            it_441>=self->size) {
                it_441=0;
            }
            else if(            it_441==hash_440) {
                __result309__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result309__;
            }
        }
        else {
            __result310__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result310__;
        }
    }
    __result311__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_457;
unsigned int it_458;
_Bool same_key_exist_459;
char* it2_460;
struct map$2charphsTypeph* __result318__;
    if(    self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_457=charp_get_hash_key(key)%self->size;
    it_458=hash_457;
    while((_Bool)1) {
        if(        self->item_existance[it_458]) {
            if(            charp_equals(self->keys[it_458],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_458]);
                    self->keys[it_458] = come_decrement_ref_count2(self->keys[it_458], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_458]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_458]);
                    self->keys[it_458]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_458],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_458]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_458]=item;
                }
                break;
            }
            it_458++;
            if(            it_458>=self->size) {
                it_458=0;
            }
            else if(            it_458==hash_457) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_458]=(_Bool)1;
            if(            1) {
                self->keys[it_458]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_458]=key;
            }
            if(            1) {
                self->items[it_458]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_458]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_459=(_Bool)0;
    for(    it2_460=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_460=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_460,key)) {
            same_key_exist_459=(_Bool)1;
        }
    }
    if(    !same_key_exist_459) {
        list$1charp_push_back(self->key_list,key);
    }
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_442;
void* __right_value382 = (void*)0;
char** keys_443;
void* __right_value383 = (void*)0;
struct sType** items_444;
void* __right_value384 = (void*)0;
_Bool* item_existance_445;
int len_446;
char* it_449;
struct sType* default_value_452;
void* __right_value385 = (void*)0;
struct sType* it2_453;
unsigned int hash_454;
int n_455;
struct sType* default_value_456;
void* __right_value386 = (void*)0;
default_value_452 = (void*)0;
default_value_456 = (void*)0;
    size_442=self->size*10;
    keys_443=(char**)come_increment_ref_count(((char**)(__right_value382=(char**)come_calloc(1, sizeof(char*)*(1*(size_442)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_444=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value383=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_442)), "./comelang.h", 2709, "struct sType**", (void*)0, (void*)0))));
    item_existance_445=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value384=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_442)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_446=0;
    for(    it_449=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_449=map$2charphsTypeph_next(self)    ){
        memset(&default_value_452,0,sizeof(struct sType*));
        it2_453=((struct sType*)(__right_value385=map$2charphsTypeph_at(self,it_449,default_value_452)));
        come_call_finalizer3(__right_value385,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_454=charp_get_hash_key(it_449)%size_442;
        n_455=hash_454;
        while((_Bool)1) {
            if(            item_existance_445[n_455]) {
                n_455++;
                if(                n_455>=size_442) {
                    n_455=0;
                }
                else if(                n_455==hash_454) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_445[n_455]=(_Bool)1;
                keys_443[n_455]=it_449;
                items_444[n_455]=((struct sType*)(__right_value386=map$2charphsTypeph_at(self,it_449,default_value_456)));
                come_call_finalizer3(__right_value386,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_446++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_443;
    self->items=items_444;
    self->item_existance=item_existance_445;
    self->size=size_442;
    self->len=len_446;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_447;
char* __result312__;
char* __result313__;
char* result_448;
char* __result314__;
result_447 = (void*)0;
result_448 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_447,0,sizeof(char*));
        __result312__ = gComeFunResultObject = __result_obj__ = result_447;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result313__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    memset(&result_448,0,sizeof(char*));
    __result314__ = gComeFunResultObject = __result_obj__ = result_448;
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_450;
char* __result315__;
char* __result316__;
char* result_451;
char* __result317__;
result_450 = (void*)0;
result_451 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_450,0,sizeof(char*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_450;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_451,0,sizeof(char*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_451;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_462;
struct sNode* __result319__;
struct sNode* __result320__;
struct sNode* result_463;
struct sNode* __result321__;
result_462 = (void*)0;
result_463 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_462,0,sizeof(struct sNode*));
        __result319__ = gComeFunResultObject = __result_obj__ = result_462;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    self->it=self->head;
    if(    self->it) {
        __result320__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    memset(&result_463,0,sizeof(struct sNode*));
    __result321__ = gComeFunResultObject = __result_obj__ = result_463;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_465;
struct sNode* __result322__;
struct sNode* __result323__;
struct sNode* result_466;
struct sNode* __result324__;
result_465 = (void*)0;
result_466 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_465,0,sizeof(struct sNode*));
        __result322__ = gComeFunResultObject = __result_obj__ = result_465;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result323__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    memset(&result_466,0,sizeof(struct sNode*));
    __result324__ = gComeFunResultObject = __result_obj__ = result_466;
    gComeFunResultObject = (void*)0;
    return __result324__;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_468;
void* __right_value388 = (void*)0;
_Bool _if_conditional3;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* type_469;
void* __right_value395 = (void*)0;
struct sType* override__470;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sType* type_471;
void* __right_value401 = (void*)0;
struct sType* override__472;
void* __right_value402 = (void*)0;
struct sClass* parent_class_473;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
char* parent_class_name_474;
void* __right_value405 = (void*)0;
struct sNode* __result327__;
_Bool multiple_declare_475;
char* p_476;
int sline_477;
void* __right_value406 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_478=0;
char* name_479=0;
_Bool err_480=0;
void* __right_value407 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* base_type_481=0;
char* name_482=0;
_Bool err_483=0;
void* __right_value408 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6 = (void*)0;
struct sType* type2_484=0;
char* name2_485=0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7 = (void*)0;
struct sType* type2_486=0;
char* name2_487=0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_488=0;
char* name_489=0;
_Bool err_490=0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
char* struct_attribute2_491;
void* __right_value418 = (void*)0;
char* __dec_obj131;
void* __right_value419 = (void*)0;
char* __dec_obj132;
char* __dec_obj133;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* __dec_obj134;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value429 = (void*)0;
struct sNode* node_492;
_Bool Value_494;
struct sNode* __result330__;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value432 = (void*)0;
struct sNode* __result331__;
klass_468 = (void*)0;
    if(    (_if_conditional3=(((struct sClass*)(__right_value388=map$2charphsClassph_at(info->classes,type_name,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value388,sClass_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional3) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 379, "struct sClass*", (void*)0, (void*)0)),((char*)(__right_value391=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_469=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 380, "struct sType*", (void*)0, (void*)0)),type_name,(_Bool)0,info));
        override__470=((struct sType*)(__right_value395=map$2charphsTypeph_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value395,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__470) {
            if(            override__470->mTypedef) {
                type_469->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_469)));
        klass_468=((struct sClass*)(__right_value397=map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value397,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_468=((struct sClass*)(__right_value398=map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value398,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        type_471=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 393, "struct sType*", (void*)0, (void*)0)),type_name,(_Bool)0,info));
        override__472=((struct sType*)(__right_value401=map$2charphsTypeph_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value401,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__472) {
            if(            override__472->mTypedef) {
                type_471->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_471)));
        come_call_finalizer3(type_471,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    parent_class_473=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value403=parse_word(info)));
        __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_474=(char*)come_increment_ref_count(parse_word(info));
        parent_class_473=((struct sClass*)(__right_value405=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_474)));
        come_call_finalizer3(__right_value405,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(        parent_class_473==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_474);
            __result327__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            parent_class_name_474 = come_decrement_ref_count2(parent_class_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result327__;
        }
        parent_class_name_474 = come_decrement_ref_count2(parent_class_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        multiple_declare_475=(_Bool)0;
        {
            p_476=info->p;
            sline_477=info->sline;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value406=backtrace_parse_type((_Bool)1,info)));
            type_478=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_479=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_480=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value406,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            err_480&&*info->p==44) {
                multiple_declare_475=(_Bool)1;
            }
            info->p=p_476;
            info->sline=sline_477;
            come_call_finalizer3(type_478,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_479 = come_decrement_ref_count2(name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        multiple_declare_475) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value407=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_481=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_482=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_483=multiple_assign_var5->v3;
            come_call_finalizer3(__right_value407,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value408=parse_variable_name((struct sType*)come_increment_ref_count(base_type_481),(_Bool)1,info)));
            type2_484=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_485=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer3(__right_value408,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2charphsTypephph_push_back(klass_468->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 450, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_485),(struct sType*)come_increment_ref_count(type2_484))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value411=parse_variable_name((struct sType*)come_increment_ref_count(base_type_481),(_Bool)0,info)));
                type2_486=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_487=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer3(__right_value411,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(klass_468->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 458, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_487),(struct sType*)come_increment_ref_count(type2_486))));
                come_call_finalizer3(type2_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_487 = come_decrement_ref_count2(name2_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(base_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_482 = come_decrement_ref_count2(name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_484,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_485 = come_decrement_ref_count2(name2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value414=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_488=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_489=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_490=multiple_assign_var8->v3;
            come_call_finalizer3(__right_value414,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_490) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2charphsTypephph_push_back(klass_468->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 469, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_489),(struct sType*)come_increment_ref_count(type2_488))));
            come_call_finalizer3(type2_488,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_489 = come_decrement_ref_count2(name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct_attribute2_491=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_473) {
        __dec_obj131=klass_468->mParentClassName;
        klass_468->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_473->mName));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_468->mName),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_468)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_491,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj132=klass_468->mAttribute;
        klass_468->mAttribute=(char*)come_increment_ref_count(struct_attribute2_491);
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_491,"")) {
        __dec_obj133=klass_468->mAttribute;
        klass_468->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj134=klass_468->mAttribute;
        klass_468->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute,((char*)(__right_value420=charp_operator_add(" ",struct_attribute2_491)))));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 505, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value424=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 505, "struct sStructNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_468,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_492=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value424,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    Value_494=node_compile(node_492,info);
    if(    !Value_494) {
        __result330__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute2_491 = come_decrement_ref_count2(struct_attribute2_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_492) { node_492 = come_decrement_ref_count2(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 511, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value431=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 511, "struct sNothingNode*", (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result331__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value432=_inf_value3));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute2_491 = come_decrement_ref_count2(struct_attribute2_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(node_492) { node_492 = come_decrement_ref_count2(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value431,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value432) { __right_value432 = come_decrement_ref_count2(__right_value432, ((struct sNode*)__right_value432)->finalize, ((struct sNode*)__right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj127;
char* __dec_obj128;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj127=self->v1;
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj128=self->v2;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
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

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result328__;
void* __right_value425 = (void*)0;
struct sStructNode* result_493;
void* __right_value426 = (void*)0;
char* __dec_obj135;
void* __right_value427 = (void*)0;
char* __dec_obj136;
void* __right_value428 = (void*)0;
struct sClass* __dec_obj137;
struct sStructNode* __result329__;
    if(    self==(void*)0) {
        __result328__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    result_493=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_493->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj135=result_493->sname;
        result_493->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_493->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj136=result_493->mName;
        result_493->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj137=result_493->mClass;
        result_493->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj137,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result329__ = gComeFunResultObject = __result_obj__ = result_493;
    come_call_finalizer3(result_493,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

char* parse_struct_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct buffer* result_495;
char* head_496;
char* tail_497;
void* __right_value435 = (void*)0;
char* __result332__;
    parse_sharp_v5(info);
    result_495=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 517, "struct buffer*", (void*)0, (void*)0))));
    while(1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_496=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_497=info->p;
            buffer_append(result_495,head_496,tail_497-head_496);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result332__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value435=buffer_to_string(result_495)));
    come_call_finalizer3(result_495,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_498;
void* __right_value436 = (void*)0;
char* struct_attribute_499;
void* __right_value437 = (void*)0;
char* type_name_500;
struct sClass* struct_class_501;
void* __right_value438 = (void*)0;
_Bool _if_conditional4;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sType* type_502;
void* __right_value444 = (void*)0;
struct sType* override__503;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* type_504;
void* __right_value448 = (void*)0;
struct sType* override__505;
char* source_tail_506;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct buffer* header_507;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value459 = (void*)0;
struct sNode* __result335__;
void* __right_value460 = (void*)0;
char* T_511;
void* __right_value461 = (void*)0;
struct sClass* generics_class_512;
void* __right_value462 = (void*)0;
_Bool _if_conditional5;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sClass* __dec_obj141;
void* __right_value465 = (void*)0;
_Bool _if_conditional6;
void* __right_value466 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type2_513=0;
char* name_514=0;
_Bool err_515=0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* name2_516;
void* __right_value470 = (void*)0;
struct sType* type3_517;
_Bool no_comma_518;
void* __right_value471 = (void*)0;
struct sNode* node_519;
struct sNode* __dec_obj142;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* source_tail_520;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct buffer* header_521;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value482 = (void*)0;
struct sNode* __result337__;
struct sClass* struct_class_522;
void* __right_value483 = (void*)0;
_Bool _if_conditional7;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* type_523;
void* __right_value488 = (void*)0;
struct sType* override__524;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* type_525;
void* __right_value492 = (void*)0;
struct sType* override__526;
void* __right_value493 = (void*)0;
struct sClass* parent_class_527;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
char* parent_class_name_528;
void* __right_value496 = (void*)0;
struct sNode* __result338__;
_Bool multiple_declare_529;
char* p_530;
int sline_531;
void* __right_value497 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_532=0;
char* name_533=0;
_Bool err_534=0;
void* __right_value498 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* base_type_535=0;
char* name_536=0;
_Bool err_537=0;
void* __right_value499 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var12 = (void*)0;
struct sType* type2_538=0;
char* name2_539=0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13 = (void*)0;
struct sType* type2_540=0;
char* name2_541=0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14 = (void*)0;
struct sType* type2_542=0;
char* name_543=0;
_Bool err_544=0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
char* struct_attribute2_545;
void* __right_value509 = (void*)0;
struct sClass* klass2_546;
char* source_tail_547;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct buffer* header_548;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* __dec_obj145;
void* __right_value514 = (void*)0;
char* __dec_obj146;
char* __dec_obj147;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* __dec_obj148;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value520 = (void*)0;
struct sNode* __result339__;
char* source_head_549;
void* __right_value521 = (void*)0;
char* type_name_550;
struct sClass* parent_class_551;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
char* parent_class_name_552;
void* __right_value524 = (void*)0;
struct sNode* __result340__;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1sClassp* parent_classes_553;
struct sClass* parent_class2_556;
void* __right_value530 = (void*)0;
struct sClass* struct_class_560;
void* __right_value531 = (void*)0;
_Bool _if_conditional8;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sClass* __dec_obj149;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sClass* __dec_obj150;
struct sClass* defining_class_561;
void* __right_value536 = (void*)0;
_Bool _if_conditional9;
void* __right_value537 = (void*)0;
char* __dec_obj151;
void* __right_value538 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1sClassp* o2_saved_567;
struct sClass* parent_570;
struct list$1tuple2$2charphsTypephph* o2_saved_573;
struct tuple2$2charphsTypeph* it_574;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
_Bool _elif_conditional2;
void* __right_value547 = (void*)0;
struct sClass* klass2_575;
void* __right_value548 = (void*)0;
char* __dec_obj152;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1sClassp* o2_saved_576;
struct sClass* parent_577;
struct list$1tuple2$2charphsTypephph* o2_saved_578;
struct tuple2$2charphsTypeph* it_579;
void* __right_value551 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_580;
struct tuple2$2charphsTypeph* it_581;
void* __right_value552 = (void*)0;
char* head_582;
char* p_saved_583;
int sline_saved_584;
char* sname_saved_585;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1sNodeph* methods_586;
void* __right_value555 = (void*)0;
char* __dec_obj153;
char* __dec_obj154;
struct map$2charphcharph* __dec_obj155;
_Bool include__589;
_Bool multiple_declare_590;
char* p_591;
int sline_592;
void* __right_value556 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_593=0;
char* name_594=0;
_Bool err_595=0;
_Bool define_function_flag_596;
char* p_597;
int sline_598;
_Bool invalid_type_599;
void* __right_value557 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* result_type_600=0;
char* fun_name_601=0;
_Bool err_602=0;
char* word_603;
void* __right_value558 = (void*)0;
char* __dec_obj156;
void* __right_value559 = (void*)0;
char* __dec_obj157;
char* __dec_obj158;
void* __right_value560 = (void*)0;
char* __dec_obj159;
char* tail_604;
int pointer_num_605;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sType* __dec_obj160;
void* __right_value563 = (void*)0;
struct sNode* method_606;
struct sType* __dec_obj161;
void* __right_value567 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17 = (void*)0;
struct sType* base_type_610=0;
char* name_611=0;
_Bool err_612=0;
void* __right_value568 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var18 = (void*)0;
struct sType* type2_613=0;
char* name2_614=0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19 = (void*)0;
struct sType* type2_615=0;
char* name2_616=0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
char* module_name_617;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct list$1charph* params_618;
void* __right_value578 = (void*)0;
char* word_619;
void* __right_value579 = (void*)0;
char* __dec_obj165;
void* __right_value580 = (void*)0;
char* __dec_obj166;
void* __right_value581 = (void*)0;
_Bool _if_conditional10;
struct sNode* __result356__;
void* __right_value582 = (void*)0;
struct sClassModule* module_623;
void* __right_value583 = (void*)0;
void* __right_value589 = (void*)0;
struct map$2charphcharph* __dec_obj172;
int i_627;
struct list$1charph* o2_saved_628;
char* it_631;
void* __right_value590 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
char* __dec_obj173;
void* __right_value599 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var20 = (void*)0;
struct sType* type2_658=0;
char* name_659=0;
_Bool err_660=0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
char* __dec_obj174;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value612 = (void*)0;
struct sNode* __result380__;
void* __right_value613 = (void*)0;
struct sNode* __result381__;
struct_class_501 = (void*)0;
generics_class_512 = (void*)0;
struct_class_522 = (void*)0;
struct_class_560 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_498=head;
        struct_attribute_499=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_500=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional4=(((struct sClass*)(__right_value438=map$2charphsClassph_at(info->classes,type_name_500,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value438,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional4) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_500),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 554, "struct sClass*", (void*)0, (void*)0)),type_name_500,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                struct_class_501=((struct sClass*)(__right_value441=map$2charphsClassph_at(info->classes,type_name_500,((void*)0))));
                come_call_finalizer3(__right_value441,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 556, "struct sType*", (void*)0, (void*)0)),type_name_500,(_Bool)0,info));
                override__503=((struct sType*)(__right_value444=map$2charphsTypeph_at(info->types,type_name_500,((void*)0))));
                come_call_finalizer3(__right_value444,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__503) {
                    if(                    override__503->mTypedef) {
                        type_502->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_500),(struct sType*)come_increment_ref_count(type_502));
                come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                struct_class_501=((struct sClass*)(__right_value445=map$2charphsClassph_at(info->classes,type_name_500,((void*)0))));
                come_call_finalizer3(__right_value445,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_504=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 567, "struct sType*", (void*)0, (void*)0)),type_name_500,(_Bool)0,info));
                override__505=((struct sType*)(__right_value448=map$2charphsTypeph_at(info->types,type_name_500,((void*)0))));
                come_call_finalizer3(__right_value448,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__505) {
                    if(                    override__505->mTypedef) {
                        type_504->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_500),(struct sType*)come_increment_ref_count(type_504));
                come_call_finalizer3(type_504,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_506=info->p;
            header_507=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 579, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_507,source_head_498,source_tail_506-source_head_498);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value451=buffer_to_string(header_507))));
            __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 584, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value454=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 584, "struct sStructNobodyNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_500)),struct_class_501,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result335__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value459=_inf_value4));
            come_call_finalizer3(header_507,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_499 = come_decrement_ref_count2(struct_attribute_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_500 = come_decrement_ref_count2(type_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value454,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value459) { __right_value459 = come_decrement_ref_count2(__right_value459, ((struct sNode*)__right_value459)->finalize, ((struct sNode*)__right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result335__;
            come_call_finalizer3(header_507,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==60) {
            list$1charph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_511=(char*)come_increment_ref_count(parse_word(info));
                list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, T_511)));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    T_511 = come_decrement_ref_count2(T_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                T_511 = come_decrement_ref_count2(T_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional5=(((struct sClass*)(__right_value462=map$2charphsClassph_at(info->generics_classes,type_name_500,((void*)0))))!=((void*)0))),            come_call_finalizer3(__right_value462,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional5) {
                err_msg(info,"redifined generics struct(%s)",type_name_500);
                exit(2);
            }
            else {
                __dec_obj141=generics_class_512;
                generics_class_512=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 617, "struct sClass*", (void*)0, (void*)0)),type_name_500,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj141,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional6=(((struct sClass*)(__right_value465=map$2charphsClassph_at(info->generics_classes,type_name_500,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value465,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional6) {
                map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_500),(struct sClass*)come_increment_ref_count(generics_class_512));
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
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value466=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_513=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_514=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_515=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value466,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_515) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_512->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 645, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_514),(struct sType*)come_increment_ref_count(type2_513))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_516=(char*)come_increment_ref_count(parse_word(info));
                        type3_517=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_513));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_518=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_519=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_518;
                            __dec_obj142=type3_517->mSizeNum;
                            type3_517->mSizeNum=(struct sNode*)come_increment_ref_count(node_519);
                            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
                            if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        list$1tuple2$2charphsTypephph_push_back(generics_class_512->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 667, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_516),(struct sType*)come_increment_ref_count(type3_517))));
                        name2_516 = come_decrement_ref_count2(name2_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type3_517,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_512->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 671, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_514),(struct sType*)come_increment_ref_count(type2_513))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(type2_513,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_514 = come_decrement_ref_count2(name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer3(type2_513,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_514 = come_decrement_ref_count2(name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            ((struct tuple2$2charphcharph*)(__right_value476=parse_attribute(info,(_Bool)0)));
            come_call_finalizer3(__right_value476,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_reset(info->generics_type_names);
            source_tail_520=info->p;
            header_521=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 696, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(header_521,"struct ");
            buffer_append(header_521,source_head_498,source_tail_520-source_head_498);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value479=buffer_to_string(header_521))));
            __right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 702, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value481=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 702, "struct sNothingNode*", (void*)0, (void*)0)),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result337__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value482=_inf_value5));
            come_call_finalizer3(generics_class_512,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_499 = come_decrement_ref_count2(struct_attribute_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_500 = come_decrement_ref_count2(type_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value481,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value482) { __right_value482 = come_decrement_ref_count2(__right_value482, ((struct sNode*)__right_value482)->finalize, ((struct sNode*)__right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result337__;
            come_call_finalizer3(generics_class_512,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)(__right_value483=map$2charphsClassph_at(info->classes,type_name_500,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value483,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional7) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_500),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 707, "struct sClass*", (void*)0, (void*)0)),type_name_500,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                type_523=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 709, "struct sType*", (void*)0, (void*)0)),type_name_500,(_Bool)0,info));
                override__524=((struct sType*)(__right_value488=map$2charphsTypeph_at(info->types,type_name_500,((void*)0))));
                come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__524) {
                    if(                    override__524->mTypedef) {
                        type_523->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_500),(struct sType*)come_increment_ref_count(type_523));
                struct_class_522=((struct sClass*)(__right_value489=map$2charphsClassph_at(info->classes,type_name_500,((void*)0))));
                come_call_finalizer3(__right_value489,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_523,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                type_525=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 721, "struct sType*", (void*)0, (void*)0)),type_name_500,(_Bool)0,info));
                override__526=((struct sType*)(__right_value492=map$2charphsTypeph_at(info->types,type_name_500,((void*)0))));
                come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__526) {
                    if(                    override__526->mTypedef) {
                        type_525->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_500),(struct sType*)come_increment_ref_count(type_525));
                struct_class_522=((struct sClass*)(__right_value493=map$2charphsClassph_at(info->classes,type_name_500,((void*)0))));
                come_call_finalizer3(__right_value493,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            parent_class_527=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value494=parse_word(info)));
                __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_528=(char*)come_increment_ref_count(parse_word(info));
                parent_class_527=((struct sClass*)(__right_value496=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_528)));
                come_call_finalizer3(__right_value496,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                parent_class_527==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_528);
                    __result338__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    parent_class_name_528 = come_decrement_ref_count2(parent_class_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    struct_attribute_499 = come_decrement_ref_count2(struct_attribute_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_500 = come_decrement_ref_count2(type_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result338__;
                }
                parent_class_name_528 = come_decrement_ref_count2(parent_class_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                multiple_declare_529=(_Bool)0;
                {
                    p_530=info->p;
                    sline_531=info->sline;
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value497=backtrace_parse_type((_Bool)1,info)));
                    type_532=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_533=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_534=multiple_assign_var10->v3;
                    come_call_finalizer3(__right_value497,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_534&&*info->p==44) {
                        multiple_declare_529=(_Bool)1;
                    }
                    info->p=p_530;
                    info->sline=sline_531;
                    come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_533 = come_decrement_ref_count2(name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                multiple_declare_529) {
                    multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value498=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_535=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_536=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_537=multiple_assign_var11->v3;
                    come_call_finalizer3(__right_value498,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var12=((struct tuple2$2sTypephcharph*)(__right_value499=parse_variable_name((struct sType*)come_increment_ref_count(base_type_535),(_Bool)1,info)));
                    type2_538=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_539=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    come_call_finalizer3(__right_value499,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_522->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 778, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_539),(struct sType*)come_increment_ref_count(type2_538))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value502=parse_variable_name((struct sType*)come_increment_ref_count(base_type_535),(_Bool)0,info)));
                        type2_540=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_541=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer3(__right_value502,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_522->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 786, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_541),(struct sType*)come_increment_ref_count(type2_540))));
                        come_call_finalizer3(type2_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_541 = come_decrement_ref_count2(name2_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(base_type_535,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_536 = come_decrement_ref_count2(name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_538,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_539 = come_decrement_ref_count2(name2_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value505=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_542=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_543=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_544=multiple_assign_var14->v3;
                    come_call_finalizer3(__right_value505,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_544) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2charphsTypephph_push_back(struct_class_522->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 796, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_543),(struct sType*)come_increment_ref_count(type2_542))));
                    come_call_finalizer3(type2_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_543 = come_decrement_ref_count2(name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            struct_attribute2_545=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1charph_reset(info->generics_type_names);
            klass2_546=((struct sClass*)(__right_value509=map$2charphsClassph_at(info->classes,type_name_500,((void*)0))));
            come_call_finalizer3(__right_value509,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            source_tail_547=info->p;
            header_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 823, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_548,source_head_498,source_tail_547-source_head_498);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value512=buffer_to_string(header_548))));
            __right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            parent_class_527) {
                __dec_obj145=struct_class_522->mParentClassName;
                struct_class_522->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_527->mName));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_522->mName),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_522)));
            }
            if(            string_operator_equals(struct_attribute_499,"")&&string_operator_equals(struct_attribute2_545,"")) {
            }
            else if(            string_operator_equals(struct_attribute_499,"")) {
                __dec_obj146=struct_class_522->mAttribute;
                struct_class_522->mAttribute=(char*)come_increment_ref_count(struct_attribute2_545);
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_545,"")) {
                __dec_obj147=struct_class_522->mAttribute;
                struct_class_522->mAttribute=(char*)come_increment_ref_count(struct_attribute_499);
                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj148=struct_class_522->mAttribute;
                struct_class_522->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute_499,((char*)(__right_value515=charp_operator_add(" ",struct_attribute2_545)))));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 845, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value519=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 845, "struct sStructNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_500)),struct_class_522,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result339__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value520=_inf_value6));
            struct_attribute2_545 = come_decrement_ref_count2(struct_attribute2_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_499 = come_decrement_ref_count2(struct_attribute_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_500 = come_decrement_ref_count2(type_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value519,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value520) { __right_value520 = come_decrement_ref_count2(__right_value520, ((struct sNode*)__right_value520)->finalize, ((struct sNode*)__right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result339__;
            struct_attribute2_545 = come_decrement_ref_count2(struct_attribute2_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        struct_attribute_499 = come_decrement_ref_count2(struct_attribute_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_500 = come_decrement_ref_count2(type_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"class")) {
        source_head_549=head;
        type_name_550=(char*)come_increment_ref_count(parse_word(info));
        add_come_code_at_come_header(info,"struct %s;\n",type_name_550);
        parent_class_551=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value522=parse_word(info)));
            __right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parent_class_name_552=(char*)come_increment_ref_count(parse_word(info));
            parent_class_551=((struct sClass*)(__right_value524=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_552)));
            come_call_finalizer3(__right_value524,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_551==((void*)0)) {
                err_msg(info,"invalid class name(%s)",parent_class_name_552);
                __result340__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                parent_class_name_552 = come_decrement_ref_count2(parent_class_name_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name_550 = come_decrement_ref_count2(type_name_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result340__;
            }
            parent_class_name_552 = come_decrement_ref_count2(parent_class_name_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        parent_classes_553=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 869, "struct list$1sClassp*", (void*)0, (void*)0))));
        parent_class2_556=parent_class_551;
        while(parent_class2_556) {
            list$1sClassp_add(parent_classes_553,parent_class2_556);
            if(            parent_class_551->mParentClassName) {
                parent_class2_556=((struct sClass*)(__right_value530=map$2charphsClassphp_operator_load_element(info->classes,parent_class_551->mParentClassName)));
                come_call_finalizer3(__right_value530,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                parent_class2_556=((void*)0);
            }
        }
        if(        (_if_conditional8=(((struct sClass*)(__right_value531=map$2charphsClassph_at(info->classes,type_name_550,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value531,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional8) {
            __dec_obj149=struct_class_560;
            struct_class_560=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 884, "struct sClass*", (void*)0, (void*)0)),type_name_550,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj149,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj150=struct_class_560;
            struct_class_560=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, ((struct sClass*)(__right_value534=map$2charphsClassph_at(info->classes,type_name_550,((void*)0))))));
            come_call_finalizer3(__dec_obj150,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value534,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        defining_class_561=info->defining_class;
        info->defining_class=struct_class_560;
        if(        (_if_conditional9=(((struct sClass*)(__right_value536=map$2charphsClassph_at(info->classes,type_name_550,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value536,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            if(            parent_class_551) {
                __dec_obj151=struct_class_560->mParentClassName;
                struct_class_560->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_551->mName));
                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_550),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_560)));
            for(            o2_saved_567=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value544=list$1sClassp_reverse(parent_classes_553))))),parent_570=list$1sClassp_begin((o2_saved_567)) ,            come_call_finalizer3(__right_value544,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_567));            parent_570=list$1sClassp_next((o2_saved_567))            ){
                for(                o2_saved_573=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_570->mFields)),it_574=list$1tuple2$2charphsTypephph_begin((o2_saved_573));                !list$1tuple2$2charphsTypephph_end((o2_saved_573));                it_574=list$1tuple2$2charphsTypephph_next((o2_saved_573))                ){
                    list$1tuple2$2charphsTypephph_add(struct_class_560->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_574)));
                }
                come_call_finalizer3(o2_saved_573,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_567,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        (_elif_conditional2=(list$1tuple2$2charphsTypephph_length(((struct sClass*)(__right_value546=map$2charphsClassph_at(info->classes,type_name_550,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_560->mFields)>0)),        come_call_finalizer3(__right_value546,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _elif_conditional2) {
            klass2_575=((struct sClass*)(__right_value547=map$2charphsClassph_at(info->classes,type_name_550,((void*)0))));
            come_call_finalizer3(__right_value547,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_551) {
                __dec_obj152=klass2_575->mParentClassName;
                klass2_575->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_551->mName));
                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_550),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass2_575)));
            for(            o2_saved_576=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value550=list$1sClassp_reverse(parent_classes_553))))),parent_577=list$1sClassp_begin((o2_saved_576)) ,            come_call_finalizer3(__right_value550,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_576));            parent_577=list$1sClassp_next((o2_saved_576))            ){
                for(                o2_saved_578=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_577->mFields)),it_579=list$1tuple2$2charphsTypephph_begin((o2_saved_578));                !list$1tuple2$2charphsTypephph_end((o2_saved_578));                it_579=list$1tuple2$2charphsTypephph_next((o2_saved_578))                ){
                    list$1tuple2$2charphsTypephph_add(klass2_575->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_579)));
                }
                come_call_finalizer3(o2_saved_578,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_576,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_580=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_560->mFields)),it_581=list$1tuple2$2charphsTypephph_begin((o2_saved_580));            !list$1tuple2$2charphsTypephph_end((o2_saved_580));            it_581=list$1tuple2$2charphsTypephph_next((o2_saved_580))            ){
                list$1tuple2$2charphsTypephph_add(klass2_575->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_581)));
            }
            come_call_finalizer3(o2_saved_580,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        expected_next_character(123,info);
        head_582=info->p;
        p_saved_583=((void*)0);
        sline_saved_584=0;
        sname_saved_585=((void*)0);
        methods_586=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 931, "struct list$1sNodeph*", (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            p_saved_583) {
                if(                *info->p==0) {
                    info->p=p_saved_583;
                    info->sline=sline_saved_584;
                    __dec_obj153=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_585));
                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_583=((void*)0);
                    sline_saved_584=0;
                    __dec_obj154=sname_saved_585;
                    sname_saved_585=((void*)0);
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj155=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj155,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__589=parsecmp("include",info);
            multiple_declare_590=(_Bool)0;
            if(            include__589==(_Bool)0) {
                p_591=info->p;
                sline_592=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value556=backtrace_parse_type((_Bool)1,info)));
                    type_593=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_594=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_595=multiple_assign_var15->v3;
                    come_call_finalizer3(__right_value556,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_595&&*info->p==44) {
                        multiple_declare_590=(_Bool)1;
                    }
                    come_call_finalizer3(type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_594 = come_decrement_ref_count2(name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_591;
                info->sline=sline_592;
            }
            define_function_flag_596=(_Bool)0;
            if(            include__589==(_Bool)0) {
                p_597=info->p;
                sline_598=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_596=(_Bool)1;
                }
                else {
                    invalid_type_599=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value557=backtrace_parse_type((_Bool)0,info)));
                        result_type_600=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_601=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_602=multiple_assign_var16->v3;
                        come_call_finalizer3(__right_value557,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_601 = come_decrement_ref_count2(fun_name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    word_603=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj156=word_603;
                        word_603=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_603,"extern")) {
                            __dec_obj157=word_603;
                            word_603=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj158=word_603;
                        word_603=((void*)0);
                        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_603) {
                        if(                        is_type_name(word_603,info)) {
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
                                __dec_obj159=word_603;
                                word_603=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        if(                        strlen(word_603)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_596=(_Bool)1;
                        }
                    }
                    word_603 = come_decrement_ref_count2(word_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_597;
                info->sline=sline_598;
            }
            if(            define_function_flag_596) {
                tail_604=info->p;
                pointer_num_605=1;
                __dec_obj160=info->impl_type;
                info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1041, "struct sType*", (void*)0, (void*)0)),type_name_550,(_Bool)0,info));
                come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->impl_type->mPointerNum=pointer_num_605;
                info->in_class=(_Bool)1;
                method_606=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj161=info->impl_type;
                info->impl_type=((void*)0);
                come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNodeph_push_back(methods_586,(struct sNode*)come_increment_ref_count(method_606));
                if(method_606) { method_606 = come_decrement_ref_count2(method_606, ((struct sNode*)method_606)->finalize, ((struct sNode*)method_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            multiple_declare_590) {
                multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value567=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_610=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_611=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_612=multiple_assign_var17->v3;
                come_call_finalizer3(__right_value567,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var18=((struct tuple2$2sTypephcharph*)(__right_value568=parse_variable_name((struct sType*)come_increment_ref_count(base_type_610),(_Bool)1,info)));
                type2_613=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_614=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                come_call_finalizer3(__right_value568,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(struct_class_560->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1058, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_614),(struct sType*)come_increment_ref_count(type2_613))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value571=parse_variable_name((struct sType*)come_increment_ref_count(base_type_610),(_Bool)0,info)));
                    type2_615=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_616=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    come_call_finalizer3(__right_value571,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_560->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1066, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_616),(struct sType*)come_increment_ref_count(type2_615))));
                    come_call_finalizer3(type2_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_616 = come_decrement_ref_count2(name2_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(59,info);
                come_call_finalizer3(base_type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_611 = come_decrement_ref_count2(name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_613,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_614 = come_decrement_ref_count2(name2_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value574=parse_word(info)));
                __right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_617=(char*)come_increment_ref_count(parse_word(info));
                params_618=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1075, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_619=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_618,(char*)come_increment_ref_count(word_619));
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
                            word_619 = come_decrement_ref_count2(word_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_619 = come_decrement_ref_count2(word_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_583=info->p;
                sline_saved_584=info->sline;
                __dec_obj165=sname_saved_585;
                sname_saved_585=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj166=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_617));
                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional10=(((struct sClassModule*)(__right_value581=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_617)))==((void*)0))),                come_call_finalizer3(__right_value581,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional10) {
                    err_msg(info,"module not found");
                    __result356__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_617 = come_decrement_ref_count2(module_name_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_618,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_550 = come_decrement_ref_count2(type_name_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(parent_classes_553,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(struct_class_560,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    sname_saved_585 = come_decrement_ref_count2(sname_saved_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(methods_586,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result356__;
                }
                module_623=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value582=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_617))), "14struct.c", 1122, 3));
                come_call_finalizer3(__right_value582,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_623->mParams)!=list$1charph_length(params_618)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj172=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1129, "struct map$2charphcharph*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj172,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_627=0;
                for(                o2_saved_628=(struct list$1charph*)come_increment_ref_count((module_623->mParams)),it_631=list$1charph_begin((o2_saved_628));                !list$1charph_end((o2_saved_628));                it_631=list$1charph_next((o2_saved_628))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_631)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value596=list$1charphp_operator_load_element(params_618,i_627))), "14struct.c", 1133, 4)))));
                    __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_627++;
                }
                come_call_finalizer3(o2_saved_628,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_623->mText;
                info->sline=module_623->mSLine;
                __dec_obj173=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_623->mSName));
                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_617 = come_decrement_ref_count2(module_name_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_618,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(__right_value599=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_658=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_659=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_660=multiple_assign_var20->v3;
                come_call_finalizer3(__right_value599,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_660) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2charphsTypephph_push_back(struct_class_560->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1148, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_659),(struct sType*)come_increment_ref_count(type2_658))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer3(type2_658,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_659 = come_decrement_ref_count2(name_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_583) {
            if(            info->p==0) {
                info->p=p_saved_583;
                info->sline=sline_saved_584;
                __dec_obj174=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_585));
                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_583=((void*)0);
                sline_saved_584=0;
            }
        }
        list$1charph_reset(info->generics_type_names);
        info->defining_class=defining_class_561;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1181, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value606=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1181, "struct sClassNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_550)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_560)),(struct list$1sNodeph*)come_increment_ref_count(methods_586),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value612=_inf_value7));
        type_name_550 = come_decrement_ref_count2(type_name_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_553,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_560,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_585 = come_decrement_ref_count2(sname_saved_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_586,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value606,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value612) { __right_value612 = come_decrement_ref_count2(__right_value612, ((struct sNode*)__right_value612)->finalize, ((struct sNode*)__right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result380__;
        type_name_550 = come_decrement_ref_count2(type_name_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_553,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_560,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_585 = come_decrement_ref_count2(sname_saved_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_586,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value613=top_level_v97(buf,head,head_sline,info)));
    if(__right_value613) { __right_value613 = come_decrement_ref_count2(__right_value613, ((struct sNode*)__right_value613)->finalize, ((struct sNode*)__right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result333__;
void* __right_value455 = (void*)0;
struct sStructNobodyNode* result_508;
void* __right_value456 = (void*)0;
char* __dec_obj138;
void* __right_value457 = (void*)0;
char* __dec_obj139;
void* __right_value458 = (void*)0;
struct sClass* __dec_obj140;
struct sStructNobodyNode* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_508=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_508->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj138=result_508->sname;
        result_508->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_508->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj139=result_508->mName;
        result_508->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj140=result_508->mClass;
        result_508->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj140,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_508;
    come_call_finalizer3(result_508,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_509;
struct list_item$1charph* prev_it_510;
struct list$1charph* __result336__;
    it_509=self->head;
    while(it_509!=((void*)0)) {
        prev_it_510=it_509;
        it_509=it_509->next;
        come_call_finalizer3(prev_it_510,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj143;
char* __dec_obj144;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj143=self->v1;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj144=self->v2;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result341__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_554;
struct list_item$1sClassp* prev_it_555;
    it_554=self->head;
    while(it_554!=((void*)0)) {
        prev_it_555=it_554;
        it_554=it_554->next;
        come_call_finalizer3(prev_it_555,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value527 = (void*)0;
struct list_item$1sClassp* litem_557;
void* __right_value528 = (void*)0;
struct list_item$1sClassp* litem_558;
void* __right_value529 = (void*)0;
struct list_item$1sClassp* litem_559;
struct list$1sClassp* __result342__;
    if(    self->len==0) {
        litem_557=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value527=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1235, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_557->prev=((void*)0);
        litem_557->next=((void*)0);
        litem_557->item=item;
        self->tail=litem_557;
        self->head=litem_557;
    }
    else if(    self->len==1) {
        litem_558=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value528=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1245, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_558->prev=self->head;
        litem_558->next=((void*)0);
        litem_558->item=item;
        self->tail=litem_558;
        self->head->next=litem_558;
    }
    else {
        litem_559=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value529=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1255, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_559->prev=self->tail;
        litem_559->next=((void*)0);
        litem_559->item=item;
        self->tail->next=litem_559;
        self->tail=litem_559;
    }
    self->len++;
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1sClassp* result_562;
struct list_item$1sClassp* it_563;
struct list$1sClassp* __result344__;
    result_562=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./comelang.h", 1972, "struct list$1sClassp*", (void*)0, (void*)0))));
    it_563=self->tail;
    while(it_563!=((void*)0)) {
        list$1sClassp_push_back(result_562,it_563->item);
        it_563=it_563->prev;
    }
    __result344__ = gComeFunResultObject = __result_obj__ = result_562;
    come_call_finalizer3(result_562,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
struct list_item$1sClassp* litem_564;
void* __right_value542 = (void*)0;
struct list_item$1sClassp* litem_565;
void* __right_value543 = (void*)0;
struct list_item$1sClassp* litem_566;
struct list$1sClassp* __result343__;
    if(    self->len==0) {
        litem_564=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value541=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1305, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_564->prev=((void*)0);
        litem_564->next=((void*)0);
        litem_564->item=item;
        self->tail=litem_564;
        self->head=litem_564;
    }
    else if(    self->len==1) {
        litem_565=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value542=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1315, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_565->prev=self->head;
        litem_565->next=((void*)0);
        litem_565->item=item;
        self->tail=litem_565;
        self->head->next=litem_565;
    }
    else {
        litem_566=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value543=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1325, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_566->prev=self->tail;
        litem_566->next=((void*)0);
        litem_566->item=item;
        self->tail->next=litem_566;
        self->tail=litem_566;
    }
    self->len++;
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_568;
struct sClass* __result345__;
struct sClass* __result346__;
struct sClass* result_569;
struct sClass* __result347__;
result_568 = (void*)0;
result_569 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_568,0,sizeof(struct sClass*));
        __result345__ = gComeFunResultObject = __result_obj__ = result_568;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    self->it=self->head;
    if(    self->it) {
        __result346__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    memset(&result_569,0,sizeof(struct sClass*));
    __result347__ = gComeFunResultObject = __result_obj__ = result_569;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_571;
struct sClass* __result348__;
struct sClass* __result349__;
struct sClass* result_572;
struct sClass* __result350__;
result_571 = (void*)0;
result_572 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_571,0,sizeof(struct sClass*));
        __result348__ = gComeFunResultObject = __result_obj__ = result_571;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result349__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    memset(&result_572,0,sizeof(struct sClass*));
    __result350__ = gComeFunResultObject = __result_obj__ = result_572;
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_587;
int i_588;
    for(    i_587=0;    i_587<self->size;    i_587++    ){
        if(        self->item_existance[i_587]) {
            if(            1) {
                self->items[i_587] = come_decrement_ref_count2(self->items[i_587], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_588=0;    i_588<self->size;    i_588++    ){
        if(        self->item_existance[i_588]) {
            if(            1) {
                self->keys[i_588] = come_decrement_ref_count2(self->keys[i_588], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value564 = (void*)0;
struct list_item$1sNodeph* litem_607;
struct sNode* __dec_obj162;
void* __right_value565 = (void*)0;
struct list_item$1sNodeph* litem_608;
struct sNode* __dec_obj163;
void* __right_value566 = (void*)0;
struct list_item$1sNodeph* litem_609;
struct sNode* __dec_obj164;
struct list$1sNodeph* __result351__;
    if(    self->len==0) {
        litem_607=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value564=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1305, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_607->prev=((void*)0);
        litem_607->next=((void*)0);
        __dec_obj162=litem_607->item;
        litem_607->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_607;
        self->head=litem_607;
    }
    else if(    self->len==1) {
        litem_608=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value565=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1315, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_608->prev=self->head;
        litem_608->next=((void*)0);
        __dec_obj163=litem_608->item;
        litem_608->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_608;
        self->head->next=litem_608;
    }
    else {
        litem_609=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value566=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1325, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_609->prev=self->tail;
        litem_609->next=((void*)0);
        __dec_obj164=litem_609->item;
        litem_609->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_609;
        self->tail=litem_609;
    }
    self->len++;
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_620;
unsigned int hash_621;
unsigned int it_622;
struct sClassModule* __result352__;
struct sClassModule* __result353__;
struct sClassModule* __result354__;
struct sClassModule* __result355__;
default_value_620 = (void*)0;
    memset(&default_value_620,0,sizeof(struct sClassModule*));
    hash_621=charp_get_hash_key(((char*)key))%self->size;
    it_622=hash_621;
    while((_Bool)1) {
        if(        self->item_existance[it_622]) {
            if(            charp_equals(self->keys[it_622],key)) {
                __result352__ = gComeFunResultObject = __result_obj__ = self->items[it_622];
                come_call_finalizer3(default_value_620,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result352__;
            }
            it_622++;
            if(            it_622>=self->size) {
                it_622=0;
            }
            else if(            it_622==hash_621) {
                __result353__ = gComeFunResultObject = __result_obj__ = default_value_620;
                come_call_finalizer3(default_value_620,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result353__;
            }
        }
        else {
            __result354__ = gComeFunResultObject = __result_obj__ = default_value_620;
            come_call_finalizer3(default_value_620,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result354__;
        }
    }
    __result355__ = gComeFunResultObject = __result_obj__ = default_value_620;
    come_call_finalizer3(default_value_620,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj167;
char* __dec_obj168;
struct list$1charph* __dec_obj169;
char* __dec_obj170;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj167=self->mName;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj168=self->mText;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj169=self->mParams;
            come_call_finalizer3(__dec_obj169,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj170=self->mSName;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
int i_624;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct list$1charp* __dec_obj171;
struct map$2charphcharph* __result358__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value584=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2480, "char**", (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value585=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2481, "char**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value586=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2482, "_Bool*", (void*)0, (void*)0))));
    for(    i_624=0;    i_624<128;    i_624++    ){
        self->item_existance[i_624]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj171=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2492, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj171,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result358__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result357__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result357__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_625;
int i_626;
    for(    i_625=0;    i_625<self->size;    i_625++    ){
        if(        self->item_existance[i_625]) {
            if(            1) {
                self->items[i_625] = come_decrement_ref_count2(self->items[i_625], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_626=0;    i_626<self->size;    i_626++    ){
        if(        self->item_existance[i_626]) {
            if(            1) {
                self->keys[i_626] = come_decrement_ref_count2(self->keys[i_626], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_629;
char* __result359__;
char* __result360__;
char* result_630;
char* __result361__;
result_629 = (void*)0;
result_630 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_629,0,sizeof(char*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_629;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->it=self->head;
    if(    self->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_630,0,sizeof(char*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_630;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_632;
char* __result362__;
char* __result363__;
char* result_633;
char* __result364__;
result_632 = (void*)0;
result_633 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_632,0,sizeof(char*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_632;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_633,0,sizeof(char*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_633;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_651;
unsigned int it_652;
_Bool same_key_exist_653;
char* it2_654;
struct map$2charphcharph* __result375__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_651=charp_get_hash_key(key)%self->size;
    it_652=hash_651;
    while((_Bool)1) {
        if(        self->item_existance[it_652]) {
            if(            charp_equals(self->keys[it_652],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_652]);
                    self->keys[it_652] = come_decrement_ref_count2(self->keys[it_652], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_652]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_652]);
                    self->keys[it_652]=key;
                }
                if(                1) {
                    self->items[it_652] = come_decrement_ref_count2(self->items[it_652], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_652]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_652]=item;
                }
                break;
            }
            it_652++;
            if(            it_652>=self->size) {
                it_652=0;
            }
            else if(            it_652==hash_651) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_652]=(_Bool)1;
            if(            1) {
                self->keys[it_652]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_652]=key;
            }
            if(            1) {
                self->items[it_652]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_652]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_653=(_Bool)0;
    for(    it2_654=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_654=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_654,key)) {
            same_key_exist_653=(_Bool)1;
        }
    }
    if(    !same_key_exist_653) {
        list$1charp_push_back(self->key_list,key);
    }
    __result375__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_634;
void* __right_value591 = (void*)0;
char** keys_635;
void* __right_value592 = (void*)0;
char** items_636;
void* __right_value593 = (void*)0;
_Bool* item_existance_637;
int len_638;
char* it_641;
char* default_value_644;
void* __right_value594 = (void*)0;
char* it2_645;
unsigned int hash_648;
int n_649;
char* default_value_650;
void* __right_value595 = (void*)0;
default_value_644 = (void*)0;
default_value_650 = (void*)0;
    size_634=self->size*10;
    keys_635=(char**)come_increment_ref_count(((char**)(__right_value591=(char**)come_calloc(1, sizeof(char*)*(1*(size_634)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_636=(char**)come_increment_ref_count(((char**)(__right_value592=(char**)come_calloc(1, sizeof(char*)*(1*(size_634)), "./comelang.h", 2709, "char**", (void*)0, (void*)0))));
    item_existance_637=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value593=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_634)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_638=0;
    for(    it_641=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_641=map$2charphcharph_next(self)    ){
        memset(&default_value_644,0,sizeof(char*));
        it2_645=((char*)(__right_value594=map$2charphcharph_at(self,it_641,default_value_644)));
        __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_648=charp_get_hash_key(it_641)%size_634;
        n_649=hash_648;
        while((_Bool)1) {
            if(            item_existance_637[n_649]) {
                n_649++;
                if(                n_649>=size_634) {
                    n_649=0;
                }
                else if(                n_649==hash_648) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_637[n_649]=(_Bool)1;
                keys_635[n_649]=it_641;
                items_636[n_649]=((char*)(__right_value595=map$2charphcharph_at(self,it_641,default_value_650)));
                __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_638++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_635;
    self->items=items_636;
    self->item_existance=item_existance_637;
    self->size=size_634;
    self->len=len_638;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_639;
char* __result365__;
char* __result366__;
char* result_640;
char* __result367__;
result_639 = (void*)0;
result_640 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_639,0,sizeof(char*));
        __result365__ = gComeFunResultObject = __result_obj__ = result_639;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result366__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    memset(&result_640,0,sizeof(char*));
    __result367__ = gComeFunResultObject = __result_obj__ = result_640;
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_642;
char* __result368__;
char* __result369__;
char* result_643;
char* __result370__;
result_642 = (void*)0;
result_643 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_642,0,sizeof(char*));
        __result368__ = gComeFunResultObject = __result_obj__ = result_642;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result369__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    memset(&result_643,0,sizeof(char*));
    __result370__ = gComeFunResultObject = __result_obj__ = result_643;
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_646;
unsigned int it_647;
char* __result371__;
char* __result372__;
char* __result373__;
char* __result374__;
    hash_646=charp_get_hash_key(((char*)key))%self->size;
    it_647=hash_646;
    while((_Bool)1) {
        if(        self->item_existance[it_647]) {
            if(            charp_equals(self->keys[it_647],key)) {
                __result371__ = gComeFunResultObject = __result_obj__ = self->items[it_647];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result371__;
            }
            it_647++;
            if(            it_647>=self->size) {
                it_647=0;
            }
            else if(            it_647==hash_646) {
                __result372__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result372__;
            }
        }
        else {
            __result373__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result373__;
        }
    }
    __result374__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_655;
int i_656;
char* __result376__;
char* default_value_657;
char* __result377__;
default_value_657 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_655=self->head;
    i_656=0;
    while(it_655!=((void*)0)) {
        if(        position==i_656) {
            __result376__ = gComeFunResultObject = __result_obj__ = it_655->item;
            gComeFunResultObject = (void*)0;
            return __result376__;
        }
        it_655=it_655->next;
        i_656++;
    }
    memset(&default_value_657,0,sizeof(char*));
    __result377__ = gComeFunResultObject = __result_obj__ = default_value_657;
    default_value_657 = come_decrement_ref_count2(default_value_657, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result378__;
void* __right_value607 = (void*)0;
struct sClassNode* result_661;
void* __right_value608 = (void*)0;
char* __dec_obj175;
void* __right_value609 = (void*)0;
char* __dec_obj176;
void* __right_value610 = (void*)0;
struct sClass* __dec_obj177;
void* __right_value611 = (void*)0;
struct list$1sNodeph* __dec_obj178;
struct sClassNode* __result379__;
    if(    self==(void*)0) {
        __result378__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    result_661=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_661->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_661->sname;
        result_661->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_661->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj176=result_661->mName;
        result_661->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj177=result_661->mClass;
        result_661->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj177,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj178=result_661->mMethods;
        result_661->mMethods=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mMethods));
        come_call_finalizer3(__dec_obj178,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result379__ = gComeFunResultObject = __result_obj__ = result_661;
    come_call_finalizer3(result_661,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_662;
char* p_663;
int sline_664;
void* __right_value614 = (void*)0;
char* type_name_665;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
char* struct_attribute_666;
void* __right_value619 = (void*)0;
char* type_name_667;
void* __right_value620 = (void*)0;
struct sNode* __result382__;
void* __right_value621 = (void*)0;
struct sNode* __result383__;
    define_struct_662=(_Bool)0;
    {
        p_663=info->p;
        sline_664=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_665=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value615=parse_word(info)));
                    __right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value616=parse_word(info)));
                    __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==123) {
                    ((char*)(__right_value617=skip_block(info)));
                    __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        define_struct_662=(_Bool)1;
                    }
                }
                type_name_665 = come_decrement_ref_count2(type_name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_663;
        info->sline=sline_664;
    }
    if(    define_struct_662) {
        struct_attribute_666=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_667=(char*)come_increment_ref_count(parse_word(info));
        __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value620=parse_struct((char*)come_increment_ref_count(type_name_667),(char*)come_increment_ref_count(struct_attribute_666),info)));
        struct_attribute_666 = come_decrement_ref_count2(struct_attribute_666, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_667 = come_decrement_ref_count2(type_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value620) { __right_value620 = come_decrement_ref_count2(__right_value620, ((struct sNode*)__right_value620)->finalize, ((struct sNode*)__right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result382__;
        struct_attribute_666 = come_decrement_ref_count2(struct_attribute_666, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_667 = come_decrement_ref_count2(type_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value621=string_node_v13(buf,head,head_sline,info)));
    if(__right_value621) { __right_value621 = come_decrement_ref_count2(__right_value621, ((struct sNode*)__right_value621)->finalize, ((struct sNode*)__right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result383__;
}

