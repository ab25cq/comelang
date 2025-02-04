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
struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
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
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
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
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sCurrentNode* __result219__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string(self->sname)));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sCurrentNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value252 = (void*)0;
char* class_name_290;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sClass* current_stack_291;
struct sVarTable* vtable_292;
struct map$2charphsVarph* o2_saved_293;
char* it_296;
char* key_299;
void* __right_value255 = (void*)0;
struct sVar* value_300;
void* __right_value296 = (void*)0;
struct sType* type2_314;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct tuple2$2charphsTypeph* item_333;
void* __right_value300 = (void*)0;
struct sType* type3_334;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct tuple2$2charphsTypeph* item2_337;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct map$2charphsVarph* o2_saved_389;
char* it_390;
char* key_391;
void* __right_value317 = (void*)0;
struct sVar* value_392;
void* __right_value318 = (void*)0;
struct sType* type2_393;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct tuple2$2charphsTypeph* item_394;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value323 = (void*)0;
char* __dec_obj104;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sType* __dec_obj105;
_Bool __result276__;
    info->current_stack_num++;
    class_name_290=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_291=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 461, "struct sClass*", (void*)0, (void*)0)),class_name_290,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_292=info->lv_table;
    while(vtable_292) {
        for(        o2_saved_293=(struct map$2charphsVarph*)come_increment_ref_count((vtable_292->mVars)),it_296=map$2charphsVarph_begin((o2_saved_293));        !map$2charphsVarph_end((o2_saved_293));        it_296=map$2charphsVarph_next((o2_saved_293))        ){
            key_299=it_296;
            value_300=((struct sVar*)(__right_value255=map$2charphsVarphp_operator_load_element(vtable_292->mVars,key_299)));
            come_call_finalizer3(__right_value255,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_314=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_300->mType));
            type2_314->mPointerNum++;
            item_333=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 474, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_300->mCValueName)),(struct sType*)come_increment_ref_count(type2_314)));
            if(            value_300->mCValueName!=((void*)0)) {
                if(                strcmp(value_300->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_300->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_300->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_300->mType->mClass->mName,"va_list")||string_operator_equals(value_300->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_314->mArrayNum)==1) {
                    type3_334=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_314));
                    list$1sNodeph_reset(type3_334->mArrayNum);
                    type3_334->mPointerNum=1;
                    type3_334->mOriginIsArray=(_Bool)1;
                    item2_337=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 494, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_300->mCValueName)),(struct sType*)come_increment_ref_count(type3_334)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_291->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item2_337)));
                    value_300->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_334,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_337,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_291->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item_333)));
                }
            }
            come_call_finalizer3(type2_314,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_333,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_293,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_292=vtable_292->mParent;
    }
    output_struct(current_stack_291,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_290),(struct sClass*)come_increment_ref_count(current_stack_291));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_290,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_290);
    vtable_292=info->lv_table;
    while(vtable_292) {
        for(        o2_saved_389=(struct map$2charphsVarph*)come_increment_ref_count((vtable_292->mVars)),it_390=map$2charphsVarph_begin((o2_saved_389));        !map$2charphsVarph_end((o2_saved_389));        it_390=map$2charphsVarph_next((o2_saved_389))        ){
            key_391=it_390;
            value_392=((struct sVar*)(__right_value317=map$2charphsVarphp_operator_load_element(vtable_292->mVars,key_391)));
            come_call_finalizer3(__right_value317,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_393=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_392->mType));
            item_394=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 523, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(value_392->mCValueName),(struct sType*)come_increment_ref_count(type2_393)));
            if(            value_392->mCValueName!=((void*)0)) {
                if(                strcmp(value_392->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_392->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_392->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_392->mType->mClass->mName,"va_list")||string_operator_equals(value_392->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_393->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_393,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_394,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_389,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_292=vtable_292->mParent;
    }
    come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 552, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj104=come_value_395->c_value;
    come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj105=come_value_395->type;
    come_value_395->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 555, "struct sType*", (void*)0, (void*)0)),class_name_290,(_Bool)0,info));
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_395->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_395->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
    __result276__ = (_Bool)1;
    class_name_290 = come_decrement_ref_count2(class_name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_291,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result276__;
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

static void sCurrentNode_finalize(struct sCurrentNode* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_294;
char* __result222__;
char* __result223__;
char* result_295;
char* __result224__;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_294,0,sizeof(char*));
        __result222__ = gComeFunResultObject = __result_obj__ = result_294;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result223__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    memset(&result_295,0,sizeof(char*));
    __result224__ = gComeFunResultObject = __result_obj__ = result_295;
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_297;
char* __result225__;
char* __result226__;
char* result_298;
char* __result227__;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_297,0,sizeof(char*));
        __result225__ = gComeFunResultObject = __result_obj__ = result_297;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result226__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    memset(&result_298,0,sizeof(char*));
    __result227__ = gComeFunResultObject = __result_obj__ = result_298;
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_301;
unsigned int hash_302;
unsigned int it_303;
struct sVar* __result228__;
struct sVar* __result229__;
struct sVar* __result230__;
struct sVar* __result231__;
default_value_301 = (void*)0;
    memset(&default_value_301,0,sizeof(struct sVar*));
    hash_302=charp_get_hash_key(((char*)key))%self->size;
    it_303=hash_302;
    while((_Bool)1) {
        if(        self->item_existance[it_303]) {
            if(            charp_equals(self->keys[it_303],key)) {
                __result228__ = gComeFunResultObject = __result_obj__ = self->items[it_303];
                come_call_finalizer3(default_value_301,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result228__;
            }
            it_303++;
            if(            it_303>=self->size) {
                it_303=0;
            }
            else if(            it_303==hash_302) {
                __result229__ = gComeFunResultObject = __result_obj__ = default_value_301;
                come_call_finalizer3(default_value_301,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
        }
        else {
            __result230__ = gComeFunResultObject = __result_obj__ = default_value_301;
            come_call_finalizer3(default_value_301,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result230__;
        }
    }
    __result231__ = gComeFunResultObject = __result_obj__ = default_value_301;
    come_call_finalizer3(default_value_301,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj33;
char* __dec_obj34;
struct sType* __dec_obj35;
char* __dec_obj57;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj33=self->mName;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj34=self->mCValueName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj35=self->mType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj57=self->mFunName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj36;
struct tuple1$1sTypeph* __dec_obj38;
struct tuple1$1sTypeph* __dec_obj39;
struct sType* __dec_obj40;
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
            __dec_obj36=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj38=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj38,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj40=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj37;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj37=self->v1;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_304;
struct list_item$1sTypeph* prev_it_305;
    it_304=self->head;
    while(it_304!=((void*)0)) {
        prev_it_305=it_304;
        it_304=it_304->next;
        come_call_finalizer3(prev_it_305,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_306;
struct list_item$1sTypeph* prev_it_307;
    it_306=self->head;
    while(it_306!=((void*)0)) {
        prev_it_307=it_306;
        it_306=it_306->next;
        come_call_finalizer3(prev_it_307,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_308;
struct list_item$1sNodeph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        come_call_finalizer3(prev_it_309,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_310;
struct list_item$1sNodeph* prev_it_311;
    it_310=self->head;
    while(it_310!=((void*)0)) {
        prev_it_311=it_310;
        it_310=it_310->next;
        come_call_finalizer3(prev_it_311,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_312;
struct list_item$1charph* prev_it_313;
    it_312=self->head;
    while(it_312!=((void*)0)) {
        prev_it_313=it_312;
        it_312=it_312->next;
        come_call_finalizer3(prev_it_313,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result232__;
void* __right_value256 = (void*)0;
struct sType* result_315;
void* __right_value259 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value260 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value261 = (void*)0;
struct tuple1$1sTypeph* __dec_obj62;
void* __right_value262 = (void*)0;
struct sType* __dec_obj63;
void* __right_value263 = (void*)0;
char* __dec_obj64;
void* __right_value264 = (void*)0;
char* __dec_obj65;
void* __right_value271 = (void*)0;
struct list$1sTypeph* __dec_obj69;
void* __right_value279 = (void*)0;
struct list$1sNodeph* __dec_obj73;
void* __right_value280 = (void*)0;
struct list$1sTypeph* __dec_obj74;
void* __right_value287 = (void*)0;
struct list$1charph* __dec_obj78;
void* __right_value288 = (void*)0;
struct tuple1$1sTypeph* __dec_obj79;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* __dec_obj81;
void* __right_value291 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value292 = (void*)0;
char* __dec_obj83;
void* __right_value293 = (void*)0;
char* __dec_obj84;
void* __right_value294 = (void*)0;
char* __dec_obj85;
void* __right_value295 = (void*)0;
char* __dec_obj86;
struct sType* __result248__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_315=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_315->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_315->mNoSolvedGenericsType;
        result_315->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_315->mOriginalLoadVarType;
        result_315->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj62=result_315->mRefferenceOriginalType;
        result_315->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj63=result_315->mAnyOriginalType;
        result_315->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj64=result_315->mInterfaceName;
        result_315->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj65=result_315->mGenericsName;
        result_315->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj69=result_315->mGenericsTypes;
        result_315->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj73=result_315->mArrayNum;
        result_315->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj73,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj74=result_315->mParamTypes;
        result_315->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj74,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj78=result_315->mParamNames;
        result_315->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj78,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj79=result_315->mResultType;
        result_315->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj79,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj80=result_315->mAlignas;
        result_315->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj81=result_315->mChannelType;
        result_315->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj81,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_315->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_315->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_315->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_315->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_315->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_315->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_315->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_315->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_315->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_315->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_315->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_315->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_315->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_315->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_315->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_315->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_315->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_315->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_315->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_315->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_315->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_315->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_315->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_315->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_315->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj82=result_315->mSizeNum;
        result_315->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_315->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj83=result_315->mOriginalTypeName;
        result_315->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_315->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_315->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_315->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_315->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_315->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_315->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_315->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj84=result_315->mAsmName;
        result_315->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_315->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_315->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_315->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_315->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_315->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj85=result_315->mTupleName;
        result_315->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj86=result_315->mAttribute;
        result_315->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_315;
    come_call_finalizer3(result_315,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result233__;
void* __right_value257 = (void*)0;
struct tuple1$1sTypeph* result_316;
void* __right_value258 = (void*)0;
struct sType* __dec_obj58;
struct tuple1$1sTypeph* __result234__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_316=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj58=result_316->v1;
        result_316->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_316;
    come_call_finalizer3(result_316,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj59;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj59=self->v1;
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result235__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sTypeph* result_317;
struct list_item$1sTypeph* it_318;
void* __right_value270 = (void*)0;
struct list$1sTypeph* __result238__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_317=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_318=self->head;
    while(it_318!=((void*)0)) {
        list$1sTypeph_add(result_317,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_318->item)));
        it_318=it_318->next;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_317;
    come_call_finalizer3(result_317,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result236__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sTypeph* litem_319;
struct sType* __dec_obj66;
void* __right_value268 = (void*)0;
struct list_item$1sTypeph* litem_320;
struct sType* __dec_obj67;
void* __right_value269 = (void*)0;
struct list_item$1sTypeph* litem_321;
struct sType* __dec_obj68;
struct list$1sTypeph* __result237__;
    if(    self->len==0) {
        litem_319=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value267=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_319->prev=((void*)0);
        litem_319->next=((void*)0);
        __dec_obj66=litem_319->item;
        litem_319->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_319;
        self->head=litem_319;
    }
    else if(    self->len==1) {
        litem_320=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value268=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_320->prev=self->head;
        litem_320->next=((void*)0);
        __dec_obj67=litem_320->item;
        litem_320->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_320;
        self->head->next=litem_320;
    }
    else {
        litem_321=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value269=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_321->prev=self->tail;
        litem_321->next=((void*)0);
        __dec_obj68=litem_321->item;
        litem_321->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_321;
        self->tail=litem_321;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result239__;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1sNodeph* result_322;
struct list_item$1sNodeph* it_323;
void* __right_value278 = (void*)0;
struct list$1sNodeph* __result244__;
    if(    self==((void*)0)) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_322=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_323=self->head;
    while(it_323!=((void*)0)) {
        list$1sNodeph_add(result_322,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_323->item)));
        it_323=it_323->next;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_322;
    come_call_finalizer3(result_322,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
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

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_324;
struct sNode* __dec_obj70;
void* __right_value275 = (void*)0;
struct list_item$1sNodeph* litem_325;
struct sNode* __dec_obj71;
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_326;
struct sNode* __dec_obj72;
struct list$1sNodeph* __result241__;
    if(    self->len==0) {
        litem_324=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_324->prev=((void*)0);
        litem_324->next=((void*)0);
        __dec_obj70=litem_324->item;
        litem_324->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_324;
        self->head=litem_324;
    }
    else if(    self->len==1) {
        litem_325=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value275=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_325->prev=self->head;
        litem_325->next=((void*)0);
        __dec_obj71=litem_325->item;
        litem_325->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_325;
        self->head->next=litem_325;
    }
    else {
        litem_326=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_326->prev=self->tail;
        litem_326->next=((void*)0);
        __dec_obj72=litem_326->item;
        litem_326->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_326;
        self->tail=litem_326;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result242__;
void* __right_value277 = (void*)0;
struct sNode* result_327;
struct sNode* __result243__;
    if(    self==(void*)0) {
        __result242__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_327=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_327->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_327->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_327->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_327->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_327->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_327->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_327->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_327->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_327->kind=self->kind;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_327;
    if(result_327) { result_327 = come_decrement_ref_count2(result_327, ((struct sNode*)result_327)->finalize, ((struct sNode*)result_327)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result245__;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* result_328;
struct list_item$1charph* it_329;
void* __right_value286 = (void*)0;
struct list$1charph* __result247__;
    if(    self==((void*)0)) {
        __result245__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    result_328=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_329=self->head;
    while(it_329!=((void*)0)) {
        list$1charph_add(result_328,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_329->item)));
        it_329=it_329->next;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_328;
    come_call_finalizer3(result_328,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_330;
char* __dec_obj75;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_331;
char* __dec_obj76;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_332;
char* __dec_obj77;
struct list$1charph* __result246__;
    if(    self->len==0) {
        litem_330=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_330->prev=((void*)0);
        litem_330->next=((void*)0);
        __dec_obj75=litem_330->item;
        litem_330->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_330;
        self->head=litem_330;
    }
    else if(    self->len==1) {
        litem_331=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_331->prev=self->head;
        litem_331->next=((void*)0);
        __dec_obj76=litem_331->item;
        litem_331->item=(char*)come_increment_ref_count(item);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_331;
        self->head->next=litem_331;
    }
    else {
        litem_332=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_332->prev=self->tail;
        litem_332->next=((void*)0);
        __dec_obj77=litem_332->item;
        litem_332->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_332;
        self->tail=litem_332;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj87;
struct sType* __dec_obj88;
struct tuple2$2charphsTypeph* __result249__;
    __dec_obj87=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj88=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj89;
struct sType* __dec_obj90;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj89=self->v1;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj90=self->v2;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_335;
struct list_item$1sNodeph* prev_it_336;
struct list$1sNodeph* __result250__;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        come_call_finalizer3(prev_it_336,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_338;
struct tuple2$2charphsTypeph* __dec_obj91;
void* __right_value305 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_339;
struct tuple2$2charphsTypeph* __dec_obj92;
void* __right_value306 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_340;
struct tuple2$2charphsTypeph* __dec_obj93;
struct list$1tuple2$2charphsTypephph* __result251__;
    if(    self->len==0) {
        litem_338=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value304=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1290, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_338->prev=((void*)0);
        litem_338->next=((void*)0);
        __dec_obj91=litem_338->item;
        litem_338->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_338;
        self->head=litem_338;
    }
    else if(    self->len==1) {
        litem_339=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value305=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1300, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_339->prev=self->head;
        litem_339->next=((void*)0);
        __dec_obj92=litem_339->item;
        litem_339->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_339;
        self->head->next=litem_339;
    }
    else {
        litem_340=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value306=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1310, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_340->prev=self->tail;
        litem_340->next=((void*)0);
        __dec_obj93=litem_340->item;
        litem_340->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_340;
        self->tail=litem_340;
    }
    self->len++;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result252__;
void* __right_value307 = (void*)0;
struct tuple2$2charphsTypeph* result_341;
void* __right_value308 = (void*)0;
char* __dec_obj94;
void* __right_value309 = (void*)0;
struct sType* __dec_obj95;
struct tuple2$2charphsTypeph* __result253__;
    if(    self==(void*)0) {
        __result252__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    result_341=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj94=result_341->v1;
        result_341->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj95=result_341->v2;
        result_341->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result253__ = gComeFunResultObject = __result_obj__ = result_341;
    come_call_finalizer3(result_341,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj96;
struct sType* __dec_obj97;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj96=self->v1;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj97=self->v2;
            come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_342;
int i_343;
    for(    i_342=0;    i_342<self->size;    i_342++    ){
        if(        self->item_existance[i_342]) {
            if(            1) {
                come_call_finalizer3(self->items[i_342],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_343=0;    i_343<self->size;    i_343++    ){
        if(        self->item_existance[i_343]) {
            if(            1) {
                self->keys[i_343] = come_decrement_ref_count2(self->keys[i_343], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_365;
unsigned int it_366;
_Bool same_key_exist_383;
char* it2_386;
struct map$2charphsClassph* __result274__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_365=charp_get_hash_key(key)%self->size;
    it_366=hash_365;
    while((_Bool)1) {
        if(        self->item_existance[it_366]) {
            if(            charp_equals(self->keys[it_366],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_366]);
                    self->keys[it_366] = come_decrement_ref_count2(self->keys[it_366], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_366]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_366]);
                    self->keys[it_366]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_366],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_366]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_366]=item;
                }
                break;
            }
            it_366++;
            if(            it_366>=self->size) {
                it_366=0;
            }
            else if(            it_366==hash_365) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_366]=(_Bool)1;
            if(            1) {
                self->keys[it_366]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_366]=key;
            }
            if(            1) {
                self->items[it_366]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_366]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_383=(_Bool)0;
    for(    it2_386=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_386=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_386,key)) {
            same_key_exist_383=(_Bool)1;
        }
    }
    if(    !same_key_exist_383) {
        list$1charp_push_back(self->key_list,key);
    }
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_344;
void* __right_value312 = (void*)0;
char** keys_345;
void* __right_value313 = (void*)0;
struct sClass** items_346;
void* __right_value314 = (void*)0;
_Bool* item_existance_347;
int len_348;
char* it_351;
struct sClass* default_value_354;
void* __right_value315 = (void*)0;
struct sClass* it2_355;
unsigned int hash_362;
int n_363;
struct sClass* default_value_364;
void* __right_value316 = (void*)0;
default_value_354 = (void*)0;
default_value_364 = (void*)0;
    size_344=self->size*10;
    keys_345=(char**)come_increment_ref_count(((char**)(__right_value312=(char**)come_calloc(1, sizeof(char*)*(1*(size_344)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_346=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value313=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_344)), "./comelang.h", 2694, "struct sClass**", (void*)0, (void*)0))));
    item_existance_347=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value314=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_344)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_348=0;
    for(    it_351=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_351=map$2charphsClassph_next(self)    ){
        memset(&default_value_354,0,sizeof(struct sClass*));
        it2_355=((struct sClass*)(__right_value315=map$2charphsClassph_at(self,it_351,default_value_354)));
        come_call_finalizer3(__right_value315,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_362=charp_get_hash_key(it_351)%size_344;
        n_363=hash_362;
        while((_Bool)1) {
            if(            item_existance_347[n_363]) {
                n_363++;
                if(                n_363>=size_344) {
                    n_363=0;
                }
                else if(                n_363==hash_362) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_347[n_363]=(_Bool)1;
                keys_345[n_363]=it_351;
                items_346[n_363]=((struct sClass*)(__right_value316=map$2charphsClassph_at(self,it_351,default_value_364)));
                come_call_finalizer3(__right_value316,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_348++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_345;
    self->items=items_346;
    self->item_existance=item_existance_347;
    self->size=size_344;
    self->len=len_348;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_349;
char* __result254__;
char* __result255__;
char* result_350;
char* __result256__;
result_349 = (void*)0;
result_350 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_349,0,sizeof(char*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_349;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_350,0,sizeof(char*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_350;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_352;
char* __result257__;
char* __result258__;
char* result_353;
char* __result259__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_352,0,sizeof(char*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_353,0,sizeof(char*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_356;
unsigned int it_357;
struct sClass* __result260__;
struct sClass* __result261__;
struct sClass* __result262__;
struct sClass* __result263__;
    hash_356=charp_get_hash_key(((char*)key))%self->size;
    it_357=hash_356;
    while((_Bool)1) {
        if(        self->item_existance[it_357]) {
            if(            charp_equals(self->keys[it_357],key)) {
                __result260__ = gComeFunResultObject = __result_obj__ = self->items[it_357];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
            it_357++;
            if(            it_357>=self->size) {
                it_357=0;
            }
            else if(            it_357==hash_356) {
                __result261__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result261__;
            }
        }
        else {
            __result262__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result262__;
        }
    }
    __result263__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj98;
struct list$1tuple2$2charphsTypephph* __dec_obj99;
char* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj98=self->mName;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj99=self->mFields;
            come_call_finalizer3(__dec_obj99,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj101=self->mDeclareSName;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj102=self->mParentClassName;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj103=self->mAttribute;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_358;
struct list_item$1tuple2$2charphsTypephph* prev_it_359;
    it_358=self->head;
    while(it_358!=((void*)0)) {
        prev_it_359=it_358;
        it_358=it_358->next;
        come_call_finalizer3(prev_it_359,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj100;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj100=self->item;
            come_call_finalizer3(__dec_obj100,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_360;
struct list_item$1tuple2$2charphsTypephph* prev_it_361;
    it_360=self->head;
    while(it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        come_call_finalizer3(prev_it_361,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_367;
struct list_item$1charp* it_368;
struct list$1charp* __result267__;
    it2_367=0;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        if(        charp_equals(it_368->item,item)) {
            list$1charp_delete(self,it2_367,it2_367+1);
            break;
        }
        it2_367++;
        it_368=it_368->next;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_369;
struct list$1charp* __result264__;
struct list_item$1charp* it_372;
int i_373;
struct list_item$1charp* prev_it_374;
struct list_item$1charp* it_375;
int i_376;
struct list_item$1charp* prev_it_377;
struct list_item$1charp* it_378;
struct list_item$1charp* head_prev_it_379;
struct list_item$1charp* tail_it_380;
int i_381;
struct list_item$1charp* prev_it_382;
struct list$1charp* __result266__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_369=tail;
        tail=head;
        head=tmp_369;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result264__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_372=self->head;
        i_373=0;
        while(it_372!=((void*)0)) {
            if(            i_373<tail) {
                prev_it_374=it_372;
                it_372=it_372->next;
                i_373++;
                come_call_finalizer3(prev_it_374,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_373==tail) {
                self->head=it_372;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_372=it_372->next;
                i_373++;
            }
        }
    }
    else if(    tail==self->len) {
        it_375=self->head;
        i_376=0;
        while(it_375!=((void*)0)) {
            if(            i_376==head) {
                self->tail=it_375->prev;
                self->tail->next=((void*)0);
            }
            if(            i_376>=head) {
                prev_it_377=it_375;
                it_375=it_375->next;
                i_376++;
                come_call_finalizer3(prev_it_377,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_375=it_375->next;
                i_376++;
            }
        }
    }
    else {
        it_378=self->head;
        head_prev_it_379=((void*)0);
        tail_it_380=((void*)0);
        i_381=0;
        while(it_378!=((void*)0)) {
            if(            i_381==head) {
                head_prev_it_379=it_378->prev;
            }
            if(            i_381==tail) {
                tail_it_380=it_378;
            }
            if(            i_381>=head&&i_381<tail) {
                prev_it_382=it_378;
                it_378=it_378->next;
                i_381++;
                come_call_finalizer3(prev_it_382,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_378=it_378->next;
                i_381++;
            }
        }
        if(        head_prev_it_379!=((void*)0)) {
            head_prev_it_379->next=tail_it_380;
        }
        if(        tail_it_380!=((void*)0)) {
            tail_it_380->prev=head_prev_it_379;
        }
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_370;
struct list_item$1charp* prev_it_371;
struct list$1charp* __result265__;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_384;
char* __result268__;
char* __result269__;
char* result_385;
char* __result270__;
result_384 = (void*)0;
result_385 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_384,0,sizeof(char*));
        __result268__ = gComeFunResultObject = __result_obj__ = result_384;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    self->it=self->head;
    if(    self->it) {
        __result269__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    memset(&result_385,0,sizeof(char*));
    __result270__ = gComeFunResultObject = __result_obj__ = result_385;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_387;
char* __result271__;
char* __result272__;
char* result_388;
char* __result273__;
result_387 = (void*)0;
result_388 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_387,0,sizeof(char*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_387;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_388,0,sizeof(char*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_388;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value326 = (void*)0;
struct list_item$1CVALUEph* litem_396;
struct CVALUE* __dec_obj106;
void* __right_value327 = (void*)0;
struct list_item$1CVALUEph* litem_397;
struct CVALUE* __dec_obj111;
void* __right_value328 = (void*)0;
struct list_item$1CVALUEph* litem_398;
struct CVALUE* __dec_obj112;
struct list$1CVALUEph* __result275__;
    if(    self->len==0) {
        litem_396=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value326=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_396->prev=((void*)0);
        litem_396->next=((void*)0);
        __dec_obj106=litem_396->item;
        litem_396->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_396;
        self->head=litem_396;
    }
    else if(    self->len==1) {
        litem_397=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value327=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_397->prev=self->head;
        litem_397->next=((void*)0);
        __dec_obj111=litem_397->item;
        litem_397->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_397;
        self->head->next=litem_397;
    }
    else {
        litem_398=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value328=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_398->prev=self->tail;
        litem_398->next=((void*)0);
        __dec_obj112=litem_398->item;
        litem_398->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_398;
        self->tail=litem_398;
    }
    self->len++;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj107;
struct sType* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj107=self->c_value;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj108=self->type;
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj109=self->c_value_without_right_value_objects;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj110=self->c_value_without_cast_object_value;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
char* none_generics_name_399;
void* __right_value330 = (void*)0;
char* fun_name2_400;
void* __right_value331 = (void*)0;
char* fun_name3_401;
void* __right_value332 = (void*)0;
struct sGenericsFun* generics_fun_402;
void* __right_value333 = (void*)0;
_Bool _if_conditional1;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result282__;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result284__;
    none_generics_name_399=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_400=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_401=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_399,fun_name));
    generics_fun_402=((struct sGenericsFun*)(__right_value332=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_401,((void*)0))));
    come_call_finalizer3(__right_value332,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_402) {
        if(        (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_400)),generics_fun_402,type,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_401);
            __result282__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value336=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 23, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            none_generics_name_399 = come_decrement_ref_count2(none_generics_name_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_400 = come_decrement_ref_count2(fun_name2_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_401 = come_decrement_ref_count2(fun_name3_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value336,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result282__;
        }
    }
    __result284__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value339=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp*)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 27, "struct tuple2$2charphsGenericsFunp", (void*)0, (void*)0)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_400)),generics_fun_402)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    none_generics_name_399 = come_decrement_ref_count2(none_generics_name_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_400 = come_decrement_ref_count2(fun_name2_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_401 = come_decrement_ref_count2(fun_name3_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value339,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_403;
unsigned int it_404;
struct sGenericsFun* __result277__;
struct sGenericsFun* __result278__;
struct sGenericsFun* __result279__;
struct sGenericsFun* __result280__;
    hash_403=charp_get_hash_key(((char*)key))%self->size;
    it_404=hash_403;
    while((_Bool)1) {
        if(        self->item_existance[it_404]) {
            if(            charp_equals(self->keys[it_404],key)) {
                __result277__ = gComeFunResultObject = __result_obj__ = self->items[it_404];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result277__;
            }
            it_404++;
            if(            it_404>=self->size) {
                it_404=0;
            }
            else if(            it_404==hash_403) {
                __result278__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result278__;
            }
        }
        else {
            __result279__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result279__;
        }
    }
    __result280__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj113;
struct list$1charph* __dec_obj114;
struct list$1charph* __dec_obj115;
char* __dec_obj116;
struct sType* __dec_obj117;
struct list$1sTypeph* __dec_obj118;
struct list$1charph* __dec_obj119;
struct list$1charph* __dec_obj120;
char* __dec_obj121;
char* __dec_obj122;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj113=self->mImplType;
            come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj114=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj114,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj115=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj116=self->mName;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj117=self->mResultType;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj118=self->mParamTypes;
            come_call_finalizer3(__dec_obj118,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj119=self->mParamNames;
            come_call_finalizer3(__dec_obj119,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj120=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj121=self->mBlock;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj122=self->mGenericsSName;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj123;
struct tuple2$2charphvoidp* __result281__;
    __dec_obj123=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj124;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj124=self->v1;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2){
void* __result_obj__=(void*)0;
char* __dec_obj125;
struct tuple2$2charphsGenericsFunp* __result283__;
    __dec_obj125=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsGenericsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj126;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj126=self->v1;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
char* fun_name3_406;
struct list$1sTypeph* method_generics_types_before_407;
struct list$1sTypeph* __dec_obj127;
void* __right_value341 = (void*)0;
struct sGenericsFun* generics_fun_408;
void* __right_value342 = (void*)0;
_Bool _if_conditional2;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result285__;
struct list$1sTypeph* __dec_obj128;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result286__;
    static int num_method_generics_405=0;
    fun_name3_406=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_405++));
    method_generics_types_before_407=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj127=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj127,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_408=((struct sGenericsFun*)(__right_value341=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value341,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_408) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_406)),generics_fun_408,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_406);
            __result285__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value345=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 43, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_406 = come_decrement_ref_count2(fun_name3_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_407,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value345,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result285__;
        }
    }
    __dec_obj128=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_407);
    come_call_finalizer3(__dec_obj128,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result286__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value348=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp*)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 49, "struct tuple2$2charphsGenericsFunp", (void*)0, (void*)0)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_406)),generics_fun_408)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_406 = come_decrement_ref_count2(fun_name3_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_407,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value348,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value353 = (void*)0;
struct sNode* current_stack_frame_node_409;
_Bool Value_411;
_Bool __result289__;
void* __right_value354 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct buffer* method_block2_415;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sType* method_block_type_416;
void* __right_value359 = (void*)0;
char* class_name_420;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sClass* current_stack_frame_struct_424;
void* __right_value362 = (void*)0;
_Bool __result296__;
void* __right_value363 = (void*)0;
struct sType* result_type_425;
struct list$1sTypeph* param_types_426;
struct list$1charph* param_names_427;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct buffer* all_alhabet_sname_428;
char* p_429;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
int i_430;
struct list$1sTypeph* o2_saved_431;
struct sType* it_434;
struct sType* param_type_437;
void* __right_value368 = (void*)0;
char* param_name_438;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
char* param_name_439;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
char* param_name_440;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct buffer* source3_441;
char* p_442;
char* head_443;
int sline_444;
struct buffer* __dec_obj131;
void* __right_value375 = (void*)0;
struct sNode* node_445;
_Bool Value_446;
_Bool __result303__;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
char* method_block_name_447;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct CVALUE* come_value2_448;
void* __right_value380 = (void*)0;
struct sFun* fun2_449;
_Bool __result308__;
struct sType* method_block_type2_452;
void* __right_value381 = (void*)0;
char* __dec_obj149;
void* __right_value382 = (void*)0;
struct sType* __dec_obj150;
struct buffer* __dec_obj151;
void* __right_value383 = (void*)0;
struct sType* __dec_obj152;
_Bool contained_method_generics_method_block_453;
struct list$1sTypeph* o2_saved_454;
struct sType* it_455;
_Bool __result310__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 54, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value350=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 54, "struct sCurrentNode*", (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_409=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value350,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_411=node_compile(current_stack_frame_node_409,info);
    if(    !Value_411) {
        __result289__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_409) { current_stack_frame_node_409 = come_decrement_ref_count2(current_stack_frame_node_409, ((struct sNode*)current_stack_frame_node_409)->finalize, ((struct sNode*)current_stack_frame_node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result289__;
    }
    else {
    }
    come_value_414=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_414));
    dec_stack_ptr(1,info);
    method_block2_415=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 64, "struct buffer*", (void*)0, (void*)0))));
    method_block_type_416=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value357=list$1sTypephp_operator_load_element(fun->mParamTypes,-1)))));
    come_call_finalizer3(__right_value357,sType_finalize, 0, 1, 0, 0, (void*)0);
    class_name_420=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value360=list$1sTypephp_operator_load_element(method_block_type_416->mParamTypes,0)))->mClass=((struct sClass*)(__right_value361=map$2charphsClassphp_operator_load_element(info->classes,class_name_420)));
    come_call_finalizer3(__right_value360,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value361,sClass_finalize, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_424=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value362=map$2charphsClassphp_operator_load_element(info->classes,class_name_420)));
    come_call_finalizer3(__right_value362,sClass_finalize, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_416->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result296__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_409) { current_stack_frame_node_409 = come_decrement_ref_count2(current_stack_frame_node_409, ((struct sNode*)current_stack_frame_node_409)->finalize, ((struct sNode*)current_stack_frame_node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_415,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_416,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_420 = come_decrement_ref_count2(class_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result296__;
    }
    result_type_425=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_416->mResultType->v1));
    result_type_425->mStatic=(_Bool)0;
    param_types_426=method_block_type_416->mParamTypes;
    param_names_427=method_block_type_416->mParamNames;
    all_alhabet_sname_428=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 85, "struct buffer*", (void*)0, (void*)0))));
    {
        p_429=info->sname;
        while(*p_429) {
            if(            xisalnum(*p_429)) {
                buffer_append_char(all_alhabet_sname_428,*p_429++);
            }
            else {
                p_429++;
            }
        }
    }
    buffer_append_format(method_block2_415,"%s method_block%d_%s(",((char*)(__right_value366=make_type_name_string(result_type_425,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value367=buffer_to_string(all_alhabet_sname_428))));
    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_430=0;
    for(    o2_saved_431=(param_types_426),it_434=list$1sTypeph_begin((o2_saved_431));    !list$1sTypeph_end((o2_saved_431));    it_434=list$1sTypeph_next((o2_saved_431))    ){
        param_type_437=it_434;
        if(        i_430==0) {
            param_name_438=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_415,"%s",((char*)(__right_value369=make_define_var(param_type_437,param_name_438,(_Bool)0,info))));
            __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_438 = come_decrement_ref_count2(param_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        i_430==1) {
            param_name_439=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_415,"%s",((char*)(__right_value371=make_define_var_no_solved(param_type_437,param_name_439,(_Bool)0,(_Bool)0,info))));
            __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_439 = come_decrement_ref_count2(param_name_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            param_name_440=(char*)come_increment_ref_count(xsprintf("it%d",i_430));
            buffer_append_format(method_block2_415,"%s",((char*)(__right_value373=make_define_var_no_solved(param_type_437,param_name_440,(_Bool)0,(_Bool)0,info))));
            __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_440 = come_decrement_ref_count2(param_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_430!=list$1sTypeph_length(param_types_426)-1) {
            buffer_append_str(method_block2_415,",");
        }
        i_430++;
    }
    buffer_append_str(method_block2_415,")\n");
    buffer_append_str(method_block2_415,((char*)(__right_value374=buffer_to_string(method_block))));
    __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_441=(struct buffer*)come_increment_ref_count(info->source);
    p_442=info->p;
    head_443=info->head;
    sline_444=info->sline;
    __dec_obj131=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_415);
    come_call_finalizer3(__dec_obj131,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_445=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_446=node_compile(node_445,info);
    if(    !Value_446) {
        __result303__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_409) { current_stack_frame_node_409 = come_decrement_ref_count2(current_stack_frame_node_409, ((struct sNode*)current_stack_frame_node_409)->finalize, ((struct sNode*)current_stack_frame_node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_415,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_416,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_420 = come_decrement_ref_count2(class_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_428,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_441,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_445) { node_445 = come_decrement_ref_count2(node_445, ((struct sNode*)node_445)->finalize, ((struct sNode*)node_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result303__;
    }
    else {
    }
    method_block_name_447=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value376=buffer_to_string(all_alhabet_sname_428)))));
    __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 150, "struct CVALUE*", (void*)0, (void*)0))));
    fun2_449=((struct sFun*)(__right_value380=map$2charphsFunph_at(info->funcs,method_block_name_447,((void*)0))));
    come_call_finalizer3(__right_value380,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun2_449==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_447);
        __result308__ = (_Bool)1;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_409) { current_stack_frame_node_409 = come_decrement_ref_count2(current_stack_frame_node_409, ((struct sNode*)current_stack_frame_node_409)->finalize, ((struct sNode*)current_stack_frame_node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_415,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_416,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_420 = come_decrement_ref_count2(class_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_428,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_441,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_445) { node_445 = come_decrement_ref_count2(node_445, ((struct sNode*)node_445)->finalize, ((struct sNode*)node_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_447 = come_decrement_ref_count2(method_block_name_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result308__;
    }
    method_block_type2_452=fun2_449->mLambdaType;
    __dec_obj149=come_value2_448->c_value;
    come_value2_448->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_447));
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj150=come_value2_448->type;
    come_value2_448->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_452));
    come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_448->var=((void*)0);
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_448));
    __dec_obj151=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_441);
    come_call_finalizer3(__dec_obj151,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_442;
    info->head=head_443;
    info->sline=sline_444;
    info->current_stack_frame_struct=current_stack_frame_struct_424;
    __dec_obj152=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_453=(_Bool)0;
    for(    o2_saved_454=(param_types_426),it_455=list$1sTypeph_begin((o2_saved_454));    !list$1sTypeph_end((o2_saved_454));    it_455=list$1sTypeph_next((o2_saved_454))    ){
        if(        is_contained_method_generics_types(it_455,info)) {
            contained_method_generics_method_block_453=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_425,info)) {
        contained_method_generics_method_block_453=(_Bool)1;
    }
    if(    contained_method_generics_method_block_453) {
        map$2charphsFunph_remove(info->funcs,method_block_name_447);
    }
    __result310__ = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_409) { current_stack_frame_node_409 = come_decrement_ref_count2(current_stack_frame_node_409, ((struct sNode*)current_stack_frame_node_409)->finalize, ((struct sNode*)current_stack_frame_node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_415,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_416,sType_finalize, 0, 0, 0, 0, (void*)0);
    class_name_420 = come_decrement_ref_count2(class_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_428,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_441,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_445) { node_445 = come_decrement_ref_count2(node_445, ((struct sNode*)node_445)->finalize, ((struct sNode*)node_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
    method_block_name_447 = come_decrement_ref_count2(method_block_name_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result310__;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result287__;
void* __right_value351 = (void*)0;
struct sCurrentNode* result_410;
void* __right_value352 = (void*)0;
char* __dec_obj129;
struct sCurrentNode* __result288__;
    if(    self==(void*)0) {
        __result287__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    result_410=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_410->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj129=result_410->sname;
        result_410->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_410->sline_real=self->sline_real;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_410;
    come_call_finalizer3(result_410,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_412;
struct list_item$1CVALUEph* prev_it_413;
    it_412=self->head;
    while(it_412!=((void*)0)) {
        prev_it_413=it_412;
        it_412=it_412->next;
        come_call_finalizer3(prev_it_413,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj130;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj130=self->item;
            come_call_finalizer3(__dec_obj130,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_417;
int i_418;
struct sType* __result290__;
struct sType* default_value_419;
struct sType* __result291__;
default_value_419 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_417=self->head;
    i_418=0;
    while(it_417!=((void*)0)) {
        if(        position==i_418) {
            __result290__ = gComeFunResultObject = __result_obj__ = it_417->item;
            gComeFunResultObject = (void*)0;
            return __result290__;
        }
        it_417=it_417->next;
        i_418++;
    }
    memset(&default_value_419,0,sizeof(struct sType*));
    __result291__ = gComeFunResultObject = __result_obj__ = default_value_419;
    come_call_finalizer3(default_value_419,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_421;
unsigned int hash_422;
unsigned int it_423;
struct sClass* __result292__;
struct sClass* __result293__;
struct sClass* __result294__;
struct sClass* __result295__;
default_value_421 = (void*)0;
    memset(&default_value_421,0,sizeof(struct sClass*));
    hash_422=charp_get_hash_key(((char*)key))%self->size;
    it_423=hash_422;
    while((_Bool)1) {
        if(        self->item_existance[it_423]) {
            if(            charp_equals(self->keys[it_423],key)) {
                __result292__ = gComeFunResultObject = __result_obj__ = self->items[it_423];
                come_call_finalizer3(default_value_421,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result292__;
            }
            it_423++;
            if(            it_423>=self->size) {
                it_423=0;
            }
            else if(            it_423==hash_422) {
                __result293__ = gComeFunResultObject = __result_obj__ = default_value_421;
                come_call_finalizer3(default_value_421,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
        }
        else {
            __result294__ = gComeFunResultObject = __result_obj__ = default_value_421;
            come_call_finalizer3(default_value_421,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result294__;
        }
    }
    __result295__ = gComeFunResultObject = __result_obj__ = default_value_421;
    come_call_finalizer3(default_value_421,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_432;
struct sType* __result297__;
struct sType* __result298__;
struct sType* result_433;
struct sType* __result299__;
result_432 = (void*)0;
result_433 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_432,0,sizeof(struct sType*));
        __result297__ = gComeFunResultObject = __result_obj__ = result_432;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    self->it=self->head;
    if(    self->it) {
        __result298__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    memset(&result_433,0,sizeof(struct sType*));
    __result299__ = gComeFunResultObject = __result_obj__ = result_433;
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_435;
struct sType* __result300__;
struct sType* __result301__;
struct sType* result_436;
struct sType* __result302__;
result_435 = (void*)0;
result_436 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_435,0,sizeof(struct sType*));
        __result300__ = gComeFunResultObject = __result_obj__ = result_435;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result301__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    memset(&result_436,0,sizeof(struct sType*));
    __result302__ = gComeFunResultObject = __result_obj__ = result_436;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_450;
unsigned int it_451;
struct sFun* __result304__;
struct sFun* __result305__;
struct sFun* __result306__;
struct sFun* __result307__;
    hash_450=charp_get_hash_key(((char*)key))%self->size;
    it_451=hash_450;
    while((_Bool)1) {
        if(        self->item_existance[it_451]) {
            if(            charp_equals(self->keys[it_451],key)) {
                __result304__ = gComeFunResultObject = __result_obj__ = self->items[it_451];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result304__;
            }
            it_451++;
            if(            it_451>=self->size) {
                it_451=0;
            }
            else if(            it_451==hash_450) {
                __result305__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result305__;
            }
        }
        else {
            __result306__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result306__;
        }
    }
    __result307__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj132;
struct sType* __dec_obj133;
struct list$1sTypeph* __dec_obj134;
struct list$1charph* __dec_obj135;
struct list$1charph* __dec_obj136;
struct sType* __dec_obj137;
struct sBlock* __dec_obj138;
struct buffer* __dec_obj141;
struct buffer* __dec_obj142;
struct buffer* __dec_obj143;
struct buffer* __dec_obj144;
char* __dec_obj145;
char* __dec_obj146;
char* __dec_obj147;
char* __dec_obj148;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj132=self->mName;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj133=self->mResultType;
            come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj134=self->mParamTypes;
            come_call_finalizer3(__dec_obj134,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj135=self->mParamNames;
            come_call_finalizer3(__dec_obj135,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj136=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj136,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj137=self->mLambdaType;
            come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj138=self->mBlock;
            come_call_finalizer3(__dec_obj138,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj141=self->mSource;
            come_call_finalizer3(__dec_obj141,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj142=self->mSourceHead;
            come_call_finalizer3(__dec_obj142,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj143=self->mSourceHead2;
            come_call_finalizer3(__dec_obj143,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj144=self->mSourceDefer;
            come_call_finalizer3(__dec_obj144,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj145=self->mComeHeader;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj146=self->mDeclareSName;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj147=self->mAttribute;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj148=self->mFunAttribute;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj139;
struct sVarTable* __dec_obj140;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj139=self->mNodes;
            come_call_finalizer3(__dec_obj139,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj140=self->mVarTable;
            come_call_finalizer3(__dec_obj140,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_456;
unsigned int it_457;
struct map$2charphsFunph* __result309__;
    hash_456=charp_get_hash_key(((char*)key))%self->size;
    it_457=hash_456;
    while((_Bool)1) {
        if(        self->item_existance[it_457]) {
            if(            charp_equals(self->keys[it_457],key)) {
                list$1charp_remove(self->key_list,self->keys[it_457]);
                self->item_existance[it_457]=(_Bool)0;
                if(                1) {
                    self->keys[it_457] = come_decrement_ref_count2(self->keys[it_457], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_457]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_457],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_457]=((void*)0);
                self->len--;
                break;
            }
            it_457++;
            if(            it_457>=self->size) {
                it_457=0;
            }
            else if(            it_457==hash_456) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result309__;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sNode* __dec_obj153;
void* __right_value386 = (void*)0;
char* __dec_obj154;
void* __right_value396 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj165;
void* __right_value397 = (void*)0;
struct buffer* __dec_obj166;
void* __right_value398 = (void*)0;
struct list$1sTypeph* __dec_obj167;
struct sMethodCallNode* __result317__;
    ((struct sNodeBase*)(__right_value384=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value384,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj153=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj154=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj165=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj165,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj166=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    come_call_finalizer3(__dec_obj166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj167=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, method_generics_types));
    come_call_finalizer3(__dec_obj167,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value399=__builtin_string("sMethodCallNode")));
    __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_468;
struct list$1tuple2$2charphsNodephph* params_469;
struct sNode* obj_470;
struct buffer* method_block_471;
int method_block_sline_472;
_Bool no_infference_method_generics_473;
struct list$1sTypeph* method_generics_types_474;
_Bool recursive_475;
struct list$1sTypeph* method_generics_types_before_476;
struct list$1sTypeph* __dec_obj174;
void* __right_value400 = (void*)0;
struct list$1sTypeph* __dec_obj175;
_Bool Value_477;
_Bool __result319__;
void* __right_value401 = (void*)0;
struct CVALUE* obj_value_478;
void* __right_value402 = (void*)0;
struct sType* obj_type_479;
_Bool no_output_come_code_480;
struct sType* type_481;
void* __right_value403 = (void*)0;
char* none_generics_name_482;
void* __right_value404 = (void*)0;
char* fun_name2_483;
void* __right_value405 = (void*)0;
char* fun_name3_484;
void* __right_value406 = (void*)0;
struct sGenericsFun* generics_fun_485;
_Bool method_generics_486;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var1 = (void*)0;
char* name_487=0;
struct sGenericsFun* gfun_488=0;
char* generics_fun_name_489;
void* __right_value409 = (void*)0;
struct sFun* fun_490;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1CVALUEph* come_params_491;
_Bool no_output_come_code_492;
_Bool __result321__;
void* __right_value412 = (void*)0;
struct CVALUE* method_block_node_493;
void* __right_value413 = (void*)0;
struct sType* method_block_lambda_type_497;
void* __right_value414 = (void*)0;
struct sType* method_block_result_type_498;
void* __right_value415 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_499;
struct sType* generics_fun_method_block_result_type_500;
int method_generics_num_501;
void* __right_value419 = (void*)0;
int n_510;
struct list$1sTypeph* o2_saved_511;
struct sType* it_512;
int method_generics_num_513;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1CVALUEph* come_params_514;
int i_515;
struct list$1tuple2$2charphsNodephph* o2_saved_516;
struct tuple2$2charphsNodeph* it_519;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_522=0;
struct sNode* node_523=0;
_Bool Value_524;
_Bool __result333__;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_525;
int method_generics_num_526;
void* __right_value425 = (void*)0;
struct list$1sTypeph* o2_saved_527;
struct sType* it_528;
int method_generics_num_529;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct list$1CVALUEph* come_params_530;
int i_531;
struct list$1tuple2$2charphsNodephph* o2_saved_532;
struct tuple2$2charphsNodeph* it_533;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_534=0;
struct sNode* node_535=0;
_Bool Value_536;
_Bool __result334__;
void* __right_value430 = (void*)0;
struct CVALUE* come_value_537;
int method_generics_num_538;
void* __right_value431 = (void*)0;
int n_539;
struct list$1sTypeph* o2_saved_540;
struct sType* it_541;
int method_generics_num_542;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sClass* klass_543;
_Bool calling_dynamic_method_544;
struct sType* lambda_type_545;
struct list$1tuple2$2charphsTypephph* o2_saved_546;
struct tuple2$2charphsTypeph* it_549;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* field_name_552=0;
struct sType* field_type_553=0;
void* __right_value434 = (void*)0;
struct sType* result_type_554;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1CVALUEph* come_params_555;
int i_556;
struct list$1tuple2$2charphsNodephph* o2_saved_557;
struct tuple2$2charphsNodeph* it_558;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_559=0;
struct sNode* node_560=0;
_Bool Value_561;
_Bool __result341__;
void* __right_value437 = (void*)0;
struct CVALUE* come_value_562;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
_Bool _if_conditional3;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct buffer* buf_563;
int j_564;
struct list$1CVALUEph* o2_saved_565;
struct CVALUE* it_568;
void* __right_value446 = (void*)0;
char* __dec_obj180;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct CVALUE* come_value2_571;
void* __right_value449 = (void*)0;
char* __dec_obj181;
void* __right_value450 = (void*)0;
struct sType* result_type2_572;
void* __right_value451 = (void*)0;
struct sType* __dec_obj182;
struct list$1sTypeph* __dec_obj183;
struct sGenericsFun* generics_fun_573;
char* generics_fun_name_574;
struct sFun* fun_575;
void* __right_value452 = (void*)0;
char* __dec_obj184;
struct sClass* klass_576;
void* __right_value453 = (void*)0;
_Bool _while_condtional1;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* __dec_obj185;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var6 = (void*)0;
char* name_577=0;
struct sGenericsFun* gfun_578=0;
char* __dec_obj186;
void* __right_value459 = (void*)0;
char* none_generics_name_579;
void* __right_value460 = (void*)0;
char* fun_name3_580;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var7 = (void*)0;
char* name_581=0;
struct sGenericsFun* gfun_582=0;
char* __dec_obj187;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var8 = (void*)0;
char* name_583=0;
struct sGenericsFun* gfun_584=0;
char* __dec_obj188;
int i_585;
void* __right_value465 = (void*)0;
char* new_fun_name_586;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
char* __dec_obj189;
struct sType* obj_array_type_590;
void* __right_value468 = (void*)0;
char* array_method_name_591;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
char* __dec_obj190;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* __dec_obj191;
void* __right_value474 = (void*)0;
_Bool __result352__;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* __dec_obj192;
void* __right_value478 = (void*)0;
struct sClass* klass_592;
void* __right_value479 = (void*)0;
_Bool _while_condtional2;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
char* __dec_obj193;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var9 = (void*)0;
struct sFun* fun2_593=0;
char* real_fun_name_594=0;
char* __dec_obj195;
void* __right_value484 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10 = (void*)0;
struct sFun* fun2_595=0;
char* real_fun_name_596=0;
char* __dec_obj196;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
char* original_obj_type_fun_name_597;
void* __right_value487 = (void*)0;
char* __dec_obj197;
_Bool __result353__;
_Bool __result354__;
_Bool __result355__;
void* __right_value488 = (void*)0;
struct sType* result_type_598;
void* __right_value489 = (void*)0;
struct sType* result_type2_599;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1sTypeph* param_types_600;
struct list$1sTypeph* o2_saved_601;
struct sType* it_602;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* it2_603;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct list$1CVALUEph* come_params_604;
int i_605;
_Bool first_param_609;
struct list$1tuple2$2charphsNodephph* o2_saved_610;
struct tuple2$2charphsNodeph* it_611;
struct tuple2$2charphsNodeph* multiple_assign_var11 = (void*)0;
char* label_612=0;
struct sNode* node_613=0;
int n_614;
struct list$1charph* o2_saved_615;
char* it_618;
_Bool is_inner_calling__621;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
_Bool _if_conditional4;
_Bool Value_622;
_Bool __result363__;
void* __right_value504 = (void*)0;
struct CVALUE* come_value_623;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* inf_type_624;
void* __right_value507 = (void*)0;
struct sNode* node2_625;
_Bool Value_626;
_Bool __result364__;
_Bool Value_627;
_Bool __result365__;
_Bool Value_628;
_Bool __result366__;
void* __right_value508 = (void*)0;
struct CVALUE* come_value_629;
void* __right_value509 = (void*)0;
_Bool _if_conditional5;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
_Bool _if_conditional6;
void* __right_value516 = (void*)0;
int i_635;
struct list$1tuple2$2charphsNodephph* o2_saved_636;
struct tuple2$2charphsNodeph* it_637;
struct tuple2$2charphsNodeph* multiple_assign_var12 = (void*)0;
char* label_638=0;
struct sNode* node_639=0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
_Bool _if_conditional7;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
_Bool _elif_conditional1;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
_Bool _if_conditional8;
_Bool is_inner_calling__643;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
_Bool _if_conditional9;
_Bool Value_644;
_Bool __result371__;
void* __right_value530 = (void*)0;
struct CVALUE* come_value_645;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* inf_type_646;
void* __right_value533 = (void*)0;
struct sNode* node2_647;
_Bool Value_648;
_Bool __result372__;
_Bool Value_649;
_Bool __result373__;
_Bool Value_650;
_Bool __result374__;
void* __right_value534 = (void*)0;
struct CVALUE* come_value_651;
void* __right_value535 = (void*)0;
_Bool _if_conditional10;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
_Bool _if_conditional11;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
_Bool _if_conditional12;
struct sType* obj_array_type_652;
void* __right_value544 = (void*)0;
char* array_method_name_653;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct buffer* buf_654;
int i_655;
struct list$1sNodeph* o2_saved_656;
struct sNode* it_659;
_Bool Value_662;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_663;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct CVALUE* come_value_664;
void* __right_value550 = (void*)0;
char* __dec_obj202;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sType* __dec_obj203;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct buffer* buf_668;
int i_669;
struct list$1sNodeph* o2_saved_670;
struct sNode* it_671;
_Bool Value_672;
void* __right_value561 = (void*)0;
struct CVALUE* come_value_673;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct CVALUE* come_value_674;
void* __right_value564 = (void*)0;
char* __dec_obj207;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* __dec_obj208;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct buffer* buf_675;
int i_676;
struct list$1sNodeph* o2_saved_677;
struct sNode* it_678;
_Bool Value_679;
void* __right_value572 = (void*)0;
struct CVALUE* come_value_680;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct CVALUE* come_value_681;
void* __right_value575 = (void*)0;
char* __dec_obj209;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sType* __dec_obj210;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct buffer* buf_682;
int i_683;
struct list$1sNodeph* o2_saved_684;
struct sNode* it_685;
_Bool Value_686;
void* __right_value583 = (void*)0;
struct CVALUE* come_value_687;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct CVALUE* come_value_688;
void* __right_value586 = (void*)0;
char* __dec_obj211;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* __dec_obj212;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct buffer* buf_689;
int i_690;
struct list$1sNodeph* o2_saved_691;
struct sNode* it_692;
_Bool Value_693;
void* __right_value594 = (void*)0;
struct CVALUE* come_value_694;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct CVALUE* come_value_695;
void* __right_value597 = (void*)0;
char* __dec_obj213;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sType* __dec_obj214;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
char* default_param_696;
void* __right_value605 = (void*)0;
char* param_name_697;
void* __right_value606 = (void*)0;
_Bool _if_conditional13;
struct buffer* source_698;
char* p_699;
char* head_700;
int sline_701;
void* __right_value607 = (void*)0;
struct buffer* __dec_obj215;
void* __right_value608 = (void*)0;
struct sNode* node_702;
_Bool Value_703;
_Bool __result382__;
struct buffer* __dec_obj216;
void* __right_value609 = (void*)0;
struct CVALUE* come_value_704;
void* __right_value610 = (void*)0;
_Bool _if_conditional14;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
_Bool _if_conditional15;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
_Bool _if_conditional16;
_Bool __result383__;
_Bool __result384__;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct buffer* buf_705;
int j_706;
struct list$1CVALUEph* o2_saved_707;
struct CVALUE* it_708;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct CVALUE* come_value2_709;
void* __right_value623 = (void*)0;
char* __dec_obj217;
int generics_num_710;
void* __right_value624 = (void*)0;
struct sType* refference_type_711;
void* __right_value625 = (void*)0;
struct sType* __dec_obj218;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
char* __dec_obj219;
struct sType* __dec_obj220;
void* __right_value636 = (void*)0;
struct tuple1$1sTypeph* __dec_obj221;
void* __right_value637 = (void*)0;
struct sType* __dec_obj222;
struct sType* obj_type2_713;
void* __right_value638 = (void*)0;
struct sType* __dec_obj223;
void* __right_value639 = (void*)0;
struct sType* __dec_obj224;
void* __right_value640 = (void*)0;
struct sType* __dec_obj225;
void* __right_value641 = (void*)0;
char* __dec_obj226;
void* __right_value642 = (void*)0;
struct CVALUE* __dec_obj227;
struct list$1sTypeph* __dec_obj228;
_Bool __result385__;
    fun_name_468=(char*)come_increment_ref_count(self->fun_name);
    params_469=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_470=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_471=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_472=self->method_block_sline;
    no_infference_method_generics_473=self->no_infference_method_generics;
    method_generics_types_474=(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types);
    recursive_475=self->recursive;
    method_generics_types_before_476=((void*)0);
    __dec_obj174=method_generics_types_before_476;
    method_generics_types_before_476=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj174,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj175=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj175,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    Value_477=node_compile(obj_470,info);
    if(    !Value_477) {
        __result319__ = (_Bool)0;
        fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result319__;
    }
    else {
    }
    obj_value_478=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    obj_type_479=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_478->type));
    if(    !no_infference_method_generics_473) {
        no_output_come_code_480=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_481=(struct sType*)come_increment_ref_count(obj_type_479);
        none_generics_name_482=(char*)come_increment_ref_count(get_none_generics_name(type_481->mClass->mName));
        fun_name2_483=(char*)come_increment_ref_count(create_method_name(type_481,(_Bool)0,fun_name_468,info,(_Bool)1));
        fun_name3_484=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_482,fun_name_468));
        generics_fun_485=((struct sGenericsFun*)(__right_value406=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_484,((void*)0))));
        come_call_finalizer3(__right_value406,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_485) {
            method_generics_486=list$1charph_length(generics_fun_485->mMethodGenericsTypeNames)>0;
            if(            method_generics_486&&list$1sTypeph_length(info->method_generics_types)==0) {
                multiple_assign_var1=((struct tuple2$2charphsGenericsFunp*)(__right_value408=make_generics_function(obj_type_479,(char*)come_increment_ref_count(__builtin_string(fun_name_468)),info,(_Bool)1)));
                name_487=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                gfun_488=multiple_assign_var1->v2;
                come_call_finalizer3(__right_value408,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_name_489=(char*)come_increment_ref_count(name_487);
                fun_490=((struct sFun*)(__right_value409=map$2charphsFunph_at(info->funcs,generics_fun_name_489,((void*)0))));
                come_call_finalizer3(__right_value409,sFun_finalize, 0, 1, 0, 0, (void*)0);
                come_params_491=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 284, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                if(                method_block_471) {
                    no_output_come_code_492=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_471,(struct list$1CVALUEph*)come_increment_ref_count(come_params_491),fun_490,fun_name3_484,method_block_sline_472,info,(_Bool)1)) {
                        __result321__ = (_Bool)0;
                        name_487 = come_decrement_ref_count2(name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_489 = come_decrement_ref_count2(generics_fun_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                        none_generics_name_482 = come_decrement_ref_count2(none_generics_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name2_483 = come_decrement_ref_count2(fun_name2_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name3_484 = come_decrement_ref_count2(fun_name3_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result321__;
                    }
                    info->no_output_come_code=no_output_come_code_492;
                    method_block_node_493=((struct CVALUE*)(__right_value412=list$1CVALUEphp_operator_load_element(come_params_491,-1)));
                    come_call_finalizer3(__right_value412,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_497=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_493->type));
                    method_block_result_type_498=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_499=((struct sType*)(__right_value415=list$1sTypephp_operator_load_element(generics_fun_485->mParamTypes,-1)));
                    come_call_finalizer3(__right_value415,sType_finalize, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_500=generics_fun_method_block_lambda_type_499->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_500->mClass->mMethodGenerics) {
                        method_generics_num_501=generics_fun_method_block_result_type_500->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_501,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_498)));
                    }
                    n_510=0;
                    for(                    o2_saved_511=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_499->mParamTypes)),it_512=list$1sTypeph_begin((o2_saved_511));                    !list$1sTypeph_end((o2_saved_511));                    it_512=list$1sTypeph_next((o2_saved_511))                    ){
                        if(                        it_512->mClass->mMethodGenerics) {
                            method_generics_num_513=it_512->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_513,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value420=list$1sTypephp_operator_load_element(method_block_lambda_type_497->mParamTypes,n_510))))));
                            come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        n_510++;
                    }
                    come_call_finalizer3(o2_saved_511,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_514=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 313, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                    i_515=0;
                    for(                    o2_saved_516=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_469)),it_519=list$1tuple2$2charphsNodephph_begin((o2_saved_516));                    !list$1tuple2$2charphsNodephph_end((o2_saved_516));                    it_519=list$1tuple2$2charphsNodephph_next((o2_saved_516))                    ){
                        multiple_assign_var2=it_519;
                        label_522=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                        node_523=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                        if(                        i_515==0) {
                            list$1CVALUEph_push_back(come_params_514,(struct CVALUE*)come_increment_ref_count(obj_value_478));
                            i_515++;
                        }
                        else {
                            Value_524=node_compile(node_523,info);
                            if(                            !Value_524) {
                                __result333__ = (_Bool)0;
                                label_522 = come_decrement_ref_count2(label_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_523) { node_523 = come_decrement_ref_count2(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_516,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_498,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                name_487 = come_decrement_ref_count2(name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_489 = come_decrement_ref_count2(generics_fun_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_482 = come_decrement_ref_count2(none_generics_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_483 = come_decrement_ref_count2(fun_name2_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_484 = come_decrement_ref_count2(fun_name3_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result333__;
                            }
                            else {
                            }
                            come_value_525=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_514,(struct CVALUE*)come_increment_ref_count(come_value_525));
                            come_call_finalizer3(come_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_522 = come_decrement_ref_count2(label_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_523) { node_523 = come_decrement_ref_count2(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_516,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_485->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_526=generics_fun_485->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_526,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_510=0;
                    for(                    o2_saved_527=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_485->mParamTypes)),it_528=list$1sTypeph_begin((o2_saved_527));                    !list$1sTypeph_end((o2_saved_527));                    it_528=list$1sTypeph_next((o2_saved_527))                    ){
                        if(                        it_528->mClass->mMethodGenerics) {
                            method_generics_num_529=it_528->mClass->mMethodGenericsNum;
                            if(                            n_510<list$1CVALUEph_length(come_params_514)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_529,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value426=list$1CVALUEphp_operator_load_element(come_params_514,n_510)))->type)));
                                come_call_finalizer3(__right_value426,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_510++;
                    }
                    come_call_finalizer3(o2_saved_527,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_498,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_530=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 352, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                    i_531=0;
                    for(                    o2_saved_532=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_469)),it_533=list$1tuple2$2charphsNodephph_begin((o2_saved_532));                    !list$1tuple2$2charphsNodephph_end((o2_saved_532));                    it_533=list$1tuple2$2charphsNodephph_next((o2_saved_532))                    ){
                        multiple_assign_var3=it_533;
                        label_534=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        node_535=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(                        i_531==0) {
                            list$1CVALUEph_push_back(come_params_530,(struct CVALUE*)come_increment_ref_count(obj_value_478));
                            i_531++;
                        }
                        else {
                            Value_536=node_compile(node_535,info);
                            if(                            !Value_536) {
                                __result334__ = (_Bool)0;
                                label_534 = come_decrement_ref_count2(label_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_535) { node_535 = come_decrement_ref_count2(node_535, ((struct sNode*)node_535)->finalize, ((struct sNode*)node_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_532,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_530,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                name_487 = come_decrement_ref_count2(name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_489 = come_decrement_ref_count2(generics_fun_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_482 = come_decrement_ref_count2(none_generics_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_483 = come_decrement_ref_count2(fun_name2_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_484 = come_decrement_ref_count2(fun_name3_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result334__;
                            }
                            else {
                            }
                            come_value_537=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_530,(struct CVALUE*)come_increment_ref_count(come_value_537));
                            come_call_finalizer3(come_value_537,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_534 = come_decrement_ref_count2(label_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_535) { node_535 = come_decrement_ref_count2(node_535, ((struct sNode*)node_535)->finalize, ((struct sNode*)node_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_532,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_485->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_538=generics_fun_485->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_538,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_539=0;
                    for(                    o2_saved_540=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_485->mParamTypes)),it_541=list$1sTypeph_begin((o2_saved_540));                    !list$1sTypeph_end((o2_saved_540));                    it_541=list$1sTypeph_next((o2_saved_540))                    ){
                        if(                        it_541->mClass->mMethodGenerics) {
                            method_generics_num_542=it_541->mClass->mMethodGenericsNum;
                            if(                            n_539<list$1CVALUEph_length(come_params_530)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_542,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value432=list$1CVALUEphp_operator_load_element(come_params_530,n_539)))->type)));
                                come_call_finalizer3(__right_value432,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_539++;
                    }
                    come_call_finalizer3(o2_saved_540,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_530,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2charphsFunph_remove(info->funcs,generics_fun_name_489);
                name_487 = come_decrement_ref_count2(name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_489 = come_decrement_ref_count2(generics_fun_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_480;
        come_call_finalizer3(type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
        none_generics_name_482 = come_decrement_ref_count2(none_generics_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name2_483 = come_decrement_ref_count2(fun_name2_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name3_484 = come_decrement_ref_count2(fun_name3_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_543=obj_type_479->mClass;
    calling_dynamic_method_544=(_Bool)0;
    lambda_type_545=((void*)0);
    for(    o2_saved_546=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_543->mFields)),it_549=list$1tuple2$2charphsTypephph_begin((o2_saved_546));    !list$1tuple2$2charphsTypephph_end((o2_saved_546));    it_549=list$1tuple2$2charphsTypephph_next((o2_saved_546))    ){
        multiple_assign_var4=it_549;
        field_name_552=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type_553=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        string_operator_equals(field_name_552,fun_name_468)&&string_operator_equals(field_type_553->mClass->mName,"lambda")) {
            calling_dynamic_method_544=(_Bool)1;
            lambda_type_545=field_type_553;
            field_name_552 = come_decrement_ref_count2(field_name_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_552 = come_decrement_ref_count2(field_name_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_546,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_544) {
        result_type_554=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_545->mResultType->v1));
        result_type_554->mStatic=(_Bool)0;
        come_params_555=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 415, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_556=0;
        for(        o2_saved_557=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_469)),it_558=list$1tuple2$2charphsNodephph_begin((o2_saved_557));        !list$1tuple2$2charphsNodephph_end((o2_saved_557));        it_558=list$1tuple2$2charphsNodephph_next((o2_saved_557))        ){
            multiple_assign_var5=it_558;
            label_559=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_560=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            if(            i_556==0) {
                list$1CVALUEph_push_back(come_params_555,(struct CVALUE*)come_increment_ref_count(obj_value_478));
                i_556++;
            }
            else {
                Value_561=node_compile(node_560,info);
                if(                !Value_561) {
                    __result341__ = (_Bool)0;
                    label_559 = come_decrement_ref_count2(label_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_560) { node_560 = come_decrement_ref_count2(node_560, ((struct sNode*)node_560)->finalize, ((struct sNode*)node_560)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_557,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_554,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_555,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result341__;
                }
                else {
                }
                come_value_562=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value440=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value438=string_to_string(fun_name_468))),((char*)(__right_value439=int_to_string(i_556)))))),((struct sType*)(__right_value441=list$1sTypephp_operator_load_element(lambda_type_545->mParamTypes,i_556-1))),come_value_562->type,come_value_562,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value441,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional3=(((struct sType*)(__right_value442=list$1sTypephp_operator_load_element(lambda_type_545->mParamTypes,i_556-1)))->mHeap&&come_value_562->type->mHeap)),                come_call_finalizer3(__right_value442,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)(__right_value443=list$1sTypephp_operator_load_element(lambda_type_545->mParamTypes,i_556-1))),come_value_562->type,come_value_562,info,(_Bool)1);
                    come_call_finalizer3(__right_value443,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_push_back(come_params_555,(struct CVALUE*)come_increment_ref_count(come_value_562));
                i_556++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_559 = come_decrement_ref_count2(label_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_560) { node_560 = come_decrement_ref_count2(node_560, ((struct sNode*)node_560)->finalize, ((struct sNode*)node_560)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_557,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_563=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 445, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_format(buf_563,"%s->%s",obj_value_478->c_value,fun_name_468);
        buffer_append_str(buf_563,"(");
        j_564=0;
        for(        o2_saved_565=(struct list$1CVALUEph*)come_increment_ref_count((come_params_555)),it_568=list$1CVALUEph_begin((o2_saved_565));        !list$1CVALUEph_end((o2_saved_565));        it_568=list$1CVALUEph_next((o2_saved_565))        ){
            if(            j_564==0) {
                __dec_obj180=it_568->c_value;
                it_568->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_568->c_value));
                __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_563,it_568->c_value);
            if(            j_564!=list$1CVALUEph_length(come_params_555)-1) {
                buffer_append_str(buf_563,",");
            }
            j_564++;
        }
        come_call_finalizer3(o2_saved_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_563,")");
        come_value2_571=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 465, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj181=come_value2_571->c_value;
        come_value2_571->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_563));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_572=(struct sType*)come_increment_ref_count(solve_generics(result_type_554,info->generics_type,info));
        __dec_obj182=come_value2_571->type;
        come_value2_571->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_572));
        come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_571->type->mStatic=(_Bool)0;
        come_value2_571->var=((void*)0);
        if(        result_type2_572->mHeap) {
            append_object_to_right_values2(come_value2_571,(struct sType*)come_increment_ref_count(result_type2_572),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_571->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_571));
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj183=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_476);
        come_call_finalizer3(__dec_obj183,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_554,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_555,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_571,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_572,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_573=((void*)0);
        generics_fun_name_574=((void*)0);
        fun_575=((void*)0);
        if(        string_operator_equals(fun_name_468,"super")) {
            __dec_obj184=fun_name_468;
            fun_name_468=(char*)come_increment_ref_count(create_non_method_name(obj_type_479,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_576=obj_type_479->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value453=map$2charphsClassphp_operator_load_element(info->classes,klass_576->mParentClassName))))),            come_call_finalizer3(__right_value453,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_576=((struct sClass*)(__right_value454=map$2charphsClassphp_operator_load_element(info->classes,klass_576->mParentClassName)));
                come_call_finalizer3(__right_value454,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj185=generics_fun_name_574;
                generics_fun_name_574=(char*)come_increment_ref_count(create_method_name_using_class(klass_576,(_Bool)0,fun_name_468,info,(_Bool)1));
                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_575=((struct sFun*)(__right_value456=map$2charphsFunph_at(info->funcs,generics_fun_name_574,((void*)0))));
                come_call_finalizer3(__right_value456,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_575) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_479&&obj_type_479->mNoSolvedGenericsType&&obj_type_479->mNoSolvedGenericsType->v1&&list$1sTypeph_length(obj_type_479->mNoSolvedGenericsType->v1->mGenericsTypes)>0) {
                multiple_assign_var6=((struct tuple2$2charphsGenericsFunp*)(__right_value458=make_generics_function(obj_type_479,(char*)come_increment_ref_count(__builtin_string(fun_name_468)),info,(_Bool)1)));
                name_577=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                gfun_578=multiple_assign_var6->v2;
                come_call_finalizer3(__right_value458,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj186=generics_fun_name_574;
                generics_fun_name_574=(char*)come_increment_ref_count(name_577);
                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_573=gfun_578;
                name_577 = come_decrement_ref_count2(name_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            list$1sTypeph_length(info->method_generics_types)>0) {
                none_generics_name_579=(char*)come_increment_ref_count(get_none_generics_name(obj_type_479->mClass->mName));
                fun_name3_580=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_579,fun_name_468));
                multiple_assign_var7=((struct tuple2$2charphsGenericsFunp*)(__right_value462=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_580)),(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types),info)));
                name_581=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                gfun_582=multiple_assign_var7->v2;
                come_call_finalizer3(__right_value462,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj187=generics_fun_name_574;
                generics_fun_name_574=(char*)come_increment_ref_count(name_581);
                __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_573=gfun_582;
                none_generics_name_579 = come_decrement_ref_count2(none_generics_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_580 = come_decrement_ref_count2(fun_name3_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                name_581 = come_decrement_ref_count2(name_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var8=((struct tuple2$2charphsGenericsFunp*)(__right_value464=make_generics_function(obj_type_479,(char*)come_increment_ref_count(__builtin_string(fun_name_468)),info,(_Bool)1)));
                name_583=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_584=multiple_assign_var8->v2;
                come_call_finalizer3(__right_value464,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj188=generics_fun_name_574;
                generics_fun_name_574=(char*)come_increment_ref_count(name_583);
                __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_573=gfun_584;
                name_583 = come_decrement_ref_count2(name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            for(            i_585=128;            i_585>=1;            i_585--            ){
                new_fun_name_586=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_574,i_585));
                fun_575=((struct sFun*)(__right_value466=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_586)));
                come_call_finalizer3(__right_value466,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_575!=((void*)0)) {
                    __dec_obj189=generics_fun_name_574;
                    generics_fun_name_574=(char*)come_increment_ref_count(__builtin_string(new_fun_name_586));
                    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_586 = come_decrement_ref_count2(new_fun_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_586 = come_decrement_ref_count2(new_fun_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            fun_575==((void*)0)) {
                obj_array_type_590=obj_type_479->mOriginalLoadVarType->v1;
                if(                obj_array_type_590&&list$1sNodeph_length(obj_array_type_590->mArrayNum)>0) {
                    array_method_name_591=(char*)come_increment_ref_count(create_method_name(obj_array_type_590,(_Bool)0,fun_name_468,info,(_Bool)0));
                    fun_575=((struct sFun*)(__right_value469=map$2charphsFunph_at(info->funcs,array_method_name_591,((void*)0))));
                    come_call_finalizer3(__right_value469,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_575) {
                        __dec_obj190=generics_fun_name_574;
                        generics_fun_name_574=(char*)come_increment_ref_count(__builtin_string(array_method_name_591));
                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_575=((struct sFun*)(__right_value471=map$2charphsFunph_at(info->funcs,generics_fun_name_574,((void*)0))));
                        come_call_finalizer3(__right_value471,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_575==((void*)0)) {
                            __dec_obj191=generics_fun_name_574;
                            generics_fun_name_574=(char*)come_increment_ref_count(create_method_name(obj_type_479,(_Bool)0,((char*)(__right_value472=__builtin_string(fun_name_468))),info,(_Bool)1));
                            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_575=((struct sFun*)(__right_value474=map$2charphsFunph_at(info->funcs,generics_fun_name_574,((void*)0))));
                            come_call_finalizer3(__right_value474,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_575==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_574,info->come_fun->mName);
                                __result352__ = (_Bool)1;
                                array_method_name_591 = come_decrement_ref_count2(array_method_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result352__;
                            }
                        }
                    }
                    array_method_name_591 = come_decrement_ref_count2(array_method_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_575=((struct sFun*)(__right_value475=map$2charphsFunph_at(info->funcs,generics_fun_name_574,((void*)0))));
                    come_call_finalizer3(__right_value475,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_575==((void*)0)) {
                        __dec_obj192=generics_fun_name_574;
                        generics_fun_name_574=(char*)come_increment_ref_count(create_method_name(obj_type_479,(_Bool)0,((char*)(__right_value476=__builtin_string(fun_name_468))),info,(_Bool)1));
                        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_575=((struct sFun*)(__right_value478=map$2charphsFunph_at(info->funcs,generics_fun_name_574,((void*)0))));
                        come_call_finalizer3(__right_value478,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_575==((void*)0)) {
                            klass_592=obj_type_479->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value479=map$2charphsClassphp_operator_load_element(info->classes,klass_592->mParentClassName))))),                            come_call_finalizer3(__right_value479,sClass_finalize, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_592=((struct sClass*)(__right_value480=map$2charphsClassphp_operator_load_element(info->classes,klass_592->mParentClassName)));
                                come_call_finalizer3(__right_value480,sClass_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj193=generics_fun_name_574;
                                generics_fun_name_574=(char*)come_increment_ref_count(create_method_name_using_class(klass_592,(_Bool)0,fun_name_468,info,(_Bool)1));
                                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_575=((struct sFun*)(__right_value482=map$2charphsFunph_at(info->funcs,generics_fun_name_574,((void*)0))));
                                come_call_finalizer3(__right_value482,sFun_finalize, 0, 1, 0, 0, (void*)0);
                                if(                                fun_575) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_575==((void*)0)&&string_operator_equals(fun_name_468,"to_string")) {
                            multiple_assign_var9=((struct tuple2$2sFunpcharph*)(__right_value483=create_to_string_automatically(obj_type_479,fun_name_468,info)));
                            fun2_593=multiple_assign_var9->v1;
                            real_fun_name_594=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                            come_call_finalizer3(__right_value483,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_575=fun2_593;
                            __dec_obj195=generics_fun_name_574;
                            generics_fun_name_574=(char*)come_increment_ref_count(real_fun_name_594);
                            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_594 = come_decrement_ref_count2(real_fun_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_575==((void*)0)&&string_operator_equals(fun_name_468,"equals")) {
                            multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value484=create_equals_automatically(obj_type_479,fun_name_468,info)));
                            fun2_595=multiple_assign_var10->v1;
                            real_fun_name_596=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                            come_call_finalizer3(__right_value484,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_575=fun2_595;
                            __dec_obj196=generics_fun_name_574;
                            generics_fun_name_574=(char*)come_increment_ref_count(real_fun_name_596);
                            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_596 = come_decrement_ref_count2(real_fun_name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_575==((void*)0)) {
                            original_obj_type_fun_name_597=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_479,(_Bool)0,((char*)(__right_value485=__builtin_string(fun_name_468))),info,(_Bool)1));
                            __right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_575=((struct sFun*)(__right_value487=map$2charphsFunph_at(info->funcs,original_obj_type_fun_name_597,((void*)0))));
                            come_call_finalizer3(__right_value487,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_575) {
                                __dec_obj197=generics_fun_name_574;
                                generics_fun_name_574=(char*)come_increment_ref_count(original_obj_type_fun_name_597);
                                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            original_obj_type_fun_name_597 = come_decrement_ref_count2(original_obj_type_fun_name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_575==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_574,info->come_fun->mName);
                            __result353__ = (_Bool)1;
                            generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result353__;
                        }
                    }
                }
            }
        }
        if(        fun_575==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_574,info->come_fun->mName);
            __result354__ = (_Bool)1;
            generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result354__;
        }
        if(        list$1sTypeph_length(fun_575->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result355__ = (_Bool)1;
            generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result355__;
        }
        result_type_598=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_575->mResultType));
        result_type_598->mStatic=(_Bool)0;
        result_type2_599=(struct sType*)come_increment_ref_count(solve_generics(result_type_598,info->generics_type,info));
        param_types_600=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 629, "struct list$1sTypeph*", (void*)0, (void*)0))));
        for(        o2_saved_601=(struct list$1sTypeph*)come_increment_ref_count((fun_575->mParamTypes)),it_602=list$1sTypeph_begin((o2_saved_601));        !list$1sTypeph_end((o2_saved_601));        it_602=list$1sTypeph_next((o2_saved_601))        ){
            if(            it_602==((void*)0)) {
                list$1sTypeph_push_back(param_types_600,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_602)));
            }
            else {
                it2_603=(struct sType*)come_increment_ref_count(solve_generics(it_602,info->generics_type,info));
                list$1sTypeph_push_back(param_types_600,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_603)));
                come_call_finalizer3(it2_603,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_604=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 641, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        for(        i_605=0;        i_605<list$1sTypeph_length(fun_575->mParamTypes)-(((method_block_471)?(2):(0)));        i_605++        ){
            list$1CVALUEph_add(come_params_604,((void*)0));
        }
        first_param_609=(_Bool)1;
        for(        o2_saved_610=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_469)),it_611=list$1tuple2$2charphsNodephph_begin((o2_saved_610));        !list$1tuple2$2charphsNodephph_end((o2_saved_610));        it_611=list$1tuple2$2charphsNodephph_next((o2_saved_610))        ){
            multiple_assign_var11=it_611;
            label_612=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_613=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            first_param_609) {
                first_param_609=(_Bool)0;
            }
            else if(            label_612) {
                n_614=0;
                for(                o2_saved_615=(struct list$1charph*)come_increment_ref_count((fun_575->mParamNames)),it_618=list$1charph_begin((o2_saved_615));                !list$1charph_end((o2_saved_615));                it_618=list$1charph_next((o2_saved_615))                ){
                    if(                    string_operator_equals(label_612,it_618)) {
                        break;
                    }
                    n_614++;
                }
                come_call_finalizer3(o2_saved_615,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                is_inner_calling__621=is_inner_calling(obj_470,info);
                if(                (_if_conditional4=(!is_inner_calling__621&&((struct sType*)(__right_value500=list$1sTypephp_operator_load_element(param_types_600,n_614)))&&((struct sType*)(__right_value501=list$1sTypephp_operator_load_element(param_types_600,n_614)))->mRefference&&string_operator_equals(((struct sType*)(__right_value502=list$1sTypephp_operator_load_element(param_types_600,n_614)))->mClass->mName,"object")&&((struct sType*)(__right_value503=list$1sTypephp_operator_load_element(param_types_600,n_614)))->mHeap)),                come_call_finalizer3(__right_value500,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value501,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value502,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value503,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    Value_622=node_compile(node_613,info);
                    if(                    !Value_622) {
                        __result363__ = (_Bool)0;
                        label_612 = come_decrement_ref_count2(label_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_613) { node_613 = come_decrement_ref_count2(node_613, ((struct sNode*)node_613)->finalize, ((struct sNode*)node_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_610,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result363__;
                    }
                    else {
                    }
                    come_value_623=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_not_equals(come_value_623->type->mClass->mName,"object")) {
                        inf_type_624=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 674, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
                        inf_type_624->mHeap=1;
                        node2_625=(struct sNode*)come_increment_ref_count(create_implements((struct sNode*)come_increment_ref_count(node_613),(struct sType*)come_increment_ref_count(inf_type_624),info));
                        Value_626=node_compile(node2_625,info);
                        if(                        !Value_626) {
                            __result364__ = (_Bool)0;
                            come_call_finalizer3(inf_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(node2_625) { node2_625 = come_decrement_ref_count2(node2_625, ((struct sNode*)node2_625)->finalize, ((struct sNode*)node2_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(come_value_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_612 = come_decrement_ref_count2(label_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_613) { node_613 = come_decrement_ref_count2(node_613, ((struct sNode*)node_613)->finalize, ((struct sNode*)node_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_610,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result364__;
                        }
                        else {
                        }
                        come_call_finalizer3(inf_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
                        if(node2_625) { node2_625 = come_decrement_ref_count2(node2_625, ((struct sNode*)node2_625)->finalize, ((struct sNode*)node2_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        Value_627=node_compile(node_613,info);
                        if(                        !Value_627) {
                            __result365__ = (_Bool)0;
                            come_call_finalizer3(come_value_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_612 = come_decrement_ref_count2(label_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_613) { node_613 = come_decrement_ref_count2(node_613, ((struct sNode*)node_613)->finalize, ((struct sNode*)node_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_610,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result365__;
                        }
                        else {
                        }
                    }
                    come_call_finalizer3(come_value_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    Value_628=node_compile(node_613,info);
                    if(                    !Value_628) {
                        __result366__ = (_Bool)0;
                        label_612 = come_decrement_ref_count2(label_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_613) { node_613 = come_decrement_ref_count2(node_613, ((struct sNode*)node_613)->finalize, ((struct sNode*)node_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_610,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result366__;
                    }
                    else {
                    }
                }
                come_value_629=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional5=(((struct sType*)(__right_value509=list$1sTypephp_operator_load_element(param_types_600,n_614))))),                come_call_finalizer3(__right_value509,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    check_assign_type(((char*)(__right_value512=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value510=string_to_string(fun_name_468))),((char*)(__right_value511=int_to_string(n_614)))))),((struct sType*)(__right_value513=list$1sTypephp_operator_load_element(param_types_600,n_614))),come_value_629->type,come_value_629,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value513,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional6=(((struct sType*)(__right_value514=list$1sTypephp_operator_load_element(param_types_600,n_614)))&&((struct sType*)(__right_value515=list$1sTypephp_operator_load_element(param_types_600,n_614)))->mHeap&&come_value_629->type->mHeap)),                come_call_finalizer3(__right_value514,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value515,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    std_move(((struct sType*)(__right_value516=list$1sTypephp_operator_load_element(param_types_600,n_614))),come_value_629->type,come_value_629,info,(_Bool)1);
                    come_call_finalizer3(__right_value516,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_604,n_614,(struct CVALUE*)come_increment_ref_count(come_value_629));
                come_call_finalizer3(come_value_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_612 = come_decrement_ref_count2(label_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_613) { node_613 = come_decrement_ref_count2(node_613, ((struct sNode*)node_613)->finalize, ((struct sNode*)node_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_610,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_635=0;
        for(        o2_saved_636=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_469)),it_637=list$1tuple2$2charphsNodephph_begin((o2_saved_636));        !list$1tuple2$2charphsNodephph_end((o2_saved_636));        it_637=list$1tuple2$2charphsNodephph_next((o2_saved_636))        ){
            multiple_assign_var12=it_637;
            label_638=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            node_639=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            i_635==0) {
                check_assign_type(((char*)(__right_value519=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value517=string_to_string(fun_name_468))),((char*)(__right_value518=int_to_string(i_635)))))),((struct sType*)(__right_value520=list$1sTypephp_operator_load_element(param_types_600,i_635))),obj_value_478->type,obj_value_478,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional7=(((struct sType*)(__right_value521=list$1sTypephp_operator_load_element(param_types_600,i_635)))->mHeap&&obj_value_478->type->mHeap)),                come_call_finalizer3(__right_value521,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)(__right_value522=list$1sTypephp_operator_load_element(param_types_600,i_635))),obj_value_478->type,obj_value_478,info,(_Bool)1);
                    come_call_finalizer3(__right_value522,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)(__right_value523=list$1sTypephp_operator_load_element(param_types_600,i_635)))->mHeap&&!obj_value_478->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value523,sType_finalize, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    err_msg(info,"require heap parametor(%s)",((char*)(__right_value524=list$1charphp_operator_load_element(fun_575->mParamNames,i_635))));
                    __right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    exit(2);
                }
                list$1CVALUEph_replace(come_params_604,i_635,(struct CVALUE*)come_increment_ref_count(obj_value_478));
                i_635++;
            }
            else if(            label_638) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional8=(((struct CVALUE*)(__right_value525=list$1CVALUEphp_operator_load_element(come_params_604,i_635)))==((void*)0))),                    come_call_finalizer3(__right_value525,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional8) {
                        break;
                    }
                    else {
                        i_635++;
                    }
                }
                is_inner_calling__643=is_inner_calling(obj_470,info);
                if(                (_if_conditional9=(!is_inner_calling__643&&((struct sType*)(__right_value526=list$1sTypephp_operator_load_element(param_types_600,i_635)))&&((struct sType*)(__right_value527=list$1sTypephp_operator_load_element(param_types_600,i_635)))->mHeap&&string_operator_equals(((struct sType*)(__right_value528=list$1sTypephp_operator_load_element(param_types_600,i_635)))->mClass->mName,"object")&&((struct sType*)(__right_value529=list$1sTypephp_operator_load_element(param_types_600,i_635)))->mRefference)),                come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value527,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value528,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value529,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional9) {
                    Value_644=node_compile(node_639,info);
                    if(                    !Value_644) {
                        __result371__ = (_Bool)0;
                        label_638 = come_decrement_ref_count2(label_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_639) { node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_636,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result371__;
                    }
                    else {
                    }
                    come_value_645=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_not_equals(come_value_645->type->mClass->mName,"object")) {
                        inf_type_646=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 749, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
                        inf_type_646->mHeap=1;
                        node2_647=(struct sNode*)come_increment_ref_count(create_implements((struct sNode*)come_increment_ref_count(node_639),(struct sType*)come_increment_ref_count(inf_type_646),info));
                        Value_648=node_compile(node2_647,info);
                        if(                        !Value_648) {
                            __result372__ = (_Bool)0;
                            come_call_finalizer3(inf_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(node2_647) { node2_647 = come_decrement_ref_count2(node2_647, ((struct sNode*)node2_647)->finalize, ((struct sNode*)node2_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(come_value_645,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_638 = come_decrement_ref_count2(label_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_639) { node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_636,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result372__;
                        }
                        else {
                        }
                        come_call_finalizer3(inf_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
                        if(node2_647) { node2_647 = come_decrement_ref_count2(node2_647, ((struct sNode*)node2_647)->finalize, ((struct sNode*)node2_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        Value_649=node_compile(node_639,info);
                        if(                        !Value_649) {
                            __result373__ = (_Bool)0;
                            come_call_finalizer3(come_value_645,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_638 = come_decrement_ref_count2(label_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_639) { node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_636,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result373__;
                        }
                        else {
                        }
                    }
                    come_call_finalizer3(come_value_645,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    Value_650=node_compile(node_639,info);
                    if(                    !Value_650) {
                        __result374__ = (_Bool)0;
                        label_638 = come_decrement_ref_count2(label_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_639) { node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_636,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result374__;
                    }
                    else {
                    }
                }
                come_value_651=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional10=(((struct sType*)(__right_value535=list$1sTypephp_operator_load_element(param_types_600,i_635))))),                come_call_finalizer3(__right_value535,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    check_assign_type(((char*)(__right_value538=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value536=string_to_string(fun_name_468))),((char*)(__right_value537=int_to_string(i_635)))))),((struct sType*)(__right_value539=list$1sTypephp_operator_load_element(param_types_600,i_635))),come_value_651->type,come_value_651,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value539,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional11=(((struct sType*)(__right_value540=list$1sTypephp_operator_load_element(param_types_600,i_635)))&&((struct sType*)(__right_value541=list$1sTypephp_operator_load_element(param_types_600,i_635)))->mHeap&&come_value_651->type->mHeap)),                come_call_finalizer3(__right_value540,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value541,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    std_move(((struct sType*)(__right_value542=list$1sTypephp_operator_load_element(param_types_600,i_635))),come_value_651->type,come_value_651,info,(_Bool)1);
                    come_call_finalizer3(__right_value542,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_604,i_635,(struct CVALUE*)come_increment_ref_count(come_value_651));
                i_635++;
                come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_638 = come_decrement_ref_count2(label_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_639) { node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_636,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional12=(((struct CVALUE*)(__right_value543=list$1CVALUEphp_operator_load_element(come_params_604,i_635)))==((void*)0))),            come_call_finalizer3(__right_value543,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                break;
            }
            else {
                i_635++;
            }
        }
        obj_array_type_652=obj_type_479->mOriginalLoadVarType->v1;
        if(        obj_array_type_652&&list$1sNodeph_length(obj_array_type_652->mArrayNum)>0) {
            array_method_name_653=(char*)come_increment_ref_count(create_method_name(obj_array_type_652,(_Bool)0,fun_name_468,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_574,array_method_name_653)) {
                if(                string_operator_equals(fun_name_468,"to_pointer")) {
                    buf_654=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 799, "struct buffer*", (void*)0, (void*)0))));
                    i_655=0;
                    for(                    o2_saved_656=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_652->mArrayNum)),it_659=list$1sNodeph_begin((o2_saved_656));                    !list$1sNodeph_end((o2_saved_656));                    it_659=list$1sNodeph_next((o2_saved_656))                    ){
                        Value_662=node_compile(it_659,info);
                        if(                        !Value_662) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_663=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_654,"%s",come_value_663->c_value);
                        if(                        i_655!=list$1sNodeph_length(obj_array_type_652->mArrayNum)-1) {
                            buffer_append_str(buf_654,"*");
                        }
                        i_655++;
                        come_call_finalizer3(come_value_663,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_656,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_664=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 819, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj202=come_value_664->c_value;
                    come_value_664->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_654));
                    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_664->var=((void*)0);
                    __dec_obj203=come_value_664->type;
                    come_value_664->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 823, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_604,1,(struct CVALUE*)come_increment_ref_count(come_value_664));
                    list$1tuple2$2charphsNodephph_push_back(params_469,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 826, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_468,"length")) {
                    buf_668=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 829, "struct buffer*", (void*)0, (void*)0))));
                    i_669=0;
                    for(                    o2_saved_670=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_652->mArrayNum)),it_671=list$1sNodeph_begin((o2_saved_670));                    !list$1sNodeph_end((o2_saved_670));                    it_671=list$1sNodeph_next((o2_saved_670))                    ){
                        Value_672=node_compile(it_671,info);
                        if(                        !Value_672) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_673=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_668,"%s",come_value_673->c_value);
                        if(                        i_669!=list$1sNodeph_length(obj_array_type_652->mArrayNum)-1) {
                            buffer_append_str(buf_668,"*");
                        }
                        i_669++;
                        come_call_finalizer3(come_value_673,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_670,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_674=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 848, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj207=come_value_674->c_value;
                    come_value_674->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_668));
                    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_674->var=((void*)0);
                    __dec_obj208=come_value_674->type;
                    come_value_674->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 852, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_604,1,(struct CVALUE*)come_increment_ref_count(come_value_674));
                    list$1tuple2$2charphsNodephph_push_back(params_469,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 855, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_668,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_674,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_468,"to_buffer")) {
                    buf_675=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 858, "struct buffer*", (void*)0, (void*)0))));
                    i_676=0;
                    for(                    o2_saved_677=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_652->mArrayNum)),it_678=list$1sNodeph_begin((o2_saved_677));                    !list$1sNodeph_end((o2_saved_677));                    it_678=list$1sNodeph_next((o2_saved_677))                    ){
                        Value_679=node_compile(it_678,info);
                        if(                        !Value_679) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_680=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_675,"%s",come_value_680->c_value);
                        if(                        i_676!=list$1sNodeph_length(obj_array_type_652->mArrayNum)-1) {
                            buffer_append_str(buf_675,"*");
                        }
                        i_676++;
                        come_call_finalizer3(come_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_677,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_681=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 877, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj209=come_value_681->c_value;
                    come_value_681->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_675));
                    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_681->var=((void*)0);
                    __dec_obj210=come_value_681->type;
                    come_value_681->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 881, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_604,1,(struct CVALUE*)come_increment_ref_count(come_value_681));
                    list$1tuple2$2charphsNodephph_push_back(params_469,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 884, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_675,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_468,"to_list")) {
                    buf_682=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 887, "struct buffer*", (void*)0, (void*)0))));
                    i_683=0;
                    for(                    o2_saved_684=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_652->mArrayNum)),it_685=list$1sNodeph_begin((o2_saved_684));                    !list$1sNodeph_end((o2_saved_684));                    it_685=list$1sNodeph_next((o2_saved_684))                    ){
                        Value_686=node_compile(it_685,info);
                        if(                        !Value_686) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_687=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_682,"%s",come_value_687->c_value);
                        if(                        i_683!=list$1sNodeph_length(obj_array_type_652->mArrayNum)-1) {
                            buffer_append_str(buf_682,"*");
                        }
                        i_683++;
                        come_call_finalizer3(come_value_687,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_684,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_688=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 906, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj211=come_value_688->c_value;
                    come_value_688->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_682));
                    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_688->var=((void*)0);
                    __dec_obj212=come_value_688->type;
                    come_value_688->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 910, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_604,1,(struct CVALUE*)come_increment_ref_count(come_value_688));
                    list$1tuple2$2charphsNodephph_push_back(params_469,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 913, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_682,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_688,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_468,"to_vector")) {
                    buf_689=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 916, "struct buffer*", (void*)0, (void*)0))));
                    i_690=0;
                    for(                    o2_saved_691=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_652->mArrayNum)),it_692=list$1sNodeph_begin((o2_saved_691));                    !list$1sNodeph_end((o2_saved_691));                    it_692=list$1sNodeph_next((o2_saved_691))                    ){
                        Value_693=node_compile(it_692,info);
                        if(                        !Value_693) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_694=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_689,"%s",come_value_694->c_value);
                        if(                        i_690!=list$1sNodeph_length(obj_array_type_652->mArrayNum)-1) {
                            buffer_append_str(buf_689,"*");
                        }
                        i_690++;
                        come_call_finalizer3(come_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_691,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_695=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 935, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj213=come_value_695->c_value;
                    come_value_695->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_689));
                    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_695->var=((void*)0);
                    __dec_obj214=come_value_695->type;
                    come_value_695->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 939, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_604,1,(struct CVALUE*)come_increment_ref_count(come_value_695));
                    list$1tuple2$2charphsNodephph_push_back(params_469,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 942, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_689,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_695,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            array_method_name_653 = come_decrement_ref_count2(array_method_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1tuple2$2charphsNodephph_length(params_469)<list$1sTypeph_length(fun_575->mParamTypes)+(((method_block_471)?(-2):(0)))) {
            for(            ;            i_635<list$1sTypeph_length(fun_575->mParamTypes)+(((method_block_471)?(-2):(0)));            i_635++            ){
                default_param_696=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value603=list$1charphp_operator_load_element(fun_575->mParamDefaultParametors,i_635)))));
                __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_697=((char*)(__right_value605=list$1charphp_operator_load_element(fun_575->mParamNames,i_635)));
                __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                (_if_conditional13=(default_param_696&&string_operator_not_equals(default_param_696,"")&&((struct CVALUE*)(__right_value606=list$1CVALUEphp_operator_load_element(come_params_604,i_635)))==((void*)0))),                come_call_finalizer3(__right_value606,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional13) {
                    source_698=(struct buffer*)come_increment_ref_count(info->source);
                    p_699=info->p;
                    head_700=info->head;
                    sline_701=info->sline;
                    __dec_obj215=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_696));
                    come_call_finalizer3(__dec_obj215,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_702=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_703=node_compile(node_702,info);
                    if(                    !Value_703) {
                        __result382__ = (_Bool)0;
                        come_call_finalizer3(source_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_702) { node_702 = come_decrement_ref_count2(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_696 = come_decrement_ref_count2(default_param_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result382__;
                    }
                    else {
                    }
                    __dec_obj216=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_698);
                    come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_699;
                    info->head=head_700;
                    info->sline=sline_701;
                    come_value_704=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional14=(((struct sType*)(__right_value610=list$1sTypephp_operator_load_element(param_types_600,i_635))))),                    come_call_finalizer3(__right_value610,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional14) {
                        check_assign_type(((char*)(__right_value613=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value611=string_to_string(fun_name_468))),((char*)(__right_value612=int_to_string(i_635)))))),((struct sType*)(__right_value614=list$1sTypephp_operator_load_element(param_types_600,i_635))),come_value_704->type,come_value_704,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value614,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional15=(((struct sType*)(__right_value615=list$1sTypephp_operator_load_element(param_types_600,i_635)))&&((struct sType*)(__right_value616=list$1sTypephp_operator_load_element(param_types_600,i_635)))->mHeap&&come_value_704->type->mHeap)),                    come_call_finalizer3(__right_value615,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value616,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional15) {
                        std_move(((struct sType*)(__right_value617=list$1sTypephp_operator_load_element(param_types_600,i_635))),come_value_704->type,come_value_704,info,(_Bool)1);
                        come_call_finalizer3(__right_value617,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEph_replace(come_params_604,i_635,(struct CVALUE*)come_increment_ref_count(come_value_704));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_702) { node_702 = come_decrement_ref_count2(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_704,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional16=(((struct CVALUE*)(__right_value618=list$1CVALUEphp_operator_load_element(come_params_604,i_635)))==((void*)0))),                    come_call_finalizer3(__right_value618,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional16) {
                        err_msg(info,"require parametor(%s) %d",fun_575->mName,i_635);
                        __result383__ = (_Bool)0;
                        default_param_696 = come_decrement_ref_count2(default_param_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result383__;
                    }
                }
                default_param_696 = come_decrement_ref_count2(default_param_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        method_block_471) {
            if(            !compile_method_block(method_block_471,(struct list$1CVALUEph*)come_increment_ref_count(come_params_604),fun_575,fun_name_468,method_block_sline_472,info,(_Bool)0)) {
                __result384__ = (_Bool)0;
                generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result384__;
            }
        }
        buf_705=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 999, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_705,generics_fun_name_574);
        buffer_append_str(buf_705,"(");
        j_706=0;
        for(        o2_saved_707=(struct list$1CVALUEph*)come_increment_ref_count((come_params_604)),it_708=list$1CVALUEph_begin((o2_saved_707));        !list$1CVALUEph_end((o2_saved_707));        it_708=list$1CVALUEph_next((o2_saved_707))        ){
            buffer_append_str(buf_705,it_708->c_value);
            if(            j_706!=list$1CVALUEph_length(come_params_604)-1) {
                buffer_append_str(buf_705,",");
            }
            j_706++;
        }
        come_call_finalizer3(o2_saved_707,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_705,")");
        come_value2_709=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1018, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj217=come_value2_709->c_value;
        come_value2_709->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_705));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_value2_709->var=((void*)0);
        if(        result_type2_599->mClass->mProtocol&&string_operator_equals(result_type2_599->mClass->mName,"object")&&result_type2_599->mNoRefference) {
            generics_num_710=result_type_598->mGenericsNumBefore;
            if(            obj_type_479->mNoSolvedGenericsType&&obj_type_479->mNoSolvedGenericsType->v1) {
                refference_type_711=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(obj_type_479->mNoSolvedGenericsType->v1->mGenericsTypes,generics_num_710));
                if(                refference_type_711&&refference_type_711->mRefferenceOriginalType) {
                    __dec_obj218=refference_type_711;
                    refference_type_711=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, refference_type_711->mRefferenceOriginalType->v1));
                    come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
                    static int i_712=0;
                    i_712++;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value628=make_define_var(result_type_598,((char*)(__right_value627=xsprintf("__tmp_inf\%s",((char*)(__right_value626=int_to_string(i_712)))))),(_Bool)0,info))));
                    __right_value626 = come_decrement_ref_count2(__right_value626, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj219=come_value2_709->c_value;
                    come_value2_709->c_value=(char*)come_increment_ref_count(xsprintf("((__tmp_inf\%s=\%s),((\%s)(__tmp_inf\%s ? __tmp_inf\%s->_protocol_obj:(void*)0)))",((char*)(__right_value629=int_to_string(i_712))),((char*)(__right_value630=string_to_string(come_value2_709->c_value))),((char*)(__right_value632=string_to_string(((char*)(__right_value631=make_type_name_string(refference_type_711,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))))),((char*)(__right_value633=int_to_string(i_712))),((char*)(__right_value634=int_to_string(i_712)))));
                    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value630 = come_decrement_ref_count2(__right_value630, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value634 = come_decrement_ref_count2(__right_value634, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj220=result_type2_599;
                    result_type2_599=(struct sType*)come_increment_ref_count(refference_type_711);
                    come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj221=result_type2_599->mRefferenceOriginalType;
                    result_type2_599->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct sType*)(__right_value636=list$1sTypephp_operator_load_element(obj_type_479->mNoSolvedGenericsType->v1->mGenericsTypes,generics_num_710)))->mRefferenceOriginalType);
                    come_call_finalizer3(__dec_obj221,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value636,sType_finalize, 0, 1, 0, 0, (void*)0);
                    result_type2_599->mHeap=result_type_598->mHeap;
                }
                come_call_finalizer3(refference_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            __dec_obj222=come_value2_709->type;
            come_value2_709->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_599));
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_709->type->mStatic=(_Bool)0;
        }
        else if(        result_type2_599->mAnyOriginalType&&generics_fun_573&&obj_type_479->mNoSolvedGenericsType&&obj_type_479->mNoSolvedGenericsType->v1) {
            obj_type2_713=(struct sType*)come_increment_ref_count(obj_type_479->mNoSolvedGenericsType->v1);
            __dec_obj223=result_type2_599;
            result_type2_599=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_573->mResultType,obj_type2_713,info));
            come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj224=come_value2_709->type;
            come_value2_709->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_599));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_709->type->mStatic=(_Bool)0;
            if(            result_type2_599->mHeap) {
                append_object_to_right_values2(come_value2_709,(struct sType*)come_increment_ref_count(result_type2_599),info,(_Bool)0);
            }
            come_call_finalizer3(obj_type2_713,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj225=come_value2_709->type;
            come_value2_709->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_599));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_709->type->mStatic=(_Bool)0;
            if(            result_type2_599->mHeap) {
                append_object_to_right_values2(come_value2_709,(struct sType*)come_increment_ref_count(result_type2_599),info,(_Bool)0);
            }
        }
        __dec_obj226=come_value2_709->c_value;
        come_value2_709->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_709->c_value,come_value2_709->type,info));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj227=come_value2_709;
        come_value2_709=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value2_709),info));
        come_call_finalizer3(__dec_obj227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        add_come_last_code(info,"%s",come_value2_709->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_709));
        if(        is_contained_method_generics_types(obj_type_479,info)&&generics_fun_name_574) {
            map$2charphsFunph_remove(info->funcs,generics_fun_name_574);
        }
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj228=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_476);
        come_call_finalizer3(__dec_obj228,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_575;
        generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_599,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_705,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_709,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result385__ = (_Bool)1;
    fun_name_468 = come_decrement_ref_count2(fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_469,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(obj_470) { obj_470 = come_decrement_ref_count2(obj_470, ((struct sNode*)obj_470)->finalize, ((struct sNode*)obj_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(method_block_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_474,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_476,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result385__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result311__;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_460;
struct list_item$1tuple2$2charphsNodephph* it_461;
void* __right_value395 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result316__;
    if(    self==((void*)0)) {
        __result311__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    result_460=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1206, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_461=self->head;
    while(it_461!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_460,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodephp_clone, it_461->item)));
        it_461=it_461->next;
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_460;
    come_call_finalizer3(result_460,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result312__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_458;
struct list_item$1tuple2$2charphsNodephph* prev_it_459;
    it_458=self->head;
    while(it_458!=((void*)0)) {
        prev_it_459=it_458;
        it_458=it_458->next;
        come_call_finalizer3(prev_it_459,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj155;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj155=self->item;
            come_call_finalizer3(__dec_obj155,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj156;
struct sNode* __dec_obj157;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj156=self->v1;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj157=self->v2;
            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_462;
struct tuple2$2charphsNodeph* __dec_obj158;
void* __right_value390 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_463;
struct tuple2$2charphsNodeph* __dec_obj159;
void* __right_value391 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_464;
struct tuple2$2charphsNodeph* __dec_obj160;
struct list$1tuple2$2charphsNodephph* __result313__;
    if(    self->len==0) {
        litem_462=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value389=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_462->prev=((void*)0);
        litem_462->next=((void*)0);
        __dec_obj158=litem_462->item;
        litem_462->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj158,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_462;
        self->head=litem_462;
    }
    else if(    self->len==1) {
        litem_463=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value390=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_463->prev=self->head;
        litem_463->next=((void*)0);
        __dec_obj159=litem_463->item;
        litem_463->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj159,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_463;
        self->head->next=litem_463;
    }
    else {
        litem_464=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value391=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_464->prev=self->tail;
        litem_464->next=((void*)0);
        __dec_obj160=litem_464->item;
        litem_464->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj160,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_464;
        self->tail=litem_464;
    }
    self->len++;
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result314__;
void* __right_value392 = (void*)0;
struct tuple2$2charphsNodeph* result_465;
void* __right_value393 = (void*)0;
char* __dec_obj161;
void* __right_value394 = (void*)0;
struct sNode* __dec_obj162;
struct tuple2$2charphsNodeph* __result315__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_465=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj161=result_465->v1;
        result_465->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj162=result_465->v2;
        result_465->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_465;
    come_call_finalizer3(result_465,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj163;
struct sNode* __dec_obj164;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj163=self->v1;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj164=self->v2;
            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_466;
struct list_item$1tuple2$2charphsNodephph* prev_it_467;
    it_466=self->head;
    while(it_466!=((void*)0)) {
        prev_it_467=it_466;
        it_466=it_466->next;
        come_call_finalizer3(prev_it_467,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj168;
struct sNode* __dec_obj169;
char* __dec_obj170;
struct list$1tuple2$2charphsNodephph* __dec_obj171;
struct buffer* __dec_obj172;
struct list$1sTypeph* __dec_obj173;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj168=self->sname;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        if(        self->obj==gComeFunResultObject) {
            __dec_obj169=self->obj;
            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj170=self->fun_name;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj171=self->params;
            come_call_finalizer3(__dec_obj171,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj172=self->method_block;
            come_call_finalizer3(__dec_obj172,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj173=self->method_generics_types;
            come_call_finalizer3(__dec_obj173,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result320__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_494;
int i_495;
struct CVALUE* __result322__;
struct CVALUE* default_value_496;
struct CVALUE* __result323__;
default_value_496 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_494=self->head;
    i_495=0;
    while(it_494!=((void*)0)) {
        if(        position==i_495) {
            __result322__ = gComeFunResultObject = __result_obj__ = it_494->item;
            gComeFunResultObject = (void*)0;
            return __result322__;
        }
        it_494=it_494->next;
        i_495++;
    }
    memset(&default_value_496,0,sizeof(struct CVALUE*));
    __result323__ = gComeFunResultObject = __result_obj__ = default_value_496;
    come_call_finalizer3(default_value_496,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_502;
int i_503;
struct sType* default_value_504;
struct list$1sTypeph* __result325__;
struct list_item$1sTypeph* it_508;
int i_509;
struct sType* __dec_obj179;
struct list$1sTypeph* __result326__;
default_value_504 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_502=self->len;
        for(        i_503=0;        i_503<position-len_502;        i_503++        ){
            memset(&default_value_504,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_504));
            come_call_finalizer3(default_value_504,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result325__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    it_508=self->head;
    i_509=0;
    while(it_508!=((void*)0)) {
        if(        position==i_509) {
            __dec_obj179=it_508->item;
            it_508->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_508=it_508->next;
        i_509++;
    }
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
struct list_item$1sTypeph* litem_505;
struct sType* __dec_obj176;
void* __right_value417 = (void*)0;
struct list_item$1sTypeph* litem_506;
struct sType* __dec_obj177;
void* __right_value418 = (void*)0;
struct list_item$1sTypeph* litem_507;
struct sType* __dec_obj178;
struct list$1sTypeph* __result324__;
    if(    self->len==0) {
        litem_505=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value416=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1290, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_505->prev=((void*)0);
        litem_505->next=((void*)0);
        __dec_obj176=litem_505->item;
        litem_505->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_505;
        self->head=litem_505;
    }
    else if(    self->len==1) {
        litem_506=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value417=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1300, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_506->prev=self->head;
        litem_506->next=((void*)0);
        __dec_obj177=litem_506->item;
        litem_506->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_506;
        self->head->next=litem_506;
    }
    else {
        litem_507=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value418=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1310, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_507->prev=self->tail;
        litem_507->next=((void*)0);
        __dec_obj178=litem_507->item;
        litem_507->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_507;
        self->tail=litem_507;
    }
    self->len++;
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_517;
struct tuple2$2charphsNodeph* __result327__;
struct tuple2$2charphsNodeph* __result328__;
struct tuple2$2charphsNodeph* result_518;
struct tuple2$2charphsNodeph* __result329__;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_517,0,sizeof(struct tuple2$2charphsNodeph*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_517;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->head;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_518,0,sizeof(struct tuple2$2charphsNodeph*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_518;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_520;
struct tuple2$2charphsNodeph* __result330__;
struct tuple2$2charphsNodeph* __result331__;
struct tuple2$2charphsNodeph* result_521;
struct tuple2$2charphsNodeph* __result332__;
result_520 = (void*)0;
result_521 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_520,0,sizeof(struct tuple2$2charphsNodeph*));
        __result330__ = gComeFunResultObject = __result_obj__ = result_520;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result331__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    memset(&result_521,0,sizeof(struct tuple2$2charphsNodeph*));
    __result332__ = gComeFunResultObject = __result_obj__ = result_521;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_547;
struct tuple2$2charphsTypeph* __result335__;
struct tuple2$2charphsTypeph* __result336__;
struct tuple2$2charphsTypeph* result_548;
struct tuple2$2charphsTypeph* __result337__;
result_547 = (void*)0;
result_548 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_547,0,sizeof(struct tuple2$2charphsTypeph*));
        __result335__ = gComeFunResultObject = __result_obj__ = result_547;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    self->it=self->head;
    if(    self->it) {
        __result336__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    memset(&result_548,0,sizeof(struct tuple2$2charphsTypeph*));
    __result337__ = gComeFunResultObject = __result_obj__ = result_548;
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_550;
struct tuple2$2charphsTypeph* __result338__;
struct tuple2$2charphsTypeph* __result339__;
struct tuple2$2charphsTypeph* result_551;
struct tuple2$2charphsTypeph* __result340__;
result_550 = (void*)0;
result_551 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_550,0,sizeof(struct tuple2$2charphsTypeph*));
        __result338__ = gComeFunResultObject = __result_obj__ = result_550;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result339__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    memset(&result_551,0,sizeof(struct tuple2$2charphsTypeph*));
    __result340__ = gComeFunResultObject = __result_obj__ = result_551;
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_566;
struct CVALUE* __result342__;
struct CVALUE* __result343__;
struct CVALUE* result_567;
struct CVALUE* __result344__;
result_566 = (void*)0;
result_567 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_566,0,sizeof(struct CVALUE*));
        __result342__ = gComeFunResultObject = __result_obj__ = result_566;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    self->it=self->head;
    if(    self->it) {
        __result343__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    memset(&result_567,0,sizeof(struct CVALUE*));
    __result344__ = gComeFunResultObject = __result_obj__ = result_567;
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_569;
struct CVALUE* __result345__;
struct CVALUE* __result346__;
struct CVALUE* result_570;
struct CVALUE* __result347__;
result_569 = (void*)0;
result_570 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_569,0,sizeof(struct CVALUE*));
        __result345__ = gComeFunResultObject = __result_obj__ = result_569;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result346__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    memset(&result_570,0,sizeof(struct CVALUE*));
    __result347__ = gComeFunResultObject = __result_obj__ = result_570;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_587;
unsigned int hash_588;
unsigned int it_589;
struct sFun* __result348__;
struct sFun* __result349__;
struct sFun* __result350__;
struct sFun* __result351__;
default_value_587 = (void*)0;
    memset(&default_value_587,0,sizeof(struct sFun*));
    hash_588=charp_get_hash_key(((char*)key))%self->size;
    it_589=hash_588;
    while((_Bool)1) {
        if(        self->item_existance[it_589]) {
            if(            charp_equals(self->keys[it_589],key)) {
                __result348__ = gComeFunResultObject = __result_obj__ = self->items[it_589];
                come_call_finalizer3(default_value_587,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result348__;
            }
            it_589++;
            if(            it_589>=self->size) {
                it_589=0;
            }
            else if(            it_589==hash_588) {
                __result349__ = gComeFunResultObject = __result_obj__ = default_value_587;
                come_call_finalizer3(default_value_587,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result349__;
            }
        }
        else {
            __result350__ = gComeFunResultObject = __result_obj__ = default_value_587;
            come_call_finalizer3(default_value_587,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result350__;
        }
    }
    __result351__ = gComeFunResultObject = __result_obj__ = default_value_587;
    come_call_finalizer3(default_value_587,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj194;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj194=self->v2;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value497 = (void*)0;
struct list_item$1CVALUEph* litem_606;
struct CVALUE* __dec_obj198;
void* __right_value498 = (void*)0;
struct list_item$1CVALUEph* litem_607;
struct CVALUE* __dec_obj199;
void* __right_value499 = (void*)0;
struct list_item$1CVALUEph* litem_608;
struct CVALUE* __dec_obj200;
struct list$1CVALUEph* __result356__;
    if(    self->len==0) {
        litem_606=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value497=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1220, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_606->prev=((void*)0);
        litem_606->next=((void*)0);
        __dec_obj198=litem_606->item;
        litem_606->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_606;
        self->head=litem_606;
    }
    else if(    self->len==1) {
        litem_607=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value498=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1230, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_607->prev=self->head;
        litem_607->next=((void*)0);
        __dec_obj199=litem_607->item;
        litem_607->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_607;
        self->head->next=litem_607;
    }
    else {
        litem_608=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value499=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1240, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_608->prev=self->tail;
        litem_608->next=((void*)0);
        __dec_obj200=litem_608->item;
        litem_608->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_608;
        self->tail=litem_608;
    }
    self->len++;
    __result356__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_616;
char* __result357__;
char* __result358__;
char* result_617;
char* __result359__;
result_616 = (void*)0;
result_617 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_616,0,sizeof(char*));
        __result357__ = gComeFunResultObject = __result_obj__ = result_616;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    self->it=self->head;
    if(    self->it) {
        __result358__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    memset(&result_617,0,sizeof(char*));
    __result359__ = gComeFunResultObject = __result_obj__ = result_617;
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_619;
char* __result360__;
char* __result361__;
char* result_620;
char* __result362__;
result_619 = (void*)0;
result_620 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_619,0,sizeof(char*));
        __result360__ = gComeFunResultObject = __result_obj__ = result_619;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result361__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    memset(&result_620,0,sizeof(char*));
    __result362__ = gComeFunResultObject = __result_obj__ = result_620;
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_630;
int i_631;
struct CVALUE* default_value_632;
struct list$1CVALUEph* __result367__;
struct list_item$1CVALUEph* it_633;
int i_634;
struct CVALUE* __dec_obj201;
struct list$1CVALUEph* __result368__;
default_value_632 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_630=self->len;
        for(        i_631=0;        i_631<position-len_630;        i_631++        ){
            memset(&default_value_632,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_632));
            come_call_finalizer3(default_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result367__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    it_633=self->head;
    i_634=0;
    while(it_633!=((void*)0)) {
        if(        position==i_634) {
            __dec_obj201=it_633->item;
            it_633->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_633=it_633->next;
        i_634++;
    }
    __result368__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_640;
int i_641;
char* __result369__;
char* default_value_642;
char* __result370__;
default_value_642 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_640=self->head;
    i_641=0;
    while(it_640!=((void*)0)) {
        if(        position==i_641) {
            __result369__ = gComeFunResultObject = __result_obj__ = it_640->item;
            gComeFunResultObject = (void*)0;
            return __result369__;
        }
        it_640=it_640->next;
        i_641++;
    }
    memset(&default_value_642,0,sizeof(char*));
    __result370__ = gComeFunResultObject = __result_obj__ = default_value_642;
    default_value_642 = come_decrement_ref_count2(default_value_642, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_657;
struct sNode* __result375__;
struct sNode* __result376__;
struct sNode* result_658;
struct sNode* __result377__;
result_657 = (void*)0;
result_658 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_657,0,sizeof(struct sNode*));
        __result375__ = gComeFunResultObject = __result_obj__ = result_657;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    self->it=self->head;
    if(    self->it) {
        __result376__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    memset(&result_658,0,sizeof(struct sNode*));
    __result377__ = gComeFunResultObject = __result_obj__ = result_658;
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_660;
struct sNode* __result378__;
struct sNode* __result379__;
struct sNode* result_661;
struct sNode* __result380__;
result_660 = (void*)0;
result_661 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_660,0,sizeof(struct sNode*));
        __result378__ = gComeFunResultObject = __result_obj__ = result_660;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result379__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    memset(&result_661,0,sizeof(struct sNode*));
    __result380__ = gComeFunResultObject = __result_obj__ = result_661;
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value553 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_665;
struct tuple2$2charphsNodeph* __dec_obj204;
void* __right_value554 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_666;
struct tuple2$2charphsNodeph* __dec_obj205;
void* __right_value555 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_667;
struct tuple2$2charphsNodeph* __dec_obj206;
struct list$1tuple2$2charphsNodephph* __result381__;
    if(    self->len==0) {
        litem_665=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value553=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1290, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_665->prev=((void*)0);
        litem_665->next=((void*)0);
        __dec_obj204=litem_665->item;
        litem_665->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj204,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_665;
        self->head=litem_665;
    }
    else if(    self->len==1) {
        litem_666=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value554=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1300, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_666->prev=self->head;
        litem_666->next=((void*)0);
        __dec_obj205=litem_666->item;
        litem_666->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj205,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_666;
        self->head->next=litem_666;
    }
    else {
        litem_667=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value555=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1310, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_667->prev=self->tail;
        litem_667->next=((void*)0);
        __dec_obj206=litem_667->item;
        litem_667->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj206,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_667;
        self->tail=litem_667;
    }
    self->len++;
    __result381__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value652 = (void*)0;
struct sNode* node_714;
void* __right_value653 = (void*)0;
struct sNode* __dec_obj235;
struct sNode* __result388__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1093, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value644=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1093, "struct sMethodCallNode*", (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_714=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value644,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj235=node_714;
    node_714=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_714),info));
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result388__ = gComeFunResultObject = __result_obj__ = node_714;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_714) { node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result386__;
void* __right_value645 = (void*)0;
struct sMethodCallNode* result_715;
void* __right_value646 = (void*)0;
char* __dec_obj229;
void* __right_value647 = (void*)0;
struct sNode* __dec_obj230;
void* __right_value648 = (void*)0;
char* __dec_obj231;
void* __right_value649 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj232;
void* __right_value650 = (void*)0;
struct buffer* __dec_obj233;
void* __right_value651 = (void*)0;
struct list$1sTypeph* __dec_obj234;
struct sMethodCallNode* __result387__;
    if(    self==(void*)0) {
        __result386__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    result_715=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_715->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj229=result_715->sname;
        result_715->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_715->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj230=result_715->obj;
        result_715->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj231=result_715->fun_name;
        result_715->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj232=result_715->params;
        result_715->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj232,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj233=result_715->method_block;
        result_715->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_715->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj234=result_715->method_generics_types;
        result_715->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj234,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_715->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_715->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_715->fun=self->fun;
    }
    __result387__ = gComeFunResultObject = __result_obj__ = result_715;
    come_call_finalizer3(result_715,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_716;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
_Bool parse_method_generics_type_717;
char* p_718;
int sline_719;
void* __right_value659 = (void*)0;
char* word_720;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1sTypeph* method_generics_types_721;
void* __right_value662 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var13 = (void*)0;
struct sType* type_722=0;
char* name_723=0;
_Bool err_724=0;
void* __right_value663 = (void*)0;
char* p_725;
int sline_726;
_Bool err_flag_727;
void* __right_value664 = (void*)0;
char* label_728;
void* __right_value665 = (void*)0;
char* __dec_obj240;
char* __dec_obj241;
_Bool no_comma_729;
_Bool in_fun_param_730;
void* __right_value666 = (void*)0;
struct sNode* node_731;
void* __right_value667 = (void*)0;
struct sNode* __dec_obj242;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct buffer* method_block_732;
int method_block_sline_733;
char* head_734;
void* __right_value670 = (void*)0;
char* tail_735;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct buffer* __dec_obj243;
int len_736;
void* __right_value673 = (void*)0;
char* mem_737;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value677 = (void*)0;
struct sNode* node_738;
void* __right_value678 = (void*)0;
struct sNode* __dec_obj244;
struct sNode* __result390__;
    params_716=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 1102, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephph_push_back(params_716,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1103, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_717=(_Bool)0;
    {
        p_718=info->p;
        sline_719=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_720=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_720,info)) {
                    parse_method_generics_type_717=(_Bool)1;
                }
                word_720 = come_decrement_ref_count2(word_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_718;
        info->sline=sline_719;
    }
    method_generics_types_721=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 1133, "struct list$1sTypeph*", (void*)0, (void*)0))));
    if(    parse_method_generics_type_717&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(__right_value662=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_722=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                name_723=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                err_724=multiple_assign_var13->v3;
                come_call_finalizer3(__right_value662,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_724) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_721,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_722)));
                come_call_finalizer3(type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_723 = come_decrement_ref_count2(name_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    if(    *info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_725=info->p;
            sline_726=info->sline;
            err_flag_727=(_Bool)0;
            label_728=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj240=label_728;
                label_728=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_727=(_Bool)1;
            }
            if(            err_flag_727==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj241=label_728;
                label_728=((void*)0);
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_725;
                info->sline=sline_726;
            }
            no_comma_729=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_730=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_731=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj242=node_731;
            node_731=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_731),info));
            if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_730;
            info->no_comma=no_comma_729;
            list$1tuple2$2charphsNodephph_push_back(params_716,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1209, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(label_728),(struct sNode*)come_increment_ref_count(node_731))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_728 = come_decrement_ref_count2(label_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_731) { node_731 = come_decrement_ref_count2(node_731, ((struct sNode*)node_731)->finalize, ((struct sNode*)node_731)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_728 = come_decrement_ref_count2(label_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_731) { node_731 = come_decrement_ref_count2(node_731, ((struct sNode*)node_731)->finalize, ((struct sNode*)node_731)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_732=((void*)0);
    method_block_sline_733=0;
    if(    *info->p==123) {
        head_734=info->p;
        method_block_sline_733=info->sline;
        ((char*)(__right_value670=skip_block(info)));
        __right_value670 = come_decrement_ref_count2(__right_value670, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_735=info->p;
        __dec_obj243=method_block_732;
        method_block_732=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1233, "struct buffer*", (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj243,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_736=tail_735-head_734;
        mem_737=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_736+1)), "20method.c", 1236, "char*", (void*)0, (void*)0));
        memcpy(mem_737,head_734,len_736);
        mem_737[len_736]=0;
        buffer_append_str(method_block_732,mem_737);
        buffer_append_str(method_block_732,"\n");
        mem_737 = come_decrement_ref_count2(mem_737, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1248, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value676=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1248, "struct sMethodCallNode*", (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_716),method_block_732,method_block_sline_733,method_generics_types_721,(_Bool)0,(_Bool)1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    node_738=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value676,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj244=node_738;
    node_738=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_738),info));
    if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
    __result390__ = gComeFunResultObject = __result_obj__ = node_738;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_716,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_721,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_738) { node_738 = come_decrement_ref_count2(node_738, ((struct sNode*)node_738)->finalize, ((struct sNode*)node_738)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj236;
struct sNode* __dec_obj237;
struct tuple2$2charphsNodeph* __result389__;
    __dec_obj236=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj237=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
    __result389__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj238;
char* __dec_obj239;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj238=self->v1;
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj239=self->v2;
            __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value681 = (void*)0;
struct sNode* __result391__;
void* __right_value682 = (void*)0;
struct sNode* __result392__;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1258, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value680=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1258, "struct sCurrentNode*", (void*)0, (void*)0)),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value681=_inf_value4));
        come_call_finalizer3(__right_value680,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value681) { __right_value681 = come_decrement_ref_count2(__right_value681, ((struct sNode*)__right_value681)->finalize, ((struct sNode*)__right_value681)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value682=string_node_v17(buf,head,head_sline,info)));
    if(__right_value682) { __right_value682 = come_decrement_ref_count2(__right_value682, ((struct sNode*)__right_value682)->finalize, ((struct sNode*)__right_value682)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result392__;
}

