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
struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
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

struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
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
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sCurrentNode* __result214__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result215__;
    __result215__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string(self->sname)));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result216__;
    __result216__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sCurrentNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value252 = (void*)0;
char* class_name_272;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sClass* current_stack_273;
struct sVarTable* vtable_274;
struct map$2charphsVarph* o2_saved_275;
char* it_278;
char* key_281;
void* __right_value255 = (void*)0;
struct sVar* value_282;
void* __right_value295 = (void*)0;
struct sType* type2_296;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct tuple2$2charphsTypeph* item_315;
void* __right_value299 = (void*)0;
struct sType* type3_316;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct tuple2$2charphsTypeph* item2_319;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct map$2charphsVarph* o2_saved_371;
char* it_372;
char* key_373;
void* __right_value316 = (void*)0;
struct sVar* value_374;
void* __right_value317 = (void*)0;
struct sType* type2_375;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct tuple2$2charphsTypeph* item_376;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct CVALUE* come_value_377;
void* __right_value322 = (void*)0;
char* __dec_obj102;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* __dec_obj103;
_Bool __result271__;
    info->current_stack_num++;
    class_name_272=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_273=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 457, "struct sClass*", (void*)0, (void*)0)),class_name_272,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_274=info->lv_table;
    while(vtable_274) {
        for(        o2_saved_275=(struct map$2charphsVarph*)come_increment_ref_count((vtable_274->mVars)),it_278=map$2charphsVarph_begin((o2_saved_275));        !map$2charphsVarph_end((o2_saved_275));        it_278=map$2charphsVarph_next((o2_saved_275))        ){
            key_281=it_278;
            value_282=((struct sVar*)come_null_check(((struct sVar*)(__right_value255=map$2charphsVarphp_operator_load_element(vtable_274->mVars,key_281))), "common.h", 464, 0));
            come_call_finalizer3(__right_value255,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_296=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_282->mType));
            type2_296->mPointerNum++;
            item_315=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 470, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_282->mCValueName)),(struct sType*)come_increment_ref_count(type2_296)));
            if(            value_282->mCValueName!=((void*)0)) {
                if(                strcmp(value_282->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_282->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_282->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_282->mType->mClass->mName,"va_list")||string_operator_equals(value_282->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_296->mArrayNum)==1) {
                    type3_316=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_296));
                    list$1sNodeph_reset(type3_316->mArrayNum);
                    type3_316->mPointerNum=1;
                    type3_316->mOriginIsArray=(_Bool)1;
                    item2_319=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 490, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_282->mCValueName)),(struct sType*)come_increment_ref_count(type3_316)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_273->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item2_319)));
                    value_282->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_316,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_319,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_273->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item_315)));
                }
            }
            come_call_finalizer3(type2_296,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_315,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_275,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_274=vtable_274->mParent;
    }
    output_struct(current_stack_273,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_272),(struct sClass*)come_increment_ref_count(current_stack_273));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_272,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_272);
    vtable_274=info->lv_table;
    while(vtable_274) {
        for(        o2_saved_371=(struct map$2charphsVarph*)come_increment_ref_count((vtable_274->mVars)),it_372=map$2charphsVarph_begin((o2_saved_371));        !map$2charphsVarph_end((o2_saved_371));        it_372=map$2charphsVarph_next((o2_saved_371))        ){
            key_373=it_372;
            value_374=((struct sVar*)come_null_check(((struct sVar*)(__right_value316=map$2charphsVarphp_operator_load_element(vtable_274->mVars,key_373))), "common.h", 515, 1));
            come_call_finalizer3(__right_value316,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_375=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_374->mType));
            item_376=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 519, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(value_374->mCValueName),(struct sType*)come_increment_ref_count(type2_375)));
            if(            value_374->mCValueName!=((void*)0)) {
                if(                strcmp(value_374->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_374->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_374->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_374->mType->mClass->mName,"va_list")||string_operator_equals(value_374->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_375->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_374->mCValueName,value_374->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_374->mCValueName,value_374->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_375,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_376,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_371,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_274=vtable_274->mParent;
    }
    come_value_377=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 548, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj102=come_value_377->c_value;
    come_value_377->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj103=come_value_377->type;
    come_value_377->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 551, "struct sType*", (void*)0, (void*)0)),class_name_272,(_Bool)0,info));
    come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_377->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_377->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_377));
    __result271__ = (_Bool)1;
    class_name_272 = come_decrement_ref_count2(class_name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_273,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_377,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result271__;
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
char* result_276;
char* __result217__;
char* __result218__;
char* result_277;
char* __result219__;
result_276 = (void*)0;
result_277 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_276,0,sizeof(char*));
        __result217__ = gComeFunResultObject = __result_obj__ = result_276;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result218__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    memset(&result_277,0,sizeof(char*));
    __result219__ = gComeFunResultObject = __result_obj__ = result_277;
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_279;
char* __result220__;
char* __result221__;
char* result_280;
char* __result222__;
result_279 = (void*)0;
result_280 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_279,0,sizeof(char*));
        __result220__ = gComeFunResultObject = __result_obj__ = result_279;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result221__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    memset(&result_280,0,sizeof(char*));
    __result222__ = gComeFunResultObject = __result_obj__ = result_280;
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_283;
unsigned int hash_284;
unsigned int it_285;
struct sVar* __result223__;
struct sVar* __result224__;
struct sVar* __result225__;
struct sVar* __result226__;
default_value_283 = (void*)0;
    memset(&default_value_283,0,sizeof(struct sVar*));
    hash_284=charp_get_hash_key(((char*)key))%self->size;
    it_285=hash_284;
    while((_Bool)1) {
        if(        self->item_existance[it_285]) {
            if(            charp_equals(self->keys[it_285],key)) {
                __result223__ = gComeFunResultObject = __result_obj__ = self->items[it_285];
                come_call_finalizer3(default_value_283,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result223__;
            }
            it_285++;
            if(            it_285>=self->size) {
                it_285=0;
            }
            else if(            it_285==hash_284) {
                __result224__ = gComeFunResultObject = __result_obj__ = default_value_283;
                come_call_finalizer3(default_value_283,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result224__;
            }
        }
        else {
            __result225__ = gComeFunResultObject = __result_obj__ = default_value_283;
            come_call_finalizer3(default_value_283,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result225__;
        }
    }
    __result226__ = gComeFunResultObject = __result_obj__ = default_value_283;
    come_call_finalizer3(default_value_283,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj33;
char* __dec_obj34;
struct sType* __dec_obj35;
char* __dec_obj56;
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
            __dec_obj56=self->mFunName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
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
char* __dec_obj40;
char* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1sTypeph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj49;
struct tuple1$1sTypeph* __dec_obj50;
struct sNode* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
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
            come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_286;
struct list_item$1sTypeph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer3(prev_it_287,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_288;
struct list_item$1sTypeph* prev_it_289;
    it_288=self->head;
    while(it_288!=((void*)0)) {
        prev_it_289=it_288;
        it_288=it_288->next;
        come_call_finalizer3(prev_it_289,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_290;
struct list_item$1sNodeph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_292;
struct list_item$1sNodeph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        come_call_finalizer3(prev_it_293,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_294;
struct list_item$1charph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result227__;
void* __right_value256 = (void*)0;
struct sType* result_297;
void* __right_value259 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value260 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value261 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value262 = (void*)0;
char* __dec_obj62;
void* __right_value263 = (void*)0;
char* __dec_obj63;
void* __right_value270 = (void*)0;
struct list$1sTypeph* __dec_obj67;
void* __right_value278 = (void*)0;
struct list$1sNodeph* __dec_obj71;
void* __right_value279 = (void*)0;
struct list$1sTypeph* __dec_obj72;
void* __right_value286 = (void*)0;
struct list$1charph* __dec_obj76;
void* __right_value287 = (void*)0;
struct tuple1$1sTypeph* __dec_obj77;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value289 = (void*)0;
struct tuple1$1sTypeph* __dec_obj79;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value291 = (void*)0;
char* __dec_obj81;
void* __right_value292 = (void*)0;
char* __dec_obj82;
void* __right_value293 = (void*)0;
char* __dec_obj83;
void* __right_value294 = (void*)0;
char* __dec_obj84;
struct sType* __result243__;
    if(    self==(void*)0) {
        __result227__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_297=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_297->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj59=result_297->mNoSolvedGenericsType;
        result_297->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj60=result_297->mOriginalLoadVarType;
        result_297->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj61=result_297->mRefferenceOriginalType;
        result_297->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj62=result_297->mInterfaceName;
        result_297->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj63=result_297->mGenericsName;
        result_297->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj67=result_297->mGenericsTypes;
        result_297->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj71=result_297->mArrayNum;
        result_297->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj71,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_297->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj72=result_297->mParamTypes;
        result_297->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj76=result_297->mParamNames;
        result_297->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj76,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj77=result_297->mResultType;
        result_297->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_297->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj78=result_297->mAlignas;
        result_297->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj79=result_297->mChannelType;
        result_297->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj79,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_297->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_297->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_297->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_297->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_297->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_297->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_297->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_297->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_297->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_297->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_297->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_297->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_297->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_297->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_297->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_297->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_297->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_297->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_297->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_297->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_297->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_297->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_297->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_297->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_297->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_297->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj80=result_297->mSizeNum;
        result_297->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_297->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj81=result_297->mOriginalTypeName;
        result_297->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_297->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_297->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_297->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_297->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_297->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_297->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_297->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_297->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj82=result_297->mAsmName;
        result_297->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_297->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_297->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_297->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_297->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_297->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_297->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj83=result_297->mTupleName;
        result_297->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj84=result_297->mAttribute;
        result_297->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_297->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_297;
    come_call_finalizer3(result_297,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result228__;
void* __right_value257 = (void*)0;
struct tuple1$1sTypeph* result_298;
void* __right_value258 = (void*)0;
struct sType* __dec_obj57;
struct tuple1$1sTypeph* __result229__;
    if(    self==(void*)0) {
        __result228__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_298=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj57=result_298->v1;
        result_298->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_298;
    come_call_finalizer3(result_298,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj58;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj58=self->v1;
            come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result230__;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sTypeph* result_299;
struct list_item$1sTypeph* it_300;
void* __right_value269 = (void*)0;
struct list$1sTypeph* __result233__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_299=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_300=self->head;
    while(it_300!=((void*)0)) {
        list$1sTypeph_add(result_299,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_300->item)));
        it_300=it_300->next;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_299;
    come_call_finalizer3(result_299,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result231__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list_item$1sTypeph* litem_301;
struct sType* __dec_obj64;
void* __right_value267 = (void*)0;
struct list_item$1sTypeph* litem_302;
struct sType* __dec_obj65;
void* __right_value268 = (void*)0;
struct list_item$1sTypeph* litem_303;
struct sType* __dec_obj66;
struct list$1sTypeph* __result232__;
    if(    self->len==0) {
        litem_301=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value266=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_301->prev=((void*)0);
        litem_301->next=((void*)0);
        __dec_obj64=litem_301->item;
        litem_301->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_301;
        self->head=litem_301;
    }
    else if(    self->len==1) {
        litem_302=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value267=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_302->prev=self->head;
        litem_302->next=((void*)0);
        __dec_obj65=litem_302->item;
        litem_302->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_302;
        self->head->next=litem_302;
    }
    else {
        litem_303=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value268=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_303->prev=self->tail;
        litem_303->next=((void*)0);
        __dec_obj66=litem_303->item;
        litem_303->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_303;
        self->tail=litem_303;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result234__;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sNodeph* result_304;
struct list_item$1sNodeph* it_305;
void* __right_value277 = (void*)0;
struct list$1sNodeph* __result239__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_304=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_305=self->head;
    while(it_305!=((void*)0)) {
        list$1sNodeph_add(result_304,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_305->item)));
        it_305=it_305->next;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_304;
    come_call_finalizer3(result_304,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_306;
struct sNode* __dec_obj68;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_307;
struct sNode* __dec_obj69;
void* __right_value275 = (void*)0;
struct list_item$1sNodeph* litem_308;
struct sNode* __dec_obj70;
struct list$1sNodeph* __result236__;
    if(    self->len==0) {
        litem_306=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_306->prev=((void*)0);
        litem_306->next=((void*)0);
        __dec_obj68=litem_306->item;
        litem_306->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_306;
        self->head=litem_306;
    }
    else if(    self->len==1) {
        litem_307=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_307->prev=self->head;
        litem_307->next=((void*)0);
        __dec_obj69=litem_307->item;
        litem_307->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_307;
        self->head->next=litem_307;
    }
    else {
        litem_308=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value275=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_308->prev=self->tail;
        litem_308->next=((void*)0);
        __dec_obj70=litem_308->item;
        litem_308->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_308;
        self->tail=litem_308;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result237__;
void* __right_value276 = (void*)0;
struct sNode* result_309;
struct sNode* __result238__;
    if(    self==(void*)0) {
        __result237__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_309=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_309->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_309->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_309->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_309->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_309->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_309->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_309->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_309->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_309->kind=self->kind;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_309;
    if(result_309) { result_309 = come_decrement_ref_count2(result_309, ((struct sNode*)result_309)->finalize, ((struct sNode*)result_309)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result240__;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* result_310;
struct list_item$1charph* it_311;
void* __right_value285 = (void*)0;
struct list$1charph* __result242__;
    if(    self==((void*)0)) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_310=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_311=self->head;
    while(it_311!=((void*)0)) {
        list$1charph_add(result_310,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_311->item)));
        it_311=it_311->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_310;
    come_call_finalizer3(result_310,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_312;
char* __dec_obj73;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_313;
char* __dec_obj74;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_314;
char* __dec_obj75;
struct list$1charph* __result241__;
    if(    self->len==0) {
        litem_312=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_312->prev=((void*)0);
        litem_312->next=((void*)0);
        __dec_obj73=litem_312->item;
        litem_312->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_312;
        self->head=litem_312;
    }
    else if(    self->len==1) {
        litem_313=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_313->prev=self->head;
        litem_313->next=((void*)0);
        __dec_obj74=litem_313->item;
        litem_313->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_313;
        self->head->next=litem_313;
    }
    else {
        litem_314=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_314->prev=self->tail;
        litem_314->next=((void*)0);
        __dec_obj75=litem_314->item;
        litem_314->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_314;
        self->tail=litem_314;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj85;
struct sType* __dec_obj86;
struct tuple2$2charphsTypeph* __result244__;
    __dec_obj85=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj86=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj87;
struct sType* __dec_obj88;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj87=self->v1;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj88=self->v2;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sNodeph* it_317;
struct list_item$1sNodeph* prev_it_318;
struct list$1sNodeph* __result245__;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_320;
struct tuple2$2charphsTypeph* __dec_obj89;
void* __right_value304 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_321;
struct tuple2$2charphsTypeph* __dec_obj90;
void* __right_value305 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_322;
struct tuple2$2charphsTypeph* __dec_obj91;
struct list$1tuple2$2charphsTypephph* __result246__;
    if(    self->len==0) {
        litem_320=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value303=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1305, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_320->prev=((void*)0);
        litem_320->next=((void*)0);
        __dec_obj89=litem_320->item;
        litem_320->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_320;
        self->head=litem_320;
    }
    else if(    self->len==1) {
        litem_321=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value304=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1315, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_321->prev=self->head;
        litem_321->next=((void*)0);
        __dec_obj90=litem_321->item;
        litem_321->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_321;
        self->head->next=litem_321;
    }
    else {
        litem_322=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value305=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1325, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_322->prev=self->tail;
        litem_322->next=((void*)0);
        __dec_obj91=litem_322->item;
        litem_322->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_322;
        self->tail=litem_322;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result247__;
void* __right_value306 = (void*)0;
struct tuple2$2charphsTypeph* result_323;
void* __right_value307 = (void*)0;
char* __dec_obj92;
void* __right_value308 = (void*)0;
struct sType* __dec_obj93;
struct tuple2$2charphsTypeph* __result248__;
    if(    self==(void*)0) {
        __result247__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    result_323=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj92=result_323->v1;
        result_323->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj93=result_323->v2;
        result_323->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_323;
    come_call_finalizer3(result_323,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj94;
struct sType* __dec_obj95;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj94=self->v1;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj95=self->v2;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_324;
int i_325;
    for(    i_324=0;    i_324<self->size;    i_324++    ){
        if(        self->item_existance[i_324]) {
            if(            1) {
                come_call_finalizer3(self->items[i_324],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_325=0;    i_325<self->size;    i_325++    ){
        if(        self->item_existance[i_325]) {
            if(            1) {
                self->keys[i_325] = come_decrement_ref_count2(self->keys[i_325], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_347;
unsigned int it_348;
_Bool same_key_exist_365;
char* it2_368;
struct map$2charphsClassph* __result269__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_347=charp_get_hash_key(key)%self->size;
    it_348=hash_347;
    while((_Bool)1) {
        if(        self->item_existance[it_348]) {
            if(            charp_equals(self->keys[it_348],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_348]);
                    self->keys[it_348] = come_decrement_ref_count2(self->keys[it_348], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_348]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_348]);
                    self->keys[it_348]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_348],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_348]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_348]=item;
                }
                break;
            }
            it_348++;
            if(            it_348>=self->size) {
                it_348=0;
            }
            else if(            it_348==hash_347) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_348]=(_Bool)1;
            if(            1) {
                self->keys[it_348]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_348]=key;
            }
            if(            1) {
                self->items[it_348]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_348]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_365=(_Bool)0;
    for(    it2_368=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_368=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_368,key)) {
            same_key_exist_365=(_Bool)1;
        }
    }
    if(    !same_key_exist_365) {
        list$1charp_push_back(self->key_list,key);
    }
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_326;
void* __right_value311 = (void*)0;
char** keys_327;
void* __right_value312 = (void*)0;
struct sClass** items_328;
void* __right_value313 = (void*)0;
_Bool* item_existance_329;
int len_330;
char* it_333;
struct sClass* default_value_336;
void* __right_value314 = (void*)0;
struct sClass* it2_337;
unsigned int hash_344;
int n_345;
struct sClass* default_value_346;
void* __right_value315 = (void*)0;
default_value_336 = (void*)0;
default_value_346 = (void*)0;
    size_326=self->size*10;
    keys_327=(char**)come_increment_ref_count(((char**)(__right_value311=(char**)come_calloc(1, sizeof(char*)*(1*(size_326)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_328=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value312=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_326)), "./comelang.h", 2709, "struct sClass**", (void*)0, (void*)0))));
    item_existance_329=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value313=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_326)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_330=0;
    for(    it_333=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_333=map$2charphsClassph_next(self)    ){
        memset(&default_value_336,0,sizeof(struct sClass*));
        it2_337=((struct sClass*)(__right_value314=map$2charphsClassph_at(self,it_333,default_value_336)));
        come_call_finalizer3(__right_value314,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_344=charp_get_hash_key(it_333)%size_326;
        n_345=hash_344;
        while((_Bool)1) {
            if(            item_existance_329[n_345]) {
                n_345++;
                if(                n_345>=size_326) {
                    n_345=0;
                }
                else if(                n_345==hash_344) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_329[n_345]=(_Bool)1;
                keys_327[n_345]=it_333;
                items_328[n_345]=((struct sClass*)(__right_value315=map$2charphsClassph_at(self,it_333,default_value_346)));
                come_call_finalizer3(__right_value315,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_330++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_327;
    self->items=items_328;
    self->item_existance=item_existance_329;
    self->size=size_326;
    self->len=len_330;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_331;
char* __result249__;
char* __result250__;
char* result_332;
char* __result251__;
result_331 = (void*)0;
result_332 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_331,0,sizeof(char*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_331;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_332,0,sizeof(char*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_332;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_334;
char* __result252__;
char* __result253__;
char* result_335;
char* __result254__;
result_334 = (void*)0;
result_335 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_334,0,sizeof(char*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_334;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_335,0,sizeof(char*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_335;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_338;
unsigned int it_339;
struct sClass* __result255__;
struct sClass* __result256__;
struct sClass* __result257__;
struct sClass* __result258__;
    hash_338=charp_get_hash_key(((char*)key))%self->size;
    it_339=hash_338;
    while((_Bool)1) {
        if(        self->item_existance[it_339]) {
            if(            charp_equals(self->keys[it_339],key)) {
                __result255__ = gComeFunResultObject = __result_obj__ = self->items[it_339];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
            it_339++;
            if(            it_339>=self->size) {
                it_339=0;
            }
            else if(            it_339==hash_338) {
                __result256__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
        }
        else {
            __result257__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result257__;
        }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj96;
struct list$1tuple2$2charphsTypephph* __dec_obj97;
char* __dec_obj99;
char* __dec_obj100;
char* __dec_obj101;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj96=self->mName;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj97=self->mFields;
            come_call_finalizer3(__dec_obj97,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj99=self->mDeclareSName;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj100=self->mParentClassName;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj101=self->mAttribute;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_340;
struct list_item$1tuple2$2charphsTypephph* prev_it_341;
    it_340=self->head;
    while(it_340!=((void*)0)) {
        prev_it_341=it_340;
        it_340=it_340->next;
        come_call_finalizer3(prev_it_341,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj98;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj98=self->item;
            come_call_finalizer3(__dec_obj98,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_342;
struct list_item$1tuple2$2charphsTypephph* prev_it_343;
    it_342=self->head;
    while(it_342!=((void*)0)) {
        prev_it_343=it_342;
        it_342=it_342->next;
        come_call_finalizer3(prev_it_343,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_349;
struct list_item$1charp* it_350;
struct list$1charp* __result262__;
    it2_349=0;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        if(        charp_equals(it_350->item,item)) {
            list$1charp_delete(self,it2_349,it2_349+1);
            break;
        }
        it2_349++;
        it_350=it_350->next;
    }
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_351;
struct list$1charp* __result259__;
struct list_item$1charp* it_354;
int i_355;
struct list_item$1charp* prev_it_356;
struct list_item$1charp* it_357;
int i_358;
struct list_item$1charp* prev_it_359;
struct list_item$1charp* it_360;
struct list_item$1charp* head_prev_it_361;
struct list_item$1charp* tail_it_362;
int i_363;
struct list_item$1charp* prev_it_364;
struct list$1charp* __result261__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_351=tail;
        tail=head;
        head=tmp_351;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result259__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_354=self->head;
        i_355=0;
        while(it_354!=((void*)0)) {
            if(            i_355<tail) {
                prev_it_356=it_354;
                it_354=it_354->next;
                i_355++;
                come_call_finalizer3(prev_it_356,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_355==tail) {
                self->head=it_354;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_354=it_354->next;
                i_355++;
            }
        }
    }
    else if(    tail==self->len) {
        it_357=self->head;
        i_358=0;
        while(it_357!=((void*)0)) {
            if(            i_358==head) {
                self->tail=it_357->prev;
                self->tail->next=((void*)0);
            }
            if(            i_358>=head) {
                prev_it_359=it_357;
                it_357=it_357->next;
                i_358++;
                come_call_finalizer3(prev_it_359,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_357=it_357->next;
                i_358++;
            }
        }
    }
    else {
        it_360=self->head;
        head_prev_it_361=((void*)0);
        tail_it_362=((void*)0);
        i_363=0;
        while(it_360!=((void*)0)) {
            if(            i_363==head) {
                head_prev_it_361=it_360->prev;
            }
            if(            i_363==tail) {
                tail_it_362=it_360;
            }
            if(            i_363>=head&&i_363<tail) {
                prev_it_364=it_360;
                it_360=it_360->next;
                i_363++;
                come_call_finalizer3(prev_it_364,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_360=it_360->next;
                i_363++;
            }
        }
        if(        head_prev_it_361!=((void*)0)) {
            head_prev_it_361->next=tail_it_362;
        }
        if(        tail_it_362!=((void*)0)) {
            tail_it_362->prev=head_prev_it_361;
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_352;
struct list_item$1charp* prev_it_353;
struct list$1charp* __result260__;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_366;
char* __result263__;
char* __result264__;
char* result_367;
char* __result265__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_366,0,sizeof(char*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->it=self->head;
    if(    self->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_367,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_369;
char* __result266__;
char* __result267__;
char* result_370;
char* __result268__;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_369,0,sizeof(char*));
        __result266__ = gComeFunResultObject = __result_obj__ = result_369;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result267__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    memset(&result_370,0,sizeof(char*));
    __result268__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value325 = (void*)0;
struct list_item$1CVALUEph* litem_378;
struct CVALUE* __dec_obj104;
void* __right_value326 = (void*)0;
struct list_item$1CVALUEph* litem_379;
struct CVALUE* __dec_obj108;
void* __right_value327 = (void*)0;
struct list_item$1CVALUEph* litem_380;
struct CVALUE* __dec_obj109;
struct list$1CVALUEph* __result270__;
    if(    self->len==0) {
        litem_378=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value325=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1305, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj104=litem_378->item;
        litem_378->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value326=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1315, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj108=litem_379->item;
        litem_379->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value327=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1325, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj109=litem_380->item;
        litem_380->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj105;
struct sType* __dec_obj106;
char* __dec_obj107;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj105=self->c_value;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj106=self->type;
            come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj107=self->c_value_without_right_value_objects;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
char* none_generics_name_381;
void* __right_value329 = (void*)0;
char* fun_name2_382;
void* __right_value330 = (void*)0;
char* fun_name3_383;
void* __right_value331 = (void*)0;
struct sGenericsFun* generics_fun_384;
void* __right_value332 = (void*)0;
_Bool _if_conditional1;
void* __right_value333 = (void*)0;
char* __result276__;
char* __result277__;
    none_generics_name_381=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_382=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_383=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_381,fun_name));
    generics_fun_384=((struct sGenericsFun*)(__right_value331=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_383,((void*)0))));
    come_call_finalizer3(__right_value331,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_384) {
        if(        (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_382)),generics_fun_384,type,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_383);
            __result276__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value333=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            none_generics_name_381 = come_decrement_ref_count2(none_generics_name_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_382 = come_decrement_ref_count2(fun_name2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_383 = come_decrement_ref_count2(fun_name3_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result276__;
        }
    }
    __result277__ = gComeFunResultObject = __result_obj__ = fun_name2_382;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    none_generics_name_381 = come_decrement_ref_count2(none_generics_name_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_382 = come_decrement_ref_count2(fun_name2_382, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_383 = come_decrement_ref_count2(fun_name3_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_385;
unsigned int it_386;
struct sGenericsFun* __result272__;
struct sGenericsFun* __result273__;
struct sGenericsFun* __result274__;
struct sGenericsFun* __result275__;
    hash_385=charp_get_hash_key(((char*)key))%self->size;
    it_386=hash_385;
    while((_Bool)1) {
        if(        self->item_existance[it_386]) {
            if(            charp_equals(self->keys[it_386],key)) {
                __result272__ = gComeFunResultObject = __result_obj__ = self->items[it_386];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result272__;
            }
            it_386++;
            if(            it_386>=self->size) {
                it_386=0;
            }
            else if(            it_386==hash_385) {
                __result273__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result273__;
            }
        }
        else {
            __result274__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result274__;
        }
    }
    __result275__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj110;
struct list$1charph* __dec_obj111;
struct list$1charph* __dec_obj112;
char* __dec_obj113;
struct sType* __dec_obj114;
struct list$1sTypeph* __dec_obj115;
struct list$1charph* __dec_obj116;
struct list$1charph* __dec_obj117;
char* __dec_obj118;
char* __dec_obj119;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj110=self->mImplType;
            come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj111=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj112=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj112,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj113=self->mName;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj114=self->mResultType;
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj115=self->mParamTypes;
            come_call_finalizer3(__dec_obj115,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj116=self->mParamNames;
            come_call_finalizer3(__dec_obj116,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj117=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj118=self->mBlock;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj119=self->mGenericsSName;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value338 = (void*)0;
struct sNode* current_stack_frame_node_387;
_Bool Value_389;
_Bool __result280__;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct buffer* method_block2_393;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* method_block_type_394;
void* __right_value344 = (void*)0;
char* class_name_398;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sClass* current_stack_frame_struct_402;
void* __right_value347 = (void*)0;
_Bool __result287__;
void* __right_value348 = (void*)0;
struct sType* result_type_403;
struct list$1sTypeph* param_types_404;
struct list$1charph* param_names_405;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct buffer* all_alhabet_sname_406;
char* p_407;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
int i_408;
struct list$1sTypeph* o2_saved_409;
struct sType* it_412;
struct sType* param_type_415;
void* __right_value353 = (void*)0;
char* param_name_416;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* param_name_417;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
char* param_name_418;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct buffer* source3_419;
char* p_420;
char* head_421;
int sline_422;
struct buffer* __dec_obj122;
void* __right_value360 = (void*)0;
struct sNode* node_423;
_Bool Value_424;
_Bool __result294__;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
char* method_block_name_425;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct CVALUE* come_value2_426;
void* __right_value365 = (void*)0;
struct sFun* fun2_427;
_Bool __result299__;
struct sType* method_block_type2_430;
void* __right_value366 = (void*)0;
char* __dec_obj140;
void* __right_value367 = (void*)0;
struct sType* __dec_obj141;
struct buffer* __dec_obj142;
void* __right_value368 = (void*)0;
struct sType* __dec_obj143;
_Bool contained_method_generics_method_block_431;
struct list$1sTypeph* o2_saved_432;
struct sType* it_433;
_Bool __result301__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 32, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value335=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 32, "struct sCurrentNode*", (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_387=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value335,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_389=node_compile(current_stack_frame_node_387,info);
    if(    !Value_389) {
        __result280__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_387) { current_stack_frame_node_387 = come_decrement_ref_count2(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result280__;
    }
    else {
    }
    come_value_392=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_392));
    dec_stack_ptr(1,info);
    method_block2_393=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 42, "struct buffer*", (void*)0, (void*)0))));
    method_block_type_394=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value342=list$1sTypephp_operator_load_element(fun->mParamTypes,-1))), "20method.c", 43, 2))));
    come_call_finalizer3(__right_value342,sType_finalize, 0, 1, 0, 0, (void*)0);
    class_name_398=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)come_null_check(((struct sType*)(__right_value345=list$1sTypephp_operator_load_element(method_block_type_394->mParamTypes,0))), "20method.c", 47, 3))->mClass=((struct sClass*)(__right_value346=map$2charphsClassphp_operator_load_element(info->classes,class_name_398)));
    come_call_finalizer3(__right_value345,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value346,sClass_finalize, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_402=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value347=map$2charphsClassphp_operator_load_element(info->classes,class_name_398)));
    come_call_finalizer3(__right_value347,sClass_finalize, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_394->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result287__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_387) { current_stack_frame_node_387 = come_decrement_ref_count2(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_393,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_398 = come_decrement_ref_count2(class_name_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result287__;
    }
    result_type_403=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_394->mResultType->v1));
    result_type_403->mStatic=(_Bool)0;
    param_types_404=method_block_type_394->mParamTypes;
    param_names_405=method_block_type_394->mParamNames;
    all_alhabet_sname_406=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 63, "struct buffer*", (void*)0, (void*)0))));
    {
        p_407=info->sname;
        while(*p_407) {
            if(            xisalnum(*p_407)) {
                buffer_append_char(all_alhabet_sname_406,*p_407++);
            }
            else {
                p_407++;
            }
        }
    }
    buffer_append_format(method_block2_393,"%s method_block%d_%s(",((char*)(__right_value351=make_type_name_string(result_type_403,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value352=buffer_to_string(all_alhabet_sname_406))));
    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_408=0;
    for(    o2_saved_409=(param_types_404),it_412=list$1sTypeph_begin((o2_saved_409));    !list$1sTypeph_end((o2_saved_409));    it_412=list$1sTypeph_next((o2_saved_409))    ){
        param_type_415=it_412;
        if(        i_408==0) {
            param_name_416=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_393,"%s",((char*)(__right_value354=make_define_var(param_type_415,param_name_416,(_Bool)0,info))));
            __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_416 = come_decrement_ref_count2(param_name_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        i_408==1) {
            param_name_417=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_393,"%s",((char*)(__right_value356=make_define_var_no_solved(param_type_415,param_name_417,(_Bool)0,(_Bool)0,info))));
            __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_417 = come_decrement_ref_count2(param_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            param_name_418=(char*)come_increment_ref_count(xsprintf("it%d",i_408));
            buffer_append_format(method_block2_393,"%s",((char*)(__right_value358=make_define_var_no_solved(param_type_415,param_name_418,(_Bool)0,(_Bool)0,info))));
            __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_418 = come_decrement_ref_count2(param_name_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_408!=list$1sTypeph_length(param_types_404)-1) {
            buffer_append_str(method_block2_393,",");
        }
        i_408++;
    }
    buffer_append_str(method_block2_393,")\n");
    buffer_append_str(method_block2_393,((char*)(__right_value359=buffer_to_string(method_block))));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_419=(struct buffer*)come_increment_ref_count(info->source);
    p_420=info->p;
    head_421=info->head;
    sline_422=info->sline;
    __dec_obj122=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_393);
    come_call_finalizer3(__dec_obj122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_423=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_424=node_compile(node_423,info);
    if(    !Value_424) {
        __result294__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_387) { current_stack_frame_node_387 = come_decrement_ref_count2(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_393,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_398 = come_decrement_ref_count2(class_name_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_406,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_419,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_423) { node_423 = come_decrement_ref_count2(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result294__;
    }
    else {
    }
    method_block_name_425=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value361=buffer_to_string(all_alhabet_sname_406)))));
    __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_426=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 128, "struct CVALUE*", (void*)0, (void*)0))));
    fun2_427=((struct sFun*)(__right_value365=map$2charphsFunph_at(info->funcs,method_block_name_425,((void*)0))));
    come_call_finalizer3(__right_value365,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun2_427==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_425);
        __result299__ = (_Bool)1;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_387) { current_stack_frame_node_387 = come_decrement_ref_count2(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_393,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_398 = come_decrement_ref_count2(class_name_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_406,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_419,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_423) { node_423 = come_decrement_ref_count2(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_425 = come_decrement_ref_count2(method_block_name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result299__;
    }
    method_block_type2_430=fun2_427->mLambdaType;
    __dec_obj140=come_value2_426->c_value;
    come_value2_426->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_425));
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj141=come_value2_426->type;
    come_value2_426->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_430));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_426->var=((void*)0);
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_426));
    __dec_obj142=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_419);
    come_call_finalizer3(__dec_obj142,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_420;
    info->head=head_421;
    info->sline=sline_422;
    info->current_stack_frame_struct=current_stack_frame_struct_402;
    __dec_obj143=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_431=(_Bool)0;
    for(    o2_saved_432=(param_types_404),it_433=list$1sTypeph_begin((o2_saved_432));    !list$1sTypeph_end((o2_saved_432));    it_433=list$1sTypeph_next((o2_saved_432))    ){
        if(        is_contained_method_generics_types(it_433,info)) {
            contained_method_generics_method_block_431=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_403,info)) {
        contained_method_generics_method_block_431=(_Bool)1;
    }
    if(    contained_method_generics_method_block_431) {
        map$2charphsFunph_remove(info->funcs,method_block_name_425);
    }
    __result301__ = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_387) { current_stack_frame_node_387 = come_decrement_ref_count2(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_393,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
    class_name_398 = come_decrement_ref_count2(class_name_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_406,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_419,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_423) { node_423 = come_decrement_ref_count2(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
    method_block_name_425 = come_decrement_ref_count2(method_block_name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result301__;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result278__;
void* __right_value336 = (void*)0;
struct sCurrentNode* result_388;
void* __right_value337 = (void*)0;
char* __dec_obj120;
struct sCurrentNode* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_388=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_388->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj120=result_388->sname;
        result_388->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_388->sline_real=self->sline_real;
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_388;
    come_call_finalizer3(result_388,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_390;
struct list_item$1CVALUEph* prev_it_391;
    it_390=self->head;
    while(it_390!=((void*)0)) {
        prev_it_391=it_390;
        it_390=it_390->next;
        come_call_finalizer3(prev_it_391,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj121;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj121=self->item;
            come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_395;
int i_396;
struct sType* __result281__;
struct sType* default_value_397;
struct sType* __result282__;
default_value_397 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_395=self->head;
    i_396=0;
    while(it_395!=((void*)0)) {
        if(        position==i_396) {
            __result281__ = gComeFunResultObject = __result_obj__ = it_395->item;
            gComeFunResultObject = (void*)0;
            return __result281__;
        }
        it_395=it_395->next;
        i_396++;
    }
    memset(&default_value_397,0,sizeof(struct sType*));
    __result282__ = gComeFunResultObject = __result_obj__ = default_value_397;
    come_call_finalizer3(default_value_397,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_399;
unsigned int hash_400;
unsigned int it_401;
struct sClass* __result283__;
struct sClass* __result284__;
struct sClass* __result285__;
struct sClass* __result286__;
default_value_399 = (void*)0;
    memset(&default_value_399,0,sizeof(struct sClass*));
    hash_400=charp_get_hash_key(((char*)key))%self->size;
    it_401=hash_400;
    while((_Bool)1) {
        if(        self->item_existance[it_401]) {
            if(            charp_equals(self->keys[it_401],key)) {
                __result283__ = gComeFunResultObject = __result_obj__ = self->items[it_401];
                come_call_finalizer3(default_value_399,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result283__;
            }
            it_401++;
            if(            it_401>=self->size) {
                it_401=0;
            }
            else if(            it_401==hash_400) {
                __result284__ = gComeFunResultObject = __result_obj__ = default_value_399;
                come_call_finalizer3(default_value_399,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result284__;
            }
        }
        else {
            __result285__ = gComeFunResultObject = __result_obj__ = default_value_399;
            come_call_finalizer3(default_value_399,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result285__;
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = default_value_399;
    come_call_finalizer3(default_value_399,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_410;
struct sType* __result288__;
struct sType* __result289__;
struct sType* result_411;
struct sType* __result290__;
result_410 = (void*)0;
result_411 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_410,0,sizeof(struct sType*));
        __result288__ = gComeFunResultObject = __result_obj__ = result_410;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    self->it=self->head;
    if(    self->it) {
        __result289__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    memset(&result_411,0,sizeof(struct sType*));
    __result290__ = gComeFunResultObject = __result_obj__ = result_411;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_413;
struct sType* __result291__;
struct sType* __result292__;
struct sType* result_414;
struct sType* __result293__;
result_413 = (void*)0;
result_414 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_413,0,sizeof(struct sType*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_413;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_414,0,sizeof(struct sType*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_414;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_428;
unsigned int it_429;
struct sFun* __result295__;
struct sFun* __result296__;
struct sFun* __result297__;
struct sFun* __result298__;
    hash_428=charp_get_hash_key(((char*)key))%self->size;
    it_429=hash_428;
    while((_Bool)1) {
        if(        self->item_existance[it_429]) {
            if(            charp_equals(self->keys[it_429],key)) {
                __result295__ = gComeFunResultObject = __result_obj__ = self->items[it_429];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result295__;
            }
            it_429++;
            if(            it_429>=self->size) {
                it_429=0;
            }
            else if(            it_429==hash_428) {
                __result296__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result296__;
            }
        }
        else {
            __result297__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result297__;
        }
    }
    __result298__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj123;
struct sType* __dec_obj124;
struct list$1sTypeph* __dec_obj125;
struct list$1charph* __dec_obj126;
struct list$1charph* __dec_obj127;
struct sType* __dec_obj128;
struct sBlock* __dec_obj129;
struct buffer* __dec_obj132;
struct buffer* __dec_obj133;
struct buffer* __dec_obj134;
struct buffer* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj123=self->mName;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj124=self->mResultType;
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj125=self->mParamTypes;
            come_call_finalizer3(__dec_obj125,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj126=self->mParamNames;
            come_call_finalizer3(__dec_obj126,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj127=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj128=self->mLambdaType;
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj129=self->mBlock;
            come_call_finalizer3(__dec_obj129,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj132=self->mSource;
            come_call_finalizer3(__dec_obj132,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj133=self->mSourceHead;
            come_call_finalizer3(__dec_obj133,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj134=self->mSourceHead2;
            come_call_finalizer3(__dec_obj134,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj135=self->mSourceDefer;
            come_call_finalizer3(__dec_obj135,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj136=self->mComeHeader;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj137=self->mDeclareSName;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj138=self->mAttribute;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj139=self->mFunAttribute;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj130;
struct sVarTable* __dec_obj131;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj130=self->mNodes;
            come_call_finalizer3(__dec_obj130,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj131=self->mVarTable;
            come_call_finalizer3(__dec_obj131,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_434;
unsigned int it_435;
struct map$2charphsFunph* __result300__;
    hash_434=charp_get_hash_key(((char*)key))%self->size;
    it_435=hash_434;
    while((_Bool)1) {
        if(        self->item_existance[it_435]) {
            if(            charp_equals(self->keys[it_435],key)) {
                list$1charp_remove(self->key_list,self->keys[it_435]);
                self->item_existance[it_435]=(_Bool)0;
                if(                1) {
                    self->keys[it_435] = come_decrement_ref_count2(self->keys[it_435], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_435]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_435],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_435]=((void*)0);
                self->len--;
                break;
            }
            it_435++;
            if(            it_435>=self->size) {
                it_435=0;
            }
            else if(            it_435==hash_434) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result300__;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj144;
void* __right_value371 = (void*)0;
char* __dec_obj145;
void* __right_value381 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj156;
void* __right_value382 = (void*)0;
struct buffer* __dec_obj157;
void* __right_value383 = (void*)0;
struct list$1sTypeph* __dec_obj158;
struct sMethodCallNode* __result308__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj144=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj145=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj156=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj156,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj157=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    come_call_finalizer3(__dec_obj157,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj158=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, method_generics_types));
    come_call_finalizer3(__dec_obj158,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
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
void* __right_value384 = (void*)0;
char* __result309__;
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value384=__builtin_string("sMethodCallNode")));
    __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_446;
struct list$1tuple2$2charphsNodephph* params_447;
struct sNode* obj_448;
struct buffer* method_block_449;
int method_block_sline_450;
_Bool no_infference_method_generics_451;
struct list$1sTypeph* method_generics_types_452;
_Bool recursive_453;
struct list$1sTypeph* method_generics_types_before_454;
struct list$1sTypeph* __dec_obj165;
void* __right_value385 = (void*)0;
struct list$1sTypeph* __dec_obj166;
_Bool Value_455;
_Bool __result310__;
void* __right_value386 = (void*)0;
struct CVALUE* obj_value_456;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
char* __dec_obj167;
void* __right_value389 = (void*)0;
struct sType* obj_type_457;
_Bool no_output_come_code_458;
struct sType* type_459;
void* __right_value390 = (void*)0;
char* none_generics_name_460;
void* __right_value391 = (void*)0;
char* fun_name2_461;
void* __right_value392 = (void*)0;
char* fun_name3_462;
void* __right_value393 = (void*)0;
struct sGenericsFun* generics_fun_463;
_Bool method_generics_464;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* generics_fun_name_465;
void* __right_value397 = (void*)0;
struct sFun* fun_466;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1CVALUEph* come_params_467;
_Bool no_output_come_code_468;
_Bool __result312__;
void* __right_value400 = (void*)0;
struct CVALUE* method_block_node_469;
void* __right_value401 = (void*)0;
struct sType* method_block_lambda_type_473;
void* __right_value402 = (void*)0;
struct sType* method_block_result_type_474;
void* __right_value403 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_475;
struct sType* generics_fun_method_block_result_type_476;
int method_generics_num_477;
void* __right_value407 = (void*)0;
int n_486;
struct list$1sTypeph* o2_saved_487;
struct sType* it_488;
int method_generics_num_489;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1CVALUEph* come_params_490;
int i_491;
struct list$1tuple2$2charphsNodephph* o2_saved_492;
struct tuple2$2charphsNodeph* it_495;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_498=0;
struct sNode* node_499=0;
_Bool Value_500;
_Bool __result324__;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_501;
int method_generics_num_502;
void* __right_value413 = (void*)0;
struct list$1sTypeph* o2_saved_503;
struct sType* it_504;
int method_generics_num_505;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1CVALUEph* come_params_506;
int i_507;
struct list$1tuple2$2charphsNodephph* o2_saved_508;
struct tuple2$2charphsNodeph* it_509;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_510=0;
struct sNode* node_511=0;
_Bool Value_512;
_Bool __result325__;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_513;
int method_generics_num_514;
void* __right_value419 = (void*)0;
int n_515;
struct list$1sTypeph* o2_saved_516;
struct sType* it_517;
int method_generics_num_518;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sClass* klass_519;
_Bool calling_dynamic_method_520;
struct sType* lambda_type_521;
struct list$1tuple2$2charphsTypephph* o2_saved_522;
struct tuple2$2charphsTypeph* it_525;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name_528=0;
struct sType* field_type_529=0;
void* __right_value422 = (void*)0;
struct sType* result_type_530;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1CVALUEph* come_params_531;
int i_532;
struct list$1tuple2$2charphsNodephph* o2_saved_533;
struct tuple2$2charphsNodeph* it_534;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_535=0;
struct sNode* node_536=0;
_Bool Value_537;
_Bool __result332__;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_538;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
_Bool _if_conditional2;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct buffer* buf_539;
int j_540;
struct list$1CVALUEph* o2_saved_541;
struct CVALUE* it_544;
void* __right_value434 = (void*)0;
char* __dec_obj172;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value2_547;
void* __right_value437 = (void*)0;
char* __dec_obj173;
void* __right_value438 = (void*)0;
struct sType* result_type2_548;
void* __right_value439 = (void*)0;
struct sType* __dec_obj174;
struct list$1sTypeph* __dec_obj175;
char* generics_fun_name_549;
struct sFun* fun_550;
void* __right_value440 = (void*)0;
char* __dec_obj176;
struct sClass* klass_551;
void* __right_value441 = (void*)0;
_Bool _while_condtional1;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
char* __dec_obj177;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* __dec_obj178;
void* __right_value448 = (void*)0;
char* none_generics_name_552;
void* __right_value449 = (void*)0;
char* fun_name3_553;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
char* __dec_obj179;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* __dec_obj180;
int i_554;
void* __right_value456 = (void*)0;
char* new_fun_name_555;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
char* __dec_obj181;
struct sType* obj_array_type_559;
void* __right_value459 = (void*)0;
char* array_method_name_560;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
char* __dec_obj182;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
char* __dec_obj183;
void* __right_value465 = (void*)0;
_Bool __result343__;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
char* __dec_obj184;
void* __right_value469 = (void*)0;
struct sClass* klass_561;
void* __right_value470 = (void*)0;
_Bool _while_condtional2;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
char* __dec_obj185;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_562=0;
char* real_fun_name_563=0;
char* __dec_obj187;
void* __right_value475 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_564=0;
char* real_fun_name_565=0;
char* __dec_obj188;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* original_obj_type_fun_name_566;
void* __right_value478 = (void*)0;
char* __dec_obj189;
_Bool __result344__;
_Bool __result345__;
_Bool __result346__;
void* __right_value479 = (void*)0;
struct sType* result_type_567;
void* __right_value480 = (void*)0;
struct sType* result_type2_568;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1sTypeph* param_types_569;
struct list$1sTypeph* o2_saved_570;
struct sType* it_571;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* it2_572;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1CVALUEph* come_params_573;
int i_574;
_Bool first_param_578;
struct list$1tuple2$2charphsNodephph* o2_saved_579;
struct tuple2$2charphsNodeph* it_580;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_581=0;
struct sNode* node_582=0;
int n_583;
struct list$1charph* o2_saved_584;
char* it_587;
_Bool is_inner_calling__590;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
_Bool _if_conditional3;
_Bool Value_591;
_Bool __result354__;
void* __right_value495 = (void*)0;
struct CVALUE* come_value_592;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* inf_type_593;
void* __right_value498 = (void*)0;
struct sNode* node2_594;
_Bool Value_595;
_Bool __result355__;
_Bool Value_596;
_Bool __result356__;
_Bool Value_597;
_Bool __result357__;
void* __right_value499 = (void*)0;
struct CVALUE* come_value_598;
void* __right_value500 = (void*)0;
_Bool _if_conditional4;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
_Bool _if_conditional5;
void* __right_value507 = (void*)0;
int i_604;
struct list$1tuple2$2charphsNodephph* o2_saved_605;
struct tuple2$2charphsNodeph* it_606;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_607=0;
struct sNode* node_608=0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
_Bool _if_conditional6;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
_Bool _elif_conditional1;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
_Bool _if_conditional7;
_Bool is_inner_calling__612;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
_Bool _if_conditional8;
_Bool Value_613;
_Bool __result362__;
void* __right_value521 = (void*)0;
struct CVALUE* come_value_614;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* inf_type_615;
void* __right_value524 = (void*)0;
struct sNode* node2_616;
_Bool Value_617;
_Bool __result363__;
_Bool Value_618;
_Bool __result364__;
_Bool Value_619;
_Bool __result365__;
void* __right_value525 = (void*)0;
struct CVALUE* come_value_620;
void* __right_value526 = (void*)0;
_Bool _if_conditional9;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
_Bool _if_conditional10;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
_Bool _if_conditional11;
struct sType* obj_array_type_621;
void* __right_value535 = (void*)0;
char* array_method_name_622;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct buffer* buf_623;
int i_624;
struct list$1sNodeph* o2_saved_625;
struct sNode* it_628;
_Bool Value_631;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_632;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct CVALUE* come_value_633;
void* __right_value541 = (void*)0;
char* __dec_obj194;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj195;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct buffer* buf_637;
int i_638;
struct list$1sNodeph* o2_saved_639;
struct sNode* it_640;
_Bool Value_641;
void* __right_value552 = (void*)0;
struct CVALUE* come_value_642;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct CVALUE* come_value_643;
void* __right_value555 = (void*)0;
char* __dec_obj201;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sType* __dec_obj202;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct buffer* buf_644;
int i_645;
struct list$1sNodeph* o2_saved_646;
struct sNode* it_647;
_Bool Value_648;
void* __right_value563 = (void*)0;
struct CVALUE* come_value_649;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct CVALUE* come_value_650;
void* __right_value566 = (void*)0;
char* __dec_obj203;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sType* __dec_obj204;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct buffer* buf_651;
int i_652;
struct list$1sNodeph* o2_saved_653;
struct sNode* it_654;
_Bool Value_655;
void* __right_value574 = (void*)0;
struct CVALUE* come_value_656;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct CVALUE* come_value_657;
void* __right_value577 = (void*)0;
char* __dec_obj205;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* __dec_obj206;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct buffer* buf_658;
int i_659;
struct list$1sNodeph* o2_saved_660;
struct sNode* it_661;
_Bool Value_662;
void* __right_value585 = (void*)0;
struct CVALUE* come_value_663;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_664;
void* __right_value588 = (void*)0;
char* __dec_obj207;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sType* __dec_obj208;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
char* default_param_665;
void* __right_value596 = (void*)0;
char* param_name_666;
void* __right_value597 = (void*)0;
_Bool _if_conditional12;
struct buffer* source_667;
char* p_668;
char* head_669;
int sline_670;
void* __right_value598 = (void*)0;
struct buffer* __dec_obj209;
void* __right_value599 = (void*)0;
struct sNode* node_671;
_Bool Value_672;
_Bool __result374__;
struct buffer* __dec_obj210;
void* __right_value600 = (void*)0;
struct CVALUE* come_value_673;
void* __right_value601 = (void*)0;
_Bool _if_conditional13;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
_Bool _if_conditional14;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
_Bool _if_conditional15;
_Bool __result375__;
_Bool __result376__;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct buffer* buf_674;
int j_675;
struct list$1CVALUEph* o2_saved_676;
struct CVALUE* it_677;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct CVALUE* come_value2_678;
void* __right_value614 = (void*)0;
char* __dec_obj211;
int generics_num_679;
void* __right_value615 = (void*)0;
struct sType* refference_type_680;
void* __right_value616 = (void*)0;
struct sType* __dec_obj212;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
char* __dec_obj213;
struct sType* __dec_obj214;
void* __right_value627 = (void*)0;
struct tuple1$1sTypeph* __dec_obj215;
void* __right_value628 = (void*)0;
struct sType* __dec_obj216;
void* __right_value629 = (void*)0;
struct sType* __dec_obj217;
void* __right_value630 = (void*)0;
char* __dec_obj218;
struct list$1sTypeph* __dec_obj219;
_Bool __result377__;
    fun_name_446=(char*)come_increment_ref_count(self->fun_name);
    params_447=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_448=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_449=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_450=self->method_block_sline;
    no_infference_method_generics_451=self->no_infference_method_generics;
    method_generics_types_452=(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types);
    recursive_453=self->recursive;
    method_generics_types_before_454=((void*)0);
    __dec_obj165=method_generics_types_before_454;
    method_generics_types_before_454=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj165,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj166=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj166,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    Value_455=node_compile(obj_448,info);
    if(    !Value_455) {
        __result310__ = (_Bool)0;
        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result310__;
    }
    else {
    }
    obj_value_456=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&obj_value_456->type->mPointerNum>0) {
        __dec_obj167=obj_value_456->c_value;
        obj_value_456->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value387=make_type_name_string(obj_value_456->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),obj_value_456->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    obj_type_457=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_456->type));
    if(    !no_infference_method_generics_451) {
        no_output_come_code_458=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_459=(struct sType*)come_increment_ref_count(obj_type_457);
        none_generics_name_460=(char*)come_increment_ref_count(get_none_generics_name(type_459->mClass->mName));
        fun_name2_461=(char*)come_increment_ref_count(create_method_name(type_459,(_Bool)0,fun_name_446,info,(_Bool)1));
        fun_name3_462=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_460,fun_name_446));
        generics_fun_463=((struct sGenericsFun*)(__right_value393=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_462,((void*)0))));
        come_call_finalizer3(__right_value393,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_463) {
            method_generics_464=list$1charph_length(generics_fun_463->mMethodGenericsTypeNames)>0;
            if(            method_generics_464&&list$1sTypeph_length(info->method_generics_types)==0) {
                generics_fun_name_465=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value395=make_generics_function(obj_type_457,(char*)come_increment_ref_count(__builtin_string(fun_name_446)),info,(_Bool)1)))));
                __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                fun_466=((struct sFun*)(__right_value397=map$2charphsFunph_at(info->funcs,generics_fun_name_465,((void*)0))));
                come_call_finalizer3(__right_value397,sFun_finalize, 0, 1, 0, 0, (void*)0);
                come_params_467=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 258, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                if(                method_block_449) {
                    no_output_come_code_468=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_449,(struct list$1CVALUEph*)come_increment_ref_count(come_params_467),fun_466,fun_name3_462,method_block_sline_450,info,(_Bool)1)) {
                        __result312__ = (_Bool)0;
                        generics_fun_name_465 = come_decrement_ref_count2(generics_fun_name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
                        none_generics_name_460 = come_decrement_ref_count2(none_generics_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name2_461 = come_decrement_ref_count2(fun_name2_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name3_462 = come_decrement_ref_count2(fun_name3_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result312__;
                    }
                    info->no_output_come_code=no_output_come_code_468;
                    method_block_node_469=((struct CVALUE*)(__right_value400=list$1CVALUEphp_operator_load_element(come_params_467,-1)));
                    come_call_finalizer3(__right_value400,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_473=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_469->type));
                    method_block_result_type_474=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_475=((struct sType*)(__right_value403=list$1sTypephp_operator_load_element(generics_fun_463->mParamTypes,-1)));
                    come_call_finalizer3(__right_value403,sType_finalize, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_476=generics_fun_method_block_lambda_type_475->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_476->mClass->mMethodGenerics) {
                        method_generics_num_477=generics_fun_method_block_result_type_476->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_477,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_474)));
                    }
                    n_486=0;
                    for(                    o2_saved_487=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_475->mParamTypes)),it_488=list$1sTypeph_begin((o2_saved_487));                    !list$1sTypeph_end((o2_saved_487));                    it_488=list$1sTypeph_next((o2_saved_487))                    ){
                        if(                        it_488->mClass->mMethodGenerics) {
                            method_generics_num_489=it_488->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_489,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value408=list$1sTypephp_operator_load_element(method_block_lambda_type_473->mParamTypes,n_486))), "20method.c", 282, 4)))));
                            come_call_finalizer3(__right_value408,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        n_486++;
                    }
                    come_call_finalizer3(o2_saved_487,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_490=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 287, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                    i_491=0;
                    for(                    o2_saved_492=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_447)),it_495=list$1tuple2$2charphsNodephph_begin((o2_saved_492));                    !list$1tuple2$2charphsNodephph_end((o2_saved_492));                    it_495=list$1tuple2$2charphsNodephph_next((o2_saved_492))                    ){
                        multiple_assign_var1=it_495;
                        label_498=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                        node_499=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
                        if(                        i_491==0) {
                            list$1CVALUEph_push_back(come_params_490,(struct CVALUE*)come_increment_ref_count(obj_value_456));
                            i_491++;
                        }
                        else {
                            Value_500=node_compile(node_499,info);
                            if(                            !Value_500) {
                                __result324__ = (_Bool)0;
                                label_498 = come_decrement_ref_count2(label_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_499) { node_499 = come_decrement_ref_count2(node_499, ((struct sNode*)node_499)->finalize, ((struct sNode*)node_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_492,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_474,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_490,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_465 = come_decrement_ref_count2(generics_fun_name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_460 = come_decrement_ref_count2(none_generics_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_461 = come_decrement_ref_count2(fun_name2_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_462 = come_decrement_ref_count2(fun_name3_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result324__;
                            }
                            else {
                            }
                            come_value_501=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_490,(struct CVALUE*)come_increment_ref_count(come_value_501));
                            come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_498 = come_decrement_ref_count2(label_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_499) { node_499 = come_decrement_ref_count2(node_499, ((struct sNode*)node_499)->finalize, ((struct sNode*)node_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_492,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_463->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_502=generics_fun_463->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_502,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_486=0;
                    for(                    o2_saved_503=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_463->mParamTypes)),it_504=list$1sTypeph_begin((o2_saved_503));                    !list$1sTypeph_end((o2_saved_503));                    it_504=list$1sTypeph_next((o2_saved_503))                    ){
                        if(                        it_504->mClass->mMethodGenerics) {
                            method_generics_num_505=it_504->mClass->mMethodGenericsNum;
                            if(                            n_486<list$1CVALUEph_length(come_params_490)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_505,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value414=list$1CVALUEphp_operator_load_element(come_params_490,n_486)))->type)));
                                come_call_finalizer3(__right_value414,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_486++;
                    }
                    come_call_finalizer3(o2_saved_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_474,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_490,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_506=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 326, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                    i_507=0;
                    for(                    o2_saved_508=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_447)),it_509=list$1tuple2$2charphsNodephph_begin((o2_saved_508));                    !list$1tuple2$2charphsNodephph_end((o2_saved_508));                    it_509=list$1tuple2$2charphsNodephph_next((o2_saved_508))                    ){
                        multiple_assign_var2=it_509;
                        label_510=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                        node_511=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                        if(                        i_507==0) {
                            list$1CVALUEph_push_back(come_params_506,(struct CVALUE*)come_increment_ref_count(obj_value_456));
                            i_507++;
                        }
                        else {
                            Value_512=node_compile(node_511,info);
                            if(                            !Value_512) {
                                __result325__ = (_Bool)0;
                                label_510 = come_decrement_ref_count2(label_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_511) { node_511 = come_decrement_ref_count2(node_511, ((struct sNode*)node_511)->finalize, ((struct sNode*)node_511)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_508,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_506,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_465 = come_decrement_ref_count2(generics_fun_name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_460 = come_decrement_ref_count2(none_generics_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_461 = come_decrement_ref_count2(fun_name2_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_462 = come_decrement_ref_count2(fun_name3_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result325__;
                            }
                            else {
                            }
                            come_value_513=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_506,(struct CVALUE*)come_increment_ref_count(come_value_513));
                            come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_510 = come_decrement_ref_count2(label_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_511) { node_511 = come_decrement_ref_count2(node_511, ((struct sNode*)node_511)->finalize, ((struct sNode*)node_511)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_508,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_463->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_514=generics_fun_463->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_514,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_515=0;
                    for(                    o2_saved_516=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_463->mParamTypes)),it_517=list$1sTypeph_begin((o2_saved_516));                    !list$1sTypeph_end((o2_saved_516));                    it_517=list$1sTypeph_next((o2_saved_516))                    ){
                        if(                        it_517->mClass->mMethodGenerics) {
                            method_generics_num_518=it_517->mClass->mMethodGenericsNum;
                            if(                            n_515<list$1CVALUEph_length(come_params_506)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_518,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value420=list$1CVALUEphp_operator_load_element(come_params_506,n_515)))->type)));
                                come_call_finalizer3(__right_value420,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_515++;
                    }
                    come_call_finalizer3(o2_saved_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_506,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2charphsFunph_remove(info->funcs,generics_fun_name_465);
                generics_fun_name_465 = come_decrement_ref_count2(generics_fun_name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_458;
        come_call_finalizer3(type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
        none_generics_name_460 = come_decrement_ref_count2(none_generics_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name2_461 = come_decrement_ref_count2(fun_name2_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name3_462 = come_decrement_ref_count2(fun_name3_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_519=obj_type_457->mClass;
    calling_dynamic_method_520=(_Bool)0;
    lambda_type_521=((void*)0);
    for(    o2_saved_522=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_519->mFields)),it_525=list$1tuple2$2charphsTypephph_begin((o2_saved_522));    !list$1tuple2$2charphsTypephph_end((o2_saved_522));    it_525=list$1tuple2$2charphsTypephph_next((o2_saved_522))    ){
        multiple_assign_var3=it_525;
        field_name_528=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_529=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        if(        string_operator_equals(field_name_528,fun_name_446)&&string_operator_equals(field_type_529->mClass->mName,"lambda")) {
            calling_dynamic_method_520=(_Bool)1;
            lambda_type_521=field_type_529;
            field_name_528 = come_decrement_ref_count2(field_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_528 = come_decrement_ref_count2(field_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_522,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_520) {
        result_type_530=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_521->mResultType->v1));
        result_type_530->mStatic=(_Bool)0;
        come_params_531=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 389, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_532=0;
        for(        o2_saved_533=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_447)),it_534=list$1tuple2$2charphsNodephph_begin((o2_saved_533));        !list$1tuple2$2charphsNodephph_end((o2_saved_533));        it_534=list$1tuple2$2charphsNodephph_next((o2_saved_533))        ){
            multiple_assign_var4=it_534;
            label_535=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_536=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            i_532==0) {
                list$1CVALUEph_push_back(come_params_531,(struct CVALUE*)come_increment_ref_count(obj_value_456));
                i_532++;
            }
            else {
                Value_537=node_compile(node_536,info);
                if(                !Value_537) {
                    __result332__ = (_Bool)0;
                    label_535 = come_decrement_ref_count2(label_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_536) { node_536 = come_decrement_ref_count2(node_536, ((struct sNode*)node_536)->finalize, ((struct sNode*)node_536)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_531,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result332__;
                }
                else {
                }
                come_value_538=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value428=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value426=string_to_string(fun_name_446))),((char*)(__right_value427=int_to_string(i_532)))))),((struct sType*)come_null_check(((struct sType*)(__right_value429=list$1sTypephp_operator_load_element(lambda_type_521->mParamTypes,i_532-1))), "20method.c", 406, 5)),come_value_538->type,come_value_538,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value430=list$1sTypephp_operator_load_element(lambda_type_521->mParamTypes,i_532-1))), "20method.c", 407, 6))->mHeap&&come_value_538->type->mHeap)),                come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value431=list$1sTypephp_operator_load_element(lambda_type_521->mParamTypes,i_532-1))), "20method.c", 409, 7)),come_value_538->type,come_value_538,info,(_Bool)1);
                    come_call_finalizer3(__right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_push_back(come_params_531,(struct CVALUE*)come_increment_ref_count(come_value_538));
                i_532++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_538,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_535 = come_decrement_ref_count2(label_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_536) { node_536 = come_decrement_ref_count2(node_536, ((struct sNode*)node_536)->finalize, ((struct sNode*)node_536)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 419, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_format(buf_539,"%s->%s",obj_value_456->c_value,fun_name_446);
        buffer_append_str(buf_539,"(");
        j_540=0;
        for(        o2_saved_541=(struct list$1CVALUEph*)come_increment_ref_count((come_params_531)),it_544=list$1CVALUEph_begin((o2_saved_541));        !list$1CVALUEph_end((o2_saved_541));        it_544=list$1CVALUEph_next((o2_saved_541))        ){
            if(            j_540==0) {
                __dec_obj172=it_544->c_value;
                it_544->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_544->c_value));
                __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_539,it_544->c_value);
            if(            j_540!=list$1CVALUEph_length(come_params_531)-1) {
                buffer_append_str(buf_539,",");
            }
            j_540++;
        }
        come_call_finalizer3(o2_saved_541,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_539,")");
        come_value2_547=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 439, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj173=come_value2_547->c_value;
        come_value2_547->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_539));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_548=(struct sType*)come_increment_ref_count(solve_generics(result_type_530,info->generics_type,info));
        __dec_obj174=come_value2_547->type;
        come_value2_547->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_548));
        come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_547->type->mStatic=(_Bool)0;
        come_value2_547->var=((void*)0);
        if(        result_type2_548->mHeap) {
            append_object_to_right_values2(come_value2_547,(struct sType*)come_increment_ref_count(result_type2_548),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_547->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_547));
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj175=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_454);
        come_call_finalizer3(__dec_obj175,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_531,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_539,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_547,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_548,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_549=((void*)0);
        fun_550=((void*)0);
        if(        string_operator_equals(fun_name_446,"super")) {
            __dec_obj176=fun_name_446;
            fun_name_446=(char*)come_increment_ref_count(create_non_method_name(obj_type_457,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_551=obj_type_457->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value441=map$2charphsClassphp_operator_load_element(info->classes,klass_551->mParentClassName))))),            come_call_finalizer3(__right_value441,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_551=((struct sClass*)(__right_value442=map$2charphsClassphp_operator_load_element(info->classes,klass_551->mParentClassName)));
                come_call_finalizer3(__right_value442,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj177=generics_fun_name_549;
                generics_fun_name_549=(char*)come_increment_ref_count(create_method_name_using_class(klass_551,(_Bool)0,fun_name_446,info,(_Bool)1));
                __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_550=((struct sFun*)(__right_value444=map$2charphsFunph_at(info->funcs,generics_fun_name_549,((void*)0))));
                come_call_finalizer3(__right_value444,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_550) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_457&&obj_type_457->mNoSolvedGenericsType&&obj_type_457->mNoSolvedGenericsType->v1&&list$1sTypeph_length(obj_type_457->mNoSolvedGenericsType->v1->mGenericsTypes)>0) {
                __dec_obj178=generics_fun_name_549;
                generics_fun_name_549=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value446=make_generics_function(obj_type_457,(char*)come_increment_ref_count(__builtin_string(fun_name_446)),info,(_Bool)1)))));
                __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            list$1sTypeph_length(info->method_generics_types)>0) {
                none_generics_name_552=(char*)come_increment_ref_count(get_none_generics_name(obj_type_457->mClass->mName));
                fun_name3_553=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_552,fun_name_446));
                __dec_obj179=generics_fun_name_549;
                generics_fun_name_549=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value451=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_553)),(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types),info)))));
                __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                none_generics_name_552 = come_decrement_ref_count2(none_generics_name_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_553 = come_decrement_ref_count2(fun_name3_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj180=generics_fun_name_549;
                generics_fun_name_549=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value454=make_generics_function(obj_type_457,(char*)come_increment_ref_count(__builtin_string(fun_name_446)),info,(_Bool)1)))));
                __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            for(            i_554=128;            i_554>=1;            i_554--            ){
                new_fun_name_555=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_549,i_554));
                fun_550=((struct sFun*)(__right_value457=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_555)));
                come_call_finalizer3(__right_value457,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_550!=((void*)0)) {
                    __dec_obj181=generics_fun_name_549;
                    generics_fun_name_549=(char*)come_increment_ref_count(__builtin_string(new_fun_name_555));
                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_555 = come_decrement_ref_count2(new_fun_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_555 = come_decrement_ref_count2(new_fun_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            fun_550==((void*)0)) {
                obj_array_type_559=obj_type_457->mOriginalLoadVarType->v1;
                if(                obj_array_type_559&&list$1sNodeph_length(obj_array_type_559->mArrayNum)>0) {
                    array_method_name_560=(char*)come_increment_ref_count(create_method_name(obj_array_type_559,(_Bool)0,fun_name_446,info,(_Bool)0));
                    fun_550=((struct sFun*)(__right_value460=map$2charphsFunph_at(info->funcs,array_method_name_560,((void*)0))));
                    come_call_finalizer3(__right_value460,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_550) {
                        __dec_obj182=generics_fun_name_549;
                        generics_fun_name_549=(char*)come_increment_ref_count(__builtin_string(array_method_name_560));
                        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_550=((struct sFun*)(__right_value462=map$2charphsFunph_at(info->funcs,generics_fun_name_549,((void*)0))));
                        come_call_finalizer3(__right_value462,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_550==((void*)0)) {
                            __dec_obj183=generics_fun_name_549;
                            generics_fun_name_549=(char*)come_increment_ref_count(create_method_name(obj_type_457,(_Bool)0,((char*)(__right_value463=__builtin_string(fun_name_446))),info,(_Bool)1));
                            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_550=((struct sFun*)(__right_value465=map$2charphsFunph_at(info->funcs,generics_fun_name_549,((void*)0))));
                            come_call_finalizer3(__right_value465,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_550==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_549,info->come_fun->mName);
                                __result343__ = (_Bool)1;
                                array_method_name_560 = come_decrement_ref_count2(array_method_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result343__;
                            }
                        }
                    }
                    array_method_name_560 = come_decrement_ref_count2(array_method_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_550=((struct sFun*)(__right_value466=map$2charphsFunph_at(info->funcs,generics_fun_name_549,((void*)0))));
                    come_call_finalizer3(__right_value466,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_550==((void*)0)) {
                        __dec_obj184=generics_fun_name_549;
                        generics_fun_name_549=(char*)come_increment_ref_count(create_method_name(obj_type_457,(_Bool)0,((char*)(__right_value467=__builtin_string(fun_name_446))),info,(_Bool)1));
                        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_550=((struct sFun*)(__right_value469=map$2charphsFunph_at(info->funcs,generics_fun_name_549,((void*)0))));
                        come_call_finalizer3(__right_value469,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_550==((void*)0)) {
                            klass_561=obj_type_457->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value470=map$2charphsClassphp_operator_load_element(info->classes,klass_561->mParentClassName))))),                            come_call_finalizer3(__right_value470,sClass_finalize, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_561=((struct sClass*)(__right_value471=map$2charphsClassphp_operator_load_element(info->classes,klass_561->mParentClassName)));
                                come_call_finalizer3(__right_value471,sClass_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj185=generics_fun_name_549;
                                generics_fun_name_549=(char*)come_increment_ref_count(create_method_name_using_class(klass_561,(_Bool)0,fun_name_446,info,(_Bool)1));
                                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_550=((struct sFun*)(__right_value473=map$2charphsFunph_at(info->funcs,generics_fun_name_549,((void*)0))));
                                come_call_finalizer3(__right_value473,sFun_finalize, 0, 1, 0, 0, (void*)0);
                                if(                                fun_550) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_550==((void*)0)&&string_operator_equals(fun_name_446,"to_string")) {
                            multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value474=create_to_string_automatically(obj_type_457,fun_name_446,info)));
                            fun2_562=multiple_assign_var5->v1;
                            real_fun_name_563=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            come_call_finalizer3(__right_value474,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_550=fun2_562;
                            __dec_obj187=generics_fun_name_549;
                            generics_fun_name_549=(char*)come_increment_ref_count(real_fun_name_563);
                            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_563 = come_decrement_ref_count2(real_fun_name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_550==((void*)0)&&string_operator_equals(fun_name_446,"equals")) {
                            multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value475=create_equals_automatically(obj_type_457,fun_name_446,info)));
                            fun2_564=multiple_assign_var6->v1;
                            real_fun_name_565=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            come_call_finalizer3(__right_value475,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_550=fun2_564;
                            __dec_obj188=generics_fun_name_549;
                            generics_fun_name_549=(char*)come_increment_ref_count(real_fun_name_565);
                            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_565 = come_decrement_ref_count2(real_fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_550==((void*)0)) {
                            original_obj_type_fun_name_566=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_457,(_Bool)0,((char*)(__right_value476=__builtin_string(fun_name_446))),info,(_Bool)1));
                            __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_550=((struct sFun*)(__right_value478=map$2charphsFunph_at(info->funcs,original_obj_type_fun_name_566,((void*)0))));
                            come_call_finalizer3(__right_value478,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_550) {
                                __dec_obj189=generics_fun_name_549;
                                generics_fun_name_549=(char*)come_increment_ref_count(original_obj_type_fun_name_566);
                                __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            original_obj_type_fun_name_566 = come_decrement_ref_count2(original_obj_type_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_550==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_549,info->come_fun->mName);
                            __result344__ = (_Bool)1;
                            generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result344__;
                        }
                    }
                }
            }
        }
        if(        fun_550==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_549,info->come_fun->mName);
            __result345__ = (_Bool)1;
            generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result345__;
        }
        if(        list$1sTypeph_length(fun_550->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result346__ = (_Bool)1;
            generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result346__;
        }
        result_type_567=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_550->mResultType));
        result_type_567->mStatic=(_Bool)0;
        result_type2_568=(struct sType*)come_increment_ref_count(solve_generics(result_type_567,info->generics_type,info));
        param_types_569=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 596, "struct list$1sTypeph*", (void*)0, (void*)0))));
        for(        o2_saved_570=(struct list$1sTypeph*)come_increment_ref_count((fun_550->mParamTypes)),it_571=list$1sTypeph_begin((o2_saved_570));        !list$1sTypeph_end((o2_saved_570));        it_571=list$1sTypeph_next((o2_saved_570))        ){
            if(            it_571==((void*)0)) {
                list$1sTypeph_push_back(param_types_569,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_571)));
            }
            else {
                it2_572=(struct sType*)come_increment_ref_count(solve_generics(it_571,info->generics_type,info));
                list$1sTypeph_push_back(param_types_569,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_572)));
                come_call_finalizer3(it2_572,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_573=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 608, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        for(        i_574=0;        i_574<list$1sTypeph_length(fun_550->mParamTypes)-(((method_block_449)?(2):(0)));        i_574++        ){
            list$1CVALUEph_add(come_params_573,((void*)0));
        }
        first_param_578=(_Bool)1;
        for(        o2_saved_579=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_447)),it_580=list$1tuple2$2charphsNodephph_begin((o2_saved_579));        !list$1tuple2$2charphsNodephph_end((o2_saved_579));        it_580=list$1tuple2$2charphsNodephph_next((o2_saved_579))        ){
            multiple_assign_var7=it_580;
            label_581=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_582=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(            first_param_578) {
                first_param_578=(_Bool)0;
            }
            else if(            label_581) {
                n_583=0;
                for(                o2_saved_584=(struct list$1charph*)come_increment_ref_count((fun_550->mParamNames)),it_587=list$1charph_begin((o2_saved_584));                !list$1charph_end((o2_saved_584));                it_587=list$1charph_next((o2_saved_584))                ){
                    if(                    string_operator_equals(label_581,it_587)) {
                        break;
                    }
                    n_583++;
                }
                come_call_finalizer3(o2_saved_584,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                is_inner_calling__590=is_inner_calling(obj_448,info);
                if(                (_if_conditional3=(!is_inner_calling__590&&((struct sType*)(__right_value491=list$1sTypephp_operator_load_element(param_types_569,n_583)))&&((struct sType*)come_null_check(((struct sType*)(__right_value492=list$1sTypephp_operator_load_element(param_types_569,n_583))), "20method.c", 632, 8))->mRefference&&string_operator_equals(((struct sType*)come_null_check(((struct sType*)(__right_value493=list$1sTypephp_operator_load_element(param_types_569,n_583))), "20method.c", 632, 9))->mClass->mName,"object")&&((struct sType*)come_null_check(((struct sType*)(__right_value494=list$1sTypephp_operator_load_element(param_types_569,n_583))), "20method.c", 632, 10))->mHeap)),                come_call_finalizer3(__right_value491,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value493,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value494,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    Value_591=node_compile(node_582,info);
                    if(                    !Value_591) {
                        __result354__ = (_Bool)0;
                        label_581 = come_decrement_ref_count2(label_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_582) { node_582 = come_decrement_ref_count2(node_582, ((struct sNode*)node_582)->finalize, ((struct sNode*)node_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_579,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result354__;
                    }
                    else {
                    }
                    come_value_592=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_not_equals(come_value_592->type->mClass->mName,"object")) {
                        inf_type_593=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 641, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
                        inf_type_593->mHeap=1;
                        node2_594=(struct sNode*)come_increment_ref_count(create_implements((struct sNode*)come_increment_ref_count(node_582),(struct sType*)come_increment_ref_count(inf_type_593),info));
                        Value_595=node_compile(node2_594,info);
                        if(                        !Value_595) {
                            __result355__ = (_Bool)0;
                            come_call_finalizer3(inf_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(node2_594) { node2_594 = come_decrement_ref_count2(node2_594, ((struct sNode*)node2_594)->finalize, ((struct sNode*)node2_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(come_value_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_581 = come_decrement_ref_count2(label_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_582) { node_582 = come_decrement_ref_count2(node_582, ((struct sNode*)node_582)->finalize, ((struct sNode*)node_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_579,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result355__;
                        }
                        else {
                        }
                        come_call_finalizer3(inf_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
                        if(node2_594) { node2_594 = come_decrement_ref_count2(node2_594, ((struct sNode*)node2_594)->finalize, ((struct sNode*)node2_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        Value_596=node_compile(node_582,info);
                        if(                        !Value_596) {
                            __result356__ = (_Bool)0;
                            come_call_finalizer3(come_value_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_581 = come_decrement_ref_count2(label_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_582) { node_582 = come_decrement_ref_count2(node_582, ((struct sNode*)node_582)->finalize, ((struct sNode*)node_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_579,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result356__;
                        }
                        else {
                        }
                    }
                    come_call_finalizer3(come_value_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    Value_597=node_compile(node_582,info);
                    if(                    !Value_597) {
                        __result357__ = (_Bool)0;
                        label_581 = come_decrement_ref_count2(label_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_582) { node_582 = come_decrement_ref_count2(node_582, ((struct sNode*)node_582)->finalize, ((struct sNode*)node_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_579,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result357__;
                    }
                    else {
                    }
                }
                come_value_598=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional4=(((struct sType*)(__right_value500=list$1sTypephp_operator_load_element(param_types_569,n_583))))),                come_call_finalizer3(__right_value500,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    check_assign_type(((char*)(__right_value503=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value501=string_to_string(fun_name_446))),((char*)(__right_value502=int_to_string(n_583)))))),((struct sType*)come_null_check(((struct sType*)(__right_value504=list$1sTypephp_operator_load_element(param_types_569,n_583))), "20method.c", 666, 11)),come_value_598->type,come_value_598,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value504,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional5=(((struct sType*)(__right_value505=list$1sTypephp_operator_load_element(param_types_569,n_583)))&&((struct sType*)come_null_check(((struct sType*)(__right_value506=list$1sTypephp_operator_load_element(param_types_569,n_583))), "20method.c", 668, 12))->mHeap&&come_value_598->type->mHeap)),                come_call_finalizer3(__right_value505,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value506,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value507=list$1sTypephp_operator_load_element(param_types_569,n_583))), "20method.c", 669, 13)),come_value_598->type,come_value_598,info,(_Bool)1);
                    come_call_finalizer3(__right_value507,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_573,n_583,(struct CVALUE*)come_increment_ref_count(come_value_598));
                come_call_finalizer3(come_value_598,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_581 = come_decrement_ref_count2(label_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_582) { node_582 = come_decrement_ref_count2(node_582, ((struct sNode*)node_582)->finalize, ((struct sNode*)node_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_579,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_604=0;
        for(        o2_saved_605=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_447)),it_606=list$1tuple2$2charphsNodephph_begin((o2_saved_605));        !list$1tuple2$2charphsNodephph_end((o2_saved_605));        it_606=list$1tuple2$2charphsNodephph_next((o2_saved_605))        ){
            multiple_assign_var8=it_606;
            label_607=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_608=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            i_604==0) {
                check_assign_type(((char*)(__right_value510=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value508=string_to_string(fun_name_446))),((char*)(__right_value509=int_to_string(i_604)))))),((struct sType*)come_null_check(((struct sType*)(__right_value511=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 681, 14)),obj_value_456->type,obj_value_456,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value511,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional6=(((struct sType*)come_null_check(((struct sType*)(__right_value512=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 682, 15))->mHeap&&obj_value_456->type->mHeap)),                come_call_finalizer3(__right_value512,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value513=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 683, 16)),obj_value_456->type,obj_value_456,info,(_Bool)1);
                    come_call_finalizer3(__right_value513,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)come_null_check(((struct sType*)(__right_value514=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 685, 17))->mHeap&&!obj_value_456->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value514,sType_finalize, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    err_msg(info,"require heap parametor(%s)",((char*)come_null_check(((char*)(__right_value515=list$1charphp_operator_load_element(fun_550->mParamNames,i_604))), "20method.c", 686, 18)));
                    __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    exit(2);
                }
                list$1CVALUEph_replace(come_params_573,i_604,(struct CVALUE*)come_increment_ref_count(obj_value_456));
                i_604++;
            }
            else if(            label_607) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional7=(((struct CVALUE*)(__right_value516=list$1CVALUEphp_operator_load_element(come_params_573,i_604)))==((void*)0))),                    come_call_finalizer3(__right_value516,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional7) {
                        break;
                    }
                    else {
                        i_604++;
                    }
                }
                is_inner_calling__612=is_inner_calling(obj_448,info);
                if(                (_if_conditional8=(!is_inner_calling__612&&((struct sType*)(__right_value517=list$1sTypephp_operator_load_element(param_types_569,i_604)))&&((struct sType*)come_null_check(((struct sType*)(__right_value518=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 707, 19))->mHeap&&string_operator_equals(((struct sType*)come_null_check(((struct sType*)(__right_value519=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 707, 20))->mClass->mName,"object")&&((struct sType*)come_null_check(((struct sType*)(__right_value520=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 707, 21))->mRefference)),                come_call_finalizer3(__right_value517,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value518,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value519,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional8) {
                    Value_613=node_compile(node_608,info);
                    if(                    !Value_613) {
                        __result362__ = (_Bool)0;
                        label_607 = come_decrement_ref_count2(label_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_605,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result362__;
                    }
                    else {
                    }
                    come_value_614=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_not_equals(come_value_614->type->mClass->mName,"object")) {
                        inf_type_615=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 716, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
                        inf_type_615->mHeap=1;
                        node2_616=(struct sNode*)come_increment_ref_count(create_implements((struct sNode*)come_increment_ref_count(node_608),(struct sType*)come_increment_ref_count(inf_type_615),info));
                        Value_617=node_compile(node2_616,info);
                        if(                        !Value_617) {
                            __result363__ = (_Bool)0;
                            come_call_finalizer3(inf_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(node2_616) { node2_616 = come_decrement_ref_count2(node2_616, ((struct sNode*)node2_616)->finalize, ((struct sNode*)node2_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(come_value_614,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_607 = come_decrement_ref_count2(label_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_605,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result363__;
                        }
                        else {
                        }
                        come_call_finalizer3(inf_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                        if(node2_616) { node2_616 = come_decrement_ref_count2(node2_616, ((struct sNode*)node2_616)->finalize, ((struct sNode*)node2_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        Value_618=node_compile(node_608,info);
                        if(                        !Value_618) {
                            __result364__ = (_Bool)0;
                            come_call_finalizer3(come_value_614,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_607 = come_decrement_ref_count2(label_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_605,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result364__;
                        }
                        else {
                        }
                    }
                    come_call_finalizer3(come_value_614,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    Value_619=node_compile(node_608,info);
                    if(                    !Value_619) {
                        __result365__ = (_Bool)0;
                        label_607 = come_decrement_ref_count2(label_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_605,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result365__;
                    }
                    else {
                    }
                }
                come_value_620=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional9=(((struct sType*)(__right_value526=list$1sTypephp_operator_load_element(param_types_569,i_604))))),                come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional9) {
                    check_assign_type(((char*)(__right_value529=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value527=string_to_string(fun_name_446))),((char*)(__right_value528=int_to_string(i_604)))))),((struct sType*)come_null_check(((struct sType*)(__right_value530=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 741, 22)),come_value_620->type,come_value_620,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value530,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional10=(((struct sType*)(__right_value531=list$1sTypephp_operator_load_element(param_types_569,i_604)))&&((struct sType*)come_null_check(((struct sType*)(__right_value532=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 743, 23))->mHeap&&come_value_620->type->mHeap)),                come_call_finalizer3(__right_value531,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value532,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value533=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 744, 24)),come_value_620->type,come_value_620,info,(_Bool)1);
                    come_call_finalizer3(__right_value533,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_573,i_604,(struct CVALUE*)come_increment_ref_count(come_value_620));
                i_604++;
                come_call_finalizer3(come_value_620,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_607 = come_decrement_ref_count2(label_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_605,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional11=(((struct CVALUE*)(__right_value534=list$1CVALUEphp_operator_load_element(come_params_573,i_604)))==((void*)0))),            come_call_finalizer3(__right_value534,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional11) {
                break;
            }
            else {
                i_604++;
            }
        }
        obj_array_type_621=obj_type_457->mOriginalLoadVarType->v1;
        if(        obj_array_type_621&&list$1sNodeph_length(obj_array_type_621->mArrayNum)>0) {
            array_method_name_622=(char*)come_increment_ref_count(create_method_name(obj_array_type_621,(_Bool)0,fun_name_446,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_549,array_method_name_622)) {
                if(                string_operator_equals(fun_name_446,"to_pointer")) {
                    buf_623=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 766, "struct buffer*", (void*)0, (void*)0))));
                    i_624=0;
                    for(                    o2_saved_625=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_621->mArrayNum)),it_628=list$1sNodeph_begin((o2_saved_625));                    !list$1sNodeph_end((o2_saved_625));                    it_628=list$1sNodeph_next((o2_saved_625))                    ){
                        Value_631=node_compile(it_628,info);
                        if(                        !Value_631) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_632=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_623,"%s",come_value_632->c_value);
                        if(                        i_624!=list$1sNodeph_length(obj_array_type_621->mArrayNum)-1) {
                            buffer_append_str(buf_623,"*");
                        }
                        i_624++;
                        come_call_finalizer3(come_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_625,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_633=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 786, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj194=come_value_633->c_value;
                    come_value_633->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_623));
                    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_633->var=((void*)0);
                    __dec_obj195=come_value_633->type;
                    come_value_633->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 790, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_573,1,(struct CVALUE*)come_increment_ref_count(come_value_633));
                    list$1tuple2$2charphsNodephph_push_back(params_447,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 793, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_623,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_633,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_446,"length")) {
                    buf_637=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 796, "struct buffer*", (void*)0, (void*)0))));
                    i_638=0;
                    for(                    o2_saved_639=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_621->mArrayNum)),it_640=list$1sNodeph_begin((o2_saved_639));                    !list$1sNodeph_end((o2_saved_639));                    it_640=list$1sNodeph_next((o2_saved_639))                    ){
                        Value_641=node_compile(it_640,info);
                        if(                        !Value_641) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_642=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_637,"%s",come_value_642->c_value);
                        if(                        i_638!=list$1sNodeph_length(obj_array_type_621->mArrayNum)-1) {
                            buffer_append_str(buf_637,"*");
                        }
                        i_638++;
                        come_call_finalizer3(come_value_642,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_639,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_643=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 815, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj201=come_value_643->c_value;
                    come_value_643->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_637));
                    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_643->var=((void*)0);
                    __dec_obj202=come_value_643->type;
                    come_value_643->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 819, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_573,1,(struct CVALUE*)come_increment_ref_count(come_value_643));
                    list$1tuple2$2charphsNodephph_push_back(params_447,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 822, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_637,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_643,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_446,"to_buffer")) {
                    buf_644=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 825, "struct buffer*", (void*)0, (void*)0))));
                    i_645=0;
                    for(                    o2_saved_646=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_621->mArrayNum)),it_647=list$1sNodeph_begin((o2_saved_646));                    !list$1sNodeph_end((o2_saved_646));                    it_647=list$1sNodeph_next((o2_saved_646))                    ){
                        Value_648=node_compile(it_647,info);
                        if(                        !Value_648) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_649=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_644,"%s",come_value_649->c_value);
                        if(                        i_645!=list$1sNodeph_length(obj_array_type_621->mArrayNum)-1) {
                            buffer_append_str(buf_644,"*");
                        }
                        i_645++;
                        come_call_finalizer3(come_value_649,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_646,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_650=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 844, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj203=come_value_650->c_value;
                    come_value_650->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_644));
                    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_650->var=((void*)0);
                    __dec_obj204=come_value_650->type;
                    come_value_650->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 848, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_573,1,(struct CVALUE*)come_increment_ref_count(come_value_650));
                    list$1tuple2$2charphsNodephph_push_back(params_447,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 851, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_446,"to_list")) {
                    buf_651=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 854, "struct buffer*", (void*)0, (void*)0))));
                    i_652=0;
                    for(                    o2_saved_653=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_621->mArrayNum)),it_654=list$1sNodeph_begin((o2_saved_653));                    !list$1sNodeph_end((o2_saved_653));                    it_654=list$1sNodeph_next((o2_saved_653))                    ){
                        Value_655=node_compile(it_654,info);
                        if(                        !Value_655) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_656=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_651,"%s",come_value_656->c_value);
                        if(                        i_652!=list$1sNodeph_length(obj_array_type_621->mArrayNum)-1) {
                            buffer_append_str(buf_651,"*");
                        }
                        i_652++;
                        come_call_finalizer3(come_value_656,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_653,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_657=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 873, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj205=come_value_657->c_value;
                    come_value_657->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_651));
                    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_657->var=((void*)0);
                    __dec_obj206=come_value_657->type;
                    come_value_657->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 877, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_573,1,(struct CVALUE*)come_increment_ref_count(come_value_657));
                    list$1tuple2$2charphsNodephph_push_back(params_447,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 880, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_446,"to_vector")) {
                    buf_658=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 883, "struct buffer*", (void*)0, (void*)0))));
                    i_659=0;
                    for(                    o2_saved_660=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_621->mArrayNum)),it_661=list$1sNodeph_begin((o2_saved_660));                    !list$1sNodeph_end((o2_saved_660));                    it_661=list$1sNodeph_next((o2_saved_660))                    ){
                        Value_662=node_compile(it_661,info);
                        if(                        !Value_662) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_663=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_658,"%s",come_value_663->c_value);
                        if(                        i_659!=list$1sNodeph_length(obj_array_type_621->mArrayNum)-1) {
                            buffer_append_str(buf_658,"*");
                        }
                        i_659++;
                        come_call_finalizer3(come_value_663,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_660,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_664=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 902, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj207=come_value_664->c_value;
                    come_value_664->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_658));
                    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_664->var=((void*)0);
                    __dec_obj208=come_value_664->type;
                    come_value_664->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 906, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_573,1,(struct CVALUE*)come_increment_ref_count(come_value_664));
                    list$1tuple2$2charphsNodephph_push_back(params_447,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 909, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_658,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            array_method_name_622 = come_decrement_ref_count2(array_method_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1tuple2$2charphsNodephph_length(params_447)<list$1sTypeph_length(fun_550->mParamTypes)+(((method_block_449)?(-2):(0)))) {
            for(            ;            i_604<list$1sTypeph_length(fun_550->mParamTypes)+(((method_block_449)?(-2):(0)));            i_604++            ){
                default_param_665=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value594=list$1charphp_operator_load_element(fun_550->mParamDefaultParametors,i_604)))));
                __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_666=((char*)come_null_check(((char*)(__right_value596=list$1charphp_operator_load_element(fun_550->mParamNames,i_604))), "20method.c", 918, 25));
                __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                (_if_conditional12=(default_param_665&&string_operator_not_equals(default_param_665,"")&&((struct CVALUE*)(__right_value597=list$1CVALUEphp_operator_load_element(come_params_573,i_604)))==((void*)0))),                come_call_finalizer3(__right_value597,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional12) {
                    source_667=(struct buffer*)come_increment_ref_count(info->source);
                    p_668=info->p;
                    head_669=info->head;
                    sline_670=info->sline;
                    __dec_obj209=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_665));
                    come_call_finalizer3(__dec_obj209,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_671=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_672=node_compile(node_671,info);
                    if(                    !Value_672) {
                        __result374__ = (_Bool)0;
                        come_call_finalizer3(source_667,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_671) { node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_665 = come_decrement_ref_count2(default_param_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result374__;
                    }
                    else {
                    }
                    __dec_obj210=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_667);
                    come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_668;
                    info->head=head_669;
                    info->sline=sline_670;
                    come_value_673=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional13=(((struct sType*)come_null_check(((struct sType*)(__right_value601=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 942, 26)))),                    come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional13) {
                        check_assign_type(((char*)(__right_value604=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value602=string_to_string(fun_name_446))),((char*)(__right_value603=int_to_string(i_604)))))),((struct sType*)come_null_check(((struct sType*)(__right_value605=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 943, 27)),come_value_673->type,come_value_673,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional14=(((struct sType*)come_null_check(((struct sType*)(__right_value606=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 945, 28))&&((struct sType*)come_null_check(((struct sType*)(__right_value607=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 945, 29))->mHeap&&come_value_673->type->mHeap)),                    come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value607,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional14) {
                        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value608=list$1sTypephp_operator_load_element(param_types_569,i_604))), "20method.c", 946, 30)),come_value_673->type,come_value_673,info,(_Bool)1);
                        come_call_finalizer3(__right_value608,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEph_replace(come_params_573,i_604,(struct CVALUE*)come_increment_ref_count(come_value_673));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_667,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_671) { node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_673,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional15=(((struct CVALUE*)(__right_value609=list$1CVALUEphp_operator_load_element(come_params_573,i_604)))==((void*)0))),                    come_call_finalizer3(__right_value609,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional15) {
                        err_msg(info,"require parametor(%s) %d",fun_550->mName,i_604);
                        __result375__ = (_Bool)0;
                        default_param_665 = come_decrement_ref_count2(default_param_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result375__;
                    }
                }
                default_param_665 = come_decrement_ref_count2(default_param_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        method_block_449) {
            if(            !compile_method_block(method_block_449,(struct list$1CVALUEph*)come_increment_ref_count(come_params_573),fun_550,fun_name_446,method_block_sline_450,info,(_Bool)0)) {
                __result376__ = (_Bool)0;
                generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result376__;
            }
        }
        buf_674=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 966, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_674,generics_fun_name_549);
        buffer_append_str(buf_674,"(");
        j_675=0;
        for(        o2_saved_676=(struct list$1CVALUEph*)come_increment_ref_count((come_params_573)),it_677=list$1CVALUEph_begin((o2_saved_676));        !list$1CVALUEph_end((o2_saved_676));        it_677=list$1CVALUEph_next((o2_saved_676))        ){
            buffer_append_str(buf_674,it_677->c_value);
            if(            j_675!=list$1CVALUEph_length(come_params_573)-1) {
                buffer_append_str(buf_674,",");
            }
            j_675++;
        }
        come_call_finalizer3(o2_saved_676,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_674,")");
        come_value2_678=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 985, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj211=come_value2_678->c_value;
        come_value2_678->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_674));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_value2_678->var=((void*)0);
        if(        result_type2_568->mClass->mProtocol&&string_operator_equals(result_type2_568->mClass->mName,"object")&&result_type2_568->mNoRefference) {
            generics_num_679=result_type_567->mGenericsNumBefore;
            if(            obj_type_457->mNoSolvedGenericsType&&obj_type_457->mNoSolvedGenericsType->v1) {
                refference_type_680=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(obj_type_457->mNoSolvedGenericsType->v1->mGenericsTypes,generics_num_679));
                if(                refference_type_680&&refference_type_680->mRefferenceOriginalType) {
                    __dec_obj212=refference_type_680;
                    refference_type_680=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, refference_type_680->mRefferenceOriginalType->v1));
                    come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
                    static int i_681=0;
                    i_681++;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value619=make_define_var(result_type_567,((char*)(__right_value618=xsprintf("__tmp_inf\%s",((char*)(__right_value617=int_to_string(i_681)))))),(_Bool)0,info))));
                    __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj213=come_value2_678->c_value;
                    come_value2_678->c_value=(char*)come_increment_ref_count(xsprintf("((__tmp_inf\%s=\%s),((\%s)(__tmp_inf\%s ? __tmp_inf\%s->_protocol_obj:(void*)0)))",((char*)(__right_value620=int_to_string(i_681))),((char*)(__right_value621=string_to_string(come_value2_678->c_value))),((char*)(__right_value623=string_to_string(((char*)(__right_value622=make_type_name_string(refference_type_680,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))))),((char*)(__right_value624=int_to_string(i_681))),((char*)(__right_value625=int_to_string(i_681)))));
                    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj214=result_type2_568;
                    result_type2_568=(struct sType*)come_increment_ref_count(refference_type_680);
                    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj215=result_type2_568->mRefferenceOriginalType;
                    result_type2_568->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(__right_value627=list$1sTypephp_operator_load_element(obj_type_457->mNoSolvedGenericsType->v1->mGenericsTypes,generics_num_679))), "20method.c", 1008, 31))->mRefferenceOriginalType);
                    come_call_finalizer3(__dec_obj215,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value627,sType_finalize, 0, 1, 0, 0, (void*)0);
                    result_type2_568->mHeap=result_type_567->mHeap;
                }
                come_call_finalizer3(refference_type_680,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            __dec_obj216=come_value2_678->type;
            come_value2_678->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_568));
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_678->type->mStatic=(_Bool)0;
        }
        else {
            __dec_obj217=come_value2_678->type;
            come_value2_678->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_568));
            come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_678->type->mStatic=(_Bool)0;
            if(            result_type2_568->mHeap) {
                append_object_to_right_values2(come_value2_678,(struct sType*)come_increment_ref_count(result_type2_568),info,(_Bool)0);
            }
        }
        __dec_obj218=come_value2_678->c_value;
        come_value2_678->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_678->c_value,come_value2_678->type,info));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value2_678->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_678));
        if(        is_contained_method_generics_types(obj_type_457,info)&&generics_fun_name_549) {
            map$2charphsFunph_remove(info->funcs,generics_fun_name_549);
        }
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj219=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_454);
        come_call_finalizer3(__dec_obj219,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_550;
        generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_674,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_678,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result377__ = (_Bool)1;
    fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(obj_448) { obj_448 = come_decrement_ref_count2(obj_448, ((struct sNode*)obj_448)->finalize, ((struct sNode*)obj_448)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(method_block_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result377__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result302__;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_438;
struct list_item$1tuple2$2charphsNodephph* it_439;
void* __right_value380 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result307__;
    if(    self==((void*)0)) {
        __result302__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    result_438=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1221, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_439=self->head;
    while(it_439!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_438,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodephp_clone, it_439->item)));
        it_439=it_439->next;
    }
    __result307__ = gComeFunResultObject = __result_obj__ = result_438;
    come_call_finalizer3(result_438,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result303__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_436;
struct list_item$1tuple2$2charphsNodephph* prev_it_437;
    it_436=self->head;
    while(it_436!=((void*)0)) {
        prev_it_437=it_436;
        it_436=it_436->next;
        come_call_finalizer3(prev_it_437,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj146;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj146=self->item;
            come_call_finalizer3(__dec_obj146,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj147;
struct sNode* __dec_obj148;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj147=self->v1;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj148=self->v2;
            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_440;
struct tuple2$2charphsNodeph* __dec_obj149;
void* __right_value375 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_441;
struct tuple2$2charphsNodeph* __dec_obj150;
void* __right_value376 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_442;
struct tuple2$2charphsNodeph* __dec_obj151;
struct list$1tuple2$2charphsNodephph* __result304__;
    if(    self->len==0) {
        litem_440=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value374=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1235, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_440->prev=((void*)0);
        litem_440->next=((void*)0);
        __dec_obj149=litem_440->item;
        litem_440->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj149,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_440;
        self->head=litem_440;
    }
    else if(    self->len==1) {
        litem_441=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value375=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1245, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_441->prev=self->head;
        litem_441->next=((void*)0);
        __dec_obj150=litem_441->item;
        litem_441->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj150,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_441;
        self->head->next=litem_441;
    }
    else {
        litem_442=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value376=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1255, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_442->prev=self->tail;
        litem_442->next=((void*)0);
        __dec_obj151=litem_442->item;
        litem_442->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj151,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_442;
        self->tail=litem_442;
    }
    self->len++;
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result305__;
void* __right_value377 = (void*)0;
struct tuple2$2charphsNodeph* result_443;
void* __right_value378 = (void*)0;
char* __dec_obj152;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj153;
struct tuple2$2charphsNodeph* __result306__;
    if(    self==(void*)0) {
        __result305__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    result_443=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj152=result_443->v1;
        result_443->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj153=result_443->v2;
        result_443->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result306__ = gComeFunResultObject = __result_obj__ = result_443;
    come_call_finalizer3(result_443,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj154;
struct sNode* __dec_obj155;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj154=self->v1;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj155=self->v2;
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_444;
struct list_item$1tuple2$2charphsNodephph* prev_it_445;
    it_444=self->head;
    while(it_444!=((void*)0)) {
        prev_it_445=it_444;
        it_444=it_444->next;
        come_call_finalizer3(prev_it_445,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj159;
struct sNode* __dec_obj160;
char* __dec_obj161;
struct list$1tuple2$2charphsNodephph* __dec_obj162;
struct buffer* __dec_obj163;
struct list$1sTypeph* __dec_obj164;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj159=self->sname;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        if(        self->obj==gComeFunResultObject) {
            __dec_obj160=self->obj;
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj161=self->fun_name;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj162=self->params;
            come_call_finalizer3(__dec_obj162,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj163=self->method_block;
            come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj164=self->method_generics_types;
            come_call_finalizer3(__dec_obj164,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
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
struct list$1CVALUEph* __result311__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_470;
int i_471;
struct CVALUE* __result313__;
struct CVALUE* default_value_472;
struct CVALUE* __result314__;
default_value_472 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_470=self->head;
    i_471=0;
    while(it_470!=((void*)0)) {
        if(        position==i_471) {
            __result313__ = gComeFunResultObject = __result_obj__ = it_470->item;
            gComeFunResultObject = (void*)0;
            return __result313__;
        }
        it_470=it_470->next;
        i_471++;
    }
    memset(&default_value_472,0,sizeof(struct CVALUE*));
    __result314__ = gComeFunResultObject = __result_obj__ = default_value_472;
    come_call_finalizer3(default_value_472,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_478;
int i_479;
struct sType* default_value_480;
struct list$1sTypeph* __result316__;
struct list_item$1sTypeph* it_484;
int i_485;
struct sType* __dec_obj171;
struct list$1sTypeph* __result317__;
default_value_480 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_478=self->len;
        for(        i_479=0;        i_479<position-len_478;        i_479++        ){
            memset(&default_value_480,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_480));
            come_call_finalizer3(default_value_480,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result316__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    it_484=self->head;
    i_485=0;
    while(it_484!=((void*)0)) {
        if(        position==i_485) {
            __dec_obj171=it_484->item;
            it_484->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_484=it_484->next;
        i_485++;
    }
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
struct list_item$1sTypeph* litem_481;
struct sType* __dec_obj168;
void* __right_value405 = (void*)0;
struct list_item$1sTypeph* litem_482;
struct sType* __dec_obj169;
void* __right_value406 = (void*)0;
struct list_item$1sTypeph* litem_483;
struct sType* __dec_obj170;
struct list$1sTypeph* __result315__;
    if(    self->len==0) {
        litem_481=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value404=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1305, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_481->prev=((void*)0);
        litem_481->next=((void*)0);
        __dec_obj168=litem_481->item;
        litem_481->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_481;
        self->head=litem_481;
    }
    else if(    self->len==1) {
        litem_482=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value405=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1315, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_482->prev=self->head;
        litem_482->next=((void*)0);
        __dec_obj169=litem_482->item;
        litem_482->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_482;
        self->head->next=litem_482;
    }
    else {
        litem_483=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value406=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1325, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_483->prev=self->tail;
        litem_483->next=((void*)0);
        __dec_obj170=litem_483->item;
        litem_483->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_483;
        self->tail=litem_483;
    }
    self->len++;
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_493;
struct tuple2$2charphsNodeph* __result318__;
struct tuple2$2charphsNodeph* __result319__;
struct tuple2$2charphsNodeph* result_494;
struct tuple2$2charphsNodeph* __result320__;
result_493 = (void*)0;
result_494 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_493,0,sizeof(struct tuple2$2charphsNodeph*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_493;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->it=self->head;
    if(    self->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_494,0,sizeof(struct tuple2$2charphsNodeph*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_494;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_496;
struct tuple2$2charphsNodeph* __result321__;
struct tuple2$2charphsNodeph* __result322__;
struct tuple2$2charphsNodeph* result_497;
struct tuple2$2charphsNodeph* __result323__;
result_496 = (void*)0;
result_497 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_496,0,sizeof(struct tuple2$2charphsNodeph*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_496;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_497,0,sizeof(struct tuple2$2charphsNodeph*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_497;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_523;
struct tuple2$2charphsTypeph* __result326__;
struct tuple2$2charphsTypeph* __result327__;
struct tuple2$2charphsTypeph* result_524;
struct tuple2$2charphsTypeph* __result328__;
result_523 = (void*)0;
result_524 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_523,0,sizeof(struct tuple2$2charphsTypeph*));
        __result326__ = gComeFunResultObject = __result_obj__ = result_523;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    self->it=self->head;
    if(    self->it) {
        __result327__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    memset(&result_524,0,sizeof(struct tuple2$2charphsTypeph*));
    __result328__ = gComeFunResultObject = __result_obj__ = result_524;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_526;
struct tuple2$2charphsTypeph* __result329__;
struct tuple2$2charphsTypeph* __result330__;
struct tuple2$2charphsTypeph* result_527;
struct tuple2$2charphsTypeph* __result331__;
result_526 = (void*)0;
result_527 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_526,0,sizeof(struct tuple2$2charphsTypeph*));
        __result329__ = gComeFunResultObject = __result_obj__ = result_526;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result330__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    memset(&result_527,0,sizeof(struct tuple2$2charphsTypeph*));
    __result331__ = gComeFunResultObject = __result_obj__ = result_527;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_542;
struct CVALUE* __result333__;
struct CVALUE* __result334__;
struct CVALUE* result_543;
struct CVALUE* __result335__;
result_542 = (void*)0;
result_543 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_542,0,sizeof(struct CVALUE*));
        __result333__ = gComeFunResultObject = __result_obj__ = result_542;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    self->it=self->head;
    if(    self->it) {
        __result334__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    memset(&result_543,0,sizeof(struct CVALUE*));
    __result335__ = gComeFunResultObject = __result_obj__ = result_543;
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_545;
struct CVALUE* __result336__;
struct CVALUE* __result337__;
struct CVALUE* result_546;
struct CVALUE* __result338__;
result_545 = (void*)0;
result_546 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_545,0,sizeof(struct CVALUE*));
        __result336__ = gComeFunResultObject = __result_obj__ = result_545;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result337__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    memset(&result_546,0,sizeof(struct CVALUE*));
    __result338__ = gComeFunResultObject = __result_obj__ = result_546;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_556;
unsigned int hash_557;
unsigned int it_558;
struct sFun* __result339__;
struct sFun* __result340__;
struct sFun* __result341__;
struct sFun* __result342__;
default_value_556 = (void*)0;
    memset(&default_value_556,0,sizeof(struct sFun*));
    hash_557=charp_get_hash_key(((char*)key))%self->size;
    it_558=hash_557;
    while((_Bool)1) {
        if(        self->item_existance[it_558]) {
            if(            charp_equals(self->keys[it_558],key)) {
                __result339__ = gComeFunResultObject = __result_obj__ = self->items[it_558];
                come_call_finalizer3(default_value_556,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result339__;
            }
            it_558++;
            if(            it_558>=self->size) {
                it_558=0;
            }
            else if(            it_558==hash_557) {
                __result340__ = gComeFunResultObject = __result_obj__ = default_value_556;
                come_call_finalizer3(default_value_556,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result340__;
            }
        }
        else {
            __result341__ = gComeFunResultObject = __result_obj__ = default_value_556;
            come_call_finalizer3(default_value_556,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result341__;
        }
    }
    __result342__ = gComeFunResultObject = __result_obj__ = default_value_556;
    come_call_finalizer3(default_value_556,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj186;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj186=self->v2;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value488 = (void*)0;
struct list_item$1CVALUEph* litem_575;
struct CVALUE* __dec_obj190;
void* __right_value489 = (void*)0;
struct list_item$1CVALUEph* litem_576;
struct CVALUE* __dec_obj191;
void* __right_value490 = (void*)0;
struct list_item$1CVALUEph* litem_577;
struct CVALUE* __dec_obj192;
struct list$1CVALUEph* __result347__;
    if(    self->len==0) {
        litem_575=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value488=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1235, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_575->prev=((void*)0);
        litem_575->next=((void*)0);
        __dec_obj190=litem_575->item;
        litem_575->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_575;
        self->head=litem_575;
    }
    else if(    self->len==1) {
        litem_576=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value489=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1245, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_576->prev=self->head;
        litem_576->next=((void*)0);
        __dec_obj191=litem_576->item;
        litem_576->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_576;
        self->head->next=litem_576;
    }
    else {
        litem_577=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value490=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1255, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_577->prev=self->tail;
        litem_577->next=((void*)0);
        __dec_obj192=litem_577->item;
        litem_577->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_577;
        self->tail=litem_577;
    }
    self->len++;
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_585;
char* __result348__;
char* __result349__;
char* result_586;
char* __result350__;
result_585 = (void*)0;
result_586 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_585,0,sizeof(char*));
        __result348__ = gComeFunResultObject = __result_obj__ = result_585;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    self->it=self->head;
    if(    self->it) {
        __result349__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    memset(&result_586,0,sizeof(char*));
    __result350__ = gComeFunResultObject = __result_obj__ = result_586;
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_588;
char* __result351__;
char* __result352__;
char* result_589;
char* __result353__;
result_588 = (void*)0;
result_589 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_588,0,sizeof(char*));
        __result351__ = gComeFunResultObject = __result_obj__ = result_588;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result352__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    memset(&result_589,0,sizeof(char*));
    __result353__ = gComeFunResultObject = __result_obj__ = result_589;
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_599;
int i_600;
struct CVALUE* default_value_601;
struct list$1CVALUEph* __result358__;
struct list_item$1CVALUEph* it_602;
int i_603;
struct CVALUE* __dec_obj193;
struct list$1CVALUEph* __result359__;
default_value_601 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_599=self->len;
        for(        i_600=0;        i_600<position-len_599;        i_600++        ){
            memset(&default_value_601,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_601));
            come_call_finalizer3(default_value_601,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result358__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    it_602=self->head;
    i_603=0;
    while(it_602!=((void*)0)) {
        if(        position==i_603) {
            __dec_obj193=it_602->item;
            it_602->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_602=it_602->next;
        i_603++;
    }
    __result359__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_609;
int i_610;
char* __result360__;
char* default_value_611;
char* __result361__;
default_value_611 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_609=self->head;
    i_610=0;
    while(it_609!=((void*)0)) {
        if(        position==i_610) {
            __result360__ = gComeFunResultObject = __result_obj__ = it_609->item;
            gComeFunResultObject = (void*)0;
            return __result360__;
        }
        it_609=it_609->next;
        i_610++;
    }
    memset(&default_value_611,0,sizeof(char*));
    __result361__ = gComeFunResultObject = __result_obj__ = default_value_611;
    default_value_611 = come_decrement_ref_count2(default_value_611, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_626;
struct sNode* __result366__;
struct sNode* __result367__;
struct sNode* result_627;
struct sNode* __result368__;
result_626 = (void*)0;
result_627 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_626,0,sizeof(struct sNode*));
        __result366__ = gComeFunResultObject = __result_obj__ = result_626;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    self->it=self->head;
    if(    self->it) {
        __result367__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    memset(&result_627,0,sizeof(struct sNode*));
    __result368__ = gComeFunResultObject = __result_obj__ = result_627;
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_629;
struct sNode* __result369__;
struct sNode* __result370__;
struct sNode* result_630;
struct sNode* __result371__;
result_629 = (void*)0;
result_630 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_629,0,sizeof(struct sNode*));
        __result369__ = gComeFunResultObject = __result_obj__ = result_629;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result370__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    memset(&result_630,0,sizeof(struct sNode*));
    __result371__ = gComeFunResultObject = __result_obj__ = result_630;
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value544 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_634;
struct tuple2$2charphsNodeph* __dec_obj196;
void* __right_value545 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_635;
struct tuple2$2charphsNodeph* __dec_obj197;
void* __right_value546 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_636;
struct tuple2$2charphsNodeph* __dec_obj198;
struct list$1tuple2$2charphsNodephph* __result372__;
    if(    self->len==0) {
        litem_634=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value544=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1305, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_634->prev=((void*)0);
        litem_634->next=((void*)0);
        __dec_obj196=litem_634->item;
        litem_634->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj196,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_634;
        self->head=litem_634;
    }
    else if(    self->len==1) {
        litem_635=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value545=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1315, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_635->prev=self->head;
        litem_635->next=((void*)0);
        __dec_obj197=litem_635->item;
        litem_635->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj197,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_635;
        self->head->next=litem_635;
    }
    else {
        litem_636=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value546=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1325, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_636->prev=self->tail;
        litem_636->next=((void*)0);
        __dec_obj198=litem_636->item;
        litem_636->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj198,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_636;
        self->tail=litem_636;
    }
    self->len++;
    __result372__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj199;
struct tuple2$2charphvoidp* __result373__;
    __dec_obj199=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result373__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj200;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj200=self->v1;
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value640 = (void*)0;
struct sNode* node_682;
void* __right_value641 = (void*)0;
struct sNode* __dec_obj226;
struct sNode* __result380__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1047, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value632=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1047, "struct sMethodCallNode*", (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_682=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value632,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj226=node_682;
    node_682=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_682),info));
    if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
    __result380__ = gComeFunResultObject = __result_obj__ = node_682;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result378__;
void* __right_value633 = (void*)0;
struct sMethodCallNode* result_683;
void* __right_value634 = (void*)0;
char* __dec_obj220;
void* __right_value635 = (void*)0;
struct sNode* __dec_obj221;
void* __right_value636 = (void*)0;
char* __dec_obj222;
void* __right_value637 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj223;
void* __right_value638 = (void*)0;
struct buffer* __dec_obj224;
void* __right_value639 = (void*)0;
struct list$1sTypeph* __dec_obj225;
struct sMethodCallNode* __result379__;
    if(    self==(void*)0) {
        __result378__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    result_683=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_683->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj220=result_683->sname;
        result_683->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_683->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj221=result_683->obj;
        result_683->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj222=result_683->fun_name;
        result_683->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj223=result_683->params;
        result_683->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj223,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj224=result_683->method_block;
        result_683->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_683->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj225=result_683->method_generics_types;
        result_683->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj225,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_683->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_683->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_683->fun=self->fun;
    }
    __result379__ = gComeFunResultObject = __result_obj__ = result_683;
    come_call_finalizer3(result_683,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_684;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
_Bool parse_method_generics_type_685;
char* p_686;
int sline_687;
void* __right_value647 = (void*)0;
char* word_688;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1sTypeph* method_generics_types_689;
void* __right_value650 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_690=0;
char* name_691=0;
_Bool err_692=0;
void* __right_value651 = (void*)0;
char* p_693;
int sline_694;
_Bool err_flag_695;
void* __right_value652 = (void*)0;
char* label_696;
void* __right_value653 = (void*)0;
char* __dec_obj231;
char* __dec_obj232;
_Bool no_comma_697;
_Bool in_fun_param_698;
void* __right_value654 = (void*)0;
struct sNode* node_699;
void* __right_value655 = (void*)0;
struct sNode* __dec_obj233;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct buffer* method_block_700;
int method_block_sline_701;
char* head_702;
void* __right_value658 = (void*)0;
char* tail_703;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct buffer* __dec_obj234;
int len_704;
void* __right_value661 = (void*)0;
char* mem_705;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value665 = (void*)0;
struct sNode* node_706;
void* __right_value666 = (void*)0;
struct sNode* __dec_obj235;
struct sNode* __result382__;
    params_684=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 1056, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephph_push_back(params_684,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1057, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_685=(_Bool)0;
    {
        p_686=info->p;
        sline_687=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_688=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_688,info)) {
                    parse_method_generics_type_685=(_Bool)1;
                }
                word_688 = come_decrement_ref_count2(word_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_686;
        info->sline=sline_687;
    }
    method_generics_types_689=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 1087, "struct list$1sTypeph*", (void*)0, (void*)0))));
    if(    parse_method_generics_type_685&&*info->p==60) {
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
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value650=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_690=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_691=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_692=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value650,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_692) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_689,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_690)));
                come_call_finalizer3(type_690,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_691 = come_decrement_ref_count2(name_691, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            p_693=info->p;
            sline_694=info->sline;
            err_flag_695=(_Bool)0;
            label_696=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj231=label_696;
                label_696=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_695=(_Bool)1;
            }
            if(            err_flag_695==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj232=label_696;
                label_696=((void*)0);
                __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_693;
                info->sline=sline_694;
            }
            no_comma_697=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_698=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_699=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj233=node_699;
            node_699=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_699),info));
            if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_698;
            info->no_comma=no_comma_697;
            list$1tuple2$2charphsNodephph_push_back(params_684,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1163, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(label_696),(struct sNode*)come_increment_ref_count(node_699))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_696 = come_decrement_ref_count2(label_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_699) { node_699 = come_decrement_ref_count2(node_699, ((struct sNode*)node_699)->finalize, ((struct sNode*)node_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_696 = come_decrement_ref_count2(label_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_699) { node_699 = come_decrement_ref_count2(node_699, ((struct sNode*)node_699)->finalize, ((struct sNode*)node_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_700=((void*)0);
    method_block_sline_701=0;
    if(    *info->p==123) {
        head_702=info->p;
        method_block_sline_701=info->sline;
        ((char*)(__right_value658=skip_block(info)));
        __right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_703=info->p;
        __dec_obj234=method_block_700;
        method_block_700=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1187, "struct buffer*", (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj234,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_704=tail_703-head_702;
        mem_705=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_704+1)), "20method.c", 1190, "char*", (void*)0, (void*)0));
        memcpy(mem_705,head_702,len_704);
        mem_705[len_704]=0;
        buffer_append_str(method_block_700,mem_705);
        buffer_append_str(method_block_700,"\n");
        mem_705 = come_decrement_ref_count2(mem_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1202, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value664=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1202, "struct sMethodCallNode*", (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_684),method_block_700,method_block_sline_701,method_generics_types_689,(_Bool)0,(_Bool)1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    node_706=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value664,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj235=node_706;
    node_706=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_706),info));
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result382__ = gComeFunResultObject = __result_obj__ = node_706;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_684,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_689,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_700,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj227;
struct sNode* __dec_obj228;
struct tuple2$2charphsNodeph* __result381__;
    __dec_obj227=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj228=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
    __result381__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj229;
char* __dec_obj230;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj229=self->v1;
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj230=self->v2;
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value669 = (void*)0;
struct sNode* __result383__;
void* __right_value670 = (void*)0;
struct sNode* __result384__;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1212, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value668=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1212, "struct sCurrentNode*", (void*)0, (void*)0)),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value669=_inf_value4));
        come_call_finalizer3(__right_value668,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value669) { __right_value669 = come_decrement_ref_count2(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value670=string_node_v17(buf,head,head_sline,info)));
    if(__right_value670) { __right_value670 = come_decrement_ref_count2(__right_value670, ((struct sNode*)__right_value670)->finalize, ((struct sNode*)__right_value670)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result384__;
}

