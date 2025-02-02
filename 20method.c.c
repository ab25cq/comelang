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
unsigned char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_122;
struct buffer* __result63__;
    result_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3793, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_122,self,sizeof(char)*len);
    __result63__ = gComeFunResultObject = __result_obj__ = result_122;
    come_call_finalizer3(result_122,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_123;
int i_124;
struct buffer* __result64__;
    result_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3800, "struct buffer*", (void*)0, (void*)0))));
    for(    i_124=0;    i_124<len;    i_124++    ){
        buffer_append(result_123,self[i_124],strlen(self[i_124]));
    }
    __result64__ = gComeFunResultObject = __result_obj__ = result_123;
    come_call_finalizer3(result_123,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_125;
struct buffer* __result65__;
    result_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3809, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_125,(char*)self,sizeof(short)*len);
    __result65__ = gComeFunResultObject = __result_obj__ = result_125;
    come_call_finalizer3(result_125,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_126;
struct buffer* __result66__;
    result_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3816, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_126,(char*)self,sizeof(int)*len);
    __result66__ = gComeFunResultObject = __result_obj__ = result_126;
    come_call_finalizer3(result_126,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_127;
struct buffer* __result67__;
    result_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3823, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_127,(char*)self,sizeof(long)*len);
    __result67__ = gComeFunResultObject = __result_obj__ = result_127;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_128;
struct buffer* __result68__;
    result_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3830, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_128,(char*)self,sizeof(float)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = result_128;
    come_call_finalizer3(result_128,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_129;
struct buffer* __result69__;
    result_129=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3837, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_129,(char*)self,sizeof(double)*len);
    __result69__ = gComeFunResultObject = __result_obj__ = result_129;
    come_call_finalizer3(result_129,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4165, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4170, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4175, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4180, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4185, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_135;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result80__;
    buf_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4218, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_135,(char*)self,sizeof(char)*len);
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4220, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_135))));
    come_call_finalizer3(buf_135,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_136;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result82__;
    buf_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4225, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_136,(char*)self,sizeof(char*)*len);
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4227, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_136))));
    come_call_finalizer3(buf_136,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_137;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result83__;
    buf_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4232, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_137,(char*)self,sizeof(short)*len);
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4234, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_137))));
    come_call_finalizer3(buf_137,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_138;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result84__;
    buf_138=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4239, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_138,(char*)self,sizeof(int)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4241, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_138))));
    come_call_finalizer3(buf_138,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_139;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result85__;
    buf_139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4246, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_139,(char*)self,sizeof(long)*len);
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4248, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_139))));
    come_call_finalizer3(buf_139,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_140;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result87__;
    buf_140=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4253, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_140,(char*)self,sizeof(float)*len);
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4255, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_140))));
    come_call_finalizer3(buf_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_141;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result89__;
    buf_141=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4260, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_141,(char*)self,sizeof(double)*len);
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4262, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_141))));
    come_call_finalizer3(buf_141,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4267, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4272, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4277, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result101__;
    __result101__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4282, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result101__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4287, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4292, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4297, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4302, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4307, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result116__;
    __result116__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4312, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result116__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result118__;
    __result118__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4317, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result120__;
    __result120__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4322, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result120__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4327, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result124__;
    __result124__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4332, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_199;
int i_200;
    result_199=(_Bool)0;
    for(    i_200=0;    i_200<len;    i_200++    ){
        if(        strncmp(self[i_200],str,strlen(self[i_200]))==0) {
            result_199=(_Bool)1;
            break;
        }
    }
    return result_199;
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
int i_142;
struct list$1char* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_142=0;    i_142<num_value;    i_142++    ){
        list$1char_push_back(self,values[i_142]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_143;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_144;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_145;
struct list$1char* __result90__;
    if(    self->len==0) {
        litem_143=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1304, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_143->prev=((void*)0);
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head=litem_143;
    }
    else if(    self->len==1) {
        litem_144=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1314, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_144->prev=self->head;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail=litem_144;
        self->head->next=litem_144;
    }
    else {
        litem_145=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1324, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_145->prev=self->tail;
        litem_145->next=((void*)0);
        litem_145->item=item;
        self->tail->next=litem_145;
        self->tail=litem_145;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_146;
struct list_item$1char* prev_it_147;
    it_146=self->head;
    while(it_146!=((void*)0)) {
        prev_it_147=it_146;
        it_146=it_146->next;
        come_call_finalizer3(prev_it_147,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_148;
struct list$1charp* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_148=0;    i_148<num_value;    i_148++    ){
        list$1charp_push_back(self,values[i_148]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_149;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_150;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_151;
struct list$1charp* __result93__;
    if(    self->len==0) {
        litem_149=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1304, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_149->prev=((void*)0);
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head=litem_149;
    }
    else if(    self->len==1) {
        litem_150=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1314, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_150->prev=self->head;
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail=litem_150;
        self->head->next=litem_150;
    }
    else {
        litem_151=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1324, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_151->prev=self->tail;
        litem_151->next=((void*)0);
        litem_151->item=item;
        self->tail->next=litem_151;
        self->tail=litem_151;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_152;
struct list_item$1charp* prev_it_153;
    it_152=self->head;
    while(it_152!=((void*)0)) {
        prev_it_153=it_152;
        it_152=it_152->next;
        come_call_finalizer3(prev_it_153,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_154;
struct list$1short* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_154=0;    i_154<num_value;    i_154++    ){
        list$1short_push_back(self,values[i_154]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_155;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_156;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_157;
struct list$1short* __result96__;
    if(    self->len==0) {
        litem_155=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1304, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_155->prev=((void*)0);
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head=litem_155;
    }
    else if(    self->len==1) {
        litem_156=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1314, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_156->prev=self->head;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail=litem_156;
        self->head->next=litem_156;
    }
    else {
        litem_157=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1324, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_157->prev=self->tail;
        litem_157->next=((void*)0);
        litem_157->item=item;
        self->tail->next=litem_157;
        self->tail=litem_157;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_158;
struct list_item$1short* prev_it_159;
    it_158=self->head;
    while(it_158!=((void*)0)) {
        prev_it_159=it_158;
        it_158=it_158->next;
        come_call_finalizer3(prev_it_159,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_160;
struct list$1int* __result100__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_160=0;    i_160<num_value;    i_160++    ){
        list$1int_push_back(self,values[i_160]);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_161;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_162;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_163;
struct list$1int* __result99__;
    if(    self->len==0) {
        litem_161=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1304, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_161->prev=((void*)0);
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head=litem_161;
    }
    else if(    self->len==1) {
        litem_162=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1314, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_162->prev=self->head;
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail=litem_162;
        self->head->next=litem_162;
    }
    else {
        litem_163=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1324, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_163->prev=self->tail;
        litem_163->next=((void*)0);
        litem_163->item=item;
        self->tail->next=litem_163;
        self->tail=litem_163;
    }
    self->len++;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_164;
struct list_item$1int* prev_it_165;
    it_164=self->head;
    while(it_164!=((void*)0)) {
        prev_it_165=it_164;
        it_164=it_164->next;
        come_call_finalizer3(prev_it_165,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_166;
struct list$1long* __result103__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_166=0;    i_166<num_value;    i_166++    ){
        list$1long_push_back(self,values[i_166]);
    }
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_167;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_168;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_169;
struct list$1long* __result102__;
    if(    self->len==0) {
        litem_167=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1304, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_167->prev=((void*)0);
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head=litem_167;
    }
    else if(    self->len==1) {
        litem_168=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1314, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_168->prev=self->head;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail=litem_168;
        self->head->next=litem_168;
    }
    else {
        litem_169=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1324, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_169->prev=self->tail;
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail->next=litem_169;
        self->tail=litem_169;
    }
    self->len++;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_170;
struct list_item$1long* prev_it_171;
    it_170=self->head;
    while(it_170!=((void*)0)) {
        prev_it_171=it_170;
        it_170=it_170->next;
        come_call_finalizer3(prev_it_171,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_172;
struct list$1float* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_172=0;    i_172<num_value;    i_172++    ){
        list$1float_push_back(self,values[i_172]);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_173;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_174;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_175;
struct list$1float* __result105__;
    if(    self->len==0) {
        litem_173=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1304, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_173->prev=((void*)0);
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head=litem_173;
    }
    else if(    self->len==1) {
        litem_174=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1314, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_174->prev=self->head;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail=litem_174;
        self->head->next=litem_174;
    }
    else {
        litem_175=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1324, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_175->prev=self->tail;
        litem_175->next=((void*)0);
        litem_175->item=item;
        self->tail->next=litem_175;
        self->tail=litem_175;
    }
    self->len++;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_176;
struct list_item$1float* prev_it_177;
    it_176=self->head;
    while(it_176!=((void*)0)) {
        prev_it_177=it_176;
        it_176=it_176->next;
        come_call_finalizer3(prev_it_177,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_178;
struct list$1double* __result109__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_178=0;    i_178<num_value;    i_178++    ){
        list$1double_push_back(self,values[i_178]);
    }
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_179;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_180;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_181;
struct list$1double* __result108__;
    if(    self->len==0) {
        litem_179=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1304, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_179->prev=((void*)0);
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head=litem_179;
    }
    else if(    self->len==1) {
        litem_180=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1314, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_180->prev=self->head;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail=litem_180;
        self->head->next=litem_180;
    }
    else {
        litem_181=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1324, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_181->prev=self->tail;
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail->next=litem_181;
        self->tail=litem_181;
    }
    self->len++;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_182;
struct list_item$1double* prev_it_183;
    it_182=self->head;
    while(it_182!=((void*)0)) {
        prev_it_183=it_182;
        it_182=it_182->next;
        come_call_finalizer3(prev_it_183,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2096, "char*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_184;
    if(    0) {
        for(        i_184=0;        i_184<self->len;        i_184++        ){
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2096, "char**", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_185;
    if(    0) {
        for(        i_185=0;        i_185<self->len;        i_185++        ){
            self->items[i_185] = come_decrement_ref_count2(self->items[i_185], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2096, "short*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_186;
    if(    0) {
        for(        i_186=0;        i_186<self->len;        i_186++        ){
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2096, "int*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_187;
    if(    0) {
        for(        i_187=0;        i_187<self->len;        i_187++        ){
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2096, "long*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_188;
    if(    0) {
        for(        i_188=0;        i_188<self->len;        i_188++        ){
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2096, "float*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_189;
    if(    0) {
        for(        i_189=0;        i_189<self->len;        i_189++        ){
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2096, "double*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_190;
    if(    0) {
        for(        i_190=0;        i_190<self->len;        i_190++        ){
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
struct list_item$1charph* it_222;
struct list_item$1charph* prev_it_223;
    it_222=self->head;
    while(it_222!=((void*)0)) {
        prev_it_223=it_222;
        it_222=it_222->next;
        come_call_finalizer3(prev_it_223,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* litem_227;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_228;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_229;
char* __dec_obj30;
struct list$1charph* __result163__;
    if(    self->len==0) {
        litem_227=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1304, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_227->prev=((void*)0);
        litem_227->next=((void*)0);
        __dec_obj28=litem_227->item;
        litem_227->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_227;
        self->head=litem_227;
    }
    else if(    self->len==1) {
        litem_228=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1314, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_228->prev=self->head;
        litem_228->next=((void*)0);
        __dec_obj29=litem_228->item;
        litem_228->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_228;
        self->head->next=litem_228;
    }
    else {
        litem_229=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1324, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_229->prev=self->tail;
        litem_229->next=((void*)0);
        __dec_obj30=litem_229->item;
        litem_229->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_229;
        self->tail=litem_229;
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
char* class_name_280;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sClass* current_stack_281;
struct sVarTable* vtable_282;
struct map$2charphsVarph* o2_saved_283;
char* it_286;
char* key_289;
void* __right_value255 = (void*)0;
struct sVar* value_290;
void* __right_value295 = (void*)0;
struct sType* type2_304;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct tuple2$2charphsTypeph* item_323;
void* __right_value299 = (void*)0;
struct sType* type3_324;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct tuple2$2charphsTypeph* item2_327;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct map$2charphsVarph* o2_saved_379;
char* it_380;
char* key_381;
void* __right_value316 = (void*)0;
struct sVar* value_382;
void* __right_value317 = (void*)0;
struct sType* type2_383;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct tuple2$2charphsTypeph* item_384;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value322 = (void*)0;
char* __dec_obj102;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* __dec_obj103;
_Bool __result276__;
    info->current_stack_num++;
    class_name_280=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_281=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 457, "struct sClass*", (void*)0, (void*)0)),class_name_280,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_282=info->lv_table;
    while(vtable_282) {
        for(        o2_saved_283=(struct map$2charphsVarph*)come_increment_ref_count((vtable_282->mVars)),it_286=map$2charphsVarph_begin((o2_saved_283));        !map$2charphsVarph_end((o2_saved_283));        it_286=map$2charphsVarph_next((o2_saved_283))        ){
            key_289=it_286;
            value_290=((struct sVar*)come_null_check(((struct sVar*)(__right_value255=map$2charphsVarphp_operator_load_element(vtable_282->mVars,key_289))), "common.h", 464, 0));
            come_call_finalizer3(__right_value255,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_304=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_290->mType));
            type2_304->mPointerNum++;
            item_323=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 470, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_290->mCValueName)),(struct sType*)come_increment_ref_count(type2_304)));
            if(            value_290->mCValueName!=((void*)0)) {
                if(                strcmp(value_290->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_290->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_290->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_290->mType->mClass->mName,"va_list")||string_operator_equals(value_290->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_304->mArrayNum)==1) {
                    type3_324=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_304));
                    list$1sNodeph_reset(type3_324->mArrayNum);
                    type3_324->mPointerNum=1;
                    type3_324->mOriginIsArray=(_Bool)1;
                    item2_327=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 490, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_290->mCValueName)),(struct sType*)come_increment_ref_count(type3_324)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_281->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item2_327)));
                    value_290->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_324,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_327,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_281->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item_323)));
                }
            }
            come_call_finalizer3(type2_304,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_323,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_283,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_282=vtable_282->mParent;
    }
    output_struct(current_stack_281,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_280),(struct sClass*)come_increment_ref_count(current_stack_281));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_280,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_280);
    vtable_282=info->lv_table;
    while(vtable_282) {
        for(        o2_saved_379=(struct map$2charphsVarph*)come_increment_ref_count((vtable_282->mVars)),it_380=map$2charphsVarph_begin((o2_saved_379));        !map$2charphsVarph_end((o2_saved_379));        it_380=map$2charphsVarph_next((o2_saved_379))        ){
            key_381=it_380;
            value_382=((struct sVar*)come_null_check(((struct sVar*)(__right_value316=map$2charphsVarphp_operator_load_element(vtable_282->mVars,key_381))), "common.h", 515, 1));
            come_call_finalizer3(__right_value316,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_383=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_382->mType));
            item_384=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 519, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(value_382->mCValueName),(struct sType*)come_increment_ref_count(type2_383)));
            if(            value_382->mCValueName!=((void*)0)) {
                if(                strcmp(value_382->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_382->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_382->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_382->mType->mClass->mName,"va_list")||string_operator_equals(value_382->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_383->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_382->mCValueName,value_382->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_382->mCValueName,value_382->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_384,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_379,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_282=vtable_282->mParent;
    }
    come_value_385=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 548, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj102=come_value_385->c_value;
    come_value_385->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj103=come_value_385->type;
    come_value_385->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 551, "struct sType*", (void*)0, (void*)0)),class_name_280,(_Bool)0,info));
    come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_385->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_385->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_385));
    __result276__ = (_Bool)1;
    class_name_280 = come_decrement_ref_count2(class_name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_281,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
char* result_284;
char* __result222__;
char* __result223__;
char* result_285;
char* __result224__;
result_284 = (void*)0;
result_285 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_284,0,sizeof(char*));
        __result222__ = gComeFunResultObject = __result_obj__ = result_284;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result223__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    memset(&result_285,0,sizeof(char*));
    __result224__ = gComeFunResultObject = __result_obj__ = result_285;
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_287;
char* __result225__;
char* __result226__;
char* result_288;
char* __result227__;
result_287 = (void*)0;
result_288 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_287,0,sizeof(char*));
        __result225__ = gComeFunResultObject = __result_obj__ = result_287;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result226__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    memset(&result_288,0,sizeof(char*));
    __result227__ = gComeFunResultObject = __result_obj__ = result_288;
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_291;
unsigned int hash_292;
unsigned int it_293;
struct sVar* __result228__;
struct sVar* __result229__;
struct sVar* __result230__;
struct sVar* __result231__;
default_value_291 = (void*)0;
    memset(&default_value_291,0,sizeof(struct sVar*));
    hash_292=charp_get_hash_key(((char*)key))%self->size;
    it_293=hash_292;
    while((_Bool)1) {
        if(        self->item_existance[it_293]) {
            if(            charp_equals(self->keys[it_293],key)) {
                __result228__ = gComeFunResultObject = __result_obj__ = self->items[it_293];
                come_call_finalizer3(default_value_291,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result228__;
            }
            it_293++;
            if(            it_293>=self->size) {
                it_293=0;
            }
            else if(            it_293==hash_292) {
                __result229__ = gComeFunResultObject = __result_obj__ = default_value_291;
                come_call_finalizer3(default_value_291,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
        }
        else {
            __result230__ = gComeFunResultObject = __result_obj__ = default_value_291;
            come_call_finalizer3(default_value_291,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result230__;
        }
    }
    __result231__ = gComeFunResultObject = __result_obj__ = default_value_291;
    come_call_finalizer3(default_value_291,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
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
struct list_item$1sTypeph* it_294;
struct list_item$1sTypeph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_296;
struct list_item$1sTypeph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_298;
struct list_item$1sNodeph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_300;
struct list_item$1sNodeph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_302;
struct list_item$1charph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result232__;
void* __right_value256 = (void*)0;
struct sType* result_305;
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
struct sType* __result248__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_305=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_305->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj59=result_305->mNoSolvedGenericsType;
        result_305->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj60=result_305->mOriginalLoadVarType;
        result_305->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj61=result_305->mRefferenceOriginalType;
        result_305->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj62=result_305->mInterfaceName;
        result_305->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj63=result_305->mGenericsName;
        result_305->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj67=result_305->mGenericsTypes;
        result_305->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj71=result_305->mArrayNum;
        result_305->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj71,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj72=result_305->mParamTypes;
        result_305->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj76=result_305->mParamNames;
        result_305->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj76,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj77=result_305->mResultType;
        result_305->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj78=result_305->mAlignas;
        result_305->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj79=result_305->mChannelType;
        result_305->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj79,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_305->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_305->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_305->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_305->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_305->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_305->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_305->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_305->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_305->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_305->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_305->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_305->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_305->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_305->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_305->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_305->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_305->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_305->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_305->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_305->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_305->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_305->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_305->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_305->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_305->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj80=result_305->mSizeNum;
        result_305->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_305->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj81=result_305->mOriginalTypeName;
        result_305->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_305->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_305->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_305->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_305->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_305->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_305->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_305->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj82=result_305->mAsmName;
        result_305->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_305->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_305->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_305->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_305->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_305->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj83=result_305->mTupleName;
        result_305->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj84=result_305->mAttribute;
        result_305->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_305;
    come_call_finalizer3(result_305,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result233__;
void* __right_value257 = (void*)0;
struct tuple1$1sTypeph* result_306;
void* __right_value258 = (void*)0;
struct sType* __dec_obj57;
struct tuple1$1sTypeph* __result234__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_306=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj57=result_306->v1;
        result_306->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_306;
    come_call_finalizer3(result_306,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
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
struct list$1sTypeph* __result235__;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sTypeph* result_307;
struct list_item$1sTypeph* it_308;
void* __right_value269 = (void*)0;
struct list$1sTypeph* __result238__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_307=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1220, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_308=self->head;
    while(it_308!=((void*)0)) {
        list$1sTypeph_add(result_307,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_308->item)));
        it_308=it_308->next;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_307;
    come_call_finalizer3(result_307,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value266 = (void*)0;
struct list_item$1sTypeph* litem_309;
struct sType* __dec_obj64;
void* __right_value267 = (void*)0;
struct list_item$1sTypeph* litem_310;
struct sType* __dec_obj65;
void* __right_value268 = (void*)0;
struct list_item$1sTypeph* litem_311;
struct sType* __dec_obj66;
struct list$1sTypeph* __result237__;
    if(    self->len==0) {
        litem_309=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value266=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1234, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_309->prev=((void*)0);
        litem_309->next=((void*)0);
        __dec_obj64=litem_309->item;
        litem_309->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_309;
        self->head=litem_309;
    }
    else if(    self->len==1) {
        litem_310=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value267=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1244, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_310->prev=self->head;
        litem_310->next=((void*)0);
        __dec_obj65=litem_310->item;
        litem_310->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_310;
        self->head->next=litem_310;
    }
    else {
        litem_311=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value268=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1254, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_311->prev=self->tail;
        litem_311->next=((void*)0);
        __dec_obj66=litem_311->item;
        litem_311->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_311;
        self->tail=litem_311;
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
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sNodeph* result_312;
struct list_item$1sNodeph* it_313;
void* __right_value277 = (void*)0;
struct list$1sNodeph* __result244__;
    if(    self==((void*)0)) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_312=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_313=self->head;
    while(it_313!=((void*)0)) {
        list$1sNodeph_add(result_312,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_313->item)));
        it_313=it_313->next;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_312;
    come_call_finalizer3(result_312,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_314;
struct sNode* __dec_obj68;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_315;
struct sNode* __dec_obj69;
void* __right_value275 = (void*)0;
struct list_item$1sNodeph* litem_316;
struct sNode* __dec_obj70;
struct list$1sNodeph* __result241__;
    if(    self->len==0) {
        litem_314=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_314->prev=((void*)0);
        litem_314->next=((void*)0);
        __dec_obj68=litem_314->item;
        litem_314->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_314;
        self->head=litem_314;
    }
    else if(    self->len==1) {
        litem_315=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_315->prev=self->head;
        litem_315->next=((void*)0);
        __dec_obj69=litem_315->item;
        litem_315->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_315;
        self->head->next=litem_315;
    }
    else {
        litem_316=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value275=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_316->prev=self->tail;
        litem_316->next=((void*)0);
        __dec_obj70=litem_316->item;
        litem_316->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_316;
        self->tail=litem_316;
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
void* __right_value276 = (void*)0;
struct sNode* result_317;
struct sNode* __result243__;
    if(    self==(void*)0) {
        __result242__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_317=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
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
    __result243__ = gComeFunResultObject = __result_obj__ = result_317;
    if(result_317) { result_317 = come_decrement_ref_count2(result_317, ((struct sNode*)result_317)->finalize, ((struct sNode*)result_317)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result245__;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* result_318;
struct list_item$1charph* it_319;
void* __right_value285 = (void*)0;
struct list$1charph* __result247__;
    if(    self==((void*)0)) {
        __result245__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    result_318=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0))));
    it_319=self->head;
    while(it_319!=((void*)0)) {
        list$1charph_add(result_318,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_319->item)));
        it_319=it_319->next;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_318;
    come_call_finalizer3(result_318,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_320;
char* __dec_obj73;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_321;
char* __dec_obj74;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_322;
char* __dec_obj75;
struct list$1charph* __result246__;
    if(    self->len==0) {
        litem_320=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_320->prev=((void*)0);
        litem_320->next=((void*)0);
        __dec_obj73=litem_320->item;
        litem_320->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_320;
        self->head=litem_320;
    }
    else if(    self->len==1) {
        litem_321=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_321->prev=self->head;
        litem_321->next=((void*)0);
        __dec_obj74=litem_321->item;
        litem_321->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_321;
        self->head->next=litem_321;
    }
    else {
        litem_322=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_322->prev=self->tail;
        litem_322->next=((void*)0);
        __dec_obj75=litem_322->item;
        litem_322->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_322;
        self->tail=litem_322;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj85;
struct sType* __dec_obj86;
struct tuple2$2charphsTypeph* __result249__;
    __dec_obj85=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj86=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
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
struct list_item$1sNodeph* it_325;
struct list_item$1sNodeph* prev_it_326;
struct list$1sNodeph* __result250__;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        come_call_finalizer3(prev_it_326,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value303 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_328;
struct tuple2$2charphsTypeph* __dec_obj89;
void* __right_value304 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_329;
struct tuple2$2charphsTypeph* __dec_obj90;
void* __right_value305 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_330;
struct tuple2$2charphsTypeph* __dec_obj91;
struct list$1tuple2$2charphsTypephph* __result251__;
    if(    self->len==0) {
        litem_328=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value303=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1304, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_328->prev=((void*)0);
        litem_328->next=((void*)0);
        __dec_obj89=litem_328->item;
        litem_328->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_328;
        self->head=litem_328;
    }
    else if(    self->len==1) {
        litem_329=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value304=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1314, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_329->prev=self->head;
        litem_329->next=((void*)0);
        __dec_obj90=litem_329->item;
        litem_329->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_329;
        self->head->next=litem_329;
    }
    else {
        litem_330=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value305=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1324, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_330->prev=self->tail;
        litem_330->next=((void*)0);
        __dec_obj91=litem_330->item;
        litem_330->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_330;
        self->tail=litem_330;
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
void* __right_value306 = (void*)0;
struct tuple2$2charphsTypeph* result_331;
void* __right_value307 = (void*)0;
char* __dec_obj92;
void* __right_value308 = (void*)0;
struct sType* __dec_obj93;
struct tuple2$2charphsTypeph* __result253__;
    if(    self==(void*)0) {
        __result252__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    result_331=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj92=result_331->v1;
        result_331->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj93=result_331->v2;
        result_331->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result253__ = gComeFunResultObject = __result_obj__ = result_331;
    come_call_finalizer3(result_331,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
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
int i_332;
int i_333;
    for(    i_332=0;    i_332<self->size;    i_332++    ){
        if(        self->item_existance[i_332]) {
            if(            1) {
                come_call_finalizer3(self->items[i_332],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_333=0;    i_333<self->size;    i_333++    ){
        if(        self->item_existance[i_333]) {
            if(            1) {
                self->keys[i_333] = come_decrement_ref_count2(self->keys[i_333], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_355;
unsigned int it_356;
_Bool same_key_exist_373;
char* it2_376;
struct map$2charphsClassph* __result274__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_355=charp_get_hash_key(key)%self->size;
    it_356=hash_355;
    while((_Bool)1) {
        if(        self->item_existance[it_356]) {
            if(            charp_equals(self->keys[it_356],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_356]);
                    self->keys[it_356] = come_decrement_ref_count2(self->keys[it_356], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_356]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_356]);
                    self->keys[it_356]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_356],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_356]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_356]=item;
                }
                break;
            }
            it_356++;
            if(            it_356>=self->size) {
                it_356=0;
            }
            else if(            it_356==hash_355) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_356]=(_Bool)1;
            if(            1) {
                self->keys[it_356]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_356]=key;
            }
            if(            1) {
                self->items[it_356]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_356]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_373=(_Bool)0;
    for(    it2_376=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_376=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_376,key)) {
            same_key_exist_373=(_Bool)1;
        }
    }
    if(    !same_key_exist_373) {
        list$1charp_push_back(self->key_list,key);
    }
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_334;
void* __right_value311 = (void*)0;
char** keys_335;
void* __right_value312 = (void*)0;
struct sClass** items_336;
void* __right_value313 = (void*)0;
_Bool* item_existance_337;
int len_338;
char* it_341;
struct sClass* default_value_344;
void* __right_value314 = (void*)0;
struct sClass* it2_345;
unsigned int hash_352;
int n_353;
struct sClass* default_value_354;
void* __right_value315 = (void*)0;
default_value_344 = (void*)0;
default_value_354 = (void*)0;
    size_334=self->size*10;
    keys_335=(char**)come_increment_ref_count(((char**)(__right_value311=(char**)come_calloc(1, sizeof(char*)*(1*(size_334)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_336=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value312=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_334)), "./comelang.h", 2708, "struct sClass**", (void*)0, (void*)0))));
    item_existance_337=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value313=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_334)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_338=0;
    for(    it_341=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_341=map$2charphsClassph_next(self)    ){
        memset(&default_value_344,0,sizeof(struct sClass*));
        it2_345=((struct sClass*)(__right_value314=map$2charphsClassph_at(self,it_341,default_value_344)));
        come_call_finalizer3(__right_value314,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_352=charp_get_hash_key(it_341)%size_334;
        n_353=hash_352;
        while((_Bool)1) {
            if(            item_existance_337[n_353]) {
                n_353++;
                if(                n_353>=size_334) {
                    n_353=0;
                }
                else if(                n_353==hash_352) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_337[n_353]=(_Bool)1;
                keys_335[n_353]=it_341;
                items_336[n_353]=((struct sClass*)(__right_value315=map$2charphsClassph_at(self,it_341,default_value_354)));
                come_call_finalizer3(__right_value315,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_338++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_335;
    self->items=items_336;
    self->item_existance=item_existance_337;
    self->size=size_334;
    self->len=len_338;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_339;
char* __result254__;
char* __result255__;
char* result_340;
char* __result256__;
result_339 = (void*)0;
result_340 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_339,0,sizeof(char*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_339;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_340,0,sizeof(char*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_340;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_342;
char* __result257__;
char* __result258__;
char* result_343;
char* __result259__;
result_342 = (void*)0;
result_343 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_342,0,sizeof(char*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_342;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_343,0,sizeof(char*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_343;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_346;
unsigned int it_347;
struct sClass* __result260__;
struct sClass* __result261__;
struct sClass* __result262__;
struct sClass* __result263__;
    hash_346=charp_get_hash_key(((char*)key))%self->size;
    it_347=hash_346;
    while((_Bool)1) {
        if(        self->item_existance[it_347]) {
            if(            charp_equals(self->keys[it_347],key)) {
                __result260__ = gComeFunResultObject = __result_obj__ = self->items[it_347];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
            it_347++;
            if(            it_347>=self->size) {
                it_347=0;
            }
            else if(            it_347==hash_346) {
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
struct list_item$1tuple2$2charphsTypephph* it_348;
struct list_item$1tuple2$2charphsTypephph* prev_it_349;
    it_348=self->head;
    while(it_348!=((void*)0)) {
        prev_it_349=it_348;
        it_348=it_348->next;
        come_call_finalizer3(prev_it_349,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_350;
struct list_item$1tuple2$2charphsTypephph* prev_it_351;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        come_call_finalizer3(prev_it_351,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_357;
struct list_item$1charp* it_358;
struct list$1charp* __result267__;
    it2_357=0;
    it_358=self->head;
    while(it_358!=((void*)0)) {
        if(        charp_equals(it_358->item,item)) {
            list$1charp_delete(self,it2_357,it2_357+1);
            break;
        }
        it2_357++;
        it_358=it_358->next;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_359;
struct list$1charp* __result264__;
struct list_item$1charp* it_362;
int i_363;
struct list_item$1charp* prev_it_364;
struct list_item$1charp* it_365;
int i_366;
struct list_item$1charp* prev_it_367;
struct list_item$1charp* it_368;
struct list_item$1charp* head_prev_it_369;
struct list_item$1charp* tail_it_370;
int i_371;
struct list_item$1charp* prev_it_372;
struct list$1charp* __result266__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_359=tail;
        tail=head;
        head=tmp_359;
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
        it_362=self->head;
        i_363=0;
        while(it_362!=((void*)0)) {
            if(            i_363<tail) {
                prev_it_364=it_362;
                it_362=it_362->next;
                i_363++;
                come_call_finalizer3(prev_it_364,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_363==tail) {
                self->head=it_362;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_362=it_362->next;
                i_363++;
            }
        }
    }
    else if(    tail==self->len) {
        it_365=self->head;
        i_366=0;
        while(it_365!=((void*)0)) {
            if(            i_366==head) {
                self->tail=it_365->prev;
                self->tail->next=((void*)0);
            }
            if(            i_366>=head) {
                prev_it_367=it_365;
                it_365=it_365->next;
                i_366++;
                come_call_finalizer3(prev_it_367,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_365=it_365->next;
                i_366++;
            }
        }
    }
    else {
        it_368=self->head;
        head_prev_it_369=((void*)0);
        tail_it_370=((void*)0);
        i_371=0;
        while(it_368!=((void*)0)) {
            if(            i_371==head) {
                head_prev_it_369=it_368->prev;
            }
            if(            i_371==tail) {
                tail_it_370=it_368;
            }
            if(            i_371>=head&&i_371<tail) {
                prev_it_372=it_368;
                it_368=it_368->next;
                i_371++;
                come_call_finalizer3(prev_it_372,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_368=it_368->next;
                i_371++;
            }
        }
        if(        head_prev_it_369!=((void*)0)) {
            head_prev_it_369->next=tail_it_370;
        }
        if(        tail_it_370!=((void*)0)) {
            tail_it_370->prev=head_prev_it_369;
        }
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_360;
struct list_item$1charp* prev_it_361;
struct list$1charp* __result265__;
    it_360=self->head;
    while(it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        come_call_finalizer3(prev_it_361,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
char* result_374;
char* __result268__;
char* __result269__;
char* result_375;
char* __result270__;
result_374 = (void*)0;
result_375 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_374,0,sizeof(char*));
        __result268__ = gComeFunResultObject = __result_obj__ = result_374;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    self->it=self->head;
    if(    self->it) {
        __result269__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    memset(&result_375,0,sizeof(char*));
    __result270__ = gComeFunResultObject = __result_obj__ = result_375;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_377;
char* __result271__;
char* __result272__;
char* result_378;
char* __result273__;
result_377 = (void*)0;
result_378 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_377,0,sizeof(char*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_377;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_378,0,sizeof(char*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_378;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value325 = (void*)0;
struct list_item$1CVALUEph* litem_386;
struct CVALUE* __dec_obj104;
void* __right_value326 = (void*)0;
struct list_item$1CVALUEph* litem_387;
struct CVALUE* __dec_obj108;
void* __right_value327 = (void*)0;
struct list_item$1CVALUEph* litem_388;
struct CVALUE* __dec_obj109;
struct list$1CVALUEph* __result275__;
    if(    self->len==0) {
        litem_386=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value325=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1304, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_386->prev=((void*)0);
        litem_386->next=((void*)0);
        __dec_obj104=litem_386->item;
        litem_386->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_386;
        self->head=litem_386;
    }
    else if(    self->len==1) {
        litem_387=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value326=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1314, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_387->prev=self->head;
        litem_387->next=((void*)0);
        __dec_obj108=litem_387->item;
        litem_387->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_387;
        self->head->next=litem_387;
    }
    else {
        litem_388=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value327=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1324, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_388->prev=self->tail;
        litem_388->next=((void*)0);
        __dec_obj109=litem_388->item;
        litem_388->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_388;
        self->tail=litem_388;
    }
    self->len++;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
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
char* none_generics_name_389;
void* __right_value329 = (void*)0;
char* fun_name2_390;
void* __right_value330 = (void*)0;
char* fun_name3_391;
void* __right_value331 = (void*)0;
struct sGenericsFun* generics_fun_392;
void* __right_value332 = (void*)0;
_Bool _if_conditional1;
void* __right_value333 = (void*)0;
char* __result281__;
char* __result282__;
    none_generics_name_389=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_390=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_391=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_389,fun_name));
    generics_fun_392=((struct sGenericsFun*)(__right_value331=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_391,((void*)0))));
    come_call_finalizer3(__right_value331,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_392) {
        if(        (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_390)),generics_fun_392,type,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_391);
            __result281__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value333=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            none_generics_name_389 = come_decrement_ref_count2(none_generics_name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_390 = come_decrement_ref_count2(fun_name2_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_391 = come_decrement_ref_count2(fun_name3_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result281__;
        }
    }
    __result282__ = gComeFunResultObject = __result_obj__ = fun_name2_390;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    none_generics_name_389 = come_decrement_ref_count2(none_generics_name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_390 = come_decrement_ref_count2(fun_name2_390, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_391 = come_decrement_ref_count2(fun_name3_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_393;
unsigned int it_394;
struct sGenericsFun* __result277__;
struct sGenericsFun* __result278__;
struct sGenericsFun* __result279__;
struct sGenericsFun* __result280__;
    hash_393=charp_get_hash_key(((char*)key))%self->size;
    it_394=hash_393;
    while((_Bool)1) {
        if(        self->item_existance[it_394]) {
            if(            charp_equals(self->keys[it_394],key)) {
                __result277__ = gComeFunResultObject = __result_obj__ = self->items[it_394];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result277__;
            }
            it_394++;
            if(            it_394>=self->size) {
                it_394=0;
            }
            else if(            it_394==hash_393) {
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
struct sNode* current_stack_frame_node_395;
_Bool Value_397;
_Bool __result285__;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_400;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct buffer* method_block2_401;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* method_block_type_402;
void* __right_value344 = (void*)0;
char* class_name_406;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sClass* current_stack_frame_struct_410;
void* __right_value347 = (void*)0;
_Bool __result292__;
void* __right_value348 = (void*)0;
struct sType* result_type_411;
struct list$1sTypeph* param_types_412;
struct list$1charph* param_names_413;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct buffer* all_alhabet_sname_414;
char* p_415;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
int i_416;
struct list$1sTypeph* o2_saved_417;
struct sType* it_420;
struct sType* param_type_423;
void* __right_value353 = (void*)0;
char* param_name_424;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* param_name_425;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
char* param_name_426;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct buffer* source3_427;
char* p_428;
char* head_429;
int sline_430;
struct buffer* __dec_obj122;
void* __right_value360 = (void*)0;
struct sNode* node_431;
_Bool Value_432;
_Bool __result299__;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
char* method_block_name_433;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct CVALUE* come_value2_434;
void* __right_value365 = (void*)0;
struct sFun* fun2_435;
_Bool __result304__;
struct sType* method_block_type2_438;
void* __right_value366 = (void*)0;
char* __dec_obj140;
void* __right_value367 = (void*)0;
struct sType* __dec_obj141;
struct buffer* __dec_obj142;
void* __right_value368 = (void*)0;
struct sType* __dec_obj143;
_Bool contained_method_generics_method_block_439;
struct list$1sTypeph* o2_saved_440;
struct sType* it_441;
_Bool __result306__;
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
    current_stack_frame_node_395=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value335,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_397=node_compile(current_stack_frame_node_395,info);
    if(    !Value_397) {
        __result285__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_395) { current_stack_frame_node_395 = come_decrement_ref_count2(current_stack_frame_node_395, ((struct sNode*)current_stack_frame_node_395)->finalize, ((struct sNode*)current_stack_frame_node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result285__;
    }
    else {
    }
    come_value_400=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_400));
    dec_stack_ptr(1,info);
    method_block2_401=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 42, "struct buffer*", (void*)0, (void*)0))));
    method_block_type_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value342=list$1sTypephp_operator_load_element(fun->mParamTypes,-1))), "20method.c", 43, 2))));
    come_call_finalizer3(__right_value342,sType_finalize, 0, 1, 0, 0, (void*)0);
    class_name_406=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)come_null_check(((struct sType*)(__right_value345=list$1sTypephp_operator_load_element(method_block_type_402->mParamTypes,0))), "20method.c", 47, 3))->mClass=((struct sClass*)(__right_value346=map$2charphsClassphp_operator_load_element(info->classes,class_name_406)));
    come_call_finalizer3(__right_value345,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value346,sClass_finalize, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_410=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value347=map$2charphsClassphp_operator_load_element(info->classes,class_name_406)));
    come_call_finalizer3(__right_value347,sClass_finalize, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_402->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result292__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_395) { current_stack_frame_node_395 = come_decrement_ref_count2(current_stack_frame_node_395, ((struct sNode*)current_stack_frame_node_395)->finalize, ((struct sNode*)current_stack_frame_node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_406 = come_decrement_ref_count2(class_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result292__;
    }
    result_type_411=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_402->mResultType->v1));
    result_type_411->mStatic=(_Bool)0;
    param_types_412=method_block_type_402->mParamTypes;
    param_names_413=method_block_type_402->mParamNames;
    all_alhabet_sname_414=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 63, "struct buffer*", (void*)0, (void*)0))));
    {
        p_415=info->sname;
        while(*p_415) {
            if(            xisalnum(*p_415)) {
                buffer_append_char(all_alhabet_sname_414,*p_415++);
            }
            else {
                p_415++;
            }
        }
    }
    buffer_append_format(method_block2_401,"%s method_block%d_%s(",((char*)(__right_value351=make_type_name_string(result_type_411,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value352=buffer_to_string(all_alhabet_sname_414))));
    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_416=0;
    for(    o2_saved_417=(param_types_412),it_420=list$1sTypeph_begin((o2_saved_417));    !list$1sTypeph_end((o2_saved_417));    it_420=list$1sTypeph_next((o2_saved_417))    ){
        param_type_423=it_420;
        if(        i_416==0) {
            param_name_424=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_401,"%s",((char*)(__right_value354=make_define_var(param_type_423,param_name_424,(_Bool)0,info))));
            __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_424 = come_decrement_ref_count2(param_name_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        i_416==1) {
            param_name_425=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_401,"%s",((char*)(__right_value356=make_define_var_no_solved(param_type_423,param_name_425,(_Bool)0,(_Bool)0,info))));
            __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_425 = come_decrement_ref_count2(param_name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            param_name_426=(char*)come_increment_ref_count(xsprintf("it%d",i_416));
            buffer_append_format(method_block2_401,"%s",((char*)(__right_value358=make_define_var_no_solved(param_type_423,param_name_426,(_Bool)0,(_Bool)0,info))));
            __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_426 = come_decrement_ref_count2(param_name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_416!=list$1sTypeph_length(param_types_412)-1) {
            buffer_append_str(method_block2_401,",");
        }
        i_416++;
    }
    buffer_append_str(method_block2_401,")\n");
    buffer_append_str(method_block2_401,((char*)(__right_value359=buffer_to_string(method_block))));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_427=(struct buffer*)come_increment_ref_count(info->source);
    p_428=info->p;
    head_429=info->head;
    sline_430=info->sline;
    __dec_obj122=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_401);
    come_call_finalizer3(__dec_obj122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_431=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_432=node_compile(node_431,info);
    if(    !Value_432) {
        __result299__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_395) { current_stack_frame_node_395 = come_decrement_ref_count2(current_stack_frame_node_395, ((struct sNode*)current_stack_frame_node_395)->finalize, ((struct sNode*)current_stack_frame_node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_406 = come_decrement_ref_count2(class_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_414,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_427,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_431) { node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result299__;
    }
    else {
    }
    method_block_name_433=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value361=buffer_to_string(all_alhabet_sname_414)))));
    __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_434=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 128, "struct CVALUE*", (void*)0, (void*)0))));
    fun2_435=((struct sFun*)(__right_value365=map$2charphsFunph_at(info->funcs,method_block_name_433,((void*)0))));
    come_call_finalizer3(__right_value365,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun2_435==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_433);
        __result304__ = (_Bool)1;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_395) { current_stack_frame_node_395 = come_decrement_ref_count2(current_stack_frame_node_395, ((struct sNode*)current_stack_frame_node_395)->finalize, ((struct sNode*)current_stack_frame_node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_406 = come_decrement_ref_count2(class_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_414,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_427,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_431) { node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_433 = come_decrement_ref_count2(method_block_name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result304__;
    }
    method_block_type2_438=fun2_435->mLambdaType;
    __dec_obj140=come_value2_434->c_value;
    come_value2_434->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_433));
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj141=come_value2_434->type;
    come_value2_434->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_438));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_434->var=((void*)0);
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_434));
    __dec_obj142=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_427);
    come_call_finalizer3(__dec_obj142,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_428;
    info->head=head_429;
    info->sline=sline_430;
    info->current_stack_frame_struct=current_stack_frame_struct_410;
    __dec_obj143=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_439=(_Bool)0;
    for(    o2_saved_440=(param_types_412),it_441=list$1sTypeph_begin((o2_saved_440));    !list$1sTypeph_end((o2_saved_440));    it_441=list$1sTypeph_next((o2_saved_440))    ){
        if(        is_contained_method_generics_types(it_441,info)) {
            contained_method_generics_method_block_439=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_411,info)) {
        contained_method_generics_method_block_439=(_Bool)1;
    }
    if(    contained_method_generics_method_block_439) {
        map$2charphsFunph_remove(info->funcs,method_block_name_433);
    }
    __result306__ = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_395) { current_stack_frame_node_395 = come_decrement_ref_count2(current_stack_frame_node_395, ((struct sNode*)current_stack_frame_node_395)->finalize, ((struct sNode*)current_stack_frame_node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
    class_name_406 = come_decrement_ref_count2(class_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_414,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_427,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_431) { node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
    method_block_name_433 = come_decrement_ref_count2(method_block_name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result306__;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result283__;
void* __right_value336 = (void*)0;
struct sCurrentNode* result_396;
void* __right_value337 = (void*)0;
char* __dec_obj120;
struct sCurrentNode* __result284__;
    if(    self==(void*)0) {
        __result283__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    result_396=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_396->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj120=result_396->sname;
        result_396->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_396->sline_real=self->sline_real;
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_396;
    come_call_finalizer3(result_396,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_398;
struct list_item$1CVALUEph* prev_it_399;
    it_398=self->head;
    while(it_398!=((void*)0)) {
        prev_it_399=it_398;
        it_398=it_398->next;
        come_call_finalizer3(prev_it_399,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_403;
int i_404;
struct sType* __result286__;
struct sType* default_value_405;
struct sType* __result287__;
default_value_405 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_403=self->head;
    i_404=0;
    while(it_403!=((void*)0)) {
        if(        position==i_404) {
            __result286__ = gComeFunResultObject = __result_obj__ = it_403->item;
            gComeFunResultObject = (void*)0;
            return __result286__;
        }
        it_403=it_403->next;
        i_404++;
    }
    memset(&default_value_405,0,sizeof(struct sType*));
    __result287__ = gComeFunResultObject = __result_obj__ = default_value_405;
    come_call_finalizer3(default_value_405,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_407;
unsigned int hash_408;
unsigned int it_409;
struct sClass* __result288__;
struct sClass* __result289__;
struct sClass* __result290__;
struct sClass* __result291__;
default_value_407 = (void*)0;
    memset(&default_value_407,0,sizeof(struct sClass*));
    hash_408=charp_get_hash_key(((char*)key))%self->size;
    it_409=hash_408;
    while((_Bool)1) {
        if(        self->item_existance[it_409]) {
            if(            charp_equals(self->keys[it_409],key)) {
                __result288__ = gComeFunResultObject = __result_obj__ = self->items[it_409];
                come_call_finalizer3(default_value_407,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result288__;
            }
            it_409++;
            if(            it_409>=self->size) {
                it_409=0;
            }
            else if(            it_409==hash_408) {
                __result289__ = gComeFunResultObject = __result_obj__ = default_value_407;
                come_call_finalizer3(default_value_407,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result289__;
            }
        }
        else {
            __result290__ = gComeFunResultObject = __result_obj__ = default_value_407;
            come_call_finalizer3(default_value_407,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result290__;
        }
    }
    __result291__ = gComeFunResultObject = __result_obj__ = default_value_407;
    come_call_finalizer3(default_value_407,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_418;
struct sType* __result293__;
struct sType* __result294__;
struct sType* result_419;
struct sType* __result295__;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_418,0,sizeof(struct sType*));
        __result293__ = gComeFunResultObject = __result_obj__ = result_418;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    self->it=self->head;
    if(    self->it) {
        __result294__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    memset(&result_419,0,sizeof(struct sType*));
    __result295__ = gComeFunResultObject = __result_obj__ = result_419;
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_421;
struct sType* __result296__;
struct sType* __result297__;
struct sType* result_422;
struct sType* __result298__;
result_421 = (void*)0;
result_422 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_421,0,sizeof(struct sType*));
        __result296__ = gComeFunResultObject = __result_obj__ = result_421;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result297__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    memset(&result_422,0,sizeof(struct sType*));
    __result298__ = gComeFunResultObject = __result_obj__ = result_422;
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_436;
unsigned int it_437;
struct sFun* __result300__;
struct sFun* __result301__;
struct sFun* __result302__;
struct sFun* __result303__;
    hash_436=charp_get_hash_key(((char*)key))%self->size;
    it_437=hash_436;
    while((_Bool)1) {
        if(        self->item_existance[it_437]) {
            if(            charp_equals(self->keys[it_437],key)) {
                __result300__ = gComeFunResultObject = __result_obj__ = self->items[it_437];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result300__;
            }
            it_437++;
            if(            it_437>=self->size) {
                it_437=0;
            }
            else if(            it_437==hash_436) {
                __result301__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result301__;
            }
        }
        else {
            __result302__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result302__;
        }
    }
    __result303__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
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
unsigned int hash_442;
unsigned int it_443;
struct map$2charphsFunph* __result305__;
    hash_442=charp_get_hash_key(((char*)key))%self->size;
    it_443=hash_442;
    while((_Bool)1) {
        if(        self->item_existance[it_443]) {
            if(            charp_equals(self->keys[it_443],key)) {
                list$1charp_remove(self->key_list,self->keys[it_443]);
                self->item_existance[it_443]=(_Bool)0;
                if(                1) {
                    self->keys[it_443] = come_decrement_ref_count2(self->keys[it_443], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_443]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_443],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_443]=((void*)0);
                self->len--;
                break;
            }
            it_443++;
            if(            it_443>=self->size) {
                it_443=0;
            }
            else if(            it_443==hash_442) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result305__;
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
struct sMethodCallNode* __result313__;
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
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
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
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value384=__builtin_string("sMethodCallNode")));
    __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_454;
struct list$1tuple2$2charphsNodephph* params_455;
struct sNode* obj_456;
struct buffer* method_block_457;
int method_block_sline_458;
_Bool no_infference_method_generics_459;
struct list$1sTypeph* method_generics_types_460;
_Bool recursive_461;
struct list$1sTypeph* method_generics_types_before_462;
struct list$1sTypeph* __dec_obj165;
void* __right_value385 = (void*)0;
struct list$1sTypeph* __dec_obj166;
_Bool Value_463;
_Bool __result315__;
void* __right_value386 = (void*)0;
struct CVALUE* obj_value_464;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
char* __dec_obj167;
void* __right_value389 = (void*)0;
struct sType* obj_type_465;
_Bool no_output_come_code_466;
struct sType* type_467;
void* __right_value390 = (void*)0;
char* none_generics_name_468;
void* __right_value391 = (void*)0;
char* fun_name2_469;
void* __right_value392 = (void*)0;
char* fun_name3_470;
void* __right_value393 = (void*)0;
struct sGenericsFun* generics_fun_471;
_Bool method_generics_472;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* generics_fun_name_473;
void* __right_value397 = (void*)0;
struct sFun* fun_474;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1CVALUEph* come_params_475;
_Bool no_output_come_code_476;
_Bool __result317__;
void* __right_value400 = (void*)0;
struct CVALUE* method_block_node_477;
void* __right_value401 = (void*)0;
struct sType* method_block_lambda_type_481;
void* __right_value402 = (void*)0;
struct sType* method_block_result_type_482;
void* __right_value403 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_483;
struct sType* generics_fun_method_block_result_type_484;
int method_generics_num_485;
void* __right_value407 = (void*)0;
int n_494;
struct list$1sTypeph* o2_saved_495;
struct sType* it_496;
int method_generics_num_497;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1CVALUEph* come_params_498;
int i_499;
struct list$1tuple2$2charphsNodephph* o2_saved_500;
struct tuple2$2charphsNodeph* it_503;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_506=0;
struct sNode* node_507=0;
_Bool Value_508;
_Bool __result329__;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_509;
int method_generics_num_510;
void* __right_value413 = (void*)0;
struct list$1sTypeph* o2_saved_511;
struct sType* it_512;
int method_generics_num_513;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1CVALUEph* come_params_514;
int i_515;
struct list$1tuple2$2charphsNodephph* o2_saved_516;
struct tuple2$2charphsNodeph* it_517;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_518=0;
struct sNode* node_519=0;
_Bool Value_520;
_Bool __result330__;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_521;
int method_generics_num_522;
void* __right_value419 = (void*)0;
int n_523;
struct list$1sTypeph* o2_saved_524;
struct sType* it_525;
int method_generics_num_526;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sClass* klass_527;
_Bool calling_dynamic_method_528;
struct sType* lambda_type_529;
struct list$1tuple2$2charphsTypephph* o2_saved_530;
struct tuple2$2charphsTypeph* it_533;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name_536=0;
struct sType* field_type_537=0;
void* __right_value422 = (void*)0;
struct sType* result_type_538;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1CVALUEph* come_params_539;
int i_540;
struct list$1tuple2$2charphsNodephph* o2_saved_541;
struct tuple2$2charphsNodeph* it_542;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_543=0;
struct sNode* node_544=0;
_Bool Value_545;
_Bool __result337__;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_546;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
_Bool _if_conditional2;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct buffer* buf_547;
int j_548;
struct list$1CVALUEph* o2_saved_549;
struct CVALUE* it_552;
void* __right_value434 = (void*)0;
char* __dec_obj172;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value2_555;
void* __right_value437 = (void*)0;
char* __dec_obj173;
void* __right_value438 = (void*)0;
struct sType* result_type2_556;
void* __right_value439 = (void*)0;
struct sType* __dec_obj174;
struct list$1sTypeph* __dec_obj175;
char* generics_fun_name_557;
struct sFun* fun_558;
void* __right_value440 = (void*)0;
char* __dec_obj176;
struct sClass* klass_559;
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
char* none_generics_name_560;
void* __right_value449 = (void*)0;
char* fun_name3_561;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
char* __dec_obj179;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* __dec_obj180;
int i_562;
void* __right_value456 = (void*)0;
char* new_fun_name_563;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
char* __dec_obj181;
struct sType* obj_array_type_567;
void* __right_value459 = (void*)0;
char* array_method_name_568;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
char* __dec_obj182;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
char* __dec_obj183;
void* __right_value465 = (void*)0;
_Bool __result348__;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
char* __dec_obj184;
void* __right_value469 = (void*)0;
struct sClass* klass_569;
void* __right_value470 = (void*)0;
_Bool _while_condtional2;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
char* __dec_obj185;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_570=0;
char* real_fun_name_571=0;
char* __dec_obj187;
void* __right_value475 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_572=0;
char* real_fun_name_573=0;
char* __dec_obj188;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* original_obj_type_fun_name_574;
void* __right_value478 = (void*)0;
char* __dec_obj189;
_Bool __result349__;
_Bool __result350__;
_Bool __result351__;
void* __right_value479 = (void*)0;
struct sType* result_type_575;
void* __right_value480 = (void*)0;
struct sType* result_type2_576;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1sTypeph* param_types_577;
struct list$1sTypeph* o2_saved_578;
struct sType* it_579;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* it2_580;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1CVALUEph* come_params_581;
int i_582;
_Bool first_param_586;
struct list$1tuple2$2charphsNodephph* o2_saved_587;
struct tuple2$2charphsNodeph* it_588;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_589=0;
struct sNode* node_590=0;
int n_591;
struct list$1charph* o2_saved_592;
char* it_595;
_Bool is_inner_calling__598;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
_Bool _if_conditional3;
_Bool Value_599;
_Bool __result359__;
void* __right_value495 = (void*)0;
struct CVALUE* come_value_600;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* inf_type_601;
void* __right_value498 = (void*)0;
struct sNode* node2_602;
_Bool Value_603;
_Bool __result360__;
_Bool Value_604;
_Bool __result361__;
_Bool Value_605;
_Bool __result362__;
void* __right_value499 = (void*)0;
struct CVALUE* come_value_606;
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
int i_612;
struct list$1tuple2$2charphsNodephph* o2_saved_613;
struct tuple2$2charphsNodeph* it_614;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_615=0;
struct sNode* node_616=0;
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
_Bool is_inner_calling__620;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
_Bool _if_conditional8;
_Bool Value_621;
_Bool __result367__;
void* __right_value521 = (void*)0;
struct CVALUE* come_value_622;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* inf_type_623;
void* __right_value524 = (void*)0;
struct sNode* node2_624;
_Bool Value_625;
_Bool __result368__;
_Bool Value_626;
_Bool __result369__;
_Bool Value_627;
_Bool __result370__;
void* __right_value525 = (void*)0;
struct CVALUE* come_value_628;
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
struct sType* obj_array_type_629;
void* __right_value535 = (void*)0;
char* array_method_name_630;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct buffer* buf_631;
int i_632;
struct list$1sNodeph* o2_saved_633;
struct sNode* it_636;
_Bool Value_639;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_640;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct CVALUE* come_value_641;
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
struct buffer* buf_645;
int i_646;
struct list$1sNodeph* o2_saved_647;
struct sNode* it_648;
_Bool Value_649;
void* __right_value552 = (void*)0;
struct CVALUE* come_value_650;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct CVALUE* come_value_651;
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
struct buffer* buf_652;
int i_653;
struct list$1sNodeph* o2_saved_654;
struct sNode* it_655;
_Bool Value_656;
void* __right_value563 = (void*)0;
struct CVALUE* come_value_657;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct CVALUE* come_value_658;
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
struct buffer* buf_659;
int i_660;
struct list$1sNodeph* o2_saved_661;
struct sNode* it_662;
_Bool Value_663;
void* __right_value574 = (void*)0;
struct CVALUE* come_value_664;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct CVALUE* come_value_665;
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
struct buffer* buf_666;
int i_667;
struct list$1sNodeph* o2_saved_668;
struct sNode* it_669;
_Bool Value_670;
void* __right_value585 = (void*)0;
struct CVALUE* come_value_671;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_672;
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
char* default_param_673;
void* __right_value596 = (void*)0;
char* param_name_674;
void* __right_value597 = (void*)0;
_Bool _if_conditional12;
struct buffer* source_675;
char* p_676;
char* head_677;
int sline_678;
void* __right_value598 = (void*)0;
struct buffer* __dec_obj209;
void* __right_value599 = (void*)0;
struct sNode* node_679;
_Bool Value_680;
_Bool __result379__;
struct buffer* __dec_obj210;
void* __right_value600 = (void*)0;
struct CVALUE* come_value_681;
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
_Bool __result380__;
_Bool __result381__;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct buffer* buf_682;
int j_683;
struct list$1CVALUEph* o2_saved_684;
struct CVALUE* it_685;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct CVALUE* come_value2_686;
void* __right_value614 = (void*)0;
char* __dec_obj211;
int generics_num_687;
void* __right_value615 = (void*)0;
struct sType* refference_type_688;
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
_Bool __result382__;
    fun_name_454=(char*)come_increment_ref_count(self->fun_name);
    params_455=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_456=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_457=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_458=self->method_block_sline;
    no_infference_method_generics_459=self->no_infference_method_generics;
    method_generics_types_460=(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types);
    recursive_461=self->recursive;
    method_generics_types_before_462=((void*)0);
    __dec_obj165=method_generics_types_before_462;
    method_generics_types_before_462=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj165,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj166=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj166,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    Value_463=node_compile(obj_456,info);
    if(    !Value_463) {
        __result315__ = (_Bool)0;
        fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result315__;
    }
    else {
    }
    obj_value_464=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&obj_value_464->type->mPointerNum>0) {
        __dec_obj167=obj_value_464->c_value;
        obj_value_464->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value387=make_type_name_string(obj_value_464->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),obj_value_464->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    obj_type_465=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_464->type));
    if(    !no_infference_method_generics_459) {
        no_output_come_code_466=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_467=(struct sType*)come_increment_ref_count(obj_type_465);
        none_generics_name_468=(char*)come_increment_ref_count(get_none_generics_name(type_467->mClass->mName));
        fun_name2_469=(char*)come_increment_ref_count(create_method_name(type_467,(_Bool)0,fun_name_454,info,(_Bool)1));
        fun_name3_470=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_468,fun_name_454));
        generics_fun_471=((struct sGenericsFun*)(__right_value393=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_470,((void*)0))));
        come_call_finalizer3(__right_value393,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_471) {
            method_generics_472=list$1charph_length(generics_fun_471->mMethodGenericsTypeNames)>0;
            if(            method_generics_472&&list$1sTypeph_length(info->method_generics_types)==0) {
                generics_fun_name_473=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value395=make_generics_function(obj_type_465,(char*)come_increment_ref_count(__builtin_string(fun_name_454)),info,(_Bool)1)))));
                __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                fun_474=((struct sFun*)(__right_value397=map$2charphsFunph_at(info->funcs,generics_fun_name_473,((void*)0))));
                come_call_finalizer3(__right_value397,sFun_finalize, 0, 1, 0, 0, (void*)0);
                come_params_475=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 258, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                if(                method_block_457) {
                    no_output_come_code_476=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_457,(struct list$1CVALUEph*)come_increment_ref_count(come_params_475),fun_474,fun_name3_470,method_block_sline_458,info,(_Bool)1)) {
                        __result317__ = (_Bool)0;
                        generics_fun_name_473 = come_decrement_ref_count2(generics_fun_name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_475,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
                        none_generics_name_468 = come_decrement_ref_count2(none_generics_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name2_469 = come_decrement_ref_count2(fun_name2_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name3_470 = come_decrement_ref_count2(fun_name3_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result317__;
                    }
                    info->no_output_come_code=no_output_come_code_476;
                    method_block_node_477=((struct CVALUE*)(__right_value400=list$1CVALUEphp_operator_load_element(come_params_475,-1)));
                    come_call_finalizer3(__right_value400,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_481=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_477->type));
                    method_block_result_type_482=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_483=((struct sType*)(__right_value403=list$1sTypephp_operator_load_element(generics_fun_471->mParamTypes,-1)));
                    come_call_finalizer3(__right_value403,sType_finalize, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_484=generics_fun_method_block_lambda_type_483->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_484->mClass->mMethodGenerics) {
                        method_generics_num_485=generics_fun_method_block_result_type_484->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_485,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_482)));
                    }
                    n_494=0;
                    for(                    o2_saved_495=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_483->mParamTypes)),it_496=list$1sTypeph_begin((o2_saved_495));                    !list$1sTypeph_end((o2_saved_495));                    it_496=list$1sTypeph_next((o2_saved_495))                    ){
                        if(                        it_496->mClass->mMethodGenerics) {
                            method_generics_num_497=it_496->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_497,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value408=list$1sTypephp_operator_load_element(method_block_lambda_type_481->mParamTypes,n_494))), "20method.c", 282, 4)))));
                            come_call_finalizer3(__right_value408,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        n_494++;
                    }
                    come_call_finalizer3(o2_saved_495,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_498=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 287, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                    i_499=0;
                    for(                    o2_saved_500=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_455)),it_503=list$1tuple2$2charphsNodephph_begin((o2_saved_500));                    !list$1tuple2$2charphsNodephph_end((o2_saved_500));                    it_503=list$1tuple2$2charphsNodephph_next((o2_saved_500))                    ){
                        multiple_assign_var1=it_503;
                        label_506=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                        node_507=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
                        if(                        i_499==0) {
                            list$1CVALUEph_push_back(come_params_498,(struct CVALUE*)come_increment_ref_count(obj_value_464));
                            i_499++;
                        }
                        else {
                            Value_508=node_compile(node_507,info);
                            if(                            !Value_508) {
                                __result329__ = (_Bool)0;
                                label_506 = come_decrement_ref_count2(label_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_507) { node_507 = come_decrement_ref_count2(node_507, ((struct sNode*)node_507)->finalize, ((struct sNode*)node_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_500,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_498,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_473 = come_decrement_ref_count2(generics_fun_name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_475,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_468 = come_decrement_ref_count2(none_generics_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_469 = come_decrement_ref_count2(fun_name2_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_470 = come_decrement_ref_count2(fun_name3_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result329__;
                            }
                            else {
                            }
                            come_value_509=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_498,(struct CVALUE*)come_increment_ref_count(come_value_509));
                            come_call_finalizer3(come_value_509,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_506 = come_decrement_ref_count2(label_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_507) { node_507 = come_decrement_ref_count2(node_507, ((struct sNode*)node_507)->finalize, ((struct sNode*)node_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_500,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_471->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_510=generics_fun_471->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_510,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_494=0;
                    for(                    o2_saved_511=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_471->mParamTypes)),it_512=list$1sTypeph_begin((o2_saved_511));                    !list$1sTypeph_end((o2_saved_511));                    it_512=list$1sTypeph_next((o2_saved_511))                    ){
                        if(                        it_512->mClass->mMethodGenerics) {
                            method_generics_num_513=it_512->mClass->mMethodGenericsNum;
                            if(                            n_494<list$1CVALUEph_length(come_params_498)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_513,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value414=list$1CVALUEphp_operator_load_element(come_params_498,n_494)))->type)));
                                come_call_finalizer3(__right_value414,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_494++;
                    }
                    come_call_finalizer3(o2_saved_511,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_498,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_514=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 326, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                    i_515=0;
                    for(                    o2_saved_516=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_455)),it_517=list$1tuple2$2charphsNodephph_begin((o2_saved_516));                    !list$1tuple2$2charphsNodephph_end((o2_saved_516));                    it_517=list$1tuple2$2charphsNodephph_next((o2_saved_516))                    ){
                        multiple_assign_var2=it_517;
                        label_518=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                        node_519=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                        if(                        i_515==0) {
                            list$1CVALUEph_push_back(come_params_514,(struct CVALUE*)come_increment_ref_count(obj_value_464));
                            i_515++;
                        }
                        else {
                            Value_520=node_compile(node_519,info);
                            if(                            !Value_520) {
                                __result330__ = (_Bool)0;
                                label_518 = come_decrement_ref_count2(label_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_516,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_473 = come_decrement_ref_count2(generics_fun_name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_475,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_468 = come_decrement_ref_count2(none_generics_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_469 = come_decrement_ref_count2(fun_name2_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_470 = come_decrement_ref_count2(fun_name3_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result330__;
                            }
                            else {
                            }
                            come_value_521=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_514,(struct CVALUE*)come_increment_ref_count(come_value_521));
                            come_call_finalizer3(come_value_521,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_518 = come_decrement_ref_count2(label_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_516,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_471->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_522=generics_fun_471->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_522,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_523=0;
                    for(                    o2_saved_524=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_471->mParamTypes)),it_525=list$1sTypeph_begin((o2_saved_524));                    !list$1sTypeph_end((o2_saved_524));                    it_525=list$1sTypeph_next((o2_saved_524))                    ){
                        if(                        it_525->mClass->mMethodGenerics) {
                            method_generics_num_526=it_525->mClass->mMethodGenericsNum;
                            if(                            n_523<list$1CVALUEph_length(come_params_514)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_526,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value420=list$1CVALUEphp_operator_load_element(come_params_514,n_523)))->type)));
                                come_call_finalizer3(__right_value420,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_523++;
                    }
                    come_call_finalizer3(o2_saved_524,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2charphsFunph_remove(info->funcs,generics_fun_name_473);
                generics_fun_name_473 = come_decrement_ref_count2(generics_fun_name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_475,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_466;
        come_call_finalizer3(type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
        none_generics_name_468 = come_decrement_ref_count2(none_generics_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name2_469 = come_decrement_ref_count2(fun_name2_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name3_470 = come_decrement_ref_count2(fun_name3_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_527=obj_type_465->mClass;
    calling_dynamic_method_528=(_Bool)0;
    lambda_type_529=((void*)0);
    for(    o2_saved_530=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_527->mFields)),it_533=list$1tuple2$2charphsTypephph_begin((o2_saved_530));    !list$1tuple2$2charphsTypephph_end((o2_saved_530));    it_533=list$1tuple2$2charphsTypephph_next((o2_saved_530))    ){
        multiple_assign_var3=it_533;
        field_name_536=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_537=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        if(        string_operator_equals(field_name_536,fun_name_454)&&string_operator_equals(field_type_537->mClass->mName,"lambda")) {
            calling_dynamic_method_528=(_Bool)1;
            lambda_type_529=field_type_537;
            field_name_536 = come_decrement_ref_count2(field_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_536 = come_decrement_ref_count2(field_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_530,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_528) {
        result_type_538=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_529->mResultType->v1));
        result_type_538->mStatic=(_Bool)0;
        come_params_539=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 389, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_540=0;
        for(        o2_saved_541=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_455)),it_542=list$1tuple2$2charphsNodephph_begin((o2_saved_541));        !list$1tuple2$2charphsNodephph_end((o2_saved_541));        it_542=list$1tuple2$2charphsNodephph_next((o2_saved_541))        ){
            multiple_assign_var4=it_542;
            label_543=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_544=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            i_540==0) {
                list$1CVALUEph_push_back(come_params_539,(struct CVALUE*)come_increment_ref_count(obj_value_464));
                i_540++;
            }
            else {
                Value_545=node_compile(node_544,info);
                if(                !Value_545) {
                    __result337__ = (_Bool)0;
                    label_543 = come_decrement_ref_count2(label_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_544) { node_544 = come_decrement_ref_count2(node_544, ((struct sNode*)node_544)->finalize, ((struct sNode*)node_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_541,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_539,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result337__;
                }
                else {
                }
                come_value_546=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value428=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value426=string_to_string(fun_name_454))),((char*)(__right_value427=int_to_string(i_540)))))),((struct sType*)come_null_check(((struct sType*)(__right_value429=list$1sTypephp_operator_load_element(lambda_type_529->mParamTypes,i_540-1))), "20method.c", 406, 5)),come_value_546->type,come_value_546,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value430=list$1sTypephp_operator_load_element(lambda_type_529->mParamTypes,i_540-1))), "20method.c", 407, 6))->mHeap&&come_value_546->type->mHeap)),                come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value431=list$1sTypephp_operator_load_element(lambda_type_529->mParamTypes,i_540-1))), "20method.c", 409, 7)),come_value_546->type,come_value_546,info,(_Bool)1);
                    come_call_finalizer3(__right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_push_back(come_params_539,(struct CVALUE*)come_increment_ref_count(come_value_546));
                i_540++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_546,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_543 = come_decrement_ref_count2(label_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_544) { node_544 = come_decrement_ref_count2(node_544, ((struct sNode*)node_544)->finalize, ((struct sNode*)node_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_541,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 419, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_format(buf_547,"%s->%s",obj_value_464->c_value,fun_name_454);
        buffer_append_str(buf_547,"(");
        j_548=0;
        for(        o2_saved_549=(struct list$1CVALUEph*)come_increment_ref_count((come_params_539)),it_552=list$1CVALUEph_begin((o2_saved_549));        !list$1CVALUEph_end((o2_saved_549));        it_552=list$1CVALUEph_next((o2_saved_549))        ){
            if(            j_548==0) {
                __dec_obj172=it_552->c_value;
                it_552->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_552->c_value));
                __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_547,it_552->c_value);
            if(            j_548!=list$1CVALUEph_length(come_params_539)-1) {
                buffer_append_str(buf_547,",");
            }
            j_548++;
        }
        come_call_finalizer3(o2_saved_549,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_547,")");
        come_value2_555=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 439, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj173=come_value2_555->c_value;
        come_value2_555->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_547));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_556=(struct sType*)come_increment_ref_count(solve_generics(result_type_538,info->generics_type,info));
        __dec_obj174=come_value2_555->type;
        come_value2_555->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_556));
        come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_555->type->mStatic=(_Bool)0;
        come_value2_555->var=((void*)0);
        if(        result_type2_556->mHeap) {
            append_object_to_right_values2(come_value2_555,(struct sType*)come_increment_ref_count(result_type2_556),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_555->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_555));
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj175=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_462);
        come_call_finalizer3(__dec_obj175,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_539,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_547,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_555,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_556,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_557=((void*)0);
        fun_558=((void*)0);
        if(        string_operator_equals(fun_name_454,"super")) {
            __dec_obj176=fun_name_454;
            fun_name_454=(char*)come_increment_ref_count(create_non_method_name(obj_type_465,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_559=obj_type_465->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value441=map$2charphsClassphp_operator_load_element(info->classes,klass_559->mParentClassName))))),            come_call_finalizer3(__right_value441,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_559=((struct sClass*)(__right_value442=map$2charphsClassphp_operator_load_element(info->classes,klass_559->mParentClassName)));
                come_call_finalizer3(__right_value442,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj177=generics_fun_name_557;
                generics_fun_name_557=(char*)come_increment_ref_count(create_method_name_using_class(klass_559,(_Bool)0,fun_name_454,info,(_Bool)1));
                __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_558=((struct sFun*)(__right_value444=map$2charphsFunph_at(info->funcs,generics_fun_name_557,((void*)0))));
                come_call_finalizer3(__right_value444,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_558) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_465&&obj_type_465->mNoSolvedGenericsType&&obj_type_465->mNoSolvedGenericsType->v1&&list$1sTypeph_length(obj_type_465->mNoSolvedGenericsType->v1->mGenericsTypes)>0) {
                __dec_obj178=generics_fun_name_557;
                generics_fun_name_557=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value446=make_generics_function(obj_type_465,(char*)come_increment_ref_count(__builtin_string(fun_name_454)),info,(_Bool)1)))));
                __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            list$1sTypeph_length(info->method_generics_types)>0) {
                none_generics_name_560=(char*)come_increment_ref_count(get_none_generics_name(obj_type_465->mClass->mName));
                fun_name3_561=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_560,fun_name_454));
                __dec_obj179=generics_fun_name_557;
                generics_fun_name_557=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value451=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_561)),(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types),info)))));
                __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                none_generics_name_560 = come_decrement_ref_count2(none_generics_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_561 = come_decrement_ref_count2(fun_name3_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj180=generics_fun_name_557;
                generics_fun_name_557=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value454=make_generics_function(obj_type_465,(char*)come_increment_ref_count(__builtin_string(fun_name_454)),info,(_Bool)1)))));
                __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            for(            i_562=128;            i_562>=1;            i_562--            ){
                new_fun_name_563=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_557,i_562));
                fun_558=((struct sFun*)(__right_value457=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_563)));
                come_call_finalizer3(__right_value457,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_558!=((void*)0)) {
                    __dec_obj181=generics_fun_name_557;
                    generics_fun_name_557=(char*)come_increment_ref_count(__builtin_string(new_fun_name_563));
                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_563 = come_decrement_ref_count2(new_fun_name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_563 = come_decrement_ref_count2(new_fun_name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            fun_558==((void*)0)) {
                obj_array_type_567=obj_type_465->mOriginalLoadVarType->v1;
                if(                obj_array_type_567&&list$1sNodeph_length(obj_array_type_567->mArrayNum)>0) {
                    array_method_name_568=(char*)come_increment_ref_count(create_method_name(obj_array_type_567,(_Bool)0,fun_name_454,info,(_Bool)0));
                    fun_558=((struct sFun*)(__right_value460=map$2charphsFunph_at(info->funcs,array_method_name_568,((void*)0))));
                    come_call_finalizer3(__right_value460,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_558) {
                        __dec_obj182=generics_fun_name_557;
                        generics_fun_name_557=(char*)come_increment_ref_count(__builtin_string(array_method_name_568));
                        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_558=((struct sFun*)(__right_value462=map$2charphsFunph_at(info->funcs,generics_fun_name_557,((void*)0))));
                        come_call_finalizer3(__right_value462,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_558==((void*)0)) {
                            __dec_obj183=generics_fun_name_557;
                            generics_fun_name_557=(char*)come_increment_ref_count(create_method_name(obj_type_465,(_Bool)0,((char*)(__right_value463=__builtin_string(fun_name_454))),info,(_Bool)1));
                            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_558=((struct sFun*)(__right_value465=map$2charphsFunph_at(info->funcs,generics_fun_name_557,((void*)0))));
                            come_call_finalizer3(__right_value465,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_558==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_557,info->come_fun->mName);
                                __result348__ = (_Bool)1;
                                array_method_name_568 = come_decrement_ref_count2(array_method_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result348__;
                            }
                        }
                    }
                    array_method_name_568 = come_decrement_ref_count2(array_method_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_558=((struct sFun*)(__right_value466=map$2charphsFunph_at(info->funcs,generics_fun_name_557,((void*)0))));
                    come_call_finalizer3(__right_value466,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_558==((void*)0)) {
                        __dec_obj184=generics_fun_name_557;
                        generics_fun_name_557=(char*)come_increment_ref_count(create_method_name(obj_type_465,(_Bool)0,((char*)(__right_value467=__builtin_string(fun_name_454))),info,(_Bool)1));
                        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_558=((struct sFun*)(__right_value469=map$2charphsFunph_at(info->funcs,generics_fun_name_557,((void*)0))));
                        come_call_finalizer3(__right_value469,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_558==((void*)0)) {
                            klass_569=obj_type_465->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value470=map$2charphsClassphp_operator_load_element(info->classes,klass_569->mParentClassName))))),                            come_call_finalizer3(__right_value470,sClass_finalize, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_569=((struct sClass*)(__right_value471=map$2charphsClassphp_operator_load_element(info->classes,klass_569->mParentClassName)));
                                come_call_finalizer3(__right_value471,sClass_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj185=generics_fun_name_557;
                                generics_fun_name_557=(char*)come_increment_ref_count(create_method_name_using_class(klass_569,(_Bool)0,fun_name_454,info,(_Bool)1));
                                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_558=((struct sFun*)(__right_value473=map$2charphsFunph_at(info->funcs,generics_fun_name_557,((void*)0))));
                                come_call_finalizer3(__right_value473,sFun_finalize, 0, 1, 0, 0, (void*)0);
                                if(                                fun_558) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_558==((void*)0)&&string_operator_equals(fun_name_454,"to_string")) {
                            multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value474=create_to_string_automatically(obj_type_465,fun_name_454,info)));
                            fun2_570=multiple_assign_var5->v1;
                            real_fun_name_571=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            come_call_finalizer3(__right_value474,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_558=fun2_570;
                            __dec_obj187=generics_fun_name_557;
                            generics_fun_name_557=(char*)come_increment_ref_count(real_fun_name_571);
                            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_571 = come_decrement_ref_count2(real_fun_name_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_558==((void*)0)&&string_operator_equals(fun_name_454,"equals")) {
                            multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value475=create_equals_automatically(obj_type_465,fun_name_454,info)));
                            fun2_572=multiple_assign_var6->v1;
                            real_fun_name_573=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            come_call_finalizer3(__right_value475,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_558=fun2_572;
                            __dec_obj188=generics_fun_name_557;
                            generics_fun_name_557=(char*)come_increment_ref_count(real_fun_name_573);
                            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_573 = come_decrement_ref_count2(real_fun_name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_558==((void*)0)) {
                            original_obj_type_fun_name_574=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_465,(_Bool)0,((char*)(__right_value476=__builtin_string(fun_name_454))),info,(_Bool)1));
                            __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_558=((struct sFun*)(__right_value478=map$2charphsFunph_at(info->funcs,original_obj_type_fun_name_574,((void*)0))));
                            come_call_finalizer3(__right_value478,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_558) {
                                __dec_obj189=generics_fun_name_557;
                                generics_fun_name_557=(char*)come_increment_ref_count(original_obj_type_fun_name_574);
                                __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            original_obj_type_fun_name_574 = come_decrement_ref_count2(original_obj_type_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_558==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_557,info->come_fun->mName);
                            __result349__ = (_Bool)1;
                            generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result349__;
                        }
                    }
                }
            }
        }
        if(        fun_558==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_557,info->come_fun->mName);
            __result350__ = (_Bool)1;
            generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result350__;
        }
        if(        list$1sTypeph_length(fun_558->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result351__ = (_Bool)1;
            generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result351__;
        }
        result_type_575=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_558->mResultType));
        result_type_575->mStatic=(_Bool)0;
        result_type2_576=(struct sType*)come_increment_ref_count(solve_generics(result_type_575,info->generics_type,info));
        param_types_577=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 596, "struct list$1sTypeph*", (void*)0, (void*)0))));
        for(        o2_saved_578=(struct list$1sTypeph*)come_increment_ref_count((fun_558->mParamTypes)),it_579=list$1sTypeph_begin((o2_saved_578));        !list$1sTypeph_end((o2_saved_578));        it_579=list$1sTypeph_next((o2_saved_578))        ){
            if(            it_579==((void*)0)) {
                list$1sTypeph_push_back(param_types_577,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_579)));
            }
            else {
                it2_580=(struct sType*)come_increment_ref_count(solve_generics(it_579,info->generics_type,info));
                list$1sTypeph_push_back(param_types_577,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_580)));
                come_call_finalizer3(it2_580,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_578,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_581=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 608, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        for(        i_582=0;        i_582<list$1sTypeph_length(fun_558->mParamTypes)-(((method_block_457)?(2):(0)));        i_582++        ){
            list$1CVALUEph_add(come_params_581,((void*)0));
        }
        first_param_586=(_Bool)1;
        for(        o2_saved_587=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_455)),it_588=list$1tuple2$2charphsNodephph_begin((o2_saved_587));        !list$1tuple2$2charphsNodephph_end((o2_saved_587));        it_588=list$1tuple2$2charphsNodephph_next((o2_saved_587))        ){
            multiple_assign_var7=it_588;
            label_589=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_590=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(            first_param_586) {
                first_param_586=(_Bool)0;
            }
            else if(            label_589) {
                n_591=0;
                for(                o2_saved_592=(struct list$1charph*)come_increment_ref_count((fun_558->mParamNames)),it_595=list$1charph_begin((o2_saved_592));                !list$1charph_end((o2_saved_592));                it_595=list$1charph_next((o2_saved_592))                ){
                    if(                    string_operator_equals(label_589,it_595)) {
                        break;
                    }
                    n_591++;
                }
                come_call_finalizer3(o2_saved_592,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                is_inner_calling__598=is_inner_calling(obj_456,info);
                if(                (_if_conditional3=(!is_inner_calling__598&&((struct sType*)(__right_value491=list$1sTypephp_operator_load_element(param_types_577,n_591)))&&((struct sType*)come_null_check(((struct sType*)(__right_value492=list$1sTypephp_operator_load_element(param_types_577,n_591))), "20method.c", 632, 8))->mRefference&&string_operator_equals(((struct sType*)come_null_check(((struct sType*)(__right_value493=list$1sTypephp_operator_load_element(param_types_577,n_591))), "20method.c", 632, 9))->mClass->mName,"object")&&((struct sType*)come_null_check(((struct sType*)(__right_value494=list$1sTypephp_operator_load_element(param_types_577,n_591))), "20method.c", 632, 10))->mHeap)),                come_call_finalizer3(__right_value491,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value493,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value494,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    Value_599=node_compile(node_590,info);
                    if(                    !Value_599) {
                        __result359__ = (_Bool)0;
                        label_589 = come_decrement_ref_count2(label_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_590) { node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_587,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result359__;
                    }
                    else {
                    }
                    come_value_600=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_not_equals(come_value_600->type->mClass->mName,"object")) {
                        inf_type_601=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 641, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
                        inf_type_601->mHeap=1;
                        node2_602=(struct sNode*)come_increment_ref_count(create_implements((struct sNode*)come_increment_ref_count(node_590),(struct sType*)come_increment_ref_count(inf_type_601),info));
                        Value_603=node_compile(node2_602,info);
                        if(                        !Value_603) {
                            __result360__ = (_Bool)0;
                            come_call_finalizer3(inf_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(node2_602) { node2_602 = come_decrement_ref_count2(node2_602, ((struct sNode*)node2_602)->finalize, ((struct sNode*)node2_602)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(come_value_600,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_589 = come_decrement_ref_count2(label_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_590) { node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_587,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result360__;
                        }
                        else {
                        }
                        come_call_finalizer3(inf_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
                        if(node2_602) { node2_602 = come_decrement_ref_count2(node2_602, ((struct sNode*)node2_602)->finalize, ((struct sNode*)node2_602)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        Value_604=node_compile(node_590,info);
                        if(                        !Value_604) {
                            __result361__ = (_Bool)0;
                            come_call_finalizer3(come_value_600,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_589 = come_decrement_ref_count2(label_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_590) { node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_587,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result361__;
                        }
                        else {
                        }
                    }
                    come_call_finalizer3(come_value_600,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    Value_605=node_compile(node_590,info);
                    if(                    !Value_605) {
                        __result362__ = (_Bool)0;
                        label_589 = come_decrement_ref_count2(label_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_590) { node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_587,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result362__;
                    }
                    else {
                    }
                }
                come_value_606=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional4=(((struct sType*)(__right_value500=list$1sTypephp_operator_load_element(param_types_577,n_591))))),                come_call_finalizer3(__right_value500,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    check_assign_type(((char*)(__right_value503=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value501=string_to_string(fun_name_454))),((char*)(__right_value502=int_to_string(n_591)))))),((struct sType*)come_null_check(((struct sType*)(__right_value504=list$1sTypephp_operator_load_element(param_types_577,n_591))), "20method.c", 666, 11)),come_value_606->type,come_value_606,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value504,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional5=(((struct sType*)(__right_value505=list$1sTypephp_operator_load_element(param_types_577,n_591)))&&((struct sType*)come_null_check(((struct sType*)(__right_value506=list$1sTypephp_operator_load_element(param_types_577,n_591))), "20method.c", 668, 12))->mHeap&&come_value_606->type->mHeap)),                come_call_finalizer3(__right_value505,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value506,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value507=list$1sTypephp_operator_load_element(param_types_577,n_591))), "20method.c", 669, 13)),come_value_606->type,come_value_606,info,(_Bool)1);
                    come_call_finalizer3(__right_value507,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_581,n_591,(struct CVALUE*)come_increment_ref_count(come_value_606));
                come_call_finalizer3(come_value_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_589 = come_decrement_ref_count2(label_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_590) { node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_587,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_612=0;
        for(        o2_saved_613=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_455)),it_614=list$1tuple2$2charphsNodephph_begin((o2_saved_613));        !list$1tuple2$2charphsNodephph_end((o2_saved_613));        it_614=list$1tuple2$2charphsNodephph_next((o2_saved_613))        ){
            multiple_assign_var8=it_614;
            label_615=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_616=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            i_612==0) {
                check_assign_type(((char*)(__right_value510=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value508=string_to_string(fun_name_454))),((char*)(__right_value509=int_to_string(i_612)))))),((struct sType*)come_null_check(((struct sType*)(__right_value511=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 681, 14)),obj_value_464->type,obj_value_464,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value511,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional6=(((struct sType*)come_null_check(((struct sType*)(__right_value512=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 682, 15))->mHeap&&obj_value_464->type->mHeap)),                come_call_finalizer3(__right_value512,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value513=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 683, 16)),obj_value_464->type,obj_value_464,info,(_Bool)1);
                    come_call_finalizer3(__right_value513,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)come_null_check(((struct sType*)(__right_value514=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 685, 17))->mHeap&&!obj_value_464->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value514,sType_finalize, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    err_msg(info,"require heap parametor(%s)",((char*)come_null_check(((char*)(__right_value515=list$1charphp_operator_load_element(fun_558->mParamNames,i_612))), "20method.c", 686, 18)));
                    __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    exit(2);
                }
                list$1CVALUEph_replace(come_params_581,i_612,(struct CVALUE*)come_increment_ref_count(obj_value_464));
                i_612++;
            }
            else if(            label_615) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional7=(((struct CVALUE*)(__right_value516=list$1CVALUEphp_operator_load_element(come_params_581,i_612)))==((void*)0))),                    come_call_finalizer3(__right_value516,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional7) {
                        break;
                    }
                    else {
                        i_612++;
                    }
                }
                is_inner_calling__620=is_inner_calling(obj_456,info);
                if(                (_if_conditional8=(!is_inner_calling__620&&((struct sType*)(__right_value517=list$1sTypephp_operator_load_element(param_types_577,i_612)))&&((struct sType*)come_null_check(((struct sType*)(__right_value518=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 707, 19))->mHeap&&string_operator_equals(((struct sType*)come_null_check(((struct sType*)(__right_value519=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 707, 20))->mClass->mName,"object")&&((struct sType*)come_null_check(((struct sType*)(__right_value520=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 707, 21))->mRefference)),                come_call_finalizer3(__right_value517,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value518,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value519,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional8) {
                    Value_621=node_compile(node_616,info);
                    if(                    !Value_621) {
                        __result367__ = (_Bool)0;
                        label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result367__;
                    }
                    else {
                    }
                    come_value_622=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_not_equals(come_value_622->type->mClass->mName,"object")) {
                        inf_type_623=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 716, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
                        inf_type_623->mHeap=1;
                        node2_624=(struct sNode*)come_increment_ref_count(create_implements((struct sNode*)come_increment_ref_count(node_616),(struct sType*)come_increment_ref_count(inf_type_623),info));
                        Value_625=node_compile(node2_624,info);
                        if(                        !Value_625) {
                            __result368__ = (_Bool)0;
                            come_call_finalizer3(inf_type_623,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(node2_624) { node2_624 = come_decrement_ref_count2(node2_624, ((struct sNode*)node2_624)->finalize, ((struct sNode*)node2_624)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(come_value_622,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result368__;
                        }
                        else {
                        }
                        come_call_finalizer3(inf_type_623,sType_finalize, 0, 0, 0, 0, (void*)0);
                        if(node2_624) { node2_624 = come_decrement_ref_count2(node2_624, ((struct sNode*)node2_624)->finalize, ((struct sNode*)node2_624)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        Value_626=node_compile(node_616,info);
                        if(                        !Value_626) {
                            __result369__ = (_Bool)0;
                            come_call_finalizer3(come_value_622,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(o2_saved_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result369__;
                        }
                        else {
                        }
                    }
                    come_call_finalizer3(come_value_622,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    Value_627=node_compile(node_616,info);
                    if(                    !Value_627) {
                        __result370__ = (_Bool)0;
                        label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result370__;
                    }
                    else {
                    }
                }
                come_value_628=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional9=(((struct sType*)(__right_value526=list$1sTypephp_operator_load_element(param_types_577,i_612))))),                come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional9) {
                    check_assign_type(((char*)(__right_value529=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value527=string_to_string(fun_name_454))),((char*)(__right_value528=int_to_string(i_612)))))),((struct sType*)come_null_check(((struct sType*)(__right_value530=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 741, 22)),come_value_628->type,come_value_628,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value530,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional10=(((struct sType*)(__right_value531=list$1sTypephp_operator_load_element(param_types_577,i_612)))&&((struct sType*)come_null_check(((struct sType*)(__right_value532=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 743, 23))->mHeap&&come_value_628->type->mHeap)),                come_call_finalizer3(__right_value531,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value532,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value533=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 744, 24)),come_value_628->type,come_value_628,info,(_Bool)1);
                    come_call_finalizer3(__right_value533,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_581,i_612,(struct CVALUE*)come_increment_ref_count(come_value_628));
                i_612++;
                come_call_finalizer3(come_value_628,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional11=(((struct CVALUE*)(__right_value534=list$1CVALUEphp_operator_load_element(come_params_581,i_612)))==((void*)0))),            come_call_finalizer3(__right_value534,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional11) {
                break;
            }
            else {
                i_612++;
            }
        }
        obj_array_type_629=obj_type_465->mOriginalLoadVarType->v1;
        if(        obj_array_type_629&&list$1sNodeph_length(obj_array_type_629->mArrayNum)>0) {
            array_method_name_630=(char*)come_increment_ref_count(create_method_name(obj_array_type_629,(_Bool)0,fun_name_454,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_557,array_method_name_630)) {
                if(                string_operator_equals(fun_name_454,"to_pointer")) {
                    buf_631=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 766, "struct buffer*", (void*)0, (void*)0))));
                    i_632=0;
                    for(                    o2_saved_633=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_629->mArrayNum)),it_636=list$1sNodeph_begin((o2_saved_633));                    !list$1sNodeph_end((o2_saved_633));                    it_636=list$1sNodeph_next((o2_saved_633))                    ){
                        Value_639=node_compile(it_636,info);
                        if(                        !Value_639) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_640=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_631,"%s",come_value_640->c_value);
                        if(                        i_632!=list$1sNodeph_length(obj_array_type_629->mArrayNum)-1) {
                            buffer_append_str(buf_631,"*");
                        }
                        i_632++;
                        come_call_finalizer3(come_value_640,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_633,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_641=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 786, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj194=come_value_641->c_value;
                    come_value_641->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_631));
                    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_641->var=((void*)0);
                    __dec_obj195=come_value_641->type;
                    come_value_641->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 790, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_581,1,(struct CVALUE*)come_increment_ref_count(come_value_641));
                    list$1tuple2$2charphsNodephph_push_back(params_455,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 793, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_631,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_641,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_454,"length")) {
                    buf_645=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 796, "struct buffer*", (void*)0, (void*)0))));
                    i_646=0;
                    for(                    o2_saved_647=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_629->mArrayNum)),it_648=list$1sNodeph_begin((o2_saved_647));                    !list$1sNodeph_end((o2_saved_647));                    it_648=list$1sNodeph_next((o2_saved_647))                    ){
                        Value_649=node_compile(it_648,info);
                        if(                        !Value_649) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_650=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_645,"%s",come_value_650->c_value);
                        if(                        i_646!=list$1sNodeph_length(obj_array_type_629->mArrayNum)-1) {
                            buffer_append_str(buf_645,"*");
                        }
                        i_646++;
                        come_call_finalizer3(come_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_647,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_651=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 815, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj201=come_value_651->c_value;
                    come_value_651->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_645));
                    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_651->var=((void*)0);
                    __dec_obj202=come_value_651->type;
                    come_value_651->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 819, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_581,1,(struct CVALUE*)come_increment_ref_count(come_value_651));
                    list$1tuple2$2charphsNodephph_push_back(params_455,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 822, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_645,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_454,"to_buffer")) {
                    buf_652=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 825, "struct buffer*", (void*)0, (void*)0))));
                    i_653=0;
                    for(                    o2_saved_654=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_629->mArrayNum)),it_655=list$1sNodeph_begin((o2_saved_654));                    !list$1sNodeph_end((o2_saved_654));                    it_655=list$1sNodeph_next((o2_saved_654))                    ){
                        Value_656=node_compile(it_655,info);
                        if(                        !Value_656) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_657=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_652,"%s",come_value_657->c_value);
                        if(                        i_653!=list$1sNodeph_length(obj_array_type_629->mArrayNum)-1) {
                            buffer_append_str(buf_652,"*");
                        }
                        i_653++;
                        come_call_finalizer3(come_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_654,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_658=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 844, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj203=come_value_658->c_value;
                    come_value_658->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_652));
                    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_658->var=((void*)0);
                    __dec_obj204=come_value_658->type;
                    come_value_658->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 848, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_581,1,(struct CVALUE*)come_increment_ref_count(come_value_658));
                    list$1tuple2$2charphsNodephph_push_back(params_455,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 851, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_652,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_454,"to_list")) {
                    buf_659=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 854, "struct buffer*", (void*)0, (void*)0))));
                    i_660=0;
                    for(                    o2_saved_661=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_629->mArrayNum)),it_662=list$1sNodeph_begin((o2_saved_661));                    !list$1sNodeph_end((o2_saved_661));                    it_662=list$1sNodeph_next((o2_saved_661))                    ){
                        Value_663=node_compile(it_662,info);
                        if(                        !Value_663) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_664=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_659,"%s",come_value_664->c_value);
                        if(                        i_660!=list$1sNodeph_length(obj_array_type_629->mArrayNum)-1) {
                            buffer_append_str(buf_659,"*");
                        }
                        i_660++;
                        come_call_finalizer3(come_value_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_661,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_665=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 873, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj205=come_value_665->c_value;
                    come_value_665->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_659));
                    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_665->var=((void*)0);
                    __dec_obj206=come_value_665->type;
                    come_value_665->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 877, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_581,1,(struct CVALUE*)come_increment_ref_count(come_value_665));
                    list$1tuple2$2charphsNodephph_push_back(params_455,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 880, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_659,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_665,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_454,"to_vector")) {
                    buf_666=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 883, "struct buffer*", (void*)0, (void*)0))));
                    i_667=0;
                    for(                    o2_saved_668=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_629->mArrayNum)),it_669=list$1sNodeph_begin((o2_saved_668));                    !list$1sNodeph_end((o2_saved_668));                    it_669=list$1sNodeph_next((o2_saved_668))                    ){
                        Value_670=node_compile(it_669,info);
                        if(                        !Value_670) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_671=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_666,"%s",come_value_671->c_value);
                        if(                        i_667!=list$1sNodeph_length(obj_array_type_629->mArrayNum)-1) {
                            buffer_append_str(buf_666,"*");
                        }
                        i_667++;
                        come_call_finalizer3(come_value_671,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_668,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_672=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 902, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj207=come_value_672->c_value;
                    come_value_672->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_666));
                    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_672->var=((void*)0);
                    __dec_obj208=come_value_672->type;
                    come_value_672->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 906, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_581,1,(struct CVALUE*)come_increment_ref_count(come_value_672));
                    list$1tuple2$2charphsNodephph_push_back(params_455,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 909, "struct tuple2$2charphvoidp", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_672,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            array_method_name_630 = come_decrement_ref_count2(array_method_name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1tuple2$2charphsNodephph_length(params_455)<list$1sTypeph_length(fun_558->mParamTypes)+(((method_block_457)?(-2):(0)))) {
            for(            ;            i_612<list$1sTypeph_length(fun_558->mParamTypes)+(((method_block_457)?(-2):(0)));            i_612++            ){
                default_param_673=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value594=list$1charphp_operator_load_element(fun_558->mParamDefaultParametors,i_612)))));
                __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_674=((char*)come_null_check(((char*)(__right_value596=list$1charphp_operator_load_element(fun_558->mParamNames,i_612))), "20method.c", 918, 25));
                __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                (_if_conditional12=(default_param_673&&string_operator_not_equals(default_param_673,"")&&((struct CVALUE*)(__right_value597=list$1CVALUEphp_operator_load_element(come_params_581,i_612)))==((void*)0))),                come_call_finalizer3(__right_value597,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional12) {
                    source_675=(struct buffer*)come_increment_ref_count(info->source);
                    p_676=info->p;
                    head_677=info->head;
                    sline_678=info->sline;
                    __dec_obj209=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_673));
                    come_call_finalizer3(__dec_obj209,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_679=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_680=node_compile(node_679,info);
                    if(                    !Value_680) {
                        __result379__ = (_Bool)0;
                        come_call_finalizer3(source_675,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_679) { node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_673 = come_decrement_ref_count2(default_param_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result379__;
                    }
                    else {
                    }
                    __dec_obj210=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_675);
                    come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_676;
                    info->head=head_677;
                    info->sline=sline_678;
                    come_value_681=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional13=(((struct sType*)come_null_check(((struct sType*)(__right_value601=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 942, 26)))),                    come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional13) {
                        check_assign_type(((char*)(__right_value604=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value602=string_to_string(fun_name_454))),((char*)(__right_value603=int_to_string(i_612)))))),((struct sType*)come_null_check(((struct sType*)(__right_value605=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 943, 27)),come_value_681->type,come_value_681,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional14=(((struct sType*)come_null_check(((struct sType*)(__right_value606=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 945, 28))&&((struct sType*)come_null_check(((struct sType*)(__right_value607=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 945, 29))->mHeap&&come_value_681->type->mHeap)),                    come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value607,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional14) {
                        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value608=list$1sTypephp_operator_load_element(param_types_577,i_612))), "20method.c", 946, 30)),come_value_681->type,come_value_681,info,(_Bool)1);
                        come_call_finalizer3(__right_value608,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEph_replace(come_params_581,i_612,(struct CVALUE*)come_increment_ref_count(come_value_681));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_675,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_679) { node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional15=(((struct CVALUE*)(__right_value609=list$1CVALUEphp_operator_load_element(come_params_581,i_612)))==((void*)0))),                    come_call_finalizer3(__right_value609,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional15) {
                        err_msg(info,"require parametor(%s) %d",fun_558->mName,i_612);
                        __result380__ = (_Bool)0;
                        default_param_673 = come_decrement_ref_count2(default_param_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result380__;
                    }
                }
                default_param_673 = come_decrement_ref_count2(default_param_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        method_block_457) {
            if(            !compile_method_block(method_block_457,(struct list$1CVALUEph*)come_increment_ref_count(come_params_581),fun_558,fun_name_454,method_block_sline_458,info,(_Bool)0)) {
                __result381__ = (_Bool)0;
                generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result381__;
            }
        }
        buf_682=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 966, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_682,generics_fun_name_557);
        buffer_append_str(buf_682,"(");
        j_683=0;
        for(        o2_saved_684=(struct list$1CVALUEph*)come_increment_ref_count((come_params_581)),it_685=list$1CVALUEph_begin((o2_saved_684));        !list$1CVALUEph_end((o2_saved_684));        it_685=list$1CVALUEph_next((o2_saved_684))        ){
            buffer_append_str(buf_682,it_685->c_value);
            if(            j_683!=list$1CVALUEph_length(come_params_581)-1) {
                buffer_append_str(buf_682,",");
            }
            j_683++;
        }
        come_call_finalizer3(o2_saved_684,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_682,")");
        come_value2_686=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 985, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj211=come_value2_686->c_value;
        come_value2_686->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_682));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_value2_686->var=((void*)0);
        if(        result_type2_576->mClass->mProtocol&&string_operator_equals(result_type2_576->mClass->mName,"object")&&result_type2_576->mNoRefference) {
            generics_num_687=result_type_575->mGenericsNumBefore;
            if(            obj_type_465->mNoSolvedGenericsType&&obj_type_465->mNoSolvedGenericsType->v1) {
                refference_type_688=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(obj_type_465->mNoSolvedGenericsType->v1->mGenericsTypes,generics_num_687));
                if(                refference_type_688&&refference_type_688->mRefferenceOriginalType) {
                    __dec_obj212=refference_type_688;
                    refference_type_688=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, refference_type_688->mRefferenceOriginalType->v1));
                    come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
                    static int i_689=0;
                    i_689++;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value619=make_define_var(result_type_575,((char*)(__right_value618=xsprintf("__tmp_inf\%s",((char*)(__right_value617=int_to_string(i_689)))))),(_Bool)0,info))));
                    __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj213=come_value2_686->c_value;
                    come_value2_686->c_value=(char*)come_increment_ref_count(xsprintf("((__tmp_inf\%s=\%s),((\%s)(__tmp_inf\%s ? __tmp_inf\%s->_protocol_obj:(void*)0)))",((char*)(__right_value620=int_to_string(i_689))),((char*)(__right_value621=string_to_string(come_value2_686->c_value))),((char*)(__right_value623=string_to_string(((char*)(__right_value622=make_type_name_string(refference_type_688,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))))),((char*)(__right_value624=int_to_string(i_689))),((char*)(__right_value625=int_to_string(i_689)))));
                    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj214=result_type2_576;
                    result_type2_576=(struct sType*)come_increment_ref_count(refference_type_688);
                    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj215=result_type2_576->mRefferenceOriginalType;
                    result_type2_576->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(__right_value627=list$1sTypephp_operator_load_element(obj_type_465->mNoSolvedGenericsType->v1->mGenericsTypes,generics_num_687))), "20method.c", 1008, 31))->mRefferenceOriginalType);
                    come_call_finalizer3(__dec_obj215,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value627,sType_finalize, 0, 1, 0, 0, (void*)0);
                    result_type2_576->mHeap=result_type_575->mHeap;
                }
                come_call_finalizer3(refference_type_688,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            __dec_obj216=come_value2_686->type;
            come_value2_686->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_576));
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_686->type->mStatic=(_Bool)0;
        }
        else {
            __dec_obj217=come_value2_686->type;
            come_value2_686->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_576));
            come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_686->type->mStatic=(_Bool)0;
            if(            result_type2_576->mHeap) {
                append_object_to_right_values2(come_value2_686,(struct sType*)come_increment_ref_count(result_type2_576),info,(_Bool)0);
            }
        }
        __dec_obj218=come_value2_686->c_value;
        come_value2_686->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_686->c_value,come_value2_686->type,info));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value2_686->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_686));
        if(        is_contained_method_generics_types(obj_type_465,info)&&generics_fun_name_557) {
            map$2charphsFunph_remove(info->funcs,generics_fun_name_557);
        }
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj219=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_462);
        come_call_finalizer3(__dec_obj219,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_558;
        generics_fun_name_557 = come_decrement_ref_count2(generics_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_682,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_686,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result382__ = (_Bool)1;
    fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_455,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(obj_456) { obj_456 = come_decrement_ref_count2(obj_456, ((struct sNode*)obj_456)->finalize, ((struct sNode*)obj_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(method_block_457,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result382__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result307__;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_446;
struct list_item$1tuple2$2charphsNodephph* it_447;
void* __right_value380 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result312__;
    if(    self==((void*)0)) {
        __result307__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    result_446=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1220, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_447=self->head;
    while(it_447!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodephp_clone, it_447->item)));
        it_447=it_447->next;
    }
    __result312__ = gComeFunResultObject = __result_obj__ = result_446;
    come_call_finalizer3(result_446,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result308__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_444;
struct list_item$1tuple2$2charphsNodephph* prev_it_445;
    it_444=self->head;
    while(it_444!=((void*)0)) {
        prev_it_445=it_444;
        it_444=it_444->next;
        come_call_finalizer3(prev_it_445,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsNodephph* litem_448;
struct tuple2$2charphsNodeph* __dec_obj149;
void* __right_value375 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_449;
struct tuple2$2charphsNodeph* __dec_obj150;
void* __right_value376 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_450;
struct tuple2$2charphsNodeph* __dec_obj151;
struct list$1tuple2$2charphsNodephph* __result309__;
    if(    self->len==0) {
        litem_448=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value374=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1234, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_448->prev=((void*)0);
        litem_448->next=((void*)0);
        __dec_obj149=litem_448->item;
        litem_448->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj149,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_448;
        self->head=litem_448;
    }
    else if(    self->len==1) {
        litem_449=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value375=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1244, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_449->prev=self->head;
        litem_449->next=((void*)0);
        __dec_obj150=litem_449->item;
        litem_449->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj150,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_449;
        self->head->next=litem_449;
    }
    else {
        litem_450=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value376=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1254, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_450->prev=self->tail;
        litem_450->next=((void*)0);
        __dec_obj151=litem_450->item;
        litem_450->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj151,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_450;
        self->tail=litem_450;
    }
    self->len++;
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result310__;
void* __right_value377 = (void*)0;
struct tuple2$2charphsNodeph* result_451;
void* __right_value378 = (void*)0;
char* __dec_obj152;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj153;
struct tuple2$2charphsNodeph* __result311__;
    if(    self==(void*)0) {
        __result310__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    result_451=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj152=result_451->v1;
        result_451->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj153=result_451->v2;
        result_451->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result311__ = gComeFunResultObject = __result_obj__ = result_451;
    come_call_finalizer3(result_451,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
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
struct list_item$1tuple2$2charphsNodephph* it_452;
struct list_item$1tuple2$2charphsNodephph* prev_it_453;
    it_452=self->head;
    while(it_452!=((void*)0)) {
        prev_it_453=it_452;
        it_452=it_452->next;
        come_call_finalizer3(prev_it_453,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1CVALUEph* __result316__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_478;
int i_479;
struct CVALUE* __result318__;
struct CVALUE* default_value_480;
struct CVALUE* __result319__;
default_value_480 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_478=self->head;
    i_479=0;
    while(it_478!=((void*)0)) {
        if(        position==i_479) {
            __result318__ = gComeFunResultObject = __result_obj__ = it_478->item;
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
        it_478=it_478->next;
        i_479++;
    }
    memset(&default_value_480,0,sizeof(struct CVALUE*));
    __result319__ = gComeFunResultObject = __result_obj__ = default_value_480;
    come_call_finalizer3(default_value_480,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_486;
int i_487;
struct sType* default_value_488;
struct list$1sTypeph* __result321__;
struct list_item$1sTypeph* it_492;
int i_493;
struct sType* __dec_obj171;
struct list$1sTypeph* __result322__;
default_value_488 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_486=self->len;
        for(        i_487=0;        i_487<position-len_486;        i_487++        ){
            memset(&default_value_488,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_488));
            come_call_finalizer3(default_value_488,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result321__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    it_492=self->head;
    i_493=0;
    while(it_492!=((void*)0)) {
        if(        position==i_493) {
            __dec_obj171=it_492->item;
            it_492->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_492=it_492->next;
        i_493++;
    }
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
struct list_item$1sTypeph* litem_489;
struct sType* __dec_obj168;
void* __right_value405 = (void*)0;
struct list_item$1sTypeph* litem_490;
struct sType* __dec_obj169;
void* __right_value406 = (void*)0;
struct list_item$1sTypeph* litem_491;
struct sType* __dec_obj170;
struct list$1sTypeph* __result320__;
    if(    self->len==0) {
        litem_489=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value404=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1304, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_489->prev=((void*)0);
        litem_489->next=((void*)0);
        __dec_obj168=litem_489->item;
        litem_489->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_489;
        self->head=litem_489;
    }
    else if(    self->len==1) {
        litem_490=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value405=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1314, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_490->prev=self->head;
        litem_490->next=((void*)0);
        __dec_obj169=litem_490->item;
        litem_490->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_490;
        self->head->next=litem_490;
    }
    else {
        litem_491=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value406=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1324, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_491->prev=self->tail;
        litem_491->next=((void*)0);
        __dec_obj170=litem_491->item;
        litem_491->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_491;
        self->tail=litem_491;
    }
    self->len++;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_501;
struct tuple2$2charphsNodeph* __result323__;
struct tuple2$2charphsNodeph* __result324__;
struct tuple2$2charphsNodeph* result_502;
struct tuple2$2charphsNodeph* __result325__;
result_501 = (void*)0;
result_502 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_501,0,sizeof(struct tuple2$2charphsNodeph*));
        __result323__ = gComeFunResultObject = __result_obj__ = result_501;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    self->it=self->head;
    if(    self->it) {
        __result324__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    memset(&result_502,0,sizeof(struct tuple2$2charphsNodeph*));
    __result325__ = gComeFunResultObject = __result_obj__ = result_502;
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_504;
struct tuple2$2charphsNodeph* __result326__;
struct tuple2$2charphsNodeph* __result327__;
struct tuple2$2charphsNodeph* result_505;
struct tuple2$2charphsNodeph* __result328__;
result_504 = (void*)0;
result_505 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_504,0,sizeof(struct tuple2$2charphsNodeph*));
        __result326__ = gComeFunResultObject = __result_obj__ = result_504;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result327__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    memset(&result_505,0,sizeof(struct tuple2$2charphsNodeph*));
    __result328__ = gComeFunResultObject = __result_obj__ = result_505;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_531;
struct tuple2$2charphsTypeph* __result331__;
struct tuple2$2charphsTypeph* __result332__;
struct tuple2$2charphsTypeph* result_532;
struct tuple2$2charphsTypeph* __result333__;
result_531 = (void*)0;
result_532 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_531,0,sizeof(struct tuple2$2charphsTypeph*));
        __result331__ = gComeFunResultObject = __result_obj__ = result_531;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    self->it=self->head;
    if(    self->it) {
        __result332__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    memset(&result_532,0,sizeof(struct tuple2$2charphsTypeph*));
    __result333__ = gComeFunResultObject = __result_obj__ = result_532;
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_534;
struct tuple2$2charphsTypeph* __result334__;
struct tuple2$2charphsTypeph* __result335__;
struct tuple2$2charphsTypeph* result_535;
struct tuple2$2charphsTypeph* __result336__;
result_534 = (void*)0;
result_535 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_534,0,sizeof(struct tuple2$2charphsTypeph*));
        __result334__ = gComeFunResultObject = __result_obj__ = result_534;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result335__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    memset(&result_535,0,sizeof(struct tuple2$2charphsTypeph*));
    __result336__ = gComeFunResultObject = __result_obj__ = result_535;
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_550;
struct CVALUE* __result338__;
struct CVALUE* __result339__;
struct CVALUE* result_551;
struct CVALUE* __result340__;
result_550 = (void*)0;
result_551 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_550,0,sizeof(struct CVALUE*));
        __result338__ = gComeFunResultObject = __result_obj__ = result_550;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    self->it=self->head;
    if(    self->it) {
        __result339__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    memset(&result_551,0,sizeof(struct CVALUE*));
    __result340__ = gComeFunResultObject = __result_obj__ = result_551;
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_553;
struct CVALUE* __result341__;
struct CVALUE* __result342__;
struct CVALUE* result_554;
struct CVALUE* __result343__;
result_553 = (void*)0;
result_554 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_553,0,sizeof(struct CVALUE*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_553;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_554,0,sizeof(struct CVALUE*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_554;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_564;
unsigned int hash_565;
unsigned int it_566;
struct sFun* __result344__;
struct sFun* __result345__;
struct sFun* __result346__;
struct sFun* __result347__;
default_value_564 = (void*)0;
    memset(&default_value_564,0,sizeof(struct sFun*));
    hash_565=charp_get_hash_key(((char*)key))%self->size;
    it_566=hash_565;
    while((_Bool)1) {
        if(        self->item_existance[it_566]) {
            if(            charp_equals(self->keys[it_566],key)) {
                __result344__ = gComeFunResultObject = __result_obj__ = self->items[it_566];
                come_call_finalizer3(default_value_564,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result344__;
            }
            it_566++;
            if(            it_566>=self->size) {
                it_566=0;
            }
            else if(            it_566==hash_565) {
                __result345__ = gComeFunResultObject = __result_obj__ = default_value_564;
                come_call_finalizer3(default_value_564,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result345__;
            }
        }
        else {
            __result346__ = gComeFunResultObject = __result_obj__ = default_value_564;
            come_call_finalizer3(default_value_564,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result346__;
        }
    }
    __result347__ = gComeFunResultObject = __result_obj__ = default_value_564;
    come_call_finalizer3(default_value_564,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
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
struct list_item$1CVALUEph* litem_583;
struct CVALUE* __dec_obj190;
void* __right_value489 = (void*)0;
struct list_item$1CVALUEph* litem_584;
struct CVALUE* __dec_obj191;
void* __right_value490 = (void*)0;
struct list_item$1CVALUEph* litem_585;
struct CVALUE* __dec_obj192;
struct list$1CVALUEph* __result352__;
    if(    self->len==0) {
        litem_583=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value488=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1234, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_583->prev=((void*)0);
        litem_583->next=((void*)0);
        __dec_obj190=litem_583->item;
        litem_583->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_583;
        self->head=litem_583;
    }
    else if(    self->len==1) {
        litem_584=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value489=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1244, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_584->prev=self->head;
        litem_584->next=((void*)0);
        __dec_obj191=litem_584->item;
        litem_584->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_584;
        self->head->next=litem_584;
    }
    else {
        litem_585=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value490=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1254, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_585->prev=self->tail;
        litem_585->next=((void*)0);
        __dec_obj192=litem_585->item;
        litem_585->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_585;
        self->tail=litem_585;
    }
    self->len++;
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_593;
char* __result353__;
char* __result354__;
char* result_594;
char* __result355__;
result_593 = (void*)0;
result_594 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_593,0,sizeof(char*));
        __result353__ = gComeFunResultObject = __result_obj__ = result_593;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    self->it=self->head;
    if(    self->it) {
        __result354__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    memset(&result_594,0,sizeof(char*));
    __result355__ = gComeFunResultObject = __result_obj__ = result_594;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_596;
char* __result356__;
char* __result357__;
char* result_597;
char* __result358__;
result_596 = (void*)0;
result_597 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_596,0,sizeof(char*));
        __result356__ = gComeFunResultObject = __result_obj__ = result_596;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result357__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    memset(&result_597,0,sizeof(char*));
    __result358__ = gComeFunResultObject = __result_obj__ = result_597;
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_607;
int i_608;
struct CVALUE* default_value_609;
struct list$1CVALUEph* __result363__;
struct list_item$1CVALUEph* it_610;
int i_611;
struct CVALUE* __dec_obj193;
struct list$1CVALUEph* __result364__;
default_value_609 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_607=self->len;
        for(        i_608=0;        i_608<position-len_607;        i_608++        ){
            memset(&default_value_609,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_609));
            come_call_finalizer3(default_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result363__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    it_610=self->head;
    i_611=0;
    while(it_610!=((void*)0)) {
        if(        position==i_611) {
            __dec_obj193=it_610->item;
            it_610->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_610=it_610->next;
        i_611++;
    }
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_617;
int i_618;
char* __result365__;
char* default_value_619;
char* __result366__;
default_value_619 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_617=self->head;
    i_618=0;
    while(it_617!=((void*)0)) {
        if(        position==i_618) {
            __result365__ = gComeFunResultObject = __result_obj__ = it_617->item;
            gComeFunResultObject = (void*)0;
            return __result365__;
        }
        it_617=it_617->next;
        i_618++;
    }
    memset(&default_value_619,0,sizeof(char*));
    __result366__ = gComeFunResultObject = __result_obj__ = default_value_619;
    default_value_619 = come_decrement_ref_count2(default_value_619, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_634;
struct sNode* __result371__;
struct sNode* __result372__;
struct sNode* result_635;
struct sNode* __result373__;
result_634 = (void*)0;
result_635 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_634,0,sizeof(struct sNode*));
        __result371__ = gComeFunResultObject = __result_obj__ = result_634;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    self->it=self->head;
    if(    self->it) {
        __result372__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    memset(&result_635,0,sizeof(struct sNode*));
    __result373__ = gComeFunResultObject = __result_obj__ = result_635;
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_637;
struct sNode* __result374__;
struct sNode* __result375__;
struct sNode* result_638;
struct sNode* __result376__;
result_637 = (void*)0;
result_638 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_637,0,sizeof(struct sNode*));
        __result374__ = gComeFunResultObject = __result_obj__ = result_637;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result375__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    memset(&result_638,0,sizeof(struct sNode*));
    __result376__ = gComeFunResultObject = __result_obj__ = result_638;
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value544 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_642;
struct tuple2$2charphsNodeph* __dec_obj196;
void* __right_value545 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_643;
struct tuple2$2charphsNodeph* __dec_obj197;
void* __right_value546 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_644;
struct tuple2$2charphsNodeph* __dec_obj198;
struct list$1tuple2$2charphsNodephph* __result377__;
    if(    self->len==0) {
        litem_642=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value544=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1304, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_642->prev=((void*)0);
        litem_642->next=((void*)0);
        __dec_obj196=litem_642->item;
        litem_642->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj196,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_642;
        self->head=litem_642;
    }
    else if(    self->len==1) {
        litem_643=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value545=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1314, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_643->prev=self->head;
        litem_643->next=((void*)0);
        __dec_obj197=litem_643->item;
        litem_643->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj197,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_643;
        self->head->next=litem_643;
    }
    else {
        litem_644=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value546=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1324, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_644->prev=self->tail;
        litem_644->next=((void*)0);
        __dec_obj198=litem_644->item;
        litem_644->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj198,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_644;
        self->tail=litem_644;
    }
    self->len++;
    __result377__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj199;
struct tuple2$2charphvoidp* __result378__;
    __dec_obj199=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result378__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
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
struct sNode* node_690;
void* __right_value641 = (void*)0;
struct sNode* __dec_obj226;
struct sNode* __result385__;
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
    node_690=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value632,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj226=node_690;
    node_690=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_690),info));
    if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
    __result385__ = gComeFunResultObject = __result_obj__ = node_690;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_690) { node_690 = come_decrement_ref_count2(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result383__;
void* __right_value633 = (void*)0;
struct sMethodCallNode* result_691;
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
struct sMethodCallNode* __result384__;
    if(    self==(void*)0) {
        __result383__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    result_691=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_691->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj220=result_691->sname;
        result_691->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_691->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj221=result_691->obj;
        result_691->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj222=result_691->fun_name;
        result_691->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj223=result_691->params;
        result_691->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj223,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj224=result_691->method_block;
        result_691->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_691->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj225=result_691->method_generics_types;
        result_691->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj225,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_691->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_691->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_691->fun=self->fun;
    }
    __result384__ = gComeFunResultObject = __result_obj__ = result_691;
    come_call_finalizer3(result_691,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_692;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
_Bool parse_method_generics_type_693;
char* p_694;
int sline_695;
void* __right_value647 = (void*)0;
char* word_696;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1sTypeph* method_generics_types_697;
void* __right_value650 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_698=0;
char* name_699=0;
_Bool err_700=0;
void* __right_value651 = (void*)0;
char* p_701;
int sline_702;
_Bool err_flag_703;
void* __right_value652 = (void*)0;
char* label_704;
void* __right_value653 = (void*)0;
char* __dec_obj231;
char* __dec_obj232;
_Bool no_comma_705;
_Bool in_fun_param_706;
void* __right_value654 = (void*)0;
struct sNode* node_707;
void* __right_value655 = (void*)0;
struct sNode* __dec_obj233;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct buffer* method_block_708;
int method_block_sline_709;
char* head_710;
void* __right_value658 = (void*)0;
char* tail_711;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct buffer* __dec_obj234;
int len_712;
void* __right_value661 = (void*)0;
char* mem_713;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value665 = (void*)0;
struct sNode* node_714;
void* __right_value666 = (void*)0;
struct sNode* __dec_obj235;
struct sNode* __result387__;
    params_692=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 1056, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephph_push_back(params_692,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1057, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_693=(_Bool)0;
    {
        p_694=info->p;
        sline_695=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_696=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_696,info)) {
                    parse_method_generics_type_693=(_Bool)1;
                }
                word_696 = come_decrement_ref_count2(word_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_694;
        info->sline=sline_695;
    }
    method_generics_types_697=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 1087, "struct list$1sTypeph*", (void*)0, (void*)0))));
    if(    parse_method_generics_type_693&&*info->p==60) {
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
                type_698=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_699=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_700=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value650,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_700) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_697,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_698)));
                come_call_finalizer3(type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_699 = come_decrement_ref_count2(name_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            p_701=info->p;
            sline_702=info->sline;
            err_flag_703=(_Bool)0;
            label_704=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj231=label_704;
                label_704=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_703=(_Bool)1;
            }
            if(            err_flag_703==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj232=label_704;
                label_704=((void*)0);
                __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_701;
                info->sline=sline_702;
            }
            no_comma_705=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_706=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_707=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj233=node_707;
            node_707=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_707),info));
            if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_706;
            info->no_comma=no_comma_705;
            list$1tuple2$2charphsNodephph_push_back(params_692,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1163, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(label_704),(struct sNode*)come_increment_ref_count(node_707))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_704 = come_decrement_ref_count2(label_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_704 = come_decrement_ref_count2(label_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_708=((void*)0);
    method_block_sline_709=0;
    if(    *info->p==123) {
        head_710=info->p;
        method_block_sline_709=info->sline;
        ((char*)(__right_value658=skip_block(info)));
        __right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_711=info->p;
        __dec_obj234=method_block_708;
        method_block_708=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1187, "struct buffer*", (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj234,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_712=tail_711-head_710;
        mem_713=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_712+1)), "20method.c", 1190, "char*", (void*)0, (void*)0));
        memcpy(mem_713,head_710,len_712);
        mem_713[len_712]=0;
        buffer_append_str(method_block_708,mem_713);
        buffer_append_str(method_block_708,"\n");
        mem_713 = come_decrement_ref_count2(mem_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1202, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value664=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1202, "struct sMethodCallNode*", (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_692),method_block_708,method_block_sline_709,method_generics_types_697,(_Bool)0,(_Bool)1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    node_714=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value664,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj235=node_714;
    node_714=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_714),info));
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result387__ = gComeFunResultObject = __result_obj__ = node_714;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_692,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_697,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_708,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_714) { node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj227;
struct sNode* __dec_obj228;
struct tuple2$2charphsNodeph* __result386__;
    __dec_obj227=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj228=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
    __result386__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result386__;
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
struct sNode* __result388__;
void* __right_value670 = (void*)0;
struct sNode* __result389__;
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
        __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value669=_inf_value4));
        come_call_finalizer3(__right_value668,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value669) { __right_value669 = come_decrement_ref_count2(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value670=string_node_v17(buf,head,head_sline,info)));
    if(__right_value670) { __right_value670 = come_decrement_ref_count2(__right_value670, ((struct sNode*)__right_value670)->finalize, ((struct sNode*)__right_value670)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result389__;
}

